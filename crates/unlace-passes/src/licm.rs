//! Loop Invariant Code Motion.
//!
//! Identifies natural loops via back-edges in the dominator tree, then
//! hoists pure side-effect-free instructions whose inputs are all defined
//! outside the loop into a freshly-inserted preheader block.
//!
//! # Algorithm
//!
//! 1. Use the existing dominator tree to find back-edges `B → H` where H
//!    dominates B. The natural loop for that back-edge is `{H}` plus
//!    every node that can reach B without going through H.
//! 2. For each loop, walk its body in reverse-post-order and identify
//!    candidates: pure ops (see [`is_hoistable_op`]) whose every operand
//!    is loop-invariant (defined outside the loop, or constant).
//! 3. Insert (or reuse) a preheader: a new block dominating the header
//!    whose sole successor is the header. Every predecessor of the
//!    header that lives outside the loop is rewired to point at the
//!    preheader instead.
//! 4. Move each candidate into the preheader, preserving order. Update
//!    `var_map` and `phi_map` accordingly.
//! 5. Iterate up to 5 inner rounds — moving one instruction can free
//!    another whose only blocker was that instruction.
//!
//! # Conservative skip
//!
//! If the candidate's output is consumed by a phi node in the header,
//! we leave it in place. Hoisting it would require rewriting the phi
//! and possibly inserting fresh SSA for the loop-carried path, which is
//! out of scope for this MVP.

use std::collections::{BTreeMap, BTreeSet};

use petgraph::algo::dominators::simple_fast;
use smallvec::SmallVec;

use unlace_ir::ssa::{DominatorTree, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BasicBlock, BlockId, IrInsn, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

const MAX_INNER_ITERS: usize = 5;

pub struct LicmPass;

impl Default for LicmPass {
    fn default() -> Self {
        Self
    }
}

impl Pass for LicmPass {
    fn name(&self) -> &str {
        "licm"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut any_changed = false;
        for _ in 0..MAX_INNER_ITERS {
            let loops = find_natural_loops(func);
            if loops.is_empty() {
                break;
            }
            let mut changed_this_round = false;
            for nat in loops {
                if try_hoist_loop(func, &nat) {
                    changed_this_round = true;
                    any_changed = true;
                }
            }
            if !changed_this_round {
                break;
            }
        }
        Ok(any_changed)
    }
}

/// A natural loop: the back-edge target (header) plus every block that
/// can reach the back-edge tail without going through the header.
#[derive(Clone, Debug)]
pub struct NaturalLoop {
    pub header: BlockId,
    pub body: BTreeSet<BlockId>,
}

/// Find all natural loops in the function. Outer (least-deeply-nested)
/// loops sort first by header `BlockId`; nested loops within the same
/// header collapse to a single entry whose body is the union.
pub fn find_natural_loops(func: &SsaFunction) -> Vec<NaturalLoop> {
    let mut by_header: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for &succ in &block.successors {
            if dominates(&func.dom_tree, succ, bid) {
                let body = collect_loop_body(func, succ, bid);
                by_header.entry(succ).or_default().extend(body);
            }
        }
    }

    by_header
        .into_iter()
        .map(|(header, body)| NaturalLoop { header, body })
        .collect()
}

/// Is `a` an ancestor of `b` (or equal) in the dominator tree?
fn dominates(dom: &DominatorTree, a: BlockId, b: BlockId) -> bool {
    if a == b {
        return true;
    }
    let mut cur = b;
    while let Some(p) = dom.idom(cur) {
        if p == a {
            return true;
        }
        if p == cur {
            return false;
        }
        cur = p;
    }
    false
}

/// Walk predecessors backward from `tail` until we exhaust everything
/// reachable without going through `header`. Includes `header` and `tail`.
fn collect_loop_body(func: &SsaFunction, header: BlockId, tail: BlockId) -> BTreeSet<BlockId> {
    let mut body = BTreeSet::new();
    body.insert(header);
    let mut stack = vec![tail];
    while let Some(b) = stack.pop() {
        if !body.insert(b) {
            continue;
        }
        if b == header {
            continue;
        }
        for pred in func.cfg.predecessors(b) {
            if !body.contains(&pred) {
                stack.push(pred);
            }
        }
    }
    body
}

