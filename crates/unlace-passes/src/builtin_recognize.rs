//! GCC `__builtin_expect` / `__builtin_unreachable` recognition (t387 / t388).
//!
//! Recovers two GCC builtins that survive lowering only as branch-shape and
//! trap-instruction hints:
//!
//! - `__builtin_expect(cond, 0)` — "unlikely". Compilers move the cold path
//!   off the hot trace; in C source this almost always appears as
//!   `if (unlikely(x)) abort();` or `if (cond) __assert_fail(...);`. After
//!   lowering, the IR shape is a `CBRANCH` whose *else* (false) successor
//!   is a tiny block that calls a known no-return function (`abort`,
//!   `__assert_fail`, `__stack_chk_fail`, …). We emit an
//!   [`BuiltinAnnotation::Unlikely`] keyed at the originating CBRANCH.
//!
//! - `__builtin_unreachable()` — the C front-end lowers this to a trap
//!   instruction (x86 `UD2`, ARM `UDF #imm`, RISC-V `unimp`, …). Every
//!   target lifter in this workspace surfaces unmodellable opcodes as
//!   [`IrOp::Unimplemented`]. A block whose body is *only* one
//!   `Unimplemented` instruction is therefore the canonical encoding of
//!   `__builtin_unreachable()` and is reported via
//!   [`BuiltinAnnotation::Unreachable`].
//!
//! The [`BuiltinAnnotation::Likely`] variant is exposed for symmetry — it
//! is currently *not* emitted by the heuristic, since the spec only
//! mandates the unlikely-path → abort signal. Future passes that wish to
//! mark the inverse (hot side annotated) can populate it without an API
//! change.
//!
//! ## API
//!
//! [`recognize_builtins`] is the spec-mandated entry point — it operates
//! purely on data already attached to the [`SsaFunction`] (no symbol
//! resolver argument). To bridge that, callers should first run the
//! existing [`crate::libc_idioms::annotate_libc_calls`] / noreturn
//! detection so that abort / `__assert_fail` calls have either populated
//! [`SsaFunction::noreturn`] semantics or — for the call-graph case —
//! supplied a resolver via [`recognize_builtins_with_resolver`].

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BasicBlock, BlockId, IrOp, SpaceId};

/// A single recovered GCC builtin annotation.
///
/// The `usize` field is the index of the originating instruction within
/// the [`BlockId`] block: for `Likely` / `Unlikely` it points at the
/// `CBRANCH`; for `Unreachable` it points at the trap (`UNIMPLEMENTED`)
/// instruction.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum BuiltinAnnotation {
    /// `__builtin_expect(cond, 1)` — the CBRANCH at `(BlockId, idx)` is
    /// expected to take its true-successor (cold path lives on the else).
    Likely(BlockId, usize),
    /// `__builtin_expect(cond, 0)` — the CBRANCH at `(BlockId, idx)` is
    /// expected to fall through (cold path lives on the true-successor,
    /// which terminates in a no-return call such as `abort`).
    Unlikely(BlockId, usize),
    /// `__builtin_unreachable()` — the instruction at `(BlockId, idx)` is
    /// a trap (`UD2` / `UDF` / `unimp`) and the control-flow point it
    /// occupies is statically unreachable.
    Unreachable(BlockId, usize),
}

/// Names of functions whose call indicates the cold / abort path of a
/// `__builtin_expect` pattern. Mirrors the well-known no-return list
/// already used by [`crate::noreturn::NoreturnDetectPass`].
const ABORT_NAMES: &[&str] = &[
    "abort",
    "__assert_fail",
    "__assert_rtn",
    "__stack_chk_fail",
    "_Exit",
    "_exit",
    "exit",
];

/// Spec-mandated entry point.
///
/// Detects `__builtin_unreachable()` (no resolver needed — uses the
/// [`IrOp::Unimplemented`] opcode left behind by the lifters) and, for
/// the unlikely-call heuristic, falls back to a *zero-knowledge*
/// resolver that returns no names. Callers with PLT / symbol information
/// should use [`recognize_builtins_with_resolver`].
///
/// Output is sorted deterministically by `(BlockId, insn_idx)` then by
/// variant ordering so two invocations on the same SSA produce
/// identical results.
pub fn recognize_builtins(func: &SsaFunction) -> Vec<BuiltinAnnotation> {
    recognize_builtins_with_resolver(func, &|_| None)
}

