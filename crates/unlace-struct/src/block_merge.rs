//! Single-pred-single-succ block merging.
//!
//! Pre-structuring pass that collapses linear chains of basic blocks into a
//! single block. A block `B` is merged into its predecessor `A` when:
//!
//!   1. `B` has exactly one predecessor in the real (non-synthetic) CFG, namely `A`.
//!   2. `A` has exactly one real successor, namely `B`.
//!   3. `A` is not its own successor (no self-loop).
//!   4. `B` is not the function entry block.
//!   5. `A` is not in `B`'s successor list (would create a spurious self-loop
//!      after merging — typical of back-edges from `B` to `A`).
//!   6. `A`'s last instruction is not a control-flow terminator other than
//!      `BRANCH` (an unconditional jump). Specifically, `CBRANCH`, `BRANCHIND`,
//!      `RETURN`, and call-with-fallthrough cases are NOT merged because
//!      their semantics rely on `A` ending with a terminator.
//!
//! When these conditions hold, `B`'s instructions are appended to `A` after
//! stripping `A`'s trailing `BRANCH` (if any) and `B` is removed from the
//! function. Successors of `A` are replaced with successors of `B`. Any other
//! block that listed `B` as a successor is rewritten to point to `A`
//! (this only happens via `B`'s successor entries, which we never see — the
//! single-predecessor invariant guarantees no other block references `B`).
//!
//! The pass iterates to a fixed point. Each iteration is `O(blocks * edges)`;
//! the fixed point is reached in at most `O(blocks)` iterations.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::{BasicBlock, BlockId, Function, IrOp};

/// Run block-merging to a fixed point on `func`, returning the number of
/// merges performed across all iterations.
pub fn merge_linear_blocks(func: &mut Function) -> usize {
    let max_iters = func.blocks.len().saturating_mul(2).max(64);
    let func_name = func.name.clone();
    let mut total = 0;
    let mut iter = 0;
    loop {
        iter += 1;
        if iter > max_iters {
            tracing::error!(
                func = %func_name,
                blocks = func.blocks.len(),
                max_iters,
                "merge_linear_blocks did not converge"
            );
            panic!(
                "merge_linear_blocks did not converge on '{func_name}' after {max_iters} iters",
            );
        }
        let merges = merge_one_pass(func);
        if merges > 0 {
            tracing::trace!(
                func = %func_name,
                iter,
                merges,
                blocks = func.blocks.len(),
                "merge_linear_blocks iter"
            );
        }
        if merges == 0 {
            return total;
        }
        total += merges;
    }
}

/// One pass of block merging. Returns the number of merges performed.
fn merge_one_pass(func: &mut Function) -> usize {
    let preds = compute_predecessors(func);
    let entry = func.entry;

    let candidates: Vec<(BlockId, BlockId)> = func
        .blocks
        .iter()
        .filter_map(|(&a_id, a_block)| {
            let succ = single_real_successor(a_block)?;
            if succ == a_id {
                return None;
            }
            if succ == entry {
                return None;
            }
            let succ_preds = preds.get(&succ)?;
            if succ_preds.len() != 1 || !succ_preds.contains(&a_id) {
                return None;
            }
            let b_block = func.blocks.get(&succ)?;
            if b_block.successors.iter().any(|s| *s == a_id) {
                return None;
            }
            if !is_mergeable_terminator(a_block) {
                return None;
            }
            Some((a_id, succ))
        })
        .collect();

    let mut merged_into: BTreeSet<BlockId> = BTreeSet::new();
    let mut count = 0;

    for (a_id, b_id) in candidates {
        if merged_into.contains(&a_id) || merged_into.contains(&b_id) {
            continue;
        }
        if perform_merge(func, a_id, b_id) {
            merged_into.insert(a_id);
            merged_into.insert(b_id);
            count += 1;
        }
    }

    count
}

/// Append `B`'s instructions onto `A`, replacing `A`'s successors with `B`'s,
/// and remove `B` from the function. Returns `true` on success.
fn perform_merge(func: &mut Function, a_id: BlockId, b_id: BlockId) -> bool {
    let Some(b_block) = func.blocks.remove(&b_id) else {
        return false;
    };

    let Some(a_block) = func.blocks.get_mut(&a_id) else {
        func.blocks.insert(b_id, b_block);
        return false;
    };

    if matches!(a_block.insns.last().map(|i| i.op), Some(IrOp::Branch)) {
        a_block.insns.pop();
    }

    a_block.insns.extend(b_block.insns);
    a_block.successors = b_block.successors;
    true
}

/// If `block` has exactly one successor in its `successors` list AND its last
/// instruction is a `BRANCH` (or it has no terminator and falls through),
/// return that successor. Otherwise return `None`.
fn single_real_successor(block: &BasicBlock) -> Option<BlockId> {
    if block.successors.len() != 1 {
        return None;
    }
    Some(block.successors[0])
}

/// A predecessor's terminator must be either `BRANCH` (unconditional) or a
/// non-terminator (fallthrough) for merging to be sound. `CBRANCH` /
/// `BRANCHIND` / `RETURN` rely on the terminator marking the end of `A`'s
/// statements.
fn is_mergeable_terminator(block: &BasicBlock) -> bool {
    match block.insns.last().map(|i| i.op) {
        None => true,
        Some(IrOp::Branch) => true,
        Some(IrOp::Cbranch | IrOp::Branchind | IrOp::Return | IrOp::Call | IrOp::Callind) => false,
        Some(_) => true,
    }
}

