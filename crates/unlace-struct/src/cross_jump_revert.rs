//! CrossJumpRevert pre-structuring pass.
//!
//! Undoes GCC's cross-jump optimization: when two blocks share identical
//! instruction tails and a common successor, the compiler may have merged
//! them, creating irreducible control flow. This pass splits them back.

use std::collections::BTreeMap;

use smallvec::smallvec;

use unlace_ir::cfg::build_cfg;
use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BasicBlock, BlockId, IrInsn, IrOp};

const MIN_SHARED_TAIL: usize = 2;

/// Split blocks whose tails were merged by cross-jump optimization.
///
/// For each pair of blocks sharing a successor with ≥ 2 identical trailing
/// instructions, creates separate tail blocks to restore reducible flow.
pub fn cross_jump_revert(func: &mut SsaFunction) {
    let mut next_block_id = func
        .function
        .blocks
        .keys()
        .last()
        .map_or(0, |bid| bid.0 + 1);

    let block_ids: Vec<BlockId> = func.function.blocks.keys().copied().collect();

    // Group blocks by their successor sets to find pairs sharing a successor.
    let mut successor_groups: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for &bid in &block_ids {
        let block = &func.function.blocks[&bid];
        for succ in &block.successors {
            successor_groups.entry(*succ).or_default().push(bid);
        }
    }

    let mut splits: Vec<(BlockId, BlockId, usize)> = Vec::new();

    for (_succ, preds) in &successor_groups {
        if preds.len() < 2 {
            continue;
        }

        for i in 0..preds.len() {
            for j in (i + 1)..preds.len() {
                let a = preds[i];
                let b = preds[j];

                let shared_len =
                    shared_tail_length(&func.function.blocks[&a], &func.function.blocks[&b]);

                if shared_len >= MIN_SHARED_TAIL {
                    splits.push((a, b, shared_len));
                }
            }
        }
    }

    if splits.is_empty() {
        return;
    }

    for (a_bid, b_bid, tail_len) in splits {
        let Some(a_block) = func.function.blocks.get(&a_bid) else {
            tracing::warn!(?a_bid, "cross_jump_revert: block disappeared mid-pass");
            continue;
        };
        let Some(b_block) = func.function.blocks.get(&b_bid) else {
            tracing::warn!(?b_bid, "cross_jump_revert: block disappeared mid-pass");
            continue;
        };

        if a_block.insns.len() < tail_len || b_block.insns.len() < tail_len {
            continue;
        }

        if a_block.insns.len() == tail_len || b_block.insns.len() == tail_len {
            continue;
        }

        let a_tail_insns: Vec<IrInsn> = a_block.insns[a_block.insns.len() - tail_len..].to_vec();
        let a_succs = a_block.successors.clone();
        let b_succs = b_block.successors.clone();

        let a_tail_id = BlockId(next_block_id);
        next_block_id += 1;
        let b_tail_id = BlockId(next_block_id);
        next_block_id += 1;

        let mut a_tail_block = BasicBlock::new(a_tail_id);
        a_tail_block.insns = a_tail_insns.clone();
        a_tail_block.successors = a_succs;

        let mut b_tail_block = BasicBlock::new(b_tail_id);
        b_tail_block.insns = a_tail_insns;
        b_tail_block.successors = b_succs;

        let Some(a_block) = func.function.blocks.get_mut(&a_bid) else {
            continue;
        };
        a_block.insns.truncate(a_block.insns.len() - tail_len);
        a_block
            .insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0));
        a_block.successors = smallvec![a_tail_id];

        let Some(b_block) = func.function.blocks.get_mut(&b_bid) else {
            continue;
        };
        b_block.insns.truncate(b_block.insns.len() - tail_len);
        b_block
            .insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0));
        b_block.successors = smallvec![b_tail_id];

        func.function.insert_block(a_tail_block);
        func.function.insert_block(b_tail_block);
    }

    func.cfg = build_cfg(&func.function);
}

fn shared_tail_length(a: &BasicBlock, b: &BasicBlock) -> usize {
    let a_insns = &a.insns;
    let b_insns = &b.insns;
    let max_check = a_insns.len().min(b_insns.len());

    let mut count = 0;
    for i in 1..=max_check {
        let a_insn = &a_insns[a_insns.len() - i];
        let b_insn = &b_insns[b_insns.len() - i];

        if !insns_match(a_insn, b_insn) {
            break;
        }
        count += 1;
    }
    count
}

fn insns_match(a: &IrInsn, b: &IrInsn) -> bool {
    a.op == b.op && a.output == b.output && a.inputs == b.inputs
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn arith_insn(output: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::IntAdd, output, smallvec![inputs[0], inputs[1]], addr)
    }

    fn cbranch_insn(cond: Varnode, addr: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            addr,
        )
    }

    #[test]
    fn test_cross_jump_split() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("cross_jump", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x1000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1 and BB2 share identical 3-instruction tails, both branch to BB3.
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c2], 0x1010));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x1014));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x1018));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x101c));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c1], 0x1020));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x1024));
        bb2.insns.push(arith_insn(r0, &[r0, c1], 0x1028));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x102c));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x1030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let blocks_before = ssa.function.blocks.len();

        cross_jump_revert(&mut ssa);

        // Two new tail blocks should have been created.
        assert_eq!(
            ssa.function.blocks.len(),
            blocks_before + 2,
            "two tail blocks should be added"
        );

        // BB1 and BB2 should now be truncated (only 1 original insn + Branch).
        let bb1 = &ssa.function.blocks[&BlockId(1)];
        assert_eq!(bb1.insns.len(), 2, "BB1 should have 1 unique insn + branch");

        let bb2 = &ssa.function.blocks[&BlockId(2)];
        assert_eq!(bb2.insns.len(), 2, "BB2 should have 1 unique insn + branch");

        // The new tail blocks should contain the shared instructions.
        let bb1_tail_id = bb1.successors[0];
        let bb1_tail = &ssa.function.blocks[&bb1_tail_id];
        assert_eq!(
            bb1_tail.insns.len(),
            3,
            "tail block should have 3 shared insns"
        );
    }

    #[test]
    fn test_different_tails_unchanged() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);
        let cond_vn = Varnode::reg(256, 1);

        let mut func = Function::new("diff_tails", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond_vn, 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1 and BB2 have different tails.
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(r0, &[r8, c1], 0x2010));
        bb1.insns.push(arith_insn(r0, &[r0, c1], 0x2014));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2018));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(r0, &[r8, c2], 0x2020));
        bb2.insns.push(arith_insn(r8, &[r0, c2], 0x2024));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2028));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let blocks_before = ssa.function.blocks.len();

        cross_jump_revert(&mut ssa);

        assert_eq!(
            ssa.function.blocks.len(),
            blocks_before,
            "no blocks should be added when tails differ"
        );
    }
}
