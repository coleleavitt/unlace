//! Noreturn function detection pass.
//!
//! Detects calls to known-noreturn functions (exit, abort, panic, etc.) and
//! marks the containing `SsaFunction` accordingly. Instructions after a
//! noreturn call within the same block are unreachable and removed.

use std::collections::BTreeSet;

use unlace_ir::ssa::{SsaFunction, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// Exact-match roster of known-noreturn function names.
///
/// Covers libc termination (`exit`/`abort`/`quick_exit`), assertion helpers
/// (`__assert_fail` & friends), stack-smashing handlers, longjmp family,
/// C++ exception machinery (`__cxa_throw`, `_Unwind_*`), POSIX thread exit,
/// and Rust panic entry points.
///
/// Names are matched **case-sensitive, exact** against the symbol returned
/// by the resolver (typically the PLT/import name). For prefix matches see
/// [`is_noreturn_by_name`].
pub const NORETURN_NAMES: &[&str] = &[
    // libc termination
    "exit",
    "_exit",
    "_Exit",
    "abort",
    "_abort",
    "quick_exit",
    // assertion handlers (glibc, BSD, macOS, GNU `_perror_` variant)
    "__assert_fail",
    "__assert_rtn",
    "__assert",
    "__assert_perror_fail",
    // stack protector / fortify
    "__stack_chk_fail",
    "__chk_fail",
    // longjmp family
    "longjmp",
    "_longjmp",
    "siglongjmp",
    // C++/Itanium ABI exception machinery
    "_Unwind_Resume",
    "_Unwind_RaiseException",
    "__cxa_throw",
    "__cxa_rethrow",
    "throw",
    // POSIX / C11 thread exit
    "pthread_exit",
    "thrd_exit",
    // Rust panic
    "panic",
    "panic_impl",
    "panic_handler",
    "rust_panic",
    "rust_begin_unwind",
    "core::panicking::panic_fmt",
];

/// Prefix used as a sigil for "compiler-emitted noreturn helper" — e.g. a
/// frontend may emit `__noreturn_my_unreachable_branch`. Matched as a
/// prefix on the resolved symbol name.
const NORETURN_PREFIX: &str = "__noreturn_";

/// Returns true if `name` matches the noreturn roster — either exact match
/// against [`NORETURN_NAMES`] or prefix match against [`NORETURN_PREFIX`].
///
/// Note: callers that already hold a `BTreeSet<&str>` of the roster (e.g.
/// the [`NoreturnDetectPass`] instance) prefer the set lookup + prefix
/// check inlined. This free function exists for ad-hoc callers and tests.
pub fn is_noreturn_by_name(name: &str) -> bool {
    if name.starts_with(NORETURN_PREFIX) {
        return true;
    }
    NORETURN_NAMES.contains(&name)
}

pub struct NoreturnDetectPass {
    noreturn_names: BTreeSet<&'static str>,
}

impl Default for NoreturnDetectPass {
    fn default() -> Self {
        Self::new()
    }
}

impl NoreturnDetectPass {
    pub fn new() -> Self {
        Self {
            noreturn_names: NORETURN_NAMES.iter().copied().collect(),
        }
    }

    /// Does `name` match the noreturn roster? Combines the cached exact
    /// `BTreeSet` lookup with the `__noreturn_*` prefix rule.
    fn matches_name(&self, name: &str) -> bool {
        if name.starts_with(NORETURN_PREFIX) {
            return true;
        }
        self.noreturn_names.contains(name)
    }

    /// Run the pass with an external name resolver that maps call-target
    /// addresses to function names (e.g. from `BinaryImage.plt_symbols`).
    ///
    /// Two-phase logic:
    ///
    /// 1. **Per-block scan** — for each block, find the first `Call` to a
    ///    roster-known noreturn target and trim every instruction after it
    ///    (those are unreachable). The block is now *terminated*: control
    ///    never leaves it.
    /// 2. **Reachable exits** — walk the CFG from the entry without
    ///    leaving terminated blocks. The function is `noreturn` when at
    ///    least one terminated block exists, no reachable block contains a
    ///    `Return`, and every reachable block without successors is
    ///    terminated (an unknown exit such as a tail jump stays a possible
    ///    return). A function that merely *contains* a noreturn call on a
    ///    cold path — every stack-protected function calls
    ///    `__stack_chk_fail` — therefore stays returning. Cross-function
    ///    tail-call propagation lives in
    ///    [`crate::noreturn_propagation::propagate_noreturn`].
    pub fn run_with_resolver(
        &self,
        func: &mut SsaFunction,
        resolve_name: impl Fn(u64) -> Option<&'static str>,
    ) -> Result<bool, PassError> {
        let mut changed = false;
        let mut terminated = BTreeSet::new();

        let block_ids: Vec<_> = func.function.blocks.keys().copied().collect();

        for bid in block_ids {
            let block = match func.function.blocks.get(&bid) {
                Some(b) => b,
                None => continue,
            };

            let mut noreturn_insn_idx: Option<usize> = None;

            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }

                let target_addr = match insn.inputs.first() {
                    Some(vn) if vn.space == SpaceId::Const => vn.offset,
                    _ => continue,
                };

                if let Some(name) = resolve_name(target_addr)
                    && self.matches_name(name)
                {
                    terminated.insert(bid);
                    noreturn_insn_idx = Some(insn_idx);
                    break;
                }
            }

            if let Some(cut_after) = noreturn_insn_idx {
                let keep_count = cut_after + 1;
                let block = func.function.blocks.get_mut(&bid).unwrap();

                if block.insns.len() > keep_count {
                    for (old_idx, insn) in block.insns.iter().enumerate().skip(keep_count) {
                        let input_count = insn.inputs.len();
                        for i in 0..input_count {
                            func.var_map.remove(&(bid, old_idx, VarnodeSlot::Input(i)));
                        }
                        func.var_map.remove(&(bid, old_idx, VarnodeSlot::Output));
                    }

                    block.insns.truncate(keep_count);
                    changed = true;
                }
            }
        }

        if !func.noreturn && !terminated.is_empty() {
            let noreturn = never_returns(func, &terminated);
            tracing::debug!(
                target: "unlace::noreturn",
                "func={} terminated={terminated:?} noreturn={noreturn}",
                func.function.name
            );
            if noreturn {
                func.noreturn = true;
                changed = true;
            }
        }

        Ok(changed)
    }
}

