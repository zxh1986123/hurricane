#pragma once

#include "hurricane/base/BlockingQueue.h"
#include "hurricane/base/Values.h"

namespace hurricane {
namespace collector {

class TaskItem {
public:
    TaskItem(int taskIndex, const base::Tuple& tuple) :
            _taskIndex(taskIndex), _tuple(tuple) {
    }

    int GetTaskIndex() const {
        return _taskIndex;
    }

    const base::Tuple& GetTuple() const {
        return _tuple;
    }

private:
    int _taskIndex;
    base::Tuple _tuple;
};

class TaskQueue : public base::BlockingQueue<TaskItem*> {
};

}
}
