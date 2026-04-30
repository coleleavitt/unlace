//! Dead-code elimination pass.
//!
//! Removes instructions whose SSA output has zero uses across the function,
//! provided the instruction has no observable side effects.  A single call
//! to [`DeadCodeElimPass::run`] performs one sweep; the caller iterates to
//! a fixed point for cascading removal.

use std::collections::BTreeSet;

use unlace_ir::IrOp;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};

use crate::pass::{Pass, PassError};

/// Returns `true` if `op` may have observable side effects and must not
/// be removed even when its output is unused.
const fn is_side_effecting(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Return
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Load
    )
}

/// Dead-code elimination: remove instructions whose output has no uses.
///
/// **Preserved (never removed):**
/// STORE, CALL, CALLIND, RETURN, BRANCH, CBRANCH, BRANCHIND, NEW,
/// CALLOTHER, CPOOLREF, INDIRECT, and LOAD (may be volatile / mapped I/O).
///
/// **Phi nodes** (MULTIEQUAL) are left untouched in this MVP pass.
///
/// A single invocation performs one linear sweep.  Cascading dead code
/// (an instruction used only by a now-removed instruction) is handled by
/// the fixed-point runner calling this pass again.
pub struct DeadCodeElimPass;

impl Pass for DeadCodeElimPass {
    fn name(&self) -> &str {
        "dce"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut used: BTreeSet<SsaVarnode> = BTreeSet::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                for input_idx in 0..insn.inputs.len() {
                    if let Some(&sv) = func
                        .var_map
                        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
                    {
                        used.insert(sv);
                    }
                }
            }
        }

        for phis in func.phi_map.values() {
            for phi in phis {
                for &(_pred, sv) in &phi.inputs {
                    used.insert(sv);
                }
            }
        }

        let mut changed = false;

        for (&bid, block) in &mut func.function.blocks {
            let mut keep = Vec::with_capacity(block.insns.len());

            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if is_side_effecting(insn.op) {
                    keep.push(insn_idx);
                    continue;
                }

                let output_sv = func
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Output));

                let is_dead = match output_sv {
                    Some(sv) => !used.contains(sv),
                    None => true,
                };

                if is_dead {
                    changed = true;
                } else {
                    keep.push(insn_idx);
                }
            }

            if keep.len() == block.insns.len() {
                continue;
            }

            let old_insns = std::mem::take(&mut block.insns);
            block.insns = Vec::with_capacity(keep.len());

            // Compact kept instructions and re-key their var_map entries.
            for (new_idx, &old_idx) in keep.iter().enumerate() {
                block.insns.push(old_insns[old_idx].clone());

                if new_idx != old_idx {
                    if let Some(sv) = func
                        .var_map
                        .remove(&(bid, old_idx, VarnodeSlot::Output))
                    {
                        func.var_map
                            .insert((bid, new_idx, VarnodeSlot::Output), sv);
                    }

                    let input_count = block.insns.last()
                        .ok_or_else(|| PassError::InvariantViolation {
                            message: "block has no instructions after compaction".into(),
                        })?
                        .inputs.len();
                    for i in 0..input_count {
                        if let Some(sv) = func
                            .var_map
                            .remove(&(bid, old_idx, VarnodeSlot::Input(i)))
                        {
                            func.var_map
                                .insert((bid, new_idx, VarnodeSlot::Input(i)), sv);
                        }
                    }
                }
            }

            // Purge stale var_map entries beyond the new instruction count.
            let new_len = block.insns.len();
            let stale_keys: Vec<_> = func
                .var_map
                .range((bid, new_len, VarnodeSlot::Output)..)
                .take_while(|&(&(b, _, _), _)| b == bid)
                .map(|(k, _)| k.clone())
                .collect();
            for key in stale_keys {
                func.var_map.remove(&key);
            }
        }

        Ok(changed)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};
    use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot, PhiNode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: std::collections::BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
        phi_map: std::collections::BTreeMap<BlockId, Vec<PhiNode>>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks non-empty").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }

        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = build_trivial_dom(&cfg);

        SsaFunction { function: func, cfg, dom_tree, phi_map, var_map, var_types: std::collections::BTreeMap::new(), calling_convention: unlace_ir::ssa::CallingConvention::Unknown, stack_vars: std::collections::BTreeMap::new(), foldable_exprs: std::collections::BTreeSet::new() }
    }

    fn build_trivial_dom(
        cfg: &unlace_ir::cfg::ControlFlowGraph,
    ) -> unlace_ir::ssa::DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        use std::collections::BTreeMap;

        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry block in cfg");
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

        for cl in children.values_mut() {
            cl.sort();
        }

        unlace_ir::ssa::DominatorTree::new(idom, children, entry)
    }

    fn sv(offset: u64, version: u32) -> SsaVarnode {
        SsaVarnode { base: Varnode::reg(offset, 8), version }
    }

    #[test]
    fn test_dce_remove_unused_add() {
        let v1 = sv(0, 0);
        let v2 = sv(8, 0);
        let v3 = sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3.base,
            smallvec![v1.base, v2.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let mut var_map = std::collections::BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), v2);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v3);

        let mut ssa = make_ssa(
            vec![bb],
            var_map,
            std::collections::BTreeMap::new(),
        );

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "should have removed the dead INT_ADD");
        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns.len(), 1, "only RETURN should remain");
        assert_eq!(insns[0].op, IrOp::Return);
    }

    #[test]
    fn test_dce_preserve_store() {
        let v1 = sv(0, 0);
        let v2 = sv(8, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![v1.base, v2.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let mut var_map = std::collections::BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), v2);

        let mut ssa = make_ssa(
            vec![bb],
            var_map,
            std::collections::BTreeMap::new(),
        );

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "STORE must not be removed");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 2);
    }

    #[test]
    fn test_dce_preserve_call() {
        let v1 = sv(0, 0);
        let v3 = sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Call,
            v3.base,
            smallvec![v1.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let mut var_map = std::collections::BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v3);

        let mut ssa = make_ssa(
            vec![bb],
            var_map,
            std::collections::BTreeMap::new(),
        );

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "CALL must not be removed even when output is unused");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 2);
    }

    #[test]
    fn test_dce_cascade() {
        let v1 = sv(0, 0);
        let v2 = sv(8, 0);
        let v3 = sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v2.base,
            smallvec![v1.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3.base,
            smallvec![v2.base, v2.base],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1008,
        ));

        let mut var_map = std::collections::BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v2);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), v2);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), v2);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), v3);

        let mut ssa = make_ssa(
            vec![bb],
            var_map,
            std::collections::BTreeMap::new(),
        );

        let pass = DeadCodeElimPass;

        let changed1 = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed1, "pass 1 should remove INT_ADD");
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].insns.len(),
            2,
            "COPY + RETURN after pass 1"
        );

        let changed2 = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed2, "pass 2 should remove COPY (cascade)");
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].insns.len(),
            1,
            "only RETURN after pass 2"
        );
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns[0].op, IrOp::Return);

        let changed3 = pass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed3, "pass 3 should be a no-op (fixed point)");
    }
}