/// Whether no path from the entry reaches a `Return` or an exit block that
/// is not in `terminated`, walking the CFG without leaving terminated
/// blocks. Requires at least one terminated block to be reachable, so an
/// unreachable cold-path `abort()` does not count.
fn never_returns(func: &SsaFunction, terminated: &BTreeSet<BlockId>) -> bool {
    let cfg = func.cfg.inner();
    let mut visited = BTreeSet::new();
    let mut stack = vec![func.cfg.entry_block()];
    let mut reached_terminated = false;
    while let Some(bid) = stack.pop() {
        if !visited.insert(bid) {
            continue;
        }
        let Some(block) = func.function.blocks.get(&bid) else {
            return false;
        };
        if block.insns.iter().any(|insn| insn.op == IrOp::Return) {
            return false;
        }
        if terminated.contains(&bid) {
            reached_terminated = true;
            continue;
        }
        let Some(node) = func.cfg.node_index(bid) else {
            return false;
        };
        let successors: Vec<BlockId> = cfg
            .neighbors_directed(node, petgraph::Direction::Outgoing)
            .map(|succ| cfg[succ])
            .collect();
        if successors.is_empty() {
            return false;
        }
        stack.extend(successors);
    }
    reached_terminated
}

impl Pass for NoreturnDetectPass {
    fn name(&self) -> &str {
        "noreturn-detect"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::PreOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // When run via the Pass trait without an external resolver, we use a
        // no-op resolver. The caller is expected to use `run_with_resolver`
        // when symbol information is available.
        self.run_with_resolver(func, |_| None)
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        DominatorTree, PrimitiveType, SsaFunction, SsaVarnode, VarMap, VarnodeSlot,
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
            lvars: Vec::new(),
            rust_async: None,
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: BTreeSet::new(),
            variadic: None,
            inferred_stack_params: BTreeSet::new(),
            data_items: unlace_ir::mem_object::DataItems::default(),
            object_types: Default::default(),
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
            eh_landing_pad_catches: BTreeMap::new(),
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

    fn sv(offset: u64, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, 8),
            version,
        }
    }

    fn mock_resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0xDEAD => Some("exit"),
            0xBEEF => Some("abort"),
            0x1234 => Some("printf"),
            _ => None,
        }
    }

    #[test]
    fn test_noreturn_exit_detected() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let var_map = VarMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert!(ssa.noreturn);
    }

    #[test]
    fn test_noreturn_abort_detected() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xBEEF, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let var_map = VarMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert!(ssa.noreturn);
    }

    #[test]
    fn test_noreturn_normal_function() {
        let v1 = sv(0, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        // Call to printf (not noreturn)
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1234, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);

        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(!changed);
        assert!(!ssa.noreturn);
    }

    #[test]
    fn test_noreturn_unreachable_after_call() {
        let v1 = sv(0, 0);
        let v2 = sv(8, 0);
        let v3 = sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        // Some setup instruction
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v1.base,
            smallvec![Varnode::constant(1, 8)],
            0x1000,
        ));
        // Call to exit (noreturn)
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1004,
        ));
        // These should be removed (unreachable after exit)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v2.base,
            smallvec![v1.base, Varnode::constant(2, 8)],
            0x1008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(1)), v3);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), v2);

        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert!(ssa.noreturn);

        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns.len(), 2, "only COPY + CALL should remain");
        assert_eq!(insns[0].op, IrOp::Copy);
        assert_eq!(insns[1].op, IrOp::Call);

        // var_map entries for removed instructions should be gone
        assert!(
            !ssa.var_map
                .contains_key(&(BlockId(0), 2, VarnodeSlot::Input(0)))
        );
        assert!(
            !ssa.var_map
                .contains_key(&(BlockId(0), 2, VarnodeSlot::Output))
        );
    }

    #[test]
    fn test_noreturn_no_change_on_rerun() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1000,
        ));

        let var_map = VarMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        assert!(pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
        assert!(!pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
    }

    #[test]
    fn test_noreturn_pass_trait_without_resolver() {
        let mut bb = BasicBlock::new(BlockId(0));
        // Without a resolver, no names can be resolved, so no change.
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let var_map = VarMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run(&mut ssa).unwrap();
        assert!(!changed);
        assert!(!ssa.noreturn);
    }

    // ---------------------------------------------------------------
    // Name-roster tests (step 1: expanded noreturn names + prefix).
    // ---------------------------------------------------------------

    /// Every name we explicitly added (or kept) in the roster must be
    /// recognised by `is_noreturn_by_name`. If this test fails the roster
    /// drifted from the task spec — re-check `NORETURN_NAMES`.
    #[test]
    fn test_roster_contains_all_expected_names() {
        let must_have = [
            // libc termination
            "abort",
            "_abort",
            "exit",
            "_exit",
            "_Exit",
            "quick_exit",
            // panic / Rust
            "panic",
            "panic_impl",
            "panic_handler",
            "rust_panic",
            // assertion handlers
            "__assert_fail",
            "__assert_rtn",
            "__assert",
            "__assert_perror_fail",
            // longjmp family
            "longjmp",
            "siglongjmp",
            "_longjmp",
            // C++ exceptions / unwinder
            "__cxa_throw",
            "_Unwind_Resume",
            "__cxa_rethrow",
            "_Unwind_RaiseException",
            // POSIX/C11 thread exit
            "pthread_exit",
            "thrd_exit",
            // stack protector
            "__stack_chk_fail",
            "__chk_fail",
        ];
        for n in must_have {
            assert!(
                is_noreturn_by_name(n),
                "name `{n}` should be recognised as noreturn"
            );
        }
    }

    /// The `__noreturn_*` prefix rule must match arbitrary suffixes — this
    /// is the compiler-emitted-helper escape hatch.
    #[test]
    fn test_noreturn_prefix_match() {
        assert!(is_noreturn_by_name("__noreturn_my_function"));
        assert!(is_noreturn_by_name("__noreturn_X"));
        assert!(is_noreturn_by_name("__noreturn_")); // bare prefix matches
        // Negative controls: similar but not exact prefix.
        assert!(!is_noreturn_by_name("noreturn_foo"));
        assert!(!is_noreturn_by_name("_noreturn_foo"));
        assert!(!is_noreturn_by_name("__noreturnfoo"));
    }

    /// A non-roster name (e.g. `printf`) must NOT be recognised — guards
    /// against accidental over-broad prefix logic.
    #[test]
    fn test_roster_negative_controls() {
        for n in ["printf", "malloc", "free", "memcpy", "fopen", "main"] {
            assert!(!is_noreturn_by_name(n), "`{n}` must not be flagged");
        }
    }

    // ---------------------------------------------------------------
    // Exit-block fixpoint tests (step 2: tail-call-only noreturn).
    // ---------------------------------------------------------------

    /// Resolver for the fixpoint tests: maps some synthetic addresses to
    /// new-roster names. Distinct address range from `mock_resolver` so
    /// the two tests do not interfere if combined.
    fn fixpoint_resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0xAA01 => Some("__cxa_throw"),
            0xAA02 => Some("longjmp"),
            0xAA03 => Some("pthread_exit"),
            0xAA04 => Some("__noreturn_helper_xyz"), // prefix-matched
            0x1234 => Some("printf"),                // normal returning fn
            _ => None,
        }
    }

    /// Single-block function whose only call is to a *newly-added* roster
    /// name (`__cxa_throw`) must be marked noreturn.
    #[test]
    fn test_new_roster_name_detected() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xAA01, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, fixpoint_resolver).unwrap();
        assert!(changed);
        assert!(ssa.noreturn);
    }

    /// A call to a name matched only by the `__noreturn_*` prefix rule
    /// must promote the containing function.
    #[test]
    fn test_prefix_matched_callee_promotes_caller() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xAA04, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, fixpoint_resolver).unwrap();
        assert!(changed);
        assert!(ssa.noreturn, "prefix-matched callee must promote caller");
    }

    fn call(target: u64, addr: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(target, 8)], addr)
    }

    fn cbranch(targets: [BlockId; 2]) -> BasicBlock {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), Varnode::constant(1, 1)],
            0x1000,
        ));
        bb.successors = targets.into_iter().collect();
        bb
    }

    /// A returning path next to a cold `__stack_chk_fail` block — every
    /// stack-protected function — must stay a returning function.
    #[test]
    fn cold_noreturn_block_does_not_promote_returning_function() {
        let entry = cbranch([BlockId(2), BlockId(1)]);
        let mut ret = BasicBlock::new(BlockId(1));
        ret.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));
        let mut cold = BasicBlock::new(BlockId(2));
        cold.insns.push(call(0xDEAD, 0x1020));

        let mut ssa = make_ssa(vec![entry, ret, cold], VarMap::new());
        let pass = NoreturnDetectPass::new();
        assert!(!pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
        assert!(!ssa.noreturn);
    }

    /// Both branches end in noreturn calls: the function never returns,
    /// even though the first callee block falls through to the second in
    /// block order.
    #[test]
    fn all_paths_ending_in_noreturn_calls_promote() {
        let entry = cbranch([BlockId(2), BlockId(1)]);
        let mut left = BasicBlock::new(BlockId(1));
        left.insns.push(call(0xDEAD, 0x1010));
        let mut right = BasicBlock::new(BlockId(2));
        right.insns.push(call(0xBEEF, 0x1020));

        let mut ssa = make_ssa(vec![entry, left, right], VarMap::new());
        let pass = NoreturnDetectPass::new();
        assert!(pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
        assert!(ssa.noreturn);
    }

    /// The fallthrough edge after a noreturn call is never taken, so a
    /// returning block reachable only through it does not count.
    #[test]
    fn fallthrough_after_noreturn_call_is_not_a_return_path() {
        let mut entry = BasicBlock::new(BlockId(0));
        entry.insns.push(call(0xDEAD, 0x1000));
        let mut dead = BasicBlock::new(BlockId(1));
        dead.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        let mut ssa = make_ssa(vec![entry, dead], VarMap::new());
        let pass = NoreturnDetectPass::new();
        assert!(pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
        assert!(ssa.noreturn);
    }

    /// Plain returning function (no noreturn calls anywhere) must remain
    /// `noreturn = false` after the new fixpoint runs.
    #[test]
    fn test_fixpoint_does_not_overpromote_normal_function() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1234, 8)], // printf
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut ssa = make_ssa(vec![bb], VarMap::new());
        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, fixpoint_resolver).unwrap();
        assert!(!changed);
        assert!(!ssa.noreturn);
    }
}
