//! Instruction-combine worklist framework.

use std::collections::BTreeSet;

use unlace_ir::BlockId;

#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct WorkItem {
    pub block: BlockId,
    pub insn_idx: usize,
}

#[derive(Clone, Debug, Default)]
pub struct CombineWorklist {
    pending: BTreeSet<WorkItem>,
}

impl CombineWorklist {
    pub fn push(&mut self, item: WorkItem) {
        self.pending.insert(item);
    }

    pub fn pop(&mut self) -> Option<WorkItem> {
        let item = self.pending.iter().next().copied()?;
        self.pending.remove(&item);
        Some(item)
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::BlockId;

    use super::*;

    #[test]
    fn worklist_deduplicates_items() {
        let mut wl = CombineWorklist::default();
        let item = WorkItem {
            block: BlockId(0),
            insn_idx: 1,
        };
        wl.push(item);
        wl.push(item);
        assert_eq!(wl.pop(), Some(item));
        assert_eq!(wl.pop(), None);
    }
}
