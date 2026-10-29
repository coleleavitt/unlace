//! Dead-code elimination pass.
//!
//! Removes instructions whose SSA output has zero uses across the function,
//! provided the instruction has no observable side effects.  A single call
//! to [`DeadCodeElimPass::run`] performs one sweep; the caller iterates to
//! a fixed point for cascading removal.

use std::collections::BTreeSet;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId};

use crate::pass::{Pass, PassError, compact_var_map_for_moved_insn};

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
/// **Phi nodes** (MULTIEQUAL) are left untouched; [`DeadPhiElimPass`] prunes
/// the unused ones once the IR optimizations have converged.
///
/// A single invocation performs one linear sweep.  Cascading dead code
/// (an instruction used only by a now-removed instruction) is handled by
/// the fixed-point runner calling this pass again.
pub struct DeadCodeElimPass;

impl Pass for DeadCodeElimPass {
    fn name(&self) -> &str {
        "dce"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let trace = tracing::enabled!(target: "unlace::dce", tracing::Level::DEBUG);
        let mut used = insn_uses(func);

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

                let output_sv = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output));

                let mut keep_reason = None;
                let is_dead = match output_sv {
                    Some(sv) => {
                        if used.contains(sv) {
                            keep_reason = Some("exact-use");
                            false
                        } else if let Some(used_sv) = used
                            .iter()
                            .find(|used_sv| register_output_covers_use(sv, used_sv))
                        {
                            if trace {
                                tracing::debug!(
                                    target: "unlace::dce",
                                    "keep block={bid:?} idx={insn_idx} addr=0x{:x} op={:?} output={:?} alias-use={:?}",
                                    insn.addr, insn.op, sv, used_sv
                                );
                            }
                            keep_reason = Some("register-alias-use");
                            false
                        } else {
                            true
                        }
                    }
                    None => true,
                };

                if is_dead {
                    if trace {
                        tracing::debug!(
                            target: "unlace::dce",
                            "drop block={bid:?} idx={insn_idx} addr=0x{:x} op={:?} output={:?}",
                            insn.addr, insn.op, output_sv
                        );
                    }
                    changed = true;
                } else {
                    if trace && keep_reason == Some("exact-use") {
                        tracing::debug!(
                            target: "unlace::dce",
                            "keep block={bid:?} idx={insn_idx} addr=0x{:x} op={:?} output={:?} reason=exact-use",
                            insn.addr, insn.op, output_sv
                        );
                    }
                    keep.push(insn_idx);
                }
            }

            if keep.len() == block.insns.len() {
                continue;
            }

            let block_hints: std::collections::BTreeMap<usize, i64> = func
                .stack_offset_hints
                .iter()
                .filter_map(|(&(hint_bid, hint_idx), &offset)| {
                    (hint_bid == bid).then_some((hint_idx, offset))
                })
                .collect();
            let stale_hint_keys: Vec<_> = block_hints
                .keys()
                .map(|&hint_idx| (bid, hint_idx))
                .collect();
            for key in stale_hint_keys {
                func.stack_offset_hints.remove(&key);
            }

            let block_frame_setup: BTreeSet<usize> = func
                .frame_setup_insns
                .iter()
                .filter_map(|&(setup_bid, setup_idx)| (setup_bid == bid).then_some(setup_idx))
                .collect();
            for setup_idx in &block_frame_setup {
                func.frame_setup_insns.remove(&(bid, *setup_idx));
            }

            let old_insns = std::mem::take(&mut block.insns);
            block.insns = Vec::with_capacity(keep.len());

            // Compact kept instructions and re-key their var_map entries.
            for (new_idx, &old_idx) in keep.iter().enumerate() {
                block.insns.push(old_insns[old_idx].clone());
                if let Some(&offset) = block_hints.get(&old_idx) {
                    func.stack_offset_hints.insert((bid, new_idx), offset);
                }
                if block_frame_setup.contains(&old_idx) {
                    func.frame_setup_insns.insert((bid, new_idx));
                }

                let input_count = block
                    .insns
                    .last()
                    .ok_or_else(|| PassError::InvariantViolation {
                        message: "block has no instructions after compaction".into(),
                    })?
                    .inputs
                    .len();
                compact_var_map_for_moved_insn(
                    &mut func.var_map,
                    bid,
                    old_idx,
                    new_idx,
                    input_count,
                );
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

/// SSA varnodes read by at least one instruction (phi inputs excluded).
fn insn_uses(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut used = BTreeSet::new();
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
    used
}

/// Dead-phi elimination for `Unique` temporaries, run once the IR
/// optimizations have converged.
///
/// SSA construction places phis at every dominance-frontier block without
/// consulting liveness, so a temporary defined on one side of a branch gets a
/// phi at the join even though nothing reads it there. Those phi inputs count
/// as uses of the temporary, which stops the printer from folding it into its
/// single real consumer and leaks a `// temp` declaration.
///
/// The pass is scheduled after the optimization loop on purpose: LICM treats a
/// header phi as a loop-carried use, and pruning earlier lets it hoist stack
/// address arithmetic into preheaders that stack-variable recovery cannot
/// resolve. Each round prunes phis, then sweeps the instructions that only
/// those phis read, which can expose further dead phis.
pub struct DeadPhiElimPass;

impl Pass for DeadPhiElimPass {
    fn name(&self) -> &str {
        "dead-phi-elim"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let trace = tracing::enabled!(target: "unlace::dce", tracing::Level::DEBUG);
        let mut changed = false;
        while remove_dead_unique_phis(func, &insn_uses(func), trace) {
            changed = true;
            if !DeadCodeElimPass.run(func)? {
                break;
            }
        }
        Ok(changed)
    }
}

/// Drops phis over `Unique` temporaries whose output reaches no instruction,
/// directly or through other live phis. Phis are pure, so an unused one can
/// always go; register and stack phis stay because they also carry naming and
/// calling-convention evidance.
fn remove_dead_unique_phis(
    func: &mut SsaFunction,
    insn_uses: &BTreeSet<SsaVarnode>,
    trace: bool,
) -> bool {
    let mut live: BTreeSet<SsaVarnode> = insn_uses.clone();
    let mut worklist: Vec<SsaVarnode> = insn_uses.iter().copied().collect();
    let phi_inputs: std::collections::BTreeMap<SsaVarnode, Vec<SsaVarnode>> = func
        .phi_map
        .values()
        .flatten()
        .map(|phi| (phi.output, phi.inputs.iter().map(|&(_, sv)| sv).collect()))
        .collect();
    for phi in func.phi_map.values().flatten() {
        if phi.output.base.space != SpaceId::Unique && live.insert(phi.output) {
            worklist.push(phi.output);
        }
    }
    while let Some(sv) = worklist.pop() {
        for &input in phi_inputs.get(&sv).into_iter().flatten() {
            if live.insert(input) {
                worklist.push(input);
            }
        }
    }

    let mut changed = false;
    for (bid, phis) in &mut func.phi_map {
        phis.retain(|phi| {
            let keep = live.contains(&phi.output);
            if !keep {
                if trace {
                    tracing::debug!(
                        target: "unlace::dce",
                        "drop-phi block={bid:?} output={:?}",
                        phi.output
                    );
                }
                changed = true;
            }
            keep
        });
    }
    func.phi_map.retain(|_, phis| !phis.is_empty());
    changed
}

fn register_output_covers_use(output: &SsaVarnode, used: &SsaVarnode) -> bool {
    if output.base.space != SpaceId::Register || used.base.space != SpaceId::Register {
        return false;
    }
    let out_start = output.base.offset;
    let out_end = out_start.saturating_add(output.base.size as u64);
    let use_start = used.base.offset;
    let use_end = use_start.saturating_add(used.base.size as u64);
    out_start < use_end && use_start < out_end
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarMap, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: VarMap,
        phi_map: std::collections::BTreeMap<BlockId, Vec<PhiNode>>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks non-empty").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }

        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = build_trivial_dom(&cfg);

        SsaFunction {
            function: func,
            arch: unlace_ir::ArchId::Unknown(0),
            os_abi: unlace_ir::OsAbi::Unknown,
            maturity: unlace_ir::ssa::Maturity::Zero,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map,
            var_map,
            var_types: std::collections::BTreeMap::new(),
            calling_convention: unlace_ir::ssa::CallingConvention::Unknown,
            stack_vars: std::collections::BTreeMap::new(),
            foldable_exprs: std::collections::BTreeSet::new(),
            noreturn: false,
            tail_call_map: std::collections::BTreeMap::new(),
            merged_names: std::collections::BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: std::collections::BTreeMap::new(),
            go_defer_sites: Vec::new(),
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: std::collections::BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            lvars: Vec::new(),
            rust_async: None,
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: BTreeSet::new(),
            variadic: None,
            inferred_stack_params: BTreeSet::new(),
            data_items: unlace_ir::mem_object::DataItems::default(),
            object_types: Default::default(),
            vtable_calls: std::collections::BTreeMap::new(),
            cpp_vtable_calls: std::collections::BTreeMap::new(),
            objc_dispatch_calls: std::collections::BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: unlace_ir::ssa::PrimitiveType::Unknown,
            frame_setup_insns: std::collections::BTreeSet::new(),
            stack_offset_hints: std::collections::BTreeMap::new(),
            dwarf_local_names: std::collections::BTreeMap::new(),
            dwarf_aggregate_offsets: std::collections::BTreeSet::new(),
            pending_dwarf_locals: Vec::new(),
            inferred_structs: std::collections::BTreeMap::new(),
            composite_var_types: std::collections::BTreeMap::new(),
            array_strides: std::collections::BTreeMap::new(),
            external_signatures: std::collections::BTreeMap::new(),
            eh_landing_pads: std::collections::BTreeSet::new(),
            eh_landing_pad_catches: std::collections::BTreeMap::new(),
            eh_cleanup_landing_pads: std::collections::BTreeSet::new(),
            stack_gaps: std::collections::BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: std::collections::BTreeMap::new(),
            stack_holes: std::collections::BTreeMap::new(),
            dynamic_sp: false,
            block_entry_sp_delta: std::collections::BTreeMap::new(),
            frame_holes: Vec::new(),
            saved_register_slots: std::collections::BTreeSet::new(),
            sizeof_type_map: std::collections::BTreeMap::new(),
            alignof_type_map: std::collections::BTreeMap::new(),
            resolved_indirect_calls: std::collections::BTreeMap::new(),
            indirect_call_targets: std::collections::BTreeMap::new(),
            variadic_call_types: std::collections::BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            stack_accesses: Vec::new(),
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            libc_sig_annotations: std::collections::BTreeMap::new(),
            array_struct_layouts: std::collections::BTreeMap::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
        }
    }

    fn build_trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> unlace_ir::ssa::DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        use std::collections::BTreeMap;

        let entry_ni = cfg
            .node_index(cfg.entry_block())
            .expect("entry block in cfg");
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
        SsaVarnode {
            base: Varnode::reg(offset, 8),
            version,
        }
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
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), v2);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v3);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

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
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), v2);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "STORE must not be removed");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 2);
    }

    #[test]
    fn test_dce_compacts_stack_offset_hints() {
        let dead = sv(0, 0);
        let addr = sv(8, 0);
        let val = sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            dead.base,
            smallvec![Varnode::constant(1, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::constant(1, 8), addr.base, val.base],
            0x1004,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), dead);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(2)), val);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());
        ssa.stack_offset_hints.insert((BlockId(0), 1), -0x20);
        ssa.frame_setup_insns.insert((BlockId(0), 1));

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "dead copy should be removed");
        assert_eq!(
            ssa.stack_offset_hints.get(&(BlockId(0), 0)).copied(),
            Some(-0x20),
            "hint should move with the surviving STORE"
        );
        assert!(
            !ssa.stack_offset_hints.contains_key(&(BlockId(0), 1)),
            "old hint key should be removed after compaction"
        );
        assert!(
            ssa.frame_setup_insns.contains(&(BlockId(0), 0)),
            "frame setup marker should move with the surviving STORE"
        );
        assert!(
            !ssa.frame_setup_insns.contains(&(BlockId(0), 1)),
            "old frame setup marker should be removed after compaction"
        );
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
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v3);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(
            !changed,
            "CALL must not be removed even when output is unused"
        );
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
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v2);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), v2);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), v2);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), v3);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

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

    #[test]
    fn test_dce_preserves_register_definition_used_by_subregister_return() {
        let r8d = SsaVarnode {
            base: Varnode::new(SpaceId::Register, 64, 4),
            version: 1,
        };
        let r8b = SsaVarnode {
            base: Varnode::new(SpaceId::Register, 64, 1),
            version: 0,
        };
        let rax = sv(0, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r8d.base,
            smallvec![rax.base, r8d.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![r8b.base],
            0x1004,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), r8d);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), r8b);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

        let changed = DeadCodeElimPass.run(&mut ssa).expect("pass should succeed");

        assert!(
            !changed,
            "a live low-byte return must keep the covering dword definition"
        );
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns[0].op, IrOp::IntAdd);
    }

    #[test]
    fn test_dce_preserves_subregister_definition_used_by_full_register() {
        let ecx = SsaVarnode {
            base: Varnode::new(SpaceId::Register, 8, 4),
            version: 0,
        };
        let rcx = SsaVarnode {
            base: Varnode::new(SpaceId::Register, 8, 8),
            version: 12,
        };
        let rdx = sv(16, 20);
        let sum = sv(24, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ecx.base,
            smallvec![Varnode::constant(0x1234, 4)],
            0x126d,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            sum.base,
            smallvec![rcx.base, rdx.base],
            0x1271,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![sum.base],
            0x1275,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), ecx);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), rcx);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), rdx);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), sum);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), sum);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

        let changed = DeadCodeElimPass.run(&mut ssa).expect("pass should succeed");

        assert!(
            !changed,
            "a live full-register use must keep an overlapping subregister definition"
        );
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns[0].addr, 0x126d);
    }

    #[test]
    fn test_dce_clears_stale_output_when_outputless_insn_moves() {
        let rax = sv(0, 0);
        let zf = SsaVarnode {
            base: Varnode::reg(259, 1),
            version: 0,
        };
        let target = Varnode::constant(0x2000, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            zf.base,
            smallvec![rax.base, Varnode::constant(0, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![target],
            0x1004,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), zf);

        let mut ssa = make_ssa(vec![bb], var_map, std::collections::BTreeMap::new());

        let pass = DeadCodeElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "dead flag-producing compare should be removed");
        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns[0].op, IrOp::Call, "CALL should move into slot 0");
        assert!(
            !ssa.var_map
                .contains_key(&(BlockId(0), 0, VarnodeSlot::Output)),
            "slot 0 must not retain the removed compare's output metadata"
        );
    }

    /// Diamond `b0 -> {b1, b2} -> b3`. `b1` writes temporary `t` (read in
    /// `b1` only) and register `rbx` (returned from `b3`), so SSA places a
    /// phi for both at `b3`.
    fn diamond_with_branch_local_temp() -> SsaFunction {
        let t = Varnode::unique(0, 8);
        let rbx = Varnode::reg(24, 8);
        let mut function = Function::new("dead_phi", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x1010, 8), Varnode::reg(0, 1)],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1), BlockId(2)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            t,
            smallvec![Varnode::reg(8, 8)],
            0x1004,
        ));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            rbx,
            smallvec![t, Varnode::constant(1, 8)],
            0x1008,
        ));
        b1.successors = smallvec![BlockId(3)];
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1010));
        b2.successors = smallvec![BlockId(3)];
        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![rbx], 0x1014));
        for block in [b0, b1, b2, b3] {
            function.insert_block(block);
        }
        unlace_ir::ssa::build_ssa(function)
    }

    fn phi_bases(func: &SsaFunction) -> Vec<Varnode> {
        func.phi_map
            .values()
            .flatten()
            .map(|phi| phi.output.base)
            .collect()
    }

    #[test]
    fn dead_phi_elim_drops_unread_temporary_phi_and_keeps_register_phi() {
        let mut func = diamond_with_branch_local_temp();
        assert!(phi_bases(&func).contains(&Varnode::unique(0, 8)));

        let changed = DeadPhiElimPass.run(&mut func).expect("pass should succeed");

        assert!(changed);
        assert_eq!(phi_bases(&func), vec![Varnode::reg(24, 8)]);
    }

    #[test]
    fn dead_phi_elim_keeps_temporary_phi_with_a_reader() {
        let mut func = diamond_with_branch_local_temp();
        let t = Varnode::unique(0, 8);
        let b3 = func
            .function
            .blocks
            .get_mut(&BlockId(3))
            .expect("join block");
        b3.insns.insert(
            0,
            IrInsn::without_output(IrOp::Store, smallvec![t, t], 0x1012),
        );
        let mut func = unlace_ir::ssa::build_ssa(func.function);

        DeadPhiElimPass.run(&mut func).expect("pass should succeed");

        assert!(phi_bases(&func).contains(&t));
    }

    #[test]
    fn dead_phi_elim_sweeps_copies_only_a_dead_phi_read() {
        let mut func = diamond_with_branch_local_temp();
        let u = Varnode::unique(1, 8);
        let b2 = func
            .function
            .blocks
            .get_mut(&BlockId(2))
            .expect("else block");
        b2.insns.insert(
            0,
            IrInsn::with_output(IrOp::Copy, u, smallvec![Varnode::reg(8, 8)], 0x100c),
        );
        let b1 = func
            .function
            .blocks
            .get_mut(&BlockId(1))
            .expect("then block");
        b1.insns.insert(
            0,
            IrInsn::with_output(IrOp::Copy, u, smallvec![Varnode::reg(16, 8)], 0x1002),
        );
        let mut func = unlace_ir::ssa::build_ssa(func.function);
        assert!(phi_bases(&func).contains(&u));

        DeadPhiElimPass.run(&mut func).expect("pass should succeed");

        assert!(!phi_bases(&func).contains(&u));
        let writes_u = func
            .function
            .blocks
            .values()
            .flat_map(|block| &block.insns)
            .any(|insn| insn.output == Some(u));
        assert!(
            !writes_u,
            "copies feeding only the dead phi should be swept"
        );
    }
}