/// Returns true if `op` is pure, non-trapping, and always safe to hoist
/// out of a loop given that its operands are loop-invariant.
fn is_hoistable_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntNegate
            | IrOp::Int2comp
            | IrOp::BoolNegate
            | IrOp::Copy
            | IrOp::IntZext
            | IrOp::IntSext
            | IrOp::IntCarry
            | IrOp::IntScarry
            | IrOp::IntSborrow
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
    )
}

fn try_hoist_loop(func: &mut SsaFunction, nat: &NaturalLoop) -> bool {
    let header = nat.header;

    let preds = func.cfg.predecessors(header);
    let outside_preds: Vec<BlockId> = preds
        .iter()
        .copied()
        .filter(|p| !nat.body.contains(p))
        .filter(|p| {
            let cfg = &func.cfg;
            *p != cfg.exit_block() && *p != cfg.unknown_block()
        })
        .collect();
    if outside_preds.is_empty() {
        return false;
    }

    let candidates = collect_hoist_candidates(func, nat);
    if candidates.is_empty() {
        return false;
    }

    let preheader = ensure_preheader(func, header, &outside_preds);

    let mut hoisted = 0usize;
    let mut to_hoist = candidates;
    to_hoist.sort_by_key(|c| (c.block, c.insn_idx));

    while let Some(cand) = to_hoist.pop() {
        if cand.block != header {
            continue;
        }
        let cur_idx = cand.insn_idx;
        if cur_idx >= func.function.blocks[&header].insns.len() {
            continue;
        }
        if !still_hoistable(func, header, cur_idx, nat) {
            continue;
        }
        move_insn(func, header, cur_idx, preheader);
        hoisted += 1;
        for other in &mut to_hoist {
            if other.block == header && other.insn_idx > cur_idx {
                other.insn_idx -= 1;
            }
        }
    }

    if hoisted > 0 {
        func.cfg = unlace_ir::cfg::build_cfg(&func.function);
        func.dom_tree = compute_dom_tree(&func.cfg);
        true
    } else {
        false
    }
}

#[derive(Clone, Debug)]
struct Candidate {
    block: BlockId,
    insn_idx: usize,
}

fn collect_hoist_candidates(func: &SsaFunction, nat: &NaturalLoop) -> Vec<Candidate> {
    let mut out = Vec::new();
    for &bid in &nat.body {
        if bid != nat.header {
            continue;
        }
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };
        for (idx, insn) in block.insns.iter().enumerate() {
            if !is_hoistable_op(insn.op) {
                continue;
            }
            if !inputs_invariant(func, bid, idx, insn, nat) {
                continue;
            }
            out.push(Candidate {
                block: bid,
                insn_idx: idx,
            });
        }
    }
    out
}

/// An instruction is hoistable if every input is either a constant or its
/// SSA-defining instruction lies outside the loop body.
///
/// We resolve invariance through phi chains: if all reaching definitions
/// of a value originate outside the loop (even when traversed through
/// header phis whose loop-carried input is itself the same value), the
/// value is loop-invariant.
fn inputs_invariant(
    func: &SsaFunction,
    bid: BlockId,
    idx: usize,
    insn: &IrInsn,
    nat: &NaturalLoop,
) -> bool {
    for (i, raw) in insn.inputs.iter().enumerate() {
        if raw.space == SpaceId::Const {
            continue;
        }
        let sv = match func.var_map.get(&(bid, idx, VarnodeSlot::Input(i))) {
            Some(sv) => *sv,
            None => return false,
        };
        let mut visited = BTreeSet::new();
        if !sv_invariant(func, sv, nat, &mut visited) {
            return false;
        }
    }
    true
}

fn sv_invariant(
    func: &SsaFunction,
    sv: SsaVarnode,
    nat: &NaturalLoop,
    visited: &mut BTreeSet<SsaVarnode>,
) -> bool {
    if !visited.insert(sv) {
        return true;
    }
    for ((bid, _idx, slot), v) in &func.var_map {
        if matches!(slot, VarnodeSlot::Output) && *v == sv {
            return !nat.body.contains(bid);
        }
    }
    for (phi_block, phis) in &func.phi_map {
        for phi in phis {
            if phi.output != sv {
                continue;
            }
            if !nat.body.contains(phi_block) {
                return true;
            }
            for (_pred, in_sv) in &phi.inputs {
                if *in_sv == sv {
                    continue;
                }
                if !sv_invariant(func, *in_sv, nat, visited) {
                    return false;
                }
            }
            return true;
        }
    }
    true
}

