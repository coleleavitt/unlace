//! Tail duplication for switch reconstruction.
//!
//! When the lifter materialises a switch as N case-blocks each branching
//! to a small shared "exit cleanup" tail, that tail blocks the
//! reconstruction of the switch (the join hides per-arm constants). This
//! pass duplicates the tail into each predecessor when:
//!
//! - the tail has ≤ 5 instructions (cheap to copy);
//! - the tail has ≥ 3 predecessors (worth specialising);
//! - duplication keeps the function within a configured IR-growth cap
//!   (`MAX_GROWTH_FRAC` * total instructions).
//!
//! Each predecessor whose terminator was an unconditional Branch into the
//! tail gets its own private copy as a new block; the predecessor's edge
//! is rewritten. Duplicates that turn out to be equivalent will be
//! re-merged by [`CsePass`](crate::cse::CsePass) downstream — wiring this
//! pass *before* CSE is intentional.
//!
//! The tail must contain no PHI nodes (we do not currently splice phi
//! operands when deleting an incoming edge); SSA must be re-built after
//! this pass for SSA-aware passes downstream.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp};

use crate::pass::{Pass, PassError};

const MAX_TAIL_INSNS: usize = 5;
const MIN_PREDECESSORS: usize = 3;
const MAX_GROWTH_FRAC: f64 = 0.10;

pub struct TailDuplicationPass;

impl Pass for TailDuplicationPass {
    fn name(&self) -> &str {
        "tail-duplication"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let total_insns: usize = func
            .function
            .blocks
            .values()
            .map(|b| b.insns.len())
            .sum();
        // 10% of IR, but at least enough room for one duplication of a
        // maximally-sized tail; otherwise small functions never get the
        // chance to specialise their switch tails.
        let budget = (((total_insns as f64) * MAX_GROWTH_FRAC).floor() as usize)
            .max(MAX_TAIL_INSNS * (MIN_PREDECESSORS - 1));

        let candidates = collect_candidates(func);
        if candidates.is_empty() {
            return Ok(false);
        }

        let mut spent = 0usize;
        let mut changed = false;
        let mut next_block_id = func
            .function
            .blocks
            .keys()
            .map(|b| b.0)
            .max()
            .unwrap_or(0)
            + 1;

        for tail_id in candidates {
            let tail_insns_len = func
                .function
                .blocks
                .get(&tail_id)
                .map(|b| b.insns.len())
                .unwrap_or(0);
            if tail_insns_len == 0 {
                continue;
            }

            let preds: Vec<BlockId> = func
                .cfg
                .predecessors(tail_id)
                .into_iter()
                .filter(|p| {
                    *p != func.cfg.exit_block()
                        && *p != func.cfg.unknown_block()
                        && pred_uses_unconditional_branch(func, *p, tail_id)
                })
                .collect();

            if preds.len() < MIN_PREDECESSORS {
                continue;
            }
            let cost = tail_insns_len * (preds.len() - 1);
            if spent + cost > budget {
                continue;
            }
            spent += cost;

            let preds_to_duplicate: Vec<BlockId> = preds.iter().skip(1).copied().collect();
            for pred in preds_to_duplicate {
                let new_id = BlockId(next_block_id);
                next_block_id += 1;

                let tail_block = func.function.blocks.get(&tail_id).cloned();
                let Some(mut new_block) = tail_block else {
                    continue;
                };
                new_block.id = new_id;

                func.function.blocks.insert(new_id, new_block);

                if let Some(pblock) = func.function.blocks.get_mut(&pred) {
                    for s in pblock.successors.iter_mut() {
                        if *s == tail_id {
                            *s = new_id;
                        }
                    }
                }
            }
            changed = true;
        }

        if changed {
            func.cfg = unlace_ir::cfg::build_cfg(&func.function);
        }

        Ok(changed)
    }
}

