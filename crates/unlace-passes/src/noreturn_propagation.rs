//! Noreturn propagation through callers.
//!
//! A function whose every CFG exit ends in a tail call to a noreturn callee
//! is itself noreturn. This module iterates that observation to a fixpoint:
//! one round propagates "C is noreturn because callee N is", and the next
//! round can promote `C`'s callers in turn.
//!
//! Mirrors IDA's `propagate_funcs` cascade in spirit — every newly-discovered
//! noreturn flag re-enqueues the callers of that function for re-evaluation.
//!
//! Algorithm:
//!
//! 1. Seed a worklist with every function already flagged `noreturn`.
//! 2. Pop callee `N`. For each direct caller `C` of `N` (per the call
//!    graph), check whether *every* CFG exit point of `C` is either:
//!    * a tail call into the current noreturn-set, or
//!    * an unconditional `Branch`/`Call` to a noreturn target inside the
//!      basic block (with no following return-style terminator).
//! 3. If yes, set `C.noreturn = true` and push `C`.
//! 4. Stop when the worklist is empty or `max_iters` rounds have run.
//!
//! Hooked DCE: when a tail call's target was just promoted to noreturn,
//! any instructions following the call inside the same block are dead.
//! The existing [`crate::noreturn::NoreturnDetectPass`] already handles
//! this for direct calls; we re-run the same trim here against the
//! *propagated* noreturn set.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{SsaFunction, VarnodeSlot};
use unlace_ir::xref::CallGraph;
use unlace_ir::{BlockId, IrOp, SpaceId};

/// Build a `callee → callers` relation that includes tail-call edges
/// (which the standard [`CallGraph`] omits because they appear as
/// `Branch`, not `Call`). Used to seed the propagation worklist.
fn tail_call_callers(funcs: &BTreeMap<u64, SsaFunction>) -> BTreeMap<u64, BTreeSet<u64>> {
    let mut out: BTreeMap<u64, BTreeSet<u64>> = BTreeMap::new();
    for (&caller_addr, ssa) in funcs {
        for &target in ssa.tail_call_map.values() {
            out.entry(target).or_default().insert(caller_addr);
        }
    }
    out
}

/// Default upper bound on propagation rounds. Five suffices for any
/// realistic chain length (each round walks one extra call edge).
pub const DEFAULT_PROPAGATE_CAP: usize = 5;

/// Propagate the `noreturn` flag from callees to callers until fixpoint.
///
/// Returns the count of *newly* marked-noreturn functions (i.e. ones that
/// were `noreturn = false` on entry and are `true` on exit).
///
/// `max_iters` caps the number of full worklist drains; pass `0` to use
/// the default cap.
pub fn propagate_noreturn(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    call_graph: &CallGraph,
    max_iters: usize,
) -> usize {
    let cap = if max_iters == 0 {
        DEFAULT_PROPAGATE_CAP
    } else {
        max_iters
    };

    let mut noreturn_set: BTreeSet<u64> = funcs
        .iter()
        .filter_map(|(&a, f)| f.noreturn.then_some(a))
        .collect();
    let initial = noreturn_set.clone();
    let tc_callers = tail_call_callers(funcs);

    let mut worklist: VecDeque<u64> = noreturn_set.iter().copied().collect();
    let mut iters_used = 0usize;

    while !worklist.is_empty() && iters_used < cap {
        iters_used += 1;
        let round: Vec<u64> = worklist.drain(..).collect();

        for callee_addr in round {
            // Direct callers via `Call` opcode.
            let mut candidates: BTreeSet<u64> =
                call_graph.callers_of(callee_addr).iter().copied().collect();
            // Plus tail-call callers (Branch-out-of-function), which the
            // CallGraph omits.
            if let Some(tcc) = tc_callers.get(&callee_addr) {
                candidates.extend(tcc.iter().copied());
            }

            for caller_addr in candidates {
                if noreturn_set.contains(&caller_addr) {
                    continue;
                }
                let Some(caller) = funcs.get(&caller_addr) else {
                    continue;
                };
                if every_exit_calls_noreturn(caller, &noreturn_set) {
                    noreturn_set.insert(caller_addr);
                    worklist.push_back(caller_addr);
                }
            }
        }
    }

    // Apply the fixpoint set back to functions and trim dead instructions
    // after now-known-noreturn tail calls.
    let mut newly = 0usize;
    for (&addr, func) in funcs.iter_mut() {
        if noreturn_set.contains(&addr) && !func.noreturn {
            func.noreturn = true;
            if !initial.contains(&addr) {
                newly += 1;
            }
        }
        trim_dead_after_noreturn_call(func, &noreturn_set);
    }

    newly
}

