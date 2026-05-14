#!/bin/bash
set -e
cd /tmp/unlace-batch-tasks

# Helper: start a new task branch
start_task() {
    local branch="$1"
    git checkout --detach origin/master 2>/dev/null
    git checkout -B "$branch" origin/master 2>/dev/null
}

# Helper: commit and push a task
finish_task() {
    local branch="$1"
    local msg="$2"
    git add -A
    git commit -m "$msg"
    git push origin "$branch" --force 2>&1 | tail -3
    git checkout --detach origin/master 2>/dev/null
}

echo "=== Starting batch task implementation ==="
