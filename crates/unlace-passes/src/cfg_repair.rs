//! Centralized CFG repair and structural verification.
//!
//! This pass is the pipeline checkpoint analogous to GCC's CFG cleanup: it
//! normalizes block successor lists, rebuilds CFG/dominator analyses from the
//! current function body, and runs the structural IR verifier.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::Varnode;
use unlace_ir::ssa::{SsaFunction, VarnodeSlot, rebuild_cfg};
use unlace_ir::verify_ssa_function_pipeline;

use crate::pass::{Pass, PassError, PassPhase};

pub struct CfgRepairPass;

impl Pass for CfgRepairPass {
    fn name(&self) -> &str {
        "cfg-repair"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let known_blocks: BTreeSet<_> = func.function.blocks.keys().copied().collect();
        linkscope::record_items("pass.cfg-repair.blocks", known_blocks.len() as u64);
        let mut changed = false;

        {
            let _span = linkscope::phase("pass.cfg-repair.successors");
            for block in func.function.blocks.values_mut() {
                let before = block.successors.clone();
                let mut seen = BTreeSet::new();
                block
                    .successors
                    .retain(|succ| known_blocks.contains(succ) && seen.insert(*succ));
                changed |= block.successors != before;
            }
        }

        {
            let _span = linkscope::phase("pass.cfg-repair.rebuild-cfg");
            rebuild_cfg(func);
        }
        let pred_map: BTreeMap<_, BTreeSet<_>> = {
            let _span = linkscope::phase("pass.cfg-repair.pred-map");
            known_blocks
                .iter()
                .map(|&bid| (bid, func.cfg.predecessors(bid).into_iter().collect()))
                .collect()
        };

        {
            let _span = linkscope::phase("pass.cfg-repair.phis");
            let mut phi_count = 0u64;
            func.phi_map.retain(|bid, phis| {
                phi_count = phi_count.saturating_add(phis.len() as u64);
                if !known_blocks.contains(bid) {
                    changed = true;
                    return false;
                }

                let Some(preds) = pred_map.get(bid) else {
                    return true;
                };
                for phi in phis.iter_mut() {
                    let before = phi.inputs.len();
                    // Successor lists are deduplicated above (a conditional
                    // branch whose arms collapse to one target leaves one edge),
                    // so phi inputs must be deduplicated per predecessor too —
                    // keep the first input for each block, mirroring the edge
                    // that survived.
                    let mut seen_inputs = BTreeSet::new();
                    phi.inputs.retain(|(input_bid, _)| {
                        known_blocks.contains(input_bid)
                            && preds.contains(input_bid)
                            && seen_inputs.insert(*input_bid)
                    });
                    changed |= phi.inputs.len() != before;
                }
                let before_phis = phis.len();
                phis.retain(|phi| !phi.inputs.is_empty());
                changed |= phis.len() != before_phis;

                // Complete phis for predecessors gained after SSA construction
                // (edge redirection/branch folding does not maintain phi inputs).
                // A version-0 input is the explicit spelling of the historical
                // "no input for this edge" state: undefined/live-in along that
                // path. Appended in ascending block order for determinism.
                for phi in phis.iter_mut() {
                    let have: BTreeSet<_> = phi.inputs.iter().map(|(bid, _)| *bid).collect();
                    for &pred in preds {
                        if !have.contains(&pred) {
                            phi.inputs.push((
                                pred,
                                unlace_ir::ssa::SsaVarnode {
                                    base: phi.output.base,
                                    version: 0,
                                },
                            ));
                            changed = true;
                        }
                    }
                }
                true
            });
            linkscope::record_items("pass.cfg-repair.phis", phi_count);
        }
        {
            let _span = linkscope::phase("pass.cfg-repair.var-map");
            let before_var_map = func.var_map.len();
            func.var_map.retain(|(bid, insn_idx, slot), _| {
                let Some(block) = func.function.blocks.get(bid) else {
                    return false;
                };
                let Some(insn) = block.insns.get(*insn_idx) else {
                    return false;
                };
                match slot {
                    VarnodeSlot::Output => insn.output.is_some(),
                    VarnodeSlot::Input(input_idx) => *input_idx < insn.inputs.len(),
                }
            });
            changed |= func.var_map.len() != before_var_map;
            linkscope::record_items("pass.cfg-repair.var-map", before_var_map as u64);
        }

        // Drop side-table annotations whose (block, insn) keys no longer
        // resolve — passes that delete instructions/blocks do not rewrite
        // every annotation table, and the structural verifier below rejects
        // dangling references.
        {
            let _span = linkscope::phase("pass.cfg-repair.prune-metadata");
            changed |= unlace_ir::prune_dangling_metadata(func);
        }

        let verify_result = {
            let _span = linkscope::phase("pass.cfg-repair.verify");
            verify_ssa_function_pipeline(func)
        };
        if let Err(err) = verify_result {
            if cfg_repair_trace_enabled() {
                trace_duplicate_definitions(func);
            }
            return Err(PassError::InvariantViolation {
                message: format!("{} after cfg-repair: {err}", func.function.name),
            });
        }

        Ok(changed)
    }
}