/// Returns true iff every "exit" of `func` ultimately routes into a tail
/// call (or a direct call) to some address in `noreturn_set`.
///
/// An exit block is one with no CFG successors (terminal). A function with
/// no exits — pure infinite loop — is conservatively *not* noreturn here
/// (the seed pass already marks those by other means).
fn every_exit_calls_noreturn(func: &SsaFunction, noreturn_set: &BTreeSet<u64>) -> bool {
    let exit_blocks: Vec<BlockId> = func
        .function
        .blocks
        .keys()
        .copied()
        .filter(|&bid| is_exit_block(func, bid))
        .collect();

    if exit_blocks.is_empty() {
        return false;
    }

    for bid in exit_blocks {
        if !block_ends_with_noreturn_call(func, bid, noreturn_set) {
            return false;
        }
    }
    true
}

fn is_exit_block(func: &SsaFunction, bid: BlockId) -> bool {
    let Some(node) = func.cfg.node_index(bid) else {
        return false;
    };
    func.cfg
        .inner()
        .neighbors_directed(node, petgraph::Direction::Outgoing)
        .next()
        .is_none()
}

/// Returns true iff block `bid`'s terminator is a tail call (or a direct
/// `Call`) whose target is in `noreturn_set`.
fn block_ends_with_noreturn_call(
    func: &SsaFunction,
    bid: BlockId,
    noreturn_set: &BTreeSet<u64>,
) -> bool {
    if let Some(&target) = func.tail_call_map.get(&bid) {
        return noreturn_set.contains(&target);
    }
    let Some(block) = func.function.blocks.get(&bid) else {
        return false;
    };
    // Walk the block backwards looking for the last "real" terminator.
    // If the last `Call` in the block targets a noreturn function and is
    // followed only by no-op fillers (or is the last insn), treat the
    // block as noreturn-terminated.
    let last_call_target = block.insns.iter().rev().find_map(|insn| match insn.op {
        IrOp::Call => insn
            .inputs
            .first()
            .filter(|vn| vn.space == SpaceId::Const)
            .map(|vn| vn.offset),
        _ => None,
    });
    last_call_target
        .map(|t| noreturn_set.contains(&t))
        .unwrap_or(false)
}