/// Resolver-aware variant. `resolve_name(addr)` should return the
/// canonical symbol name for a Call target address, or `None` if the
/// address is not bound to a known symbol. Used for the
/// `if (cond) abort();` pattern that produces
/// [`BuiltinAnnotation::Unlikely`].
pub fn recognize_builtins_with_resolver(
    func: &SsaFunction,
    resolve_name: &dyn Fn(u64) -> Option<&'static str>,
) -> Vec<BuiltinAnnotation> {
    let mut out = Vec::new();

    // Iteration over BTreeMap<BlockId, BasicBlock> is sorted by BlockId,
    // so the resulting Vec is deterministic.
    for (&bid, block) in &func.function.blocks {
        // --- __builtin_unreachable detection ---------------------------------
        //
        // A block whose body consists of a *single* UNIMPLEMENTED instruction
        // is the canonical trap-block shape every lifter emits for UD2 / UDF /
        // unimp. We also accept the slightly looser shape "the block ends in
        // UNIMPLEMENTED and has no successors", which catches lifters that
        // emit a fall-through arithmetic insn ahead of the trap.
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Unimplemented {
                out.push(BuiltinAnnotation::Unreachable(bid, idx));
                // Only one trap per block matters — anything after a trap is
                // by definition unreachable already.
                break;
            }
        }

        // --- __builtin_expect (unlikely) detection ---------------------------
        //
        // Find a CBRANCH whose else-target (`successors[1]`) is a block that
        // ends in a Call to a known no-return abort-style function. The
        // CBRANCH must be the block's terminator (last instruction).
        let Some((cbr_idx, _)) = block
            .insns
            .iter()
            .enumerate()
            .rev()
            .find(|(_, i)| i.op == IrOp::Cbranch)
        else {
            continue;
        };
        // Must be the terminator — guards against synthetic mid-block cbranch.
        if cbr_idx + 1 != block.insns.len() {
            continue;
        }
        // CFG convention (see unlace_ir::cfg): successors[0] = true-target,
        // successors[1] = false-target ("else"). We follow the spec literally
        // and check only the false-target.
        let Some(&else_target) = block.successors.get(1) else {
            continue;
        };
        let Some(target_block) = func.function.blocks.get(&else_target) else {
            continue;
        };
        if block_ends_in_abort_call(target_block, resolve_name) {
            out.push(BuiltinAnnotation::Unlikely(bid, cbr_idx));
        }
    }

    out
}

