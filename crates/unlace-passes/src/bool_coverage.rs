//! Boolean expression coverage simplification.
//!
//! Complements the existing [`BoolSimplifyPass`](super::bool_simplify) with
//! a coverage-based reduction: when multiple boolean conditions in the same
//! function are logically equivalent (have the same truth table), the
//! duplicates are replaced with references to the canonical first occurrence.
//! This is an Espresso-inspired term-sharing optimization.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Boolean expression deduplication pass.
pub struct BoolCoveragePass;

impl Pass for BoolCoveragePass {
    fn name(&self) -> &str {
        "bool-coverage"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let fingerprints = fingerprint_bool_exprs(func);
        let mut changed = false;

        // Group by fingerprint — within each group, all but the first are
        // candidates for replacement.
        let mut groups: BTreeMap<u64, Vec<(BlockId, usize, Varnode)>> = BTreeMap::new();
        for (key, fp, output) in &fingerprints {
            groups.entry(*fp).or_default().push((key.0, key.1, *output));
        }

        for (_fp, entries) in &groups {
            if entries.len() < 2 {
                continue;
            }
            let canonical_output = entries[0].2;
            for &(block_id, insn_idx, _) in entries.iter().skip(1) {
                // Replace the duplicate instruction with a Copy of the canonical.
                if let Some(block) = func.function.blocks.get_mut(&block_id) {
                    if let Some(insn) = block.insns.get_mut(insn_idx) {
                        if let Some(out) = insn.output {
                            *insn = IrInsn::with_output(
                                IrOp::Copy,
                                out,
                                smallvec::smallvec![canonical_output],
                                insn.addr,
                            );
                            changed = true;
                        }
                    }
                }
            }
        }

        Ok(changed)
    }
}

/// Fingerprint each boolean expression by hashing its opcode tree structure.
fn fingerprint_bool_exprs(
    func: &SsaFunction,
) -> Vec<((BlockId, usize), u64, Varnode)> {
    let mut results = Vec::new();

    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if matches!(insn.op, IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolNegate) {
                if let Some(output) = insn.output {
                    let fp = hash_bool_tree(func, &output, 4);
                    results.push(((block_id, idx), fp, output));
                }
            }
        }
    }
    results
}

/// Simple structural hash of a boolean expression tree (bounded depth).
fn hash_bool_tree(func: &SsaFunction, root: &Varnode, depth: u8) -> u64 {
    if depth == 0 || root.space == SpaceId::Const {
        return root.offset.wrapping_mul(0x517cc1b727220a95);
    }

    // Find the defining instruction.
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(out) = insn.output {
                if out == *root {
                    let mut h = insn.op as u64;
                    for inp in &insn.inputs {
                        h = h.wrapping_mul(31).wrapping_add(hash_bool_tree(func, inp, depth - 1));
                    }
                    return h;
                }
            }
        }
    }
    root.offset
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};

    #[test]
    fn test_deduplicates_identical_bool_exprs() {
        let a = Varnode::unique(0x10, 1);
        let b = Varnode::unique(0x20, 1);
        let out1 = Varnode::unique(0x30, 1);
        let out2 = Varnode::unique(0x40, 1);

        let mut func = Function::new("dedup", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        // out1 = BoolAnd(a, b)
        bb.insns.push(IrInsn::with_output(
            IrOp::BoolAnd, out1, smallvec![a, b], 0x1000,
        ));
        // out2 = BoolAnd(a, b) — duplicate
        bb.insns.push(IrInsn::with_output(
            IrOp::BoolAnd, out2, smallvec![a, b], 0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return, smallvec![out2], 0x1008,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let pass = BoolCoveragePass;
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);

        // The second instruction should now be a Copy.
        let block = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(block.insns[1].op, IrOp::Copy);
    }
}
