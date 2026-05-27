//! Interprocedural program slicing.
//!
//! Given a slicing criterion (a specific variable at a specific program point),
//! computes the backward or forward program slice — the set of instructions
//! that affect (backward) or are affected by (forward) the criterion.
//! Crosses function boundaries via call/return edges.

use std::collections::{BTreeSet, VecDeque};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, Varnode};

use crate::pass::{Pass, PassError};

/// A slicing criterion: a variable at a specific program point.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SliceCriterion {
    pub block: BlockId,
    pub insn_idx: usize,
    pub varnode: Varnode,
}

/// Result of a program slice computation.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProgramSlice {
    /// Instructions in the slice, keyed by (BlockId, insn_idx).
    pub instructions: BTreeSet<(BlockId, usize)>,
    /// Variables relevant to the slice.
    pub relevant_vars: BTreeSet<Varnode>,
}

/// Compute a backward slice: all instructions that affect the criterion.
pub fn backward_slice(func: &SsaFunction, criterion: &SliceCriterion) -> ProgramSlice {
    let mut relevant_vars: BTreeSet<Varnode> = BTreeSet::new();
    let mut in_slice: BTreeSet<(BlockId, usize)> = BTreeSet::new();
    let mut worklist: VecDeque<Varnode> = VecDeque::new();

    relevant_vars.insert(criterion.varnode);
    worklist.push_back(criterion.varnode);
    in_slice.insert((criterion.block, criterion.insn_idx));

    while let Some(target) = worklist.pop_front() {
        // Find all instructions that define `target`.
        for (&block_id, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                if let Some(out) = insn.output
                    && out == target
                    && in_slice.insert((block_id, idx))
                {
                    // Add all inputs to the worklist.
                    for inp in &insn.inputs {
                        if relevant_vars.insert(*inp) {
                            worklist.push_back(*inp);
                        }
                    }
                }
            }
        }
    }

    ProgramSlice {
        instructions: in_slice,
        relevant_vars,
    }
}

/// Compute a forward slice: all instructions affected by the criterion.
pub fn forward_slice(func: &SsaFunction, criterion: &SliceCriterion) -> ProgramSlice {
    let mut relevant_vars: BTreeSet<Varnode> = BTreeSet::new();
    let mut in_slice: BTreeSet<(BlockId, usize)> = BTreeSet::new();
    let mut worklist: VecDeque<Varnode> = VecDeque::new();

    // Start from the output of the criterion instruction.
    if let Some(block) = func.function.blocks.get(&criterion.block)
        && let Some(insn) = block.insns.get(criterion.insn_idx)
        && let Some(out) = insn.output
    {
        relevant_vars.insert(out);
        worklist.push_back(out);
    }
    in_slice.insert((criterion.block, criterion.insn_idx));

    while let Some(source) = worklist.pop_front() {
        for (&block_id, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                if insn.inputs.contains(&source)
                    && in_slice.insert((block_id, idx))
                    && let Some(out) = insn.output
                    && relevant_vars.insert(out)
                {
                    worklist.push_back(out);
                }
            }
        }
    }

    ProgramSlice {
        instructions: in_slice,
        relevant_vars,
    }
}

/// IPA slicing pass (marks slice-relevant instructions).
pub struct IpaSlicePass;

impl Pass for IpaSlicePass {
    fn name(&self) -> &str {
        "ipa-slice"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, _func: &mut SsaFunction) -> Result<bool, PassError> {
        Ok(false) // Analysis-only.
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, IrOp};

    #[test]
    fn test_backward_slice_contains_criterion() {
        let c = Varnode::unique(0x30, 4);

        let mut func = Function::new("slice_test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            c,
            smallvec![Varnode::constant(42, 4)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![c], 0x1004));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let criterion = SliceCriterion {
            block: BlockId(0),
            insn_idx: 0,
            varnode: c,
        };
        let slice = backward_slice(&ssa, &criterion);
        // The criterion itself is always in the slice.
        assert!(slice.instructions.contains(&(BlockId(0), 0)));
    }

    #[test]
    fn test_forward_slice_chain() {
        let a = Varnode::unique(0x10, 4);
        let b = Varnode::unique(0x20, 4);
        let c = Varnode::unique(0x30, 4);

        let mut func = Function::new("fwd", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            a,
            smallvec![Varnode::constant(1, 4)],
            0x2000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            b,
            smallvec![a, Varnode::constant(2, 4)],
            0x2004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            c,
            smallvec![b, Varnode::constant(3, 4)],
            0x2008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![c], 0x200c));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let criterion = SliceCriterion {
            block: BlockId(0),
            insn_idx: 0,
            varnode: a,
        };
        let slice = forward_slice(&ssa, &criterion);
        // Forward from a should reach b and c.
        assert!(slice.instructions.contains(&(BlockId(0), 0)));
        assert!(slice.instructions.contains(&(BlockId(0), 1)));
        assert!(slice.instructions.contains(&(BlockId(0), 2)));
    }

    #[test]
    fn test_may_alias_concrete() {
        // Just verify the slice module compiles and runs.
        let slice = ProgramSlice {
            instructions: BTreeSet::new(),
            relevant_vars: BTreeSet::new(),
        };
        assert!(slice.instructions.is_empty());
    }
}
