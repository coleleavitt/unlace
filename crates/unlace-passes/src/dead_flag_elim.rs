//! Dead flag elimination pass.
//!
//! After x86 lifting, arithmetic instructions (ADD, SUB, …) produce separate
//! IR instructions for each RFLAGS bit (CF, PF, AF, ZF, SF, OF) but
//! downstream code typically reads only one or two of them (e.g. ZF via a
//! Jcc).  This pass removes flag-producing instructions whose SSA output has
//! zero uses, shrinking the IR before more expensive analyses run.
//!
//! A flag varnode is any `Register`-space varnode with offset >= 256
//! (the x86-64 RFLAGS region defined in `unlace-lift-x86`).
//!
//! The pass is intentionally narrow: it only removes instructions that
//! produce a flag output.  General dead code is handled by [`DeadCodeElimPass`].

use std::collections::BTreeSet;

use unlace_ir::SpaceId;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};

use crate::pass::{Pass, PassError};

/// Minimum register-space offset for x86 flag bits (CF starts at 256).
const FLAG_OFFSET_MIN: u64 = 256;

/// Returns `true` if `sv` refers to an x86 RFLAGS bit.
fn is_flag_varnode(sv: &SsaVarnode) -> bool {
    sv.base.space == SpaceId::Register && sv.base.offset >= FLAG_OFFSET_MIN
}

/// Dead flag elimination: remove instructions whose output is an unused
/// flag varnode.
///
/// One sweep is performed per invocation.  The fixed-point runner handles
/// cascading removal (e.g. an instruction used only by a now-removed flag
/// computation).
pub struct DeadFlagElimPass;

impl Pass for DeadFlagElimPass {
    fn name(&self) -> &str {
        "dead-flag-elim"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut used: BTreeSet<SsaVarnode> = BTreeSet::new();

        for (&bid, block) in &func.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                for input_idx in 0..insn.inputs.len() {
                    if let Some(&sv) =
                        func.var_map
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

            for (insn_idx, _insn) in block.insns.iter().enumerate() {
                let output_sv = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output));

                let is_dead_flag = match output_sv {
                    Some(sv) => is_flag_varnode(sv) && !used.contains(sv),
                    None => false,
                };

                if is_dead_flag {
                    changed = true;
                } else {
                    keep.push(insn_idx);
                }
            }

            if keep.len() == block.insns.len() {
                continue;
            }

            // Compact kept instructions and re-key var_map entries.
            let old_insns = std::mem::take(&mut block.insns);
            block.insns = Vec::with_capacity(keep.len());

            for (new_idx, &old_idx) in keep.iter().enumerate() {
                block.insns.push(old_insns[old_idx].clone());

                if new_idx != old_idx {
                    // Re-key output
                    if let Some(sv) = func.var_map.remove(&(bid, old_idx, VarnodeSlot::Output)) {
                        func.var_map.insert((bid, new_idx, VarnodeSlot::Output), sv);
                    }

                    // Re-key inputs
                    let input_count = block
                        .insns
                        .last()
                        .ok_or_else(|| PassError::InvariantViolation {
                            message: "block has no instructions after compaction".into(),
                        })?
                        .inputs
                        .len();
                    for i in 0..input_count {
                        if let Some(sv) =
                            func.var_map.remove(&(bid, old_idx, VarnodeSlot::Input(i)))
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
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::{PhiNode, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::pass::Pass;

    // -- helpers (mirrored from dce::tests) --

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
        phi_map: BTreeMap<BlockId, Vec<PhiNode>>,
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
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map,
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: unlace_ir::ssa::CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            rust_async: None,
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            stack_offset_hints: BTreeMap::new(),
            dwarf_local_names: BTreeMap::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            block_entry_sp_delta: std::collections::BTreeMap::new(),
            frame_holes: Vec::new(),
            saved_register_slots: std::collections::BTreeSet::new(),
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
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

        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry in cfg");
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

    /// GP register SSA varnode (offset < 256).
    fn gp_sv(offset: u64, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, 8),
            version,
        }
    }

    /// Flag register SSA varnode (offset >= 256, size 1).
    fn flag_sv(offset: u64, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, 1),
            version,
        }
    }

    // CF=256, ZF=259, SF=260, OF=261 (from register_file.rs)
    const CF: u64 = 256;
    const ZF: u64 = 259;
    const SF: u64 = 260;
    const OF: u64 = 261;