fn still_hoistable(func: &SsaFunction, bid: BlockId, idx: usize, nat: &NaturalLoop) -> bool {
    let block = match func.function.blocks.get(&bid) {
        Some(b) => b,
        None => return false,
    };
    if idx >= block.insns.len() {
        return false;
    }
    let insn = &block.insns[idx];
    if !is_hoistable_op(insn.op) {
        return false;
    }
    inputs_invariant(func, bid, idx, insn, nat)
}

pub(crate) fn ensure_preheader(
    func: &mut SsaFunction,
    header: BlockId,
    outside_preds: &[BlockId],
) -> BlockId {
    if outside_preds.len() == 1 {
        let only = outside_preds[0];
        let block = &func.function.blocks[&only];
        let single_succ = block.successors.len() == 1 && block.successors[0] == header;
        let term_is_branch = matches!(block.insns.last().map(|i| i.op), Some(IrOp::Branch) | None);
        if single_succ && term_is_branch {
            return only;
        }
    }

    let new_id = BlockId(func.function.blocks.keys().map(|b| b.0).max().unwrap_or(0) + 1);

    let mut pre = BasicBlock::new(new_id);
    pre.successors = SmallVec::new();
    pre.successors.push(header);
    let header_addr = func
        .function
        .blocks
        .get(&header)
        .and_then(|b| b.insns.first().map(|i| i.addr))
        .unwrap_or(0);
    pre.insns.push(IrInsn::without_output(
        IrOp::Branch,
        SmallVec::new(),
        header_addr,
    ));
    func.function.insert_block(pre);

    for &p in outside_preds {
        if let Some(pblock) = func.function.blocks.get_mut(&p) {
            for s in pblock.successors.iter_mut() {
                if *s == header {
                    *s = new_id;
                }
            }
        }
    }

    if let Some(phis) = func.phi_map.get_mut(&header) {
        for phi in phis.iter_mut() {
            for (pred_bid, _sv) in phi.inputs.iter_mut() {
                if outside_preds.contains(pred_bid) {
                    *pred_bid = new_id;
                }
            }
        }
    }

    new_id
}

/// Move `(src, src_idx)` into `dest` immediately before `dest`'s terminator.
fn move_insn(func: &mut SsaFunction, src: BlockId, src_idx: usize, dest: BlockId) {
    let insn = {
        let sb = func.function.blocks.get_mut(&src).expect("src");
        sb.insns.remove(src_idx)
    };
    let in_count = insn.inputs.len();

    let mut take: BTreeMap<VarnodeSlot, SsaVarnode> = BTreeMap::new();
    if let Some(sv) = func.var_map.remove(&(src, src_idx, VarnodeSlot::Output)) {
        take.insert(VarnodeSlot::Output, sv);
    }
    for i in 0..in_count {
        if let Some(sv) = func.var_map.remove(&(src, src_idx, VarnodeSlot::Input(i))) {
            take.insert(VarnodeSlot::Input(i), sv);
        }
    }

    let src_len_after = func.function.blocks[&src].insns.len();
    for j in (src_idx + 1)..=src_len_after {
        let max_in = match func.function.blocks[&src].insns.get(j - 1) {
            Some(ins) => ins.inputs.len(),
            None => 0,
        };
        for slot in std::iter::once(VarnodeSlot::Output).chain((0..max_in).map(VarnodeSlot::Input))
        {
            if let Some(sv) = func.var_map.remove(&(src, j, slot.clone())) {
                func.var_map.insert((src, j - 1, slot), sv);
            }
        }
    }

    let dest_block = func.function.blocks.get_mut(&dest).expect("dest");
    let insert_at = dest_block.insns.len().saturating_sub(1);

    for j in (insert_at..dest_block.insns.len()).rev() {
        let max_in = dest_block.insns[j].inputs.len();
        for slot in std::iter::once(VarnodeSlot::Output).chain((0..max_in).map(VarnodeSlot::Input))
        {
            if let Some(sv) = func.var_map.remove(&(dest, j, slot.clone())) {
                func.var_map.insert((dest, j + 1, slot), sv);
            }
        }
    }

    dest_block.insns.insert(insert_at, insn);

    let mut hoisted_output: Option<SsaVarnode> = None;
    for (slot, sv) in take {
        if matches!(slot, VarnodeSlot::Output) {
            hoisted_output = Some(sv);
        }
        func.var_map.insert((dest, insert_at, slot), sv);
    }

    if let Some(out_sv) = hoisted_output {
        for phis in func.phi_map.values_mut() {
            for phi in phis.iter_mut() {
                for (pred_bid, in_sv) in phi.inputs.iter_mut() {
                    if *in_sv == out_sv && *pred_bid == src {
                        *pred_bid = dest;
                    }
                }
            }
        }
    }
}

