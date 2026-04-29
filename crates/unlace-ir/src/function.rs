//! Function-level IR container.

use std::collections::BTreeMap;

use crate::{BasicBlock, BlockId};

/// An IR function: a named collection of basic blocks with a designated entry.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Function {
    pub name: String,
    pub entry: BlockId,
    /// Blocks keyed by [`BlockId`], iterated in deterministic (sorted) order.
    pub blocks: BTreeMap<BlockId, BasicBlock>,
    /// Machine address of the function entry point.
    pub addr: u64,
}

impl Function {
    /// Create a new function with the given name and entry address.
    pub fn new(name: impl Into<String>, entry: BlockId, addr: u64) -> Self {
        Self {
            name: name.into(),
            entry,
            blocks: BTreeMap::new(),
            addr,
        }
    }

    /// Insert a block into the function.
    pub fn insert_block(&mut self, block: BasicBlock) {
        self.blocks.insert(block.id, block);
    }
}