fn cfg_repair_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CFG_REPAIR_TRACE")
        .or_else(|| std::env::var_os("UNLACE_PIPELINE_TRACE"))
        .and_then(|v| v.into_string().ok())
        .map(|v| {
            let v = v.trim().to_ascii_lowercase();
            !(v.is_empty() || v == "0" || v == "false" || v == "off" || v == "no")
        })
        .unwrap_or(false)
}

fn trace_duplicate_definitions(func: &SsaFunction) {
    use unlace_ir::ssa::VarnodeSlot;

    let mut defs: BTreeMap<_, Vec<String>> = BTreeMap::new();
    for (&bid, phis) in &func.phi_map {
        for phi in phis {
            defs.entry(phi.output)
                .or_default()
                .push(format!("phi block={bid:?} inputs={}", phi.inputs.len()));
        }
    }
    for (&(bid, idx, ref slot), &sv) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        let insn_desc = func
            .function
            .blocks
            .get(&bid)
            .and_then(|block| block.insns.get(idx))
            .map(|insn| {
                format!(
                    "op={:?} raw_out={}",
                    insn.op,
                    insn.output
                        .map(display_varnode)
                        .unwrap_or_else(|| "-".into())
                )
            })
            .unwrap_or_else(|| "missing-insn".into());
        defs.entry(sv)
            .or_default()
            .push(format!("insn block={bid:?} idx={idx} {insn_desc}"));
    }

    for (sv, sites) in defs {
        if sites.len() <= 1 {
            continue;
        }
        eprintln!(
            "[unlace cfg-repair] duplicate-def func={} sv={sv:?} sites={}",
            func.function.name,
            sites.len()
        );
        for site in sites {
            eprintln!("[unlace cfg-repair]   {site}");
        }
    }
}

fn display_varnode(vn: Varnode) -> String {
    format!("{vn:?}")
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::{PhiNode, SsaVarnode, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    #[test]
    fn prunes_stale_and_duplicate_successors() {
        let mut function = Function::new("cfg_repair", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1000));
        b0.successors = smallvec![BlockId(1), BlockId(99), BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        function.insert_block(b0);
        function.insert_block(b1);

        let mut ssa = build_ssa(function);
        let changed = CfgRepairPass.run(&mut ssa).expect("repair should succeed");

        assert!(changed);
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].successors.as_slice(),
            &[BlockId(1)]
        );
        assert!(ssa.cfg.node_index(BlockId(1)).is_some());
    }

    #[test]
    fn prunes_phi_inputs_from_removed_successors() {
        let mut function = Function::new("cfg_repair_phi", BlockId(0), 0x1100);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1100));
        b0.successors = smallvec![BlockId(1), BlockId(99)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1104));
        function.insert_block(b0);
        function.insert_block(b1);

        let mut ssa = build_ssa(function);
        let phi_out = SsaVarnode {
            base: Varnode::unique(0x1100, 4),
            version: 1,
        };
        ssa.phi_map.insert(
            BlockId(1),
            vec![PhiNode {
                output: phi_out,
                inputs: vec![
                    (
                        BlockId(0),
                        SsaVarnode {
                            base: Varnode::reg(0, 4),
                            version: 0,
                        },
                    ),
                    (
                        BlockId(99),
                        SsaVarnode {
                            base: Varnode::reg(0, 4),
                            version: 2,
                        },
                    ),
                ],
            }],
        );

        let changed = CfgRepairPass.run(&mut ssa).expect("repair should succeed");

        assert!(changed);
        let phi = &ssa.phi_map[&BlockId(1)][0];
        assert_eq!(phi.inputs.len(), 1);
        assert_eq!(phi.inputs[0].0, BlockId(0));
    }

    #[test]
    fn prunes_var_map_entries_for_changed_instruction_shape() {
        let mut function = Function::new("cfg_repair_var_map", BlockId(0), 0x1200);
        let out = Varnode::unique(0x1200, 4);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![Varnode::constant(1, 4)],
            0x1200,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1204));
        function.insert_block(b0);

        let mut ssa = build_ssa(function);
        ssa.var_map.insert(
            (BlockId(0), 0, unlace_ir::ssa::VarnodeSlot::Input(1)),
            SsaVarnode {
                base: Varnode::reg(8, 4),
                version: 1,
            },
        );

        let changed = CfgRepairPass.run(&mut ssa).expect("repair should succeed");

        assert!(changed);
        assert!(
            !ssa.var_map
                .contains_key(&(BlockId(0), 0, unlace_ir::ssa::VarnodeSlot::Input(1)))
        );
    }

    #[test]
    fn preserves_conditional_successor_order() {
        let mut function = Function::new("cfg_repair_order", BlockId(0), 0x2000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Cbranch, smallvec![], 0x2000));
        b0.successors = smallvec![BlockId(2), BlockId(1), BlockId(2), BlockId(99)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2004));
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2008));
        function.insert_block(b0);
        function.insert_block(b1);
        function.insert_block(b2);

        let mut ssa = build_ssa(function);
        let changed = CfgRepairPass.run(&mut ssa).expect("repair should succeed");

        assert!(changed);
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].successors.as_slice(),
            &[BlockId(2), BlockId(1)]
        );
        let edges = ssa.cfg.edges_from(BlockId(0));
        assert!(edges.contains(&(BlockId(2), unlace_ir::cfg::EdgeKind::ConditionalTrue)));
        assert!(edges.contains(&(BlockId(1), unlace_ir::cfg::EdgeKind::ConditionalFalse)));
    }
}