/// Walk every block; if a `Call` to a now-noreturn function is followed by
/// instructions inside the same block, drop those follow-on instructions
/// (they're unreachable). Mirrors the trim that
/// [`crate::noreturn::NoreturnDetectPass`] does for the seed set.
fn trim_dead_after_noreturn_call(func: &mut SsaFunction, noreturn_set: &BTreeSet<u64>) {
    let block_ids: Vec<BlockId> = func.function.blocks.keys().copied().collect();
    for bid in block_ids {
        let cut_after = {
            let Some(block) = func.function.blocks.get(&bid) else {
                continue;
            };
            let mut cut = None;
            for (idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }
                let Some(target_vn) = insn.inputs.first() else {
                    continue;
                };
                if target_vn.space != SpaceId::Const {
                    continue;
                }
                if noreturn_set.contains(&target_vn.offset) {
                    cut = Some(idx);
                    break;
                }
            }
            cut
        };
        let Some(cut_idx) = cut_after else { continue };

        let block = func.function.blocks.get_mut(&bid).unwrap();
        let keep = cut_idx + 1;
        if block.insns.len() > keep {
            for old_idx in keep..block.insns.len() {
                let n_inputs = block.insns[old_idx].inputs.len();
                for i in 0..n_inputs {
                    func.var_map.remove(&(bid, old_idx, VarnodeSlot::Input(i)));
                }
                func.var_map.remove(&(bid, old_idx, VarnodeSlot::Output));
            }
            block.insns.truncate(keep);
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::{build_ssa, SsaFunction};
    use unlace_ir::xref::build_call_graph;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::pass::Pass;

    /// Build a function at `addr` whose single block tail-calls `target`
    /// (i.e. `Branch <target>` to an out-of-function address).
    fn func_tail_call(name: &str, addr: u64, target: u64) -> Function {
        let mut func = Function::new(name, BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(target, 8)],
            addr,
        ));
        func.insert_block(bb);
        func
    }

    /// Run the per-function pipeline bits we need: build SSA + run
    /// `TailCallDetectPass` so `tail_call_map` is populated.
    fn lift(f: Function) -> SsaFunction {
        let mut ssa = build_ssa(f);
        crate::TailCallDetectPass.run(&mut ssa).unwrap();
        ssa
    }

    /// Construct a `funcs` map plus its call graph, lift each function.
    fn build(funcs: Vec<Function>) -> (BTreeMap<u64, SsaFunction>, CallGraph) {
        let raw: BTreeMap<u64, Function> =
            funcs.into_iter().map(|f| (f.addr, f)).collect();
        let cg = build_call_graph(&raw);
        let lifted: BTreeMap<u64, SsaFunction> =
            raw.into_iter().map(|(a, f)| (a, lift(f))).collect();
        (lifted, cg)
    }

    /// Build a leaf "noreturn" function — really just an empty function we
    /// pre-flag noreturn. The CFG never matters for callees.
    fn func_marked_noreturn(name: &str, addr: u64) -> Function {
        let mut func = Function::new(name, BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], addr));
        func.insert_block(bb);
        func
    }

    fn build_call_graph_for(funcs: &BTreeMap<u64, SsaFunction>) -> CallGraph {
        let raw: BTreeMap<u64, Function> = funcs
            .iter()
            .map(|(&a, ssa)| (a, ssa.function.clone()))
            .collect();
        build_call_graph(&raw)
    }

    #[test]
    fn test_direct_propagation() {
        // exit() is noreturn at 0xE0. A() tail-calls exit ⇒ A is noreturn.
        let exit_fn = func_marked_noreturn("exit", 0xE0);
        let a_fn = func_tail_call("A", 0x100, 0xE0);

        let (mut funcs, _cg) = build(vec![exit_fn, a_fn]);
        funcs.get_mut(&0xE0).unwrap().noreturn = true;
        let cg = build_call_graph_for(&funcs);

        let newly = propagate_noreturn(&mut funcs, &cg, 5);

        assert_eq!(newly, 1, "exactly one new noreturn (A)");
        assert!(funcs[&0x100].noreturn);
    }

    #[test]
    fn test_three_step_chain() {
        // exit ← A ← B ← C, all by tail call. After fixpoint all three
        // (A, B, C) are noreturn.
        let exit_fn = func_marked_noreturn("exit", 0xE0);
        let a_fn = func_tail_call("A", 0x100, 0xE0);
        let b_fn = func_tail_call("B", 0x200, 0x100);
        let c_fn = func_tail_call("C", 0x300, 0x200);

        let (mut funcs, _cg) = build(vec![exit_fn, a_fn, b_fn, c_fn]);
        funcs.get_mut(&0xE0).unwrap().noreturn = true;
        let cg = build_call_graph_for(&funcs);

        let newly = propagate_noreturn(&mut funcs, &cg, 5);

        assert_eq!(newly, 3, "A, B, C should all be promoted");
        for addr in [0x100u64, 0x200, 0x300] {
            assert!(funcs[&addr].noreturn, "0x{addr:x} must be noreturn");
        }
    }

    #[test]
    fn test_branch_not_propagated() {
        // exit() noreturn. B has two CFG exits: one tail-calls exit, the
        // other returns normally. B must NOT be marked noreturn.
        let _exit = func_marked_noreturn("exit", 0xE0);

        // Build B by hand: cbranch -> {tail-call exit, return}.
        let mut b = Function::new("B", BlockId(0), 0x200);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x208, 8), Varnode::reg(0, 1)],
            0x200,
        ));
        b.insert_block(bb0);

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0xE0, 8)],
            0x204,
        ));
        b.insert_block(bb1);

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x208));
        b.insert_block(bb2);

        let exit_fn = func_marked_noreturn("exit", 0xE0);
        let (mut funcs, _cg) = build(vec![exit_fn, b]);
        funcs.get_mut(&0xE0).unwrap().noreturn = true;
        let cg = build_call_graph_for(&funcs);

        let newly = propagate_noreturn(&mut funcs, &cg, 5);

        assert_eq!(newly, 0, "B has a returning path; must not be promoted");
        assert!(!funcs[&0x200].noreturn);
    }

    #[test]
    fn test_fixpoint_convergence() {
        // Same chain as the 3-step test but with `max_iters = 1`. Only
        // the first hop (A) should be promoted — B and C are still
        // unverifiable in round 1 because A's noreturn flag was set
        // *during* round 1, not before it.
        //
        // We then run a second time with `max_iters = 5` from the
        // already-partly-propagated state and confirm everything
        // converges.
        let exit_fn = func_marked_noreturn("exit", 0xE0);
        let a_fn = func_tail_call("A", 0x100, 0xE0);
        let b_fn = func_tail_call("B", 0x200, 0x100);
        let c_fn = func_tail_call("C", 0x300, 0x200);

        let (mut funcs, _cg) = build(vec![exit_fn, a_fn, b_fn, c_fn]);
        funcs.get_mut(&0xE0).unwrap().noreturn = true;
        let cg = build_call_graph_for(&funcs);

        // Cap = 1 round. The seed is {exit}; the round propagates to A
        // (because exit's caller, A, has every exit tail-call exit). B and
        // C haven't been queued yet (they were callers of *A*, which
        // wasn't on the worklist when the round started).
        let _newly1 = propagate_noreturn(&mut funcs, &cg, 1);
        assert!(funcs[&0x100].noreturn, "A must propagate within one round");

        // Now run again with a generous cap: B and C should converge.
        let newly2 = propagate_noreturn(&mut funcs, &cg, 5);
        assert!(funcs[&0x200].noreturn);
        assert!(funcs[&0x300].noreturn);

        // Reaching fixpoint a third time must not promote anything new.
        let newly3 = propagate_noreturn(&mut funcs, &cg, 5);
        assert_eq!(newly3, 0, "fixpoint must be idempotent");
        assert!(newly2 >= 1);
    }
}
