//! Symbolic heap model for memory access analysis.
//!
//! Maintains a simplified model of heap state to track which memory
//! operations alias. Used by dead-store elimination and pointer analysis
//! to disambiguate memory accesses without a full points-to analysis.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// A symbolic heap region.
#[derive(Debug, Clone, PartialEq, Eq, PartialOrd, Ord)]
pub struct HeapRegion {
    /// Base address (symbolic or concrete).
    pub base: u64,
    /// Size in bytes (0 = unknown).
    pub size: u64,
    /// Allocation site (block, insn_idx) if from a known allocator.
    pub alloc_site: Option<(BlockId, usize)>,
}

/// A memory access tracked by the symbolic heap.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MemAccess {
    pub block: BlockId,
    pub insn_idx: usize,
    pub is_write: bool,
    pub addr: Varnode,
    pub size: u8,
}

/// Symbolic heap analysis pass.
pub struct SymbolicHeapPass;

impl Pass for SymbolicHeapPass {
    fn name(&self) -> &str {
        "symbolic-heap"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let _accesses = collect_mem_accesses(func);
        Ok(false) // Analysis-only pass.
    }
}

/// Collect all memory load/store accesses in a function.
pub fn collect_mem_accesses(func: &SsaFunction) -> Vec<MemAccess> {
    let mut accesses = Vec::new();

    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Load if !insn.inputs.is_empty() => {
                    accesses.push(MemAccess {
                        block: block_id,
                        insn_idx: idx,
                        is_write: false,
                        addr: insn.inputs[0],
                        size: insn.output.map_or(0, |o| o.size),
                    });
                }
                IrOp::Store if insn.inputs.len() >= 2 => {
                    accesses.push(MemAccess {
                        block: block_id,
                        insn_idx: idx,
                        is_write: true,
                        addr: insn.inputs[0],
                        size: insn.inputs[1].size,
                    });
                }
                _ => {}
            }
        }
    }
    accesses
}

/// Check if two memory accesses may alias (conservative).
pub fn may_alias(a: &MemAccess, b: &MemAccess) -> bool {
    if a.addr.space != b.addr.space {
        return false;
    }
    if a.addr.space == SpaceId::Const {
        // Concrete addresses: check overlap.
        let a_end = a.addr.offset + a.size as u64;
        let b_end = b.addr.offset + b.size as u64;
        !(a_end <= b.addr.offset || b_end <= a.addr.offset)
    } else {
        // Symbolic: conservatively assume aliasing.
        true
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    #[test]
    fn test_collects_load_store() {
        let addr1 = Varnode::constant(0x1000, 8);
        let val = Varnode::unique(0x10, 4);
        let loaded = Varnode::unique(0x20, 4);

        let mut func = Function::new("mem", BlockId(0), 0x4000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store, smallvec![addr1, val], 0x4000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load, loaded, smallvec![addr1], 0x4004,
        ));
        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![], 0x4008));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let accesses = collect_mem_accesses(&ssa);
        assert_eq!(accesses.len(), 2);
        assert!(accesses[0].is_write);
        assert!(!accesses[1].is_write);
    }

    #[test]
    fn test_alias_check() {
        let a = MemAccess {
            block: BlockId(0), insn_idx: 0, is_write: true,
            addr: Varnode::constant(0x1000, 8), size: 4,
        };
        let b = MemAccess {
            block: BlockId(0), insn_idx: 1, is_write: false,
            addr: Varnode::constant(0x1002, 8), size: 4,
        };
        let c = MemAccess {
            block: BlockId(0), insn_idx: 2, is_write: false,
            addr: Varnode::constant(0x2000, 8), size: 4,
        };
        assert!(may_alias(&a, &b)); // overlapping
        assert!(!may_alias(&a, &c)); // disjoint
    }
}