fn pred_uses_unconditional_branch(
    func: &SsaFunction,
    pred: BlockId,
    tail: BlockId,
) -> bool {
    let block = match func.function.blocks.get(&pred) {
        Some(b) => b,
        None => return false,
    };
    if block.successors.len() != 1 || block.successors[0] != tail {
        return false;
    }
    match block.insns.last().map(|i| i.op) {
        Some(IrOp::Branch) | None => true,
        _ => false,
    }
}

fn collect_candidates(func: &SsaFunction) -> Vec<BlockId> {
    let exit = func.cfg.exit_block();
    let unknown = func.cfg.unknown_block();
    let mut out: Vec<BlockId> = Vec::new();
    for (&bid, block) in &func.function.blocks {
        if bid == exit || bid == unknown {
            continue;
        }
        if block.insns.len() > MAX_TAIL_INSNS {
            continue;
        }
        if let Some(phis) = func.phi_map.get(&bid) {
            if !phis.is_empty() {
                continue;
            }
        }
        let preds = func.cfg.predecessors(bid);
        if preds.len() < MIN_PREDECESSORS {
            continue;
        }
        out.push(bid);
    }
    out.sort_by_key(|b| b.0);
    out
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(blocks: Vec<BasicBlock>) -> SsaFunction {
        let entry = blocks.first().expect("blocks").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = trivial_dom(&cfg);
        SsaFunction {
            function: func,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map: BTreeMap::new(),
            var_map: BTreeMap::new(),
            var_types: BTreeMap::new(),
            calling_convention: CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            stack_offset_hints: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            dwarf_local_names: BTreeMap::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            resolved_indirect_calls: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
        }
    }

    fn trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry");
        let dominators = simple_fast(cfg.inner(), entry_ni);
        let mut idom = BTreeMap::new();
        let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        let entry = cfg.entry_block();
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
        DominatorTree::new(idom, children, entry)
    }

    /// 4-case switch where each case branches into a 2-insn shared tail.
    /// Tail must be duplicated into 3 of the 4 cases (one keeps the
    /// original).
    #[test]
    fn test_switch_tail_duplicated_into_each_case() {
        // Layout:
        //   B0 (dispatch, succ=[1,2,3,4])
        //   B1, B2, B3, B4 (each succ=[5], terminator=Branch)
        //   B5 (tail: 2 insns + return)
        let r0 = Varnode::reg(0, 8);
        let c1 = Varnode::constant(1, 8);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branchind, smallvec![r0], 0x1000));
        b0.successors = smallvec![BlockId(1), BlockId(2), BlockId(3), BlockId(4)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1010));
        b1.successors = smallvec![BlockId(5)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1020));
        b2.successors = smallvec![BlockId(5)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1030));
        b3.successors = smallvec![BlockId(5)];

        let mut b4 = BasicBlock::new(BlockId(4));
        b4.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1040));
        b4.successors = smallvec![BlockId(5)];

        let mut b5 = BasicBlock::new(BlockId(5));
        b5.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r0, c1],
            0x1050,
        ));
        b5.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![r0], 0x1054));

        let mut ssa = make_ssa(vec![b0, b1, b2, b3, b4, b5]);
        let blocks_before = ssa.function.blocks.len();
        let changed = TailDuplicationPass.run(&mut ssa).expect("ok");
        assert!(changed, "tail should have been duplicated");
        let blocks_after = ssa.function.blocks.len();
        assert!(
            blocks_after > blocks_before,
            "expected new blocks; before={blocks_before} after={blocks_after}"
        );
        // 3 of the 4 case-preds should now point to *new* (private) tail
        // blocks, not B5. Exactly one pred still points to B5.
        let still_to_b5 = (1..=4)
            .filter(|i| {
                let succs = &ssa.function.blocks[&BlockId(*i)].successors;
                succs.iter().any(|&s| s == BlockId(5))
            })
            .count();
        assert_eq!(
            still_to_b5, 1,
            "exactly one pred should retain the original tail"
        );
    }
}