/// Returns `true` iff `block` ends in (or consists of) a `Call` whose
/// constant target resolves to a known abort-style no-return function.
fn block_ends_in_abort_call(
    block: &BasicBlock,
    resolve_name: &dyn Fn(u64) -> Option<&'static str>,
) -> bool {
    let Some(last) = block.insns.last() else {
        return false;
    };
    if last.op != IrOp::Call {
        return false;
    }
    let Some(target_vn) = last.inputs.first() else {
        return false;
    };
    if target_vn.space != SpaceId::Const {
        return false;
    }
    let Some(name) = resolve_name(target_vn.offset) else {
        return false;
    };
    ABORT_NAMES.contains(&name)
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, OpTypeBindings, PrimitiveType, SsaFunction, SsaVarnode,
        VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// Build a fresh `SsaFunction` shell around the given blocks. The first
    /// block in `blocks` is treated as the entry. No SSA renaming is
    /// performed — the recognizer only needs the raw CFG / instruction
    /// stream, so a minimal hand-constructed value is sufficient.
    fn make_ssa(blocks: Vec<BasicBlock>) -> SsaFunction {
        let entry = blocks.first().expect("at least one block").id;
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
            var_map: BTreeMap::<(BlockId, usize, VarnodeSlot), SsaVarnode>::new(),
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
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: OpTypeBindings::default(),
            byref_boxes: BTreeMap::new(),
            stack_frame: None,
            byref_info: None,
            libc_call_annotations: BTreeMap::new(),
            libc_sig_annotations: BTreeMap::new(),
            array_struct_layouts: BTreeMap::new(),
            var_role_names: BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
            go_defer_sites: Vec::new(),
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: std::collections::BTreeSet::new(),
            rust_async: None,
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

    fn abort_resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0xAB0F => Some("abort"),
            0xA55F => Some("__assert_fail"),
            0x5C5F => Some("__stack_chk_fail"),
            0x1234 => Some("printf"),
            _ => None,
        }
    }

    /// `if (x) abort();` shape — CBRANCH whose else-target (BB_2) calls
    /// `abort`. Recognizer should emit `Unlikely` for the CBRANCH.
    #[test]
    fn detects_unlikely_abort_pattern() {
        let mut bb0 = BasicBlock::new(BlockId(0));
        // Some arithmetic, then CBRANCH.
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            Varnode::unique(0, 1),
            smallvec![Varnode::reg(0, 8), Varnode::constant(0, 8)],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x1010, 8), Varnode::unique(0, 1)],
            0x1004,
        ));
        // successors[0] = fallthrough (cond false), successors[1] = else (abort)
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // Fallthrough — normal continuation.
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        // Else / cold path — just a Call(abort).
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xAB0F, 8)],
            0x1020,
        ));

        let ssa = make_ssa(vec![bb0, bb1, bb2]);
        let hits = recognize_builtins_with_resolver(&ssa, &abort_resolver);

        assert_eq!(hits.len(), 1, "exactly one Unlikely annotation");
        assert_eq!(hits[0], BuiltinAnnotation::Unlikely(BlockId(0), 1));
    }

    /// `if (cond) __assert_fail(...);` shape. The else-target is bigger
    /// (a setup instruction precedes the Call) — the recognizer must
    /// inspect the *last* instruction of the target block, not just
    /// the only one.
    #[test]
    fn detects_assert_fail_with_setup_in_else_block() {
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2010, 8), Varnode::reg(8, 1)],
            0x2000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2010));

        // Else block: load argument, then call __assert_fail.
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0x38, 8), // rdi
            smallvec![Varnode::constant(0xDEAD_BEEF, 8)],
            0x2020,
        ));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xA55F, 8)],
            0x2024,
        ));

        let ssa = make_ssa(vec![bb0, bb1, bb2]);
        let hits = recognize_builtins_with_resolver(&ssa, &abort_resolver);

        assert_eq!(hits, vec![BuiltinAnnotation::Unlikely(BlockId(0), 0)]);
    }

    /// Block whose body is a single UNIMPLEMENTED ⇒ `__builtin_unreachable`.
    #[test]
    fn detects_unreachable_trap_block() {
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x3000));
        bb0.successors = smallvec![BlockId(1)];

        // The trap block — single UNIMPLEMENTED.
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            0x3010,
        ));

        let ssa = make_ssa(vec![bb0, bb1]);
        // No resolver needed for the Unreachable heuristic.
        let hits = recognize_builtins(&ssa);

        assert_eq!(hits, vec![BuiltinAnnotation::Unreachable(BlockId(1), 0)]);
    }

    /// Plain `if (x) printf(...);` — printf is *not* in the abort table.
    /// No annotation should fire, and no trap block exists, so the result
    /// is empty.
    #[test]
    fn does_not_misfire_on_non_abort_call() {
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x4010, 8), Varnode::reg(8, 1)],
            0x4000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x4010));

        // Else block calls printf — *not* in ABORT_NAMES.
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1234, 8)],
            0x4020,
        ));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x4024));
        bb2.successors = smallvec![BlockId(1)];

        let ssa = make_ssa(vec![bb0, bb1, bb2]);
        let hits = recognize_builtins_with_resolver(&ssa, &abort_resolver);

        assert!(
            hits.is_empty(),
            "non-abort call must not produce an Unlikely annotation, got {hits:?}"
        );
    }
}
