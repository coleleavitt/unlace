//! Rust panic path annotation pass.
//!
//! Detects calls to Rust panic functions and populates
//! `SsaFunction::panic_sites` so downstream consumers (e.g. the C printer)
//! can annotate them.

use unlace_ir::ssa::{PanicKind, SsaFunction};
use unlace_ir::{IrOp, SpaceId};

use crate::pass::{Pass, PassError};

fn classify_panic(name: &str) -> Option<PanicKind> {
    // Demangled forms
    if name == "core::panicking::panic"
        || name == "core::panicking::panic_fmt"
        || name == "core::panicking::panic_display"
        || name == "core::panicking::panic_str"
    {
        return Some(PanicKind::Panic);
    }
    if name == "core::panicking::panic_bounds_check" {
        return Some(PanicKind::BoundsCheck);
    }
    if name == "core::result::unwrap_failed" {
        return Some(PanicKind::UnwrapFailed);
    }
    if name == "core::option::expect_failed" {
        return Some(PanicKind::ExpectFailed);
    }
    if name == "std::process::abort" {
        return Some(PanicKind::Abort);
    }

    // Mangled forms: _ZN4core9panicking5panic*
    if name.starts_with("_ZN4core9panicking5panic") {
        if name.contains("18panic_bounds_check") {
            return Some(PanicKind::BoundsCheck);
        }
        return Some(PanicKind::Panic);
    }
    // _ZN4core6result13unwrap_failed*
    if name.starts_with("_ZN4core6result13unwrap_failed") {
        return Some(PanicKind::UnwrapFailed);
    }
    // _ZN4core6option13expect_failed*
    if name.starts_with("_ZN4core6option13expect_failed") {
        return Some(PanicKind::ExpectFailed);
    }
    // _ZN3std7process5abort*
    if name.starts_with("_ZN3std7process5abort") {
        return Some(PanicKind::Abort);
    }

    None
}

pub struct RustPanicPass;

impl RustPanicPass {
    pub fn run_with_resolver(
        &self,
        func: &mut SsaFunction,
        resolve_name: impl Fn(u64) -> Option<&'static str>,
    ) -> Result<bool, PassError> {
        let mut changed = false;

        let block_ids: Vec<_> = func.function.blocks.keys().copied().collect();

        for bid in block_ids {
            let block = match func.function.blocks.get(&bid) {
                Some(b) => b,
                None => continue,
            };

            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }

                let target_addr = match insn.inputs.first() {
                    Some(vn) if vn.space == SpaceId::Const => vn.offset,
                    _ => continue,
                };

                let key = (bid, insn_idx);
                if func.panic_sites.contains_key(&key) {
                    continue;
                }

                if let Some(name) = resolve_name(target_addr)
                    && let Some(kind) = classify_panic(name)
                {
                    func.panic_sites.insert(key, kind);
                    changed = true;
                }
            }
        }

        Ok(changed)
    }
}

impl Pass for RustPanicPass {
    fn name(&self) -> &str {
        "rust-panic"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        self.run_with_resolver(func, |_| None)
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PanicKind, PrimitiveType, SsaFunction, VarMap,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(blocks: Vec<BasicBlock>, var_map: VarMap) -> SsaFunction {
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
            phi_map: BTreeMap::new(),
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: CallingConvention::Unknown,
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
            lvars: Vec::new(),
            rust_async: None,
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: BTreeSet::new(),
            is_varargs: false,
            inferred_stack_params: BTreeSet::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            stack_offset_hints: BTreeMap::new(),
            dwarf_local_names: BTreeMap::new(),
            dwarf_aggregate_offsets: BTreeSet::new(),
            pending_dwarf_locals: Vec::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            eh_landing_pad_catches: BTreeMap::new(),
            eh_cleanup_landing_pads: std::collections::BTreeSet::new(),
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
            indirect_call_targets: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
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

    fn build_trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;

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

        DominatorTree::new(idom, children, entry)
    }

    fn mock_resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0xAAAA => Some("core::panicking::panic"),
            0xBBBB => Some("_ZN4core9panicking5panic17habcdef1234567890E"),
            0xCCCC => Some("printf"),
            0xDDDD => Some("core::panicking::panic_bounds_check"),
            0xEEEE => Some("core::result::unwrap_failed"),
            0xFFFF => Some("core::option::expect_failed"),
            0x1111 => Some("std::process::abort"),
            _ => None,
        }
    }

    #[test]
    fn test_detect_panic_call() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xAAAA, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert_eq!(
            ssa.panic_sites.get(&(BlockId(0), 0)),
            Some(&PanicKind::Panic)
        );
    }

    #[test]
    fn test_detect_mangled_panic() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xBBBB, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert_eq!(
            ssa.panic_sites.get(&(BlockId(0), 0)),
            Some(&PanicKind::Panic)
        );
    }

    #[test]
    fn test_no_panic_for_printf() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xCCCC, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(!changed);
        assert!(ssa.panic_sites.is_empty());
    }

    #[test]
    fn test_no_panic_for_callind() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![Varnode::reg(0, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(!changed);
        assert!(ssa.panic_sites.is_empty());
    }

    #[test]
    fn test_bounds_check_kind() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDDDD, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert_eq!(
            ssa.panic_sites.get(&(BlockId(0), 0)),
            Some(&PanicKind::BoundsCheck)
        );
    }

    #[test]
    fn test_unwrap_failed_kind() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xEEEE, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert_eq!(
            ssa.panic_sites.get(&(BlockId(0), 0)),
            Some(&PanicKind::UnwrapFailed)
        );
    }

    #[test]
    fn test_expect_failed_kind() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xFFFF, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert_eq!(
            ssa.panic_sites.get(&(BlockId(0), 0)),
            Some(&PanicKind::ExpectFailed)
        );
    }

    #[test]
    fn test_no_change_on_rerun() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xAAAA, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        assert!(pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
        assert!(!pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
    }

    #[test]
    fn test_pass_trait_without_resolver() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xAAAA, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = RustPanicPass;
        let changed = pass.run(&mut ssa).unwrap();
        assert!(!changed);
        assert!(ssa.panic_sites.is_empty());
    }
}
