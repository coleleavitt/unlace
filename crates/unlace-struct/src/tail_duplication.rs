//! Tail duplication pre-pass for small multi-entry blocks.
//!
//! Duplicates blocks with ≤ `MAX_DUP_INSNS` instructions that have multiple
//! predecessors, giving each predecessor its own copy. This eliminates the
//! multi-predecessor condition that the structurer uses to mark `goto_targets`,
//! reducing goto count in the final output.
//!
//! # Motivation
//!
//! The structurer pre-identifies blocks with 2+ real predecessors (that are not
//! loop headers) as goto targets. In deeply nested if/else trees (e.g. GCC
//! constprop output), small join-point blocks at the end of branches trigger
//! this heuristic even though the CFG is reducible. Duplicating these tiny
//! blocks so each predecessor has its own copy removes the multi-entry
//! condition entirely.
//!
//! # Pipeline position
//!
//! Run **after** [`crate::merge_linear_blocks`] and **before**
//! [`crate::split_irreducible_entries`] so that:
//! - Linear chains are already collapsed (no wasted duplication).
//! - The irreducible splitter sees a cleaner CFG with fewer multi-entry points.

use std::collections::BTreeMap;

use smallvec::SmallVec;
use unlace_ir::{BasicBlock, BlockId, Function};

/// Maximum instruction count for a block to be eligible for duplication.
const MAX_DUP_INSNS: usize = 3;

/// Duplicate small multi-predecessor blocks so each predecessor gets its own
/// copy. Returns the number of duplications performed.
///
/// Operates on a raw [`Function`] (pre-SSA). A single pass is sufficient
/// because duplication only adds single-predecessor copies — it never creates
/// new multi-predecessor blocks.
pub fn tail_duplicate_small_blocks(func: &mut Function) -> usize {
    let preds = compute_predecessors(func);
    let entry = func.entry;

    // Collect candidates: blocks with ≤ MAX_DUP_INSNS instructions and ≥ 2
    // predecessors that are not the entry block.
    let candidates: Vec<(BlockId, Vec<BlockId>)> = func
        .blocks
        .iter()
        .filter_map(|(&bid, block)| {
            if bid == entry {
                return None;
            }
            if block.insns.len() > MAX_DUP_INSNS {
                return None;
            }
            let block_preds = preds.get(&bid)?;
            if block_preds.len() < 2 {
                return None;
            }
            Some((bid, block_preds.clone()))
        })
        .collect();

    if candidates.is_empty() {
        return 0;
    }

    let mut next_id = func.blocks.keys().last().map_or(0, |b| b.0 + 1);
    let mut total = 0;

    for (target_bid, target_preds) in &candidates {
        let Some(orig) = func.blocks.get(target_bid) else {
            continue;
        };
        let orig_insns = orig.insns.clone();
        let orig_succs: SmallVec<[BlockId; 2]> = orig.successors.clone();

        // Keep the first predecessor pointing to the original block.
        // Duplicate for all remaining predecessors.
        for &pred_bid in target_preds.iter().skip(1) {
            // Don't duplicate if the predecessor is the target itself (self-loop).
            if pred_bid == *target_bid {
                continue;
            }
            // Don't duplicate if the predecessor was already processed as a
            // candidate (it may have been removed/redirected).
            if !func.blocks.contains_key(&pred_bid) {
                continue;
            }

            let copy_id = BlockId(next_id);
            next_id += 1;

            let mut copy_block = BasicBlock::new(copy_id);
            copy_block.insns = orig_insns.clone();
            copy_block.successors = orig_succs.clone();
            func.insert_block(copy_block);

            redirect_successors(func, pred_bid, *target_bid, copy_id);
            total += 1;
        }
    }

    if total > 0 {
        tracing::trace!(
            func = %func.name,
            duplications = total,
            blocks = func.blocks.len(),
            "tail_duplicate_small_blocks done"
        );
    }

    total
}

/// Compute predecessor map from successor lists.
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

/// Rewrite all successor edges from `src` that point to `from` so they point
/// to `to` instead.
fn redirect_successors(func: &mut Function, src: BlockId, from: BlockId, to: BlockId) {
    let Some(block) = func.blocks.get_mut(&src) else {
        return;
    };
    let new_succs: SmallVec<[BlockId; 2]> = block
        .successors
        .iter()
        .map(|&s| if s == from { to } else { s })
        .collect();
    block.successors = new_succs;
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

    /// Diamond CFG where the join block has ≤3 instructions:
    ///
    ///     BB0 (cbranch)
    ///    /    \
    ///  BB1    BB2
    ///    \    /
    ///     BB3 (small join: 1 insn + return)
    ///
    /// After tail duplication, BB3 should be duplicated so BB1 and BB2 each
    /// get their own copy.
    #[test]
    fn test_diamond_join_duplicated() {
        let mut func = Function::new("diamond", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x1000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith(0x1010));
        bb1.insns.push(branch(0x1014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith(0x1020));
        bb2.insns.push(branch(0x1024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith(0x1030));
        bb3.insns.push(ret(0x1034));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let dups = tail_duplicate_small_blocks(&mut func);
        assert_eq!(dups, 1, "one predecessor should get a copy");

        // BB3 still exists (kept for the first predecessor).
        assert!(func.blocks.contains_key(&BlockId(3)));

        // A copy block should have been created.
        let copy_id = BlockId(4);
        assert!(
            func.blocks.contains_key(&copy_id),
            "copy block BB4 should exist"
        );

        // The copy should have the same instructions as BB3.
        let copy = &func.blocks[&copy_id];
        assert_eq!(copy.insns.len(), 2);
        assert_eq!(copy.insns[0].op, IrOp::IntAdd);
        assert_eq!(copy.insns[1].op, IrOp::Return);

        // One of BB1/BB2 should point to the copy, the other to the original.
        let bb1_succs: Vec<BlockId> = func.blocks[&BlockId(1)]
            .successors
            .iter()
            .copied()
            .collect();
        let bb2_succs: Vec<BlockId> = func.blocks[&BlockId(2)]
            .successors
            .iter()
            .copied()
            .collect();

        let targets: Vec<BlockId> = bb1_succs.iter().chain(bb2_succs.iter()).copied().collect();
        assert!(
            targets.contains(&BlockId(3)) && targets.contains(&copy_id),
            "one pred should target original, other should target copy; got {targets:?}"
        );
    }

    /// A block with > MAX_DUP_INSNS instructions should NOT be duplicated.
    #[test]
    fn test_large_block_not_duplicated() {
        let mut func = Function::new("large_join", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(branch(0x2010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(branch(0x2020));
        bb2.successors = smallvec![BlockId(3)];

        // BB3 has 5 instructions — too large.
        let mut bb3 = BasicBlock::new(BlockId(3));
        for i in 0..5 {
            bb3.insns.push(arith(0x2030 + i * 4));
        }

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let dups = tail_duplicate_small_blocks(&mut func);
        assert_eq!(dups, 0, "large block should not be duplicated");
        assert_eq!(func.blocks.len(), 4);
    }

    /// Entry block should never be duplicated even if it has multiple preds
    /// (e.g. from a back-edge).
    #[test]
    fn test_entry_block_not_duplicated() {
        let mut func = Function::new("entry_loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch(0x3000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(branch(0x3010));
        bb1.successors = smallvec![BlockId(0)]; // back-edge to entry

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ret(0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let dups = tail_duplicate_small_blocks(&mut func);
        assert_eq!(dups, 0, "entry block must not be duplicated");
    }
}