    // ---------------------------------------------------------------
    // Test 1: Unused ZF is removed
    // ---------------------------------------------------------------
    #[test]
    fn test_dead_flag_elim_unused_zf() {
        // INT_EQUAL rax, rbx → ZF  (never read)
        // RETURN
        let rax = gp_sv(0, 0);
        let rbx = gp_sv(24, 0);
        let zf = flag_sv(ZF, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            zf.base,
            smallvec![rax.base, rbx.base],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), rbx);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), zf);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadFlagElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "should have removed the dead INT_EQUAL → ZF");
        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns.len(), 1, "only RETURN should remain");
        assert_eq!(insns[0].op, IrOp::Return);
    }

    // ---------------------------------------------------------------
    // Test 2: Used ZF (read by CBRANCH) is kept
    // ---------------------------------------------------------------
    #[test]
    fn test_dead_flag_elim_used_zf_kept() {
        // INT_EQUAL rax, rbx → ZF
        // CBRANCH target, ZF          ← reads ZF
        let rax = gp_sv(0, 0);
        let rbx = gp_sv(24, 0);
        let zf = flag_sv(ZF, 0);
        let target = Varnode::constant(0x2000, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            zf.base,
            smallvec![rax.base, rbx.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target, zf.base],
            0x1004,
        ));

        let mut var_map = BTreeMap::new();
        // INT_EQUAL inputs + output
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), rbx);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), zf);
        // CBRANCH input1 = ZF (input0 is a constant target, not in var_map)
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), zf);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadFlagElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "ZF is used — nothing should be removed");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 2);
    }

    // ---------------------------------------------------------------
    // Test 3: Selective removal — CF used, OF/SF/ZF unused
    // ---------------------------------------------------------------
    #[test]
    fn test_dead_flag_elim_preserves_semantics() {
        // Simulates what an ADD lifts to:
        //   INT_ADD rax, rbx → rdx     (GP output — kept regardless)
        //   INT_CARRY rax, rbx → CF    (used later — kept)
        //   INT_EQUAL rdx, 0 → ZF      (unused — removed)
        //   INT_SLESS rdx, 0 → SF      (unused — removed)
        //   INT_SCARRY rax, rbx → OF   (unused — removed)
        //   CBRANCH target, CF          (reads CF)
        let rax = gp_sv(0, 0);
        let rbx = gp_sv(24, 0);
        let rdx = gp_sv(16, 0);
        let cf = flag_sv(CF, 0);
        let zf = flag_sv(ZF, 0);
        let sf = flag_sv(SF, 0);
        let of = flag_sv(OF, 0);
        let zero = Varnode::constant(0, 8);
        let target = Varnode::constant(0x2000, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // 0: INT_ADD rax, rbx → rdx
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            rdx.base,
            smallvec![rax.base, rbx.base],
            0x1000,
        ));
        // 1: INT_CARRY rax, rbx → CF
        bb.insns.push(IrInsn::with_output(
            IrOp::IntCarry,
            cf.base,
            smallvec![rax.base, rbx.base],
            0x1004,
        ));
        // 2: INT_EQUAL rdx, 0 → ZF
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            zf.base,
            smallvec![rdx.base, zero],
            0x1008,
        ));
        // 3: INT_SLESS rdx, 0 → SF
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSless,
            sf.base,
            smallvec![rdx.base, zero],
            0x100C,
        ));
        // 4: INT_SCARRY rax, rbx → OF
        bb.insns.push(IrInsn::with_output(
            IrOp::IntScarry,
            of.base,
            smallvec![rax.base, rbx.base],
            0x1010,
        ));
        // 5: CBRANCH target, CF
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target, cf.base],
            0x1014,
        ));

        let mut var_map = BTreeMap::new();
        // insn 0: INT_ADD
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), rbx);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), rdx);
        // insn 1: INT_CARRY → CF
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), rbx);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), cf);
        // insn 2: INT_EQUAL → ZF (rdx is used as input)
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), rdx);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), zf);
        // insn 3: INT_SLESS → SF
        var_map.insert((BlockId(0), 3, VarnodeSlot::Input(0)), rdx);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Output), sf);
        // insn 4: INT_SCARRY → OF
        var_map.insert((BlockId(0), 4, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 4, VarnodeSlot::Input(1)), rbx);
        var_map.insert((BlockId(0), 4, VarnodeSlot::Output), of);
        // insn 5: CBRANCH reads CF
        var_map.insert((BlockId(0), 5, VarnodeSlot::Input(1)), cf);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadFlagElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "ZF, SF, OF should have been removed");

        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        // Should remain: INT_ADD, INT_CARRY, CBRANCH = 3 instructions
        assert_eq!(insns.len(), 3, "INT_ADD + INT_CARRY + CBRANCH = 3");
        assert_eq!(insns[0].op, IrOp::IntAdd, "INT_ADD kept (GP output)");
        assert_eq!(insns[1].op, IrOp::IntCarry, "INT_CARRY kept (CF is used)");
        assert_eq!(insns[2].op, IrOp::Cbranch, "CBRANCH kept (side-effecting)");
    }

    // ---------------------------------------------------------------
    // Test 4: Non-flag dead code is NOT removed by this pass
    // ---------------------------------------------------------------
    #[test]
    fn test_dead_flag_elim_ignores_non_flag_dead_code() {
        // Dead GP instruction: INT_ADD rax, rbx → rdx (never used)
        // This pass should leave it alone (that's DCE's job).
        let rax = gp_sv(0, 0);
        let rbx = gp_sv(24, 0);
        let rdx = gp_sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            rdx.base,
            smallvec![rax.base, rbx.base],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), rax);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), rbx);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), rdx);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadFlagElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "non-flag dead code should NOT be removed");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 2);
    }
}