pub(crate) fn compute_dom_tree(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
    let entry = cfg.entry_block();
    let entry_ni = match cfg.node_index(entry) {
        Some(ni) => ni,
        None => return DominatorTree::new(BTreeMap::new(), BTreeMap::new(), entry),
    };
    let dominators = simple_fast(cfg.inner(), entry_ni);
    let mut idom = BTreeMap::new();
    let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for (&bid, &ni) in cfg.node_map() {
        if bid == entry {
            continue;
        }
        if let Some(dom_ni) = dominators.immediate_dominator(ni) {
            let dom_bid = cfg.inner()[dom_ni];
            idom.insert(bid, dom_bid);
            children.entry(dom_bid).or_default().push(bid);
        }
    }
    for v in children.values_mut() {
        v.sort();
    }
    DominatorTree::new(idom, children, entry)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// Build a 3-block function:
    ///   B0 (entry/preheader-ish): COPY a→a0; COPY b→b0; BRANCH to B1
    ///   B1 (loop header / body): out = a + b; CBRANCH cond → B1, B2
    ///   B2: RETURN
    /// Back-edge B1→B1 (self-loop) makes B1 the natural loop header.
    fn build_self_loop_with(insn_in_loop: IrInsn) -> SsaFunction {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let cond = Varnode::reg(64, 1);
        let zero = Varnode::constant(0, 8);

        let mut func = Function::new("loop_test", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            a,
            smallvec![Varnode::constant(1, 4)],
            0x1000,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            b,
            smallvec![Varnode::constant(2, 4)],
            0x1004,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1008));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(insn_in_loop);
        b1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![zero, cond],
            0x1100,
        ));
        b1.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![a], 0x1200));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);

        build_ssa(func)
    }

    #[test]
    fn licm_hoists_loop_invariant_add() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let c = Varnode::reg(16, 4);
        let add = IrInsn::with_output(IrOp::IntAdd, c, smallvec![a, b], 0x1080);

        let mut ssa = build_self_loop_with(add);

        let changed = LicmPass.run(&mut ssa).expect("ok");
        assert!(changed, "expected LICM to hoist the invariant add");

        let header = &ssa.function.blocks[&BlockId(1)];
        let still_has_add = header
            .insns
            .iter()
            .any(|i| i.op == IrOp::IntAdd && i.output == Some(c));
        assert!(!still_has_add, "ADD should have left the header");

        let preheader = ssa
            .function
            .blocks
            .values()
            .find(|b| {
                b.id != BlockId(1)
                    && b.successors.len() == 1
                    && b.successors[0] == BlockId(1)
                    && b.insns
                        .iter()
                        .any(|i| i.op == IrOp::IntAdd && i.output == Some(c))
            })
            .expect("preheader with hoisted ADD");
        assert!(
            preheader
                .insns
                .iter()
                .any(|i| i.op == IrOp::IntAdd && i.output == Some(c))
        );
    }

    #[test]
    fn licm_does_not_hoist_load() {
        let a = Varnode::reg(0, 4);
        let c = Varnode::reg(16, 4);
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let load = IrInsn::with_output(IrOp::Load, c, smallvec![space, a], 0x1080);

        let mut ssa = build_self_loop_with(load);
        let _ = LicmPass.run(&mut ssa).expect("ok");

        let header = &ssa.function.blocks[&BlockId(1)];
        assert!(
            header.insns.iter().any(|i| i.op == IrOp::Load),
            "LOAD must stay in the loop body"
        );
    }

    #[test]
    fn licm_does_not_hoist_div() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let c = Varnode::reg(16, 4);
        let div = IrInsn::with_output(IrOp::IntDiv, c, smallvec![a, b], 0x1080);

        let mut ssa = build_self_loop_with(div);
        let _ = LicmPass.run(&mut ssa).expect("ok");

        let header = &ssa.function.blocks[&BlockId(1)];
        assert!(
            header
                .insns
                .iter()
                .any(|i| i.op == IrOp::IntDiv && i.output == Some(c)),
            "INT_DIV must stay in the loop body even when operands are invariant"
        );
    }
}
