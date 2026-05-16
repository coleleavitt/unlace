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
const NORETURN_NAMES: &[&str] = &[
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
    NORETURN_NAMES.iter().any(|n| *n == name)
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
    ///    (those are unreachable). If any block had such a call, the
    ///    function is itself noreturn-reachable and `noreturn = true`.
    /// 2. **Exit-block fixpoint** — additionally, if **every** CFG exit
    ///    block of the function ends in a `Call` to a roster-known
    ///    noreturn target, mark the function `noreturn = true`. Iterates
    ///    up to [`NORETURN_FIXPOINT_CAP`] rounds. Per-function this is
    ///    largely redundant with the per-block scan (any noreturn call
    ///    promotes the function), but stays as a defensive belt: future
    ///    callers that pre-trim blocks before invoking this pass would
    ///    otherwise lose the promotion. Cross-function tail-call
    ///    propagation lives in
    ///    [`crate::noreturn_propagation::propagate_noreturn`].
    pub fn run_with_resolver(
        &self,
        func: &mut SsaFunction,
        resolve_name: impl Fn(u64) -> Option<&'static str>,
    ) -> Result<bool, PassError> {
        let mut changed = false;
        let mut found_noreturn = false;

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

                if let Some(name) = resolve_name(target_addr) {
                    if self.matches_name(name) {
                        found_noreturn = true;
                        noreturn_insn_idx = Some(insn_idx);
                        break;
                    }
                }
            }

            if let Some(cut_after) = noreturn_insn_idx {
                let keep_count = cut_after + 1;
                let block = func.function.blocks.get_mut(&bid).unwrap();

                if block.insns.len() > keep_count {
                    for old_idx in keep_count..block.insns.len() {
                        let input_count = block.insns[old_idx].inputs.len();
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

        if found_noreturn && !func.noreturn {
            func.noreturn = true;
            changed = true;
        }

        // Phase 2: exit-block fixpoint. If we did not already flag this
        // function noreturn, check whether every CFG exit terminates with
        // a noreturn-named call. Idempotent after one iteration but we
        // loop defensively (cap = 10) in case a future hook mutates the
        // CFG mid-pass.
        if !func.noreturn {
            for _ in 0..NORETURN_FIXPOINT_CAP {
                if !self.all_exits_end_in_noreturn_call(func, &resolve_name) {
                    break;
                }
                if func.noreturn {
                    break;
                }
                func.noreturn = true;
                changed = true;
                // Single mutation per fixpoint round; the condition
                // becomes stable once noreturn = true, so the next
                // iteration's early-exit terminates the loop.
            }
        }

        Ok(changed)
    }

    /// True iff the function has at least one exit block (no CFG
    /// successors) **and** every such exit block's terminator is a `Call`
    /// to a roster-known noreturn target.
    ///
    /// A function with zero exit blocks (pure infinite loop) is
    /// conservatively reported `false` here — the propagation pass owns
    /// that case via a separate signal so we do not double-fire.
    fn all_exits_end_in_noreturn_call(
        &self,
        func: &SsaFunction,
        resolve_name: &impl Fn(u64) -> Option<&'static str>,
    ) -> bool {
        let exit_blocks: Vec<BlockId> = func
            .function
            .blocks
            .keys()
            .copied()
            .filter(|&bid| Self::is_exit_block(func, bid))
            .collect();

        if exit_blocks.is_empty() {
            return false;
        }

        for bid in exit_blocks {
            if !self.block_ends_with_noreturn_call(func, bid, resolve_name) {
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

    /// True iff block `bid`'s last `Call` instruction targets a
    /// roster-known noreturn name. Earlier `Call`s don't count — we want
    /// the *terminator-position* call, the one whose unreachable-fall-
    /// through would be the return.
    fn block_ends_with_noreturn_call(
        &self,
        func: &SsaFunction,
        bid: BlockId,
        resolve_name: &impl Fn(u64) -> Option<&'static str>,
    ) -> bool {
        let Some(block) = func.function.blocks.get(&bid) else {
            return false;
        };
        let last_call_target = block.insns.iter().rev().find_map(|insn| match insn.op {
            IrOp::Call => insn
                .inputs
                .first()
                .filter(|vn| vn.space == SpaceId::Const)
                .map(|vn| vn.offset),
            _ => None,
        });
        let Some(target) = last_call_target else {
            return false;
        };
        match resolve_name(target) {
            Some(name) => self.matches_name(name),
            None => false,
        }
    }
}

/// Hard cap on fixpoint iterations in [`NoreturnDetectPass::run_with_resolver`].
/// Per-function logic stabilises in a single round; the cap exists purely
/// as a safety belt.
pub const NORETURN_FIXPOINT_CAP: usize = 10;

impl Pass for NoreturnDetectPass {
    fn name(&self) -> &str {
        "noreturn-detect"
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

    use unlace_ir::ssa::{DominatorTree, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
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
            indirect_call_targets: BTreeMap::new(),
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

        let var_map = BTreeMap::new();
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

        let var_map = BTreeMap::new();
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

        let mut var_map = BTreeMap::new();
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

        let mut var_map = BTreeMap::new();
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

        let var_map = BTreeMap::new();
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

        let var_map = BTreeMap::new();
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

        let mut ssa = make_ssa(vec![bb], BTreeMap::new());
        let pass = NoreturnDetectPass::new();
        let changed = pass
            .run_with_resolver(&mut ssa, fixpoint_resolver)
            .unwrap();
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

        let mut ssa = make_ssa(vec![bb], BTreeMap::new());
        let pass = NoreturnDetectPass::new();
        let changed = pass
            .run_with_resolver(&mut ssa, fixpoint_resolver)
            .unwrap();
        assert!(changed);
        assert!(ssa.noreturn, "prefix-matched callee must promote caller");
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

        let mut ssa = make_ssa(vec![bb], BTreeMap::new());
        let pass = NoreturnDetectPass::new();
        let changed = pass
            .run_with_resolver(&mut ssa, fixpoint_resolver)
            .unwrap();
        assert!(!changed);
        assert!(!ssa.noreturn);
    }
}
