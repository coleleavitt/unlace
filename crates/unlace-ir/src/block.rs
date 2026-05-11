//! Basic block and block identifier types.

use smallvec::SmallVec;

use crate::IrInsn;

/// Unique identifier for a basic block within a function.
///
/// IDs are assigned in reverse-post-order so that `BlockId(0)` is always the
/// entry block (IR spec SS2.4).
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, serde::Serialize, serde::Deserialize)]
pub struct BlockId(pub u32);

impl std::fmt::Display for BlockId {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "BB_{}", self.0)
    }
}

/// A basic block: a linear sequence of IR instructions with a single entry
/// and (possibly multiple) successor edges.
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct BasicBlock {
    pub id: BlockId,
    pub insns: Vec<IrInsn>,
    pub successors: SmallVec<[BlockId; 2]>,
}

impl BasicBlock {
    /// Create a new empty basic block.
    pub fn new(id: BlockId) -> Self {
        Self {
            id,
            insns: Vec::new(),
            successors: SmallVec::new(),
        }
    }
}