/// Compute the predecessor map by scanning every block's `successors` list.
fn compute_predecessors(func: &Function) -> BTreeMap<BlockId, Vec<BlockId>> {
    let mut preds: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for (&src, block) in &func.blocks {
        for &dst in &block.successors {
            preds.entry(dst).or_default().push(src);
        }
    }
    for v in preds.values_mut() {
        v.sort();
        v.dedup();
    }
    preds
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn arith(addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::reg(16, 8)],
            addr,
        )
    }

    fn branch(addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Branch, smallvec![], addr)
    }

    fn cbranch(addr: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), Varnode::reg(256, 1)],
            addr,
        )
    }

    fn ret(addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Return, smallvec![], addr)
    }

    /// Linear A → B (single pred, single succ) should merge into a single block.
    #[test]
    fn test_merge_linear_chain() {
        let mut func = Function::new("linear", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x1000));
        bb0.insns.push(branch(0x1004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith(0x1010));
        bb1.insns.push(ret(0x1014));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(merges, 1, "should merge BB1 into BB0");
        assert_eq!(func.blocks.len(), 1, "only one block should remain");
        let merged = func.blocks.get(&BlockId(0)).expect("BB0 still present");
        let opcodes: Vec<IrOp> = merged.insns.iter().map(|i| i.op).collect();
        assert_eq!(
            opcodes,
            vec![IrOp::IntAdd, IrOp::IntAdd, IrOp::Return],
            "the trailing BRANCH must be stripped and BB1's IntAdd+Return appended",
        );
    }

    /// Diamond CFG: A→B, A→C, B→D, C→D. None of A,B,C,D should merge because
    /// D has 2 predecessors and A has 2 successors.
    #[test]
    fn test_no_merge_diamond() {
        let mut func = Function::new("diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x2000));
        bb0.insns.push(cbranch(0x2004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith(0x2010));
        bb1.insns.push(branch(0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith(0x2020));
        bb2.insns.push(branch(0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ret(0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(merges, 0, "diamond CFG: nothing to merge");
        assert_eq!(func.blocks.len(), 4, "all four blocks retained");
    }

    /// A → B → C → D where each has single-pred-single-succ should collapse
    /// to a single block in the fixed-point loop.
    #[test]
    fn test_merge_long_chain_fixed_point() {
        let mut func = Function::new("long_chain", BlockId(0), 0x3000);

        for i in 0..3u32 {
            let mut bb = BasicBlock::new(BlockId(i));
            bb.insns.push(arith(0x3000 + i as u64 * 0x10));
            bb.insns.push(branch(0x3004 + i as u64 * 0x10));
            bb.successors = smallvec![BlockId(i + 1)];
            func.insert_block(bb);
        }

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ret(0x3030));
        func.insert_block(bb3);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(merges, 3, "three pairs collapsed in fixed-point loop");
        assert_eq!(func.blocks.len(), 1, "single block remains");
        let entry = func.blocks.get(&BlockId(0)).expect("BB0");
        assert!(
            entry.insns.iter().any(|i| i.op == IrOp::Return),
            "merged block must end with Return"
        );
    }

    /// A→B with A's terminator being CBRANCH must NOT merge — CBRANCH means
    /// A has multiple successors semantically (the second is implied by the
    /// CFG builder).
    #[test]
    fn test_no_merge_cbranch_terminator() {
        let mut func = Function::new("cbranch_term", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x4000));
        bb0.insns.push(cbranch(0x4004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ret(0x4010));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(merges, 0, "CBRANCH terminator must block merging");
        assert_eq!(func.blocks.len(), 2);
    }

    /// A self-loop (A→A) must not be merged into itself.
    #[test]
    fn test_no_merge_self_loop() {
        let mut func = Function::new("self_loop", BlockId(0), 0x5000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x5000));
        bb0.insns.push(branch(0x5004));
        bb0.successors = smallvec![BlockId(0)];

        func.insert_block(bb0);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(merges, 0, "self-loop must not be merged");
    }

    /// A→B where B has multiple predecessors: must not merge.
    #[test]
    fn test_no_merge_multi_predecessor() {
        let mut func = Function::new("multi_pred", BlockId(0), 0x6000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x6000));
        bb0.insns.push(cbranch(0x6004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(branch(0x6010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(branch(0x6020));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ret(0x6030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(merges, 0, "join block has 2 preds; cannot merge");
    }

    /// Merging must not delete the entry block — even if it's the successor.
    #[test]
    fn test_no_merge_into_entry() {
        let mut func = Function::new("loop_to_entry", BlockId(0), 0x7000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x7000));
        bb0.insns.push(branch(0x7004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith(0x7010));
        bb1.insns.push(branch(0x7014));
        bb1.successors = smallvec![BlockId(0)];

        func.insert_block(bb0);
        func.insert_block(bb1);

        let merges = merge_linear_blocks(&mut func);
        assert_eq!(
            merges, 0,
            "BB1's only successor is the entry block; merging would delete BB0",
        );
    }
}
