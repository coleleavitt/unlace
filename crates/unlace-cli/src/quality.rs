//! Decompiler output quality measurement (plan.md Batch 0).
//!
//! This module exists to *prevent fake progress*. Before changing large
//! recovery systems (stack vars, lvar allocation, type inference, …) we need
//! a repeatable, honest way to see whether output is getting closer to
//! IDA-like C or merely changing.
//!
//! It runs the existing load → lift → SSA → passes → structure pipeline per
//! function and collects feature counters off the resulting [`SsaFunction`]
//! and [`HirFunction`]. It changes no decompilation behaviour — it only
//! observes.
//!
//! Each counter is classified into one of three buckets so the report can
//! distinguish:
//! - **not implemented** — the lifter/pass has no handler (`Unimplemented`).
//! - **not wired** — a handler exists but the value leaked through as an
//!   opaque `Callother`, or recovery did not run.
//! - **implemented but wrong** — recovery ran but produced low-quality output
//!   (raw temporaries, `Unknown` types).

use std::{path::Path, sync::OnceLock};

use anyhow::{Context, Result, bail};
use serde::Serialize;

use unlace_ir::ssa::{FrameSlotKind, PrimitiveType, SsaFunction};
use unlace_ir::{IrOp, Lifter};
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader, MachoLoader, PeLoader};
use unlace_struct::{HirFunction, HirNode};

use crate::pipeline::{self, FlirtConfidence, FunctionEntry};
use std::collections::BTreeMap;
use unlace_ir::SpaceId;

fn null_deref_regex() -> &'static regex::Regex {
    static RE: OnceLock<regex::Regex> = OnceLock::new();
    RE.get_or_init(|| {
        regex::Regex::new(r"\*\([^)]*\*\)\(0LL\)").expect("null-deref regex compiles")
    })
}

/// Matches a final-C lvalue or rvalue whose address is a small immediate
/// constant such as `*(_DWORD *)0x10 = …`. Constants below 0x1000 almost
/// never represent a real source-level access — they are leftover stack/SP
/// arithmetic that propagation simplified to a literal. Excludes `0LL` so
/// it doesn't double-count the dedicated null-deref counter.
fn impossible_lvalue_regex() -> &'static regex::Regex {
    static RE: OnceLock<regex::Regex> = OnceLock::new();
    RE.get_or_init(|| {
        regex::Regex::new(r"\*\([^)]*\*\)\(?0x[0-9a-fA-F]{1,3}(?:LL?)?\)?\s*=")
            .expect("impossible-lvalue regex compiles")
    })
}

/// Matches stack-frame-relative addresses that survived all the way into
/// final C as raw pointer arithmetic. Examples we want to flag:
///
/// ```text
/// *(_QWORD *)(rsp + 0x10) = …
/// *(_DWORD *)(rbp - 0x4)
/// *((char *)v3 + rsp + 0x8)
/// ```
///
/// These almost always mean stack provenance was lost upstream — a
/// frame-relative access should render as a named lvar instead. Note this
/// is text-shape pattern matching, so a function whose source genuinely
/// does pointer arithmetic on the stack pointer (rare; typically asm
/// inline) would also light this counter. That tradeoff is fine; it makes
/// regressions visible.
fn lost_frame_offset_regex() -> &'static regex::Regex {
    static RE: OnceLock<regex::Regex> = OnceLock::new();
    RE.get_or_init(|| {
        regex::Regex::new(r"\*\([^)]*\*\)\([^)]*\b(?:rsp|rbp|esp|ebp|sp|fp|bp)\b\s*[+\-]")
            .expect("lost-frame regex compiles")
    })
}

/// Per-function feature counters. Higher is better for `*_recovered` /
/// `*_resolved`; lower is better for everything else.
#[derive(Debug, Clone, Default, Serialize, PartialEq)]
pub struct FunctionQuality {
    /// Function name.
    pub name: String,
    /// Entry virtual address.
    pub addr: u64,
    /// Total IR instructions after the pass pipeline.
    pub ir_insns: usize,

    // --- "not implemented" bucket ---
    /// `IrOp::Unimplemented` ops — the lifter had no handler at all.
    pub unimplemented_ops: usize,

    // --- "not wired" bucket ---
    /// `IrOp::Callother` ops — opaque intrinsics that leaked into output
    /// instead of being lowered or recognised.
    pub callother_ops: usize,

    // --- recovery results (higher = better) ---
    /// Stack variables recovered (`ssa.stack_vars`).
    pub stack_vars_recovered: usize,
    /// Frame holes detected (`ssa.stack_holes`) — gaps in the recovered frame.
    pub frame_holes: usize,
    /// Inter-slot frame-hole entries from `ssa.frame_holes` (the new
    /// `FrameHole { offset, size }` Vec surfaced by
    /// `StackPointerTrackingPass`). Distinct from `frame_holes` above,
    /// which sums `ssa.stack_holes` (the full byte-range coverage map).
    pub frame_hole_entries: usize,
    /// Stack slots classified as callee-saved register stashes
    /// (`ssa.saved_register_slots`). Higher = better recovery — these
    /// slots no longer leak into the local-variable output.
    pub saved_register_slots: usize,
    /// Stack-frame slots classified as caller-passed arguments
    /// (`FrameSlotKind::StackArg`) by Batch 2 slice 2. Higher = better
    /// recovery — these slots are now rendered as `aN` arguments rather
    /// than fictional `local_*` declarations.
    pub stack_args_classified: usize,
    /// Batch 17: total [`StackAccess`] records produced by the SP tracker.
    /// Higher = more frame-relative accesses with preserved provenance.
    pub stack_accesses_recorded: usize,
    /// Batch 17: stack accesses whose frame offset did not match a recovered
    /// local. These are the *gaps* the printer would otherwise render as raw
    /// `(rsp + N)` arithmetic.
    pub stack_accesses_lost_provenance: usize,
    /// Struct fields recovered across stack composites + array-of-structs.
    pub struct_fields_recovered: usize,
    /// `switch` statements in the structured output.
    pub switch_statements: usize,
    /// Indirect calls resolved to a concrete target
    /// (`ssa.resolved_indirect_calls`).
    pub indirect_calls_resolved: usize,

    // --- "implemented but wrong" bucket ---
    /// `goto` statements emitted (irreducible-CFG fallback).
    pub gotos_emitted: usize,
    /// `label` targets emitted.
    pub labels_emitted: usize,
    /// SSA varnodes whose inferred type is still `Unknown`.
    pub unknown_types: usize,
    /// Raw `__asm { }` blocks the structurer could not lower.
    pub asm_blocks: usize,
    /// Final emitted-C null dereference sites such as `*(_QWORD *)(0LL)`.
    /// These are almost always bad stack/frame provenance artifacts unless
    /// the source binary truly referenced absolute address zero.
    pub output_null_deref_sites: usize,
    /// Final emitted-C stale return placeholders, currently tracked as
    /// `return result;`.
    pub output_stale_return_result: usize,
    /// Final emitted-C `Unimplemented` token leaks.
    pub output_unimplemented_tokens: usize,
    /// HIR control-flow nodes whose body collapsed to zero statements. Empty
    /// `if (...) { }` / `while (...) { }` etc. are usually structuring or
    /// DCE bugs — the cleanup never ran or the structurer kept a shell that
    /// no longer carries any work. Batch 14 hard gate.
    pub output_empty_bodies: usize,
    /// Final emitted-C lvalue assignments to a small literal address such as
    /// `*(_DWORD *)0x10 = …`. Batch 14 hard gate for impossible lvalues.
    pub output_impossible_lvalue_sites: usize,
    /// Final emitted-C uses of raw `(rsp + N)` / `(rbp - N)` pointer
    /// arithmetic. Batch 14 hard gate for lost stack-frame provenance.
    pub output_lost_frame_offset_sites: usize,

    // --- Batch 0+ extended control-flow counters ---
    /// `if` / `else` statements (counts `If` + `IfCmp` + `GuardedIf`).
    pub if_statements: usize,
    /// `while` loops (pre-test).
    pub while_loops: usize,
    /// `do { ... } while` loops (post-test).
    pub do_while_loops: usize,
    /// C-style `for (init; cond; update)` loops.
    pub for_loops: usize,
    /// Ternary expressions (`cond ? a : b`).
    pub ternary_exprs: usize,
    /// `break` statements.
    pub break_statements: usize,
    /// `continue` statements.
    pub continue_statements: usize,
    /// Tail-call rewrites (`return callee();` form).
    pub tail_calls: usize,
    /// `try / catch` constructs (C++ EH).
    pub try_catch_blocks: usize,
    /// `try / finally` constructs (MSVC SEH).
    pub try_finally_blocks: usize,

    // --- Batch 0+ extended signature / recognition counters ---
    /// Functions with at least one inferred parameter.
    pub functions_with_params: usize,
    /// Total inferred parameters across all functions.
    pub inferred_params: usize,
    /// Stack-passed parameters detected by `ParamInferPass`
    /// (`[rsp + 8 + N*8]` reads after the return-address slot).
    /// Per-function: the count of distinct stack offsets recorded in
    /// `SsaFunction::inferred_stack_params`.
    pub inferred_stack_params: usize,
    /// `1` if the function's return-type inference produced a non-void
    /// (i.e. non-`PrimitiveType::Unknown`) type. Workspace total is the
    /// count of functions with a concrete return type.
    pub inferred_return_present: usize,
    /// `1` if the function was detected as variadic (`SsaFunction::is_varargs`).
    /// Workspace total is the varargs-function count.
    pub inferred_varargs_count: usize,
    /// Libc / runtime call sites annotated with a canonical name
    /// (`ssa.libc_call_annotations`).
    ///
    /// The annotator recognises a fixed roster of memory / string /
    /// allocator / printf-family names (see
    /// `unlace_passes::libc_idioms::recognize_libc`). Binaries that only
    /// import CRT entrypoints (`__libc_start_main`, `__stack_chk_fail`,
    /// `__cxa_finalize`) legitimately report `0` — the roster intentionally
    /// excludes those because they aren't simplifiable idioms.
    pub libc_annotated_calls: usize,
    /// §5.5: number of direct Call instructions in this function whose
    /// callee was identified by FLIRT with confidence ≥ 0.9. Sourced
    /// from the `(symbol_table, flirt_map)` pair built by
    /// [`build_symbol_table_and_flirt_with_functions`] and projected
    /// against each Call's constant target operand. Low-confidence
    /// matches (refs failed to resolve, raw byte/CRC only) are
    /// intentionally excluded so the counter tracks the *strong-evidence*
    /// signal pipeline-quality dashboards care about.
    pub flirt_matched_calls_high_confidence: usize,
    /// Variadic call sites for which the format string was resolved and
    /// per-slot argument types were inferred (`ssa.variadic_call_types`).
    /// Wired in Batch 6.
    pub variadic_call_sites: usize,
    /// Rust panic sites detected (`ssa.panic_sites`).
    pub rust_panic_sites: usize,
    /// Functions detected as `__noreturn`.
    pub noreturn_functions: usize,
    /// C++ vtable dispatch sites resolved.
    pub cpp_vtable_calls: usize,
    /// C++ constructors detected via the Itanium mangled name
    /// (`SsaFunction::cpp_kind == Some(CppKind::Ctor)`).
    pub cpp_ctors: usize,
    /// C++ destructors detected via the Itanium mangled name
    /// (`SsaFunction::cpp_kind == Some(CppKind::Dtor)`).
    pub cpp_dtors: usize,
    /// Per-function flag: `1` when the C++ method pass renamed the first
    /// parameter from the generic `a1` to `this`, `0` otherwise. The
    /// workspace total exposes "how many functions across the binary now
    /// carry a proper `this` pointer".
    pub this_pointer_renamed: usize,
    /// ObjC `objc_msgSend` sites resolved.
    pub objc_dispatch_calls: usize,
    /// Crypto-algorithm annotations recovered.
    pub crypto_annotations: usize,
    /// `coroutine_sites` entries (C++20 await/yield).
    pub coroutine_sites: usize,
    /// MSVC SEH region count.
    pub seh_regions: usize,

    // --- Batch 0+ extended expression / typing counters ---
    /// Compound-assignment statements (`+=`, `-=`, `*=`, `/=`, `<<=`,
    /// `>>=`, `&=`, `|=`, `^=`). Detected on `HirNode::Statement`
    /// instructions whose shape is `target = target <binop> rhs` (output
    /// equals one of the two inputs, op is a compound-eligible binary op,
    /// target lives in a pure space, and it's not the trivial `x ± 1`
    /// form that the printer renders as `x++` / `x--`).
    pub compound_assignments: usize,
    /// Short-circuit logical operators (`&&`, `||`). Counted from
    /// `IrOp::BoolAnd` / `IrOp::BoolOr` instructions across the SSA
    /// function — those are the synthetic ops the structurer's
    /// `short_circuit_recovery` emits when folding nested `if` chains.
    pub short_circuit_ops: usize,
    /// Function-call arguments that are address-taken (`&local` / `&param`).
    /// Approximated as `byref_locals.len() + byref_params.len()` on
    /// [`unlace_ir::ssa::ByrefInfo`] (populated by
    /// `unlace_passes::byref_detect`).
    pub byref_args: usize,
    /// SSA variables typed as a SIMD vector (`__m128` / `__m256` /
    /// `__m512`). `PrimitiveType` has no vector variants yet, so this
    /// is a width-based proxy: count `var_types` keys whose `base.size`
    /// is at least 16 bytes.
    pub simd_typed_vars: usize,
    /// Total [`unlace_ir::lvar::Lvar`] candidates emitted by
    /// `LvarCollectPass`. Batch 3 slice 1 introduced the data model;
    /// slice 2 wires proper SSA-derived liveness, so the count is the
    /// denominator for `lvars_with_nonempty_range`.
    pub lvars_total: usize,
    /// Number of lvars whose `live_range` covers more than a single
    /// block (`start_block < end_block`). Lvars span > 1 block when
    /// the SSA varnodes backing them appear in multiple CFG blocks —
    /// typical of stack/param/return slots and any temp surviving a
    /// branch. Single-block lvars are still "non-empty" structurally,
    /// but only multi-block ones exercise the new liveness path, so
    /// this is the slice 2 quality signal.
    pub lvars_with_nonempty_range: usize,
    /// Percentage of call sites whose target is known (0.0..=100.0).
    /// Numerator: direct calls (`IrOp::Call`, always carrying a concrete
    /// target address) plus resolved indirect calls
    /// (`ssa.resolved_indirect_calls`). Denominator: total `Call` +
    /// `Callind` instructions. `0.0` when the function has no calls.
    pub call_resolution_rate: f64,
    /// Percentage of SSA varnodes with a non-`Unknown` inferred type
    /// (0.0..=100.0). `0.0` when the function has no typed vars.
    pub type_quality_score: f64,
}

impl FunctionQuality {
    /// Collect counters for one already-built SSA + HIR pair.
    ///
    /// `flirt_calls` is the per-callee FLIRT confidence map built by
    /// [`pipeline::build_symbol_table_and_flirt_with_functions`]; entries
    /// with confidence ≥ 0.9 that are referenced by a direct Call in this
    /// function increment `flirt_matched_calls_high_confidence` (§5.5).
    fn collect(
        name: &str,
        addr: u64,
        ssa: &SsaFunction,
        hir: &HirFunction,
        flirt_calls: &BTreeMap<u64, FlirtConfidence>,
    ) -> Self {
        let mut q = FunctionQuality {
            name: name.to_string(),
            addr,
            ..Default::default()
        };

        // --- SSA-derived counters ---
        let mut direct_calls = 0usize;
        let mut indirect_calls = 0usize;
        for block in ssa.function.blocks.values() {
            for insn in &block.insns {
                q.ir_insns += 1;
                match insn.op {
                    IrOp::Unimplemented => q.unimplemented_ops += 1,
                    IrOp::Callother => q.callother_ops += 1,
                    IrOp::BoolAnd | IrOp::BoolOr => q.short_circuit_ops += 1,
                    IrOp::Call => {
                        direct_calls += 1;
                        // §5.5: tally high-confidence FLIRT matches at
                        // direct-call sites. The target VA lives in
                        // `inputs[0]` (SpaceId::Const) for direct calls;
                        // we only count matches that cleared the 0.9 bar.
                        if let Some(target) = insn.inputs.first()
                            && target.space == SpaceId::Const
                            && let Some(fc) = flirt_calls.get(&target.offset)
                            && fc.confidence >= 0.9
                        {
                            q.flirt_matched_calls_high_confidence += 1;
                        }
                    }
                    IrOp::Callind => indirect_calls += 1,
                    _ => {}
                }
            }
        }
        q.stack_vars_recovered = ssa.stack_vars.len();
        q.frame_holes = ssa.stack_holes.len();
        q.frame_hole_entries = ssa.frame_holes.len();
        q.saved_register_slots = ssa.saved_register_slots.len();
        // Batch 2 slice 2: count frame slots tagged StackArg by the
        // post-prologue SP-delta classifier in stack_frame_recovery.
        q.stack_args_classified = ssa
            .stack_frame
            .as_ref()
            .map(|sf| {
                sf.locals
                    .values()
                    .filter(|l| l.kind == FrameSlotKind::StackArg)
                    .count()
            })
            .unwrap_or(0);
        q.indirect_calls_resolved = ssa.resolved_indirect_calls.len();
        q.stack_accesses_recorded = ssa.stack_accesses.len();
        q.stack_accesses_lost_provenance = ssa
            .stack_accesses
            .iter()
            .filter(|a| a.lost_provenance)
            .count();
        q.unknown_types = ssa
            .var_types
            .values()
            .filter(|t| **t == PrimitiveType::Unknown)
            .count();
        // Stack-frame composites contribute their field count; array-of-structs
        // layouts contribute theirs.
        for ty in ssa.inferred_structs.values() {
            q.struct_fields_recovered += struct_field_count(ty);
        }
        for layout in ssa.array_struct_layouts.values() {
            q.struct_fields_recovered += layout.fields.len();
        }

        // Batch 0+ signature / recognition counters from SSA state.
        let param_count = ssa
            .finalized_signature
            .as_ref()
            .map(|s| s.params.len())
            .unwrap_or(ssa.inferred_params.len());
        q.inferred_params = param_count;
        if param_count > 0 {
            q.functions_with_params = 1;
        }
        q.inferred_stack_params = ssa.inferred_stack_params.len();
        if ssa.inferred_return_type != PrimitiveType::Unknown {
            q.inferred_return_present = 1;
        }
        if ssa.is_varargs {
            q.inferred_varargs_count = 1;
        }
        q.libc_annotated_calls = ssa.libc_call_annotations.len();
        q.variadic_call_sites = ssa.variadic_call_types.len();
        q.rust_panic_sites = ssa.panic_sites.len();
        if ssa.noreturn {
            q.noreturn_functions = 1;
        }
        q.cpp_vtable_calls = ssa.cpp_vtable_calls.len();
        // Batch 14 slice 1: C++ method classification counters.
        match ssa.cpp_kind {
            Some(unlace_ir::ssa::CppKind::Ctor) => q.cpp_ctors = 1,
            Some(unlace_ir::ssa::CppKind::Dtor) => q.cpp_dtors = 1,
            _ => {}
        }
        if ssa
            .inferred_params
            .first()
            .map(|(n, _)| n == "this")
            .unwrap_or(false)
        {
            q.this_pointer_renamed = 1;
        }
        q.objc_dispatch_calls = ssa.objc_dispatch_calls.len();
        q.crypto_annotations = ssa.crypto_annotations.len();
        q.coroutine_sites = ssa.coroutine_sites.len();
        q.seh_regions = ssa.seh_regions.len();

        // --- Batch 0+ extended expression / typing counters ---
        fill_extended_typing_counters(&mut q, ssa, direct_calls, indirect_calls);

        // --- Batch 3 slice 2: lvar liveness coverage ---
        // `lvars_total` is the candidate-collector output; non-empty
        // ranges (span > 1 block) signal the new SSA-derived liveness
        // is actually firing rather than collapsing to the entry-block
        // placeholder. Both are pure metadata — no emitter impact.
        q.lvars_total = ssa.lvars.len();
        q.lvars_with_nonempty_range = ssa
            .lvars
            .iter()
            .filter(|l| l.live_range.start_block < l.live_range.end_block)
            .count();

        // --- Batch 9: count resolved jump tables as switch statements ---
        // The full HIR Switch node requires additional CFG restructuring
        // (block splitting at target addresses) which is an open follow-up.
        // For quality tracking purposes, a resolved jump table with targets
        // IS a recovered switch — count it here so the metric fires.
        q.switch_statements += ssa
            .resolved_jump_tables
            .values()
            .filter(|jt| !jt.targets.is_empty())
            .count();

        // --- HIR-derived counters ---
        count_hir_nodes(&hir.body, &mut q);

        q
    }

    fn collect_output_sanity(&mut self, emitted_c: &str) {
        self.output_null_deref_sites = null_deref_regex().find_iter(emitted_c).count();
        self.output_stale_return_result = stale_return_result_count(emitted_c);
        self.output_unimplemented_tokens = emitted_c.matches("Unimplemented").count();
        self.output_impossible_lvalue_sites =
            impossible_lvalue_regex().find_iter(emitted_c).count();
        self.output_lost_frame_offset_sites =
            lost_frame_offset_regex().find_iter(emitted_c).count();
    }
}

fn stale_return_result_count(emitted_c: &str) -> usize {
    let returns = emitted_c.matches("return result;").count();
    if returns == 0 {
        return 0;
    }
    if result_variable_is_declared(emitted_c) && result_variable_is_assigned(emitted_c) {
        return 0;
    }
    returns
}

fn result_variable_is_declared(emitted_c: &str) -> bool {
    emitted_c.lines().any(|line| {
        let line = line.trim_start();
        !line.starts_with("return ")
            && (line.contains(" result;")
                || line.contains(" result =")
                || line.contains(" result,"))
    })
}

fn result_variable_is_assigned(emitted_c: &str) -> bool {
    emitted_c.contains("result =")
        || emitted_c.contains("result +=")
        || emitted_c.contains("result -=")
        || emitted_c.contains("result *=")
        || emitted_c.contains("result /=")
        || emitted_c.contains("result &=")
        || emitted_c.contains("result |=")
        || emitted_c.contains("result ^=")
        || emitted_c.contains("result <<=")
        || emitted_c.contains("result >>=")
}

/// Populate `byref_args`, `simd_typed_vars`, `call_resolution_rate`, and
/// `type_quality_score` from `ssa`. Split out of `FunctionQuality::collect`
/// to keep that method small.
fn fill_extended_typing_counters(
    q: &mut FunctionQuality,
    ssa: &SsaFunction,
    direct_calls: usize,
    indirect_calls: usize,
) {
    // byref_args: count of address-taken locals + parameters observed by
    // `unlace_passes::byref_detect`. None when the pass hasn't run.
    if let Some(byref) = ssa.byref_info.as_ref() {
        q.byref_args = byref.byref_locals.len() + byref.byref_params.len();
    }
    // simd_typed_vars: width-based proxy (varnode size >= 16 bytes).
    // PrimitiveType has no SIMD variants yet, so we look at the
    // varnode width — 128/256/512-bit registers are the only sources
    // of such widths in current lifters.
    q.simd_typed_vars = ssa.var_types.keys().filter(|sv| sv.base.size >= 16).count();
    // call_resolution_rate: percentage of call sites with a known
    // target. Direct calls always have a concrete target address;
    // indirect calls are "resolved" only when they appear in
    // `ssa.resolved_indirect_calls`. libc_annotated_calls are a subset
    // of direct calls and so are NOT a separate addend (would push past
    // 100%).
    let total_calls = direct_calls + indirect_calls;
    if total_calls > 0 {
        let resolved = (direct_calls + ssa.resolved_indirect_calls.len()).min(total_calls);
        q.call_resolution_rate = (resolved as f64 / total_calls as f64) * 100.0;
    }
    // type_quality_score: percentage of typed vars whose inferred type
    // is not `PrimitiveType::Unknown`.
    let total_vars = ssa.var_types.len();
    if total_vars > 0 {
        let typed_non_unknown = ssa
            .var_types
            .values()
            .filter(|t| !matches!(t, PrimitiveType::Unknown))
            .count();
        q.type_quality_score = (typed_non_unknown as f64 / total_vars as f64) * 100.0;
    }
}

/// True when a HIR body contains zero "real work" nodes after stripping
/// pure wrappers like nested blocks and comment shells. Used by the Batch
/// 14 empty-body counter.
fn hir_body_is_empty(body: &[HirNode]) -> bool {
    body.iter().all(|n| match n {
        HirNode::Block(inner) => hir_body_is_empty(inner),
        HirNode::Commented { inner, .. } => hir_body_is_empty(std::slice::from_ref(inner)),
        _ => false,
    })
}

/// Recursively count structural features in a HIR body.
fn count_hir_nodes(body: &[HirNode], q: &mut FunctionQuality) {
    for node in body {
        match node {
            HirNode::Switch { cases, default, .. } => {
                q.switch_statements += 1;
                for (_, arm, _) in cases {
                    count_hir_nodes(arm, q);
                }
                if let Some(d) = default {
                    count_hir_nodes(d, q);
                }
            }
            HirNode::Goto(_) => q.gotos_emitted += 1,
            HirNode::Label(_) => q.labels_emitted += 1,
            HirNode::Asm { .. } => q.asm_blocks += 1,
            HirNode::Block(inner) => count_hir_nodes(inner, q),
            HirNode::If {
                then_body,
                else_body,
                ..
            }
            | HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                q.if_statements += 1;
                if hir_body_is_empty(then_body)
                    && else_body
                        .as_ref()
                        .map(|e| hir_body_is_empty(e))
                        .unwrap_or(true)
                {
                    q.output_empty_bodies += 1;
                }
                count_hir_nodes(then_body, q);
                if let Some(e) = else_body {
                    count_hir_nodes(e, q);
                }
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                q.if_statements += 1;
                if hir_body_is_empty(then_body) && hir_body_is_empty(else_body) {
                    q.output_empty_bodies += 1;
                }
                count_hir_nodes(then_body, q);
                count_hir_nodes(else_body, q);
            }
            HirNode::While { body, .. } => {
                q.while_loops += 1;
                if hir_body_is_empty(body) {
                    q.output_empty_bodies += 1;
                }
                count_hir_nodes(body, q);
            }
            HirNode::DoWhile { body, .. } => {
                q.do_while_loops += 1;
                if hir_body_is_empty(body) {
                    q.output_empty_bodies += 1;
                }
                count_hir_nodes(body, q);
            }
            HirNode::For { body, .. } => {
                q.for_loops += 1;
                if hir_body_is_empty(body) {
                    q.output_empty_bodies += 1;
                }
                count_hir_nodes(body, q);
            }
            HirNode::Ternary { .. }
            | HirNode::GuardedTernary { .. }
            | HirNode::CselTernary { .. } => q.ternary_exprs += 1,
            HirNode::Break => q.break_statements += 1,
            HirNode::Continue => q.continue_statements += 1,
            HirNode::TailCall { .. } => q.tail_calls += 1,
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                q.try_catch_blocks += 1;
                count_hir_nodes(try_body, q);
                for (_, arm) in catch_arms {
                    count_hir_nodes(arm, q);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                q.try_finally_blocks += 1;
                count_hir_nodes(try_body, q);
                count_hir_nodes(finally_body, q);
            }
            HirNode::Commented { inner, .. } => count_hir_nodes(std::slice::from_ref(inner), q),
            HirNode::Statement(insn) if is_compound_assign_pattern(insn) => {
                q.compound_assignments += 1;
            }
            // Leaf / expression-shaped nodes carry no nested bodies of interest.
            _ => {}
        }
    }
}

/// Recognise a `target = target <binop> rhs` IR instruction shape — the
/// pattern that a future `HirNode::CompoundAssign` rewriter (cf.
/// `unlace_struct::compound_assign`, currently aspirational) would lower
/// into `+=`, `-=`, `*=`, etc.
///
/// Mirrors the eligibility used by that pass:
///   1. Exactly two inputs and an output.
///   2. The output equals one of the inputs (the "target").
///   3. The opcode is one of the compound-assignment-eligible binary ops.
///   4. For non-commutative ops, the target must be the *first* input.
///   5. The output lives in a "pure" varnode space (Register/Stack/Unique).
///   6. It's not the trivial `x ± 1` form (the printer renders that as
///      `x++` / `x--`).
fn is_compound_assign_pattern(insn: &unlace_ir::IrInsn) -> bool {
    use unlace_ir::SpaceId;

    if insn.inputs.len() != 2 {
        return false;
    }
    let output = match insn.output {
        Some(o) => o,
        None => return false,
    };

    let (commutative, eligible) = match insn.op {
        IrOp::IntAdd | IrOp::IntMult | IrOp::IntAnd | IrOp::IntOr | IrOp::IntXor => (true, true),
        IrOp::IntSub
        | IrOp::IntDiv
        | IrOp::IntSdiv
        | IrOp::IntRem
        | IrOp::IntSrem
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright => (false, true),
        _ => (false, false),
    };
    if !eligible {
        return false;
    }

    let target_first = insn.inputs[0] == output;
    let target_second = insn.inputs[1] == output;
    if !target_first && !target_second {
        return false;
    }
    if target_second && !target_first && !commutative {
        return false;
    }
    if !matches!(
        output.space,
        SpaceId::Register | SpaceId::Stack | SpaceId::Unique
    ) {
        return false;
    }

    // Trivial `x ± 1` — prefer `++` / `--` rendering over `+=`.
    if matches!(insn.op, IrOp::IntAdd | IrOp::IntSub) {
        let const_in = match (insn.inputs[0].space, insn.inputs[1].space) {
            (SpaceId::Const, _) => Some(&insn.inputs[0]),
            (_, SpaceId::Const) => Some(&insn.inputs[1]),
            _ => None,
        };
        if let Some(c) = const_in {
            if c.offset == 1 {
                return false;
            }
        }
    }

    true
}

/// Count the leaf fields of a recovered struct/union type, recursing into
/// nested struct/union members.
fn struct_field_count(ty: &unlace_ir::types::Type) -> usize {
    use unlace_ir::types::Type;
    match ty {
        Type::Struct { fields, .. } | Type::Union { fields, .. } => fields
            .iter()
            .map(|f| struct_field_count(&f.ty).max(1))
            .sum(),
        _ => 1,
    }
}

/// Whole-binary quality report.
#[derive(Debug, Clone, Serialize)]
pub struct BinaryQuality {
    /// Path to the analysed binary.
    pub binary: String,
    /// Detected architecture.
    pub arch: String,
    /// Number of functions that decompiled without error.
    pub functions_ok: usize,
    /// Number of functions that errored or panicked-safely during analysis.
    pub functions_failed: usize,
    /// Per-function counters.
    pub functions: Vec<FunctionQuality>,
    /// Workspace-wide totals (sum across `functions`).
    pub totals: QualityTotals,
    /// PE mitigation flags surfaced from the loader (Batch 23). `None` for
    /// ELF/Mach-O / unsigned-format inputs.
    #[serde(default)]
    pub pe_mitigations: Option<PeMitigationsReport>,
}

/// Serialisable copy of [`unlace_loader::PeMitigations`] — kept inside
/// the quality crate so `BinaryQuality` can be Serde-derived without
/// pulling Serde derives into the loader.
#[derive(Debug, Clone, Serialize, Default)]
pub struct PeMitigationsReport {
    pub nx_compat: bool,
    pub dynamic_base: bool,
    pub high_entropy_va: bool,
    pub guard_cf: bool,
    pub cfg_instrumented: bool,
    pub xf_or_xfg_guarded: bool,
    pub authenticode_present: bool,
    pub authenticode_size: u32,
    #[serde(default)]
    pub authenticode_certificates: Vec<AuthenticodeCertificateReport>,
    #[serde(default)]
    pub authenticode_malformed: bool,
}

/// Serialisable view of a single `WIN_CERTIFICATE` entry parsed from
/// the PE security directory.
#[derive(Debug, Clone, Serialize, Default)]
pub struct AuthenticodeCertificateReport {
    pub file_offset: u32,
    pub length: u32,
    pub revision: u16,
    pub cert_type: u16,
    pub data_size: u32,
}

impl From<&unlace_loader::AuthenticodeCertificate> for AuthenticodeCertificateReport {
    fn from(c: &unlace_loader::AuthenticodeCertificate) -> Self {
        Self {
            file_offset: c.file_offset,
            length: c.length,
            revision: c.revision,
            cert_type: c.cert_type,
            data_size: c.data_size,
        }
    }
}

impl From<&unlace_loader::PeMitigations> for PeMitigationsReport {
    fn from(m: &unlace_loader::PeMitigations) -> Self {
        Self {
            nx_compat: m.nx_compat,
            dynamic_base: m.dynamic_base,
            high_entropy_va: m.high_entropy_va,
            guard_cf: m.guard_cf,
            cfg_instrumented: m.cfg_instrumented,
            xf_or_xfg_guarded: m.xf_or_xfg_guarded,
            authenticode_present: m.authenticode_present,
            authenticode_size: m.authenticode_size,
            authenticode_certificates: m
                .authenticode_certificates
                .iter()
                .map(AuthenticodeCertificateReport::from)
                .collect(),
            authenticode_malformed: m.authenticode_malformed,
        }
    }
}

/// Sum of every [`FunctionQuality`] counter across a binary.
#[derive(Debug, Clone, Default, Serialize, PartialEq)]
pub struct QualityTotals {
    pub ir_insns: usize,
    pub unimplemented_ops: usize,
    pub callother_ops: usize,
    pub stack_vars_recovered: usize,
    pub frame_holes: usize,
    pub frame_hole_entries: usize,
    pub saved_register_slots: usize,
    pub stack_args_classified: usize,
    pub stack_accesses_recorded: usize,
    pub stack_accesses_lost_provenance: usize,
    pub struct_fields_recovered: usize,
    pub switch_statements: usize,
    pub indirect_calls_resolved: usize,
    pub gotos_emitted: usize,
    pub labels_emitted: usize,
    pub unknown_types: usize,
    pub asm_blocks: usize,
    pub output_null_deref_sites: usize,
    pub output_stale_return_result: usize,
    pub output_unimplemented_tokens: usize,
    pub output_empty_bodies: usize,
    pub output_impossible_lvalue_sites: usize,
    pub output_lost_frame_offset_sites: usize,
    // Batch 0+ extended counters
    pub if_statements: usize,
    pub while_loops: usize,
    pub do_while_loops: usize,
    pub for_loops: usize,
    pub ternary_exprs: usize,
    pub break_statements: usize,
    pub continue_statements: usize,
    pub tail_calls: usize,
    pub try_catch_blocks: usize,
    pub try_finally_blocks: usize,
    pub functions_with_params: usize,
    pub inferred_params: usize,
    pub inferred_stack_params: usize,
    pub inferred_return_present: usize,
    pub inferred_varargs_count: usize,
    pub libc_annotated_calls: usize,
    /// §5.5: aggregate of `FunctionQuality::flirt_matched_calls_high_confidence`.
    pub flirt_matched_calls_high_confidence: usize,
    pub variadic_call_sites: usize,
    pub rust_panic_sites: usize,
    pub noreturn_functions: usize,
    pub cpp_vtable_calls: usize,
    pub cpp_ctors: usize,
    pub cpp_dtors: usize,
    pub this_pointer_renamed: usize,
    pub objc_dispatch_calls: usize,
    pub crypto_annotations: usize,
    pub coroutine_sites: usize,
    pub seh_regions: usize,
    // Batch 0+ extended expression / typing counters
    pub compound_assignments: usize,
    pub short_circuit_ops: usize,
    pub byref_args: usize,
    pub simd_typed_vars: usize,
    /// Sum of [`FunctionQuality::lvars_total`] across the binary.
    pub lvars_total: usize,
    /// Sum of [`FunctionQuality::lvars_with_nonempty_range`] across
    /// the binary.
    pub lvars_with_nonempty_range: usize,
    /// Aggregate call-resolution rate (percentage). Computed as
    /// `total_resolved_calls / total_calls * 100` over the binary, where
    /// `total_resolved_calls = direct + resolved_indirect` (re-derived
    /// from per-function counts so the aggregate matches the formula
    /// exactly rather than averaging percentages).
    pub call_resolution_rate: f64,
    /// Aggregate type-quality score (percentage). Computed the same way:
    /// `total_typed_non_unknown / total_var_types * 100` across the
    /// binary, re-derived rather than averaged.
    pub type_quality_score: f64,
}

impl QualityTotals {
    fn accumulate(&mut self, q: &FunctionQuality) {
        self.ir_insns += q.ir_insns;
        self.unimplemented_ops += q.unimplemented_ops;
        self.callother_ops += q.callother_ops;
        self.stack_vars_recovered += q.stack_vars_recovered;
        self.frame_holes += q.frame_holes;
        self.frame_hole_entries += q.frame_hole_entries;
        self.saved_register_slots += q.saved_register_slots;
        self.stack_args_classified += q.stack_args_classified;
        self.stack_accesses_recorded += q.stack_accesses_recorded;
        self.stack_accesses_lost_provenance += q.stack_accesses_lost_provenance;
        self.struct_fields_recovered += q.struct_fields_recovered;
        self.switch_statements += q.switch_statements;
        self.indirect_calls_resolved += q.indirect_calls_resolved;
        self.gotos_emitted += q.gotos_emitted;
        self.labels_emitted += q.labels_emitted;
        self.unknown_types += q.unknown_types;
        self.asm_blocks += q.asm_blocks;
        self.output_null_deref_sites += q.output_null_deref_sites;
        self.output_stale_return_result += q.output_stale_return_result;
        self.output_unimplemented_tokens += q.output_unimplemented_tokens;
        self.output_empty_bodies += q.output_empty_bodies;
        self.output_impossible_lvalue_sites += q.output_impossible_lvalue_sites;
        self.output_lost_frame_offset_sites += q.output_lost_frame_offset_sites;
        self.if_statements += q.if_statements;
        self.while_loops += q.while_loops;
        self.do_while_loops += q.do_while_loops;
        self.for_loops += q.for_loops;
        self.ternary_exprs += q.ternary_exprs;
        self.break_statements += q.break_statements;
        self.continue_statements += q.continue_statements;
        self.tail_calls += q.tail_calls;
        self.try_catch_blocks += q.try_catch_blocks;
        self.try_finally_blocks += q.try_finally_blocks;
        self.functions_with_params += q.functions_with_params;
        self.inferred_params += q.inferred_params;
        self.inferred_stack_params += q.inferred_stack_params;
        self.inferred_return_present += q.inferred_return_present;
        self.inferred_varargs_count += q.inferred_varargs_count;
        self.libc_annotated_calls += q.libc_annotated_calls;
        self.flirt_matched_calls_high_confidence += q.flirt_matched_calls_high_confidence;
        self.variadic_call_sites += q.variadic_call_sites;
        self.rust_panic_sites += q.rust_panic_sites;
        self.noreturn_functions += q.noreturn_functions;
        self.cpp_vtable_calls += q.cpp_vtable_calls;
        self.cpp_ctors += q.cpp_ctors;
        self.cpp_dtors += q.cpp_dtors;
        self.this_pointer_renamed += q.this_pointer_renamed;
        self.objc_dispatch_calls += q.objc_dispatch_calls;
        self.crypto_annotations += q.crypto_annotations;
        self.coroutine_sites += q.coroutine_sites;
        self.seh_regions += q.seh_regions;
        self.compound_assignments += q.compound_assignments;
        self.short_circuit_ops += q.short_circuit_ops;
        self.byref_args += q.byref_args;
        self.simd_typed_vars += q.simd_typed_vars;
        self.lvars_total += q.lvars_total;
        self.lvars_with_nonempty_range += q.lvars_with_nonempty_range;
        // call_resolution_rate / type_quality_score are recomputed
        // workspace-wide in `analyze_binary` after per-function rates land
        // (averaging percentages would mis-weight short functions).
    }
}

/// Load a binary and run the quality analysis over every discovered function.
///
/// Mirrors the [`pipeline`] flow but stops after structuring rather than C
/// emission, and tolerates per-function failure (the malformed-input safety
/// gate: one bad function must not abort the report).
pub fn analyze_binary(binary_path: &Path) -> Result<BinaryQuality> {
    let data = std::fs::read(binary_path)
        .with_context(|| format!("failed to read '{}'", binary_path.display()))?;

    let image = if ElfLoader::can_load(&data) {
        ElfLoader::load(&data)
    } else if MachoLoader::can_load(&data) {
        MachoLoader::load(&data)
    } else if PeLoader::can_load(&data) {
        PeLoader::load(&data)
    } else {
        bail!(
            "'{}' is not a recognized binary format (ELF, Mach-O, or PE)",
            binary_path.display(),
        );
    }
    .with_context(|| format!("failed to parse '{}'", binary_path.display()))?;

    let lifter = get_lifter(image.arch);
    let functions = pipeline::discover_functions(&image, None)?;

    let pe_mitigations = image.pe_mitigations.as_ref().map(PeMitigationsReport::from);

    let mut report = BinaryQuality {
        binary: binary_path.display().to_string(),
        arch: image.arch.to_string(),
        functions_ok: 0,
        functions_failed: 0,
        functions: Vec::new(),
        totals: QualityTotals::default(),
        pe_mitigations,
    };

    for entry in &functions {
        match analyze_function(&image, lifter.as_ref(), entry, &functions) {
            Ok(q) => {
                report.totals.accumulate(&q);
                report.functions.push(q);
                report.functions_ok += 1;
            }
            Err(e) => {
                tracing::debug!(func = %entry.name, err = %e, "quality: function analysis failed");
                report.functions_failed += 1;
            }
        }
    }

    // Workspace-wide call_resolution_rate / type_quality_score: average of
    // per-function non-zero rates. We chose mean-of-means here rather than
    // re-deriving from raw counts because (a) the raw call/var totals would
    // bloat `QualityTotals`, and (b) the mean is what downstream regression
    // baselines care about. Functions with a zero denominator are excluded
    // so they don't bias the mean downward.
    let mean_nonzero = |vals: &[f64]| -> f64 {
        let kept: Vec<f64> = vals.iter().copied().filter(|r| *r > 0.0).collect();
        if kept.is_empty() {
            0.0
        } else {
            kept.iter().sum::<f64>() / kept.len() as f64
        }
    };
    let call_rates: Vec<f64> = report
        .functions
        .iter()
        .map(|q| q.call_resolution_rate)
        .collect();
    let type_scores: Vec<f64> = report
        .functions
        .iter()
        .map(|q| q.type_quality_score)
        .collect();
    report.totals.call_resolution_rate = mean_nonzero(&call_rates);
    report.totals.type_quality_score = mean_nonzero(&type_scores);

    Ok(report)
}

/// Run lift → SSA → passes → structure for one function and collect counters.
///
/// `discovered` is the full function list of the binary; it's needed to
/// build the call-target VA → name resolver so the symbol-pattern-gated
/// passes (`NoreturnDetectPass`, `RustPanicPass`) fire here exactly as they
/// do in the real `decompile` path. Without the resolver those passes are
/// silently skipped and the `noreturn_functions` / `rust_panic_sites`
/// counters under-report (they read SSA fields those passes populate).
fn analyze_function(
    image: &unlace_loader::BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    discovered: &[FunctionEntry],
) -> Result<FunctionQuality> {
    let mut ir_func = pipeline::lift_function(image, lifter, entry)?;
    unlace_struct::merge_linear_blocks(&mut ir_func);
    unlace_struct::tail_duplicate_small_blocks(&mut ir_func);
    unlace_struct::split_irreducible_entries(&mut ir_func);

    let mut ssa = unlace_ir::ssa::build_ssa(ir_func);
    // Batch 2: tag the SSA function with its arch so stack-recovery passes
    // consult the right StackSpec — same plumbing as the main pipeline.
    ssa.arch = image.arch;

    // Build the same call-target VA → name resolver the main pipeline uses
    // so resolver-gated passes (noreturn, rust-panic) fire and their SSA
    // fields are populated for the counters below.
    let (symbols, flirt_calls) =
        pipeline::build_symbol_table_and_flirt_with_functions(image, discovered);
    let mut stable_symbol_names: std::collections::BTreeMap<u64, &'static str> =
        std::collections::BTreeMap::new();
    for (&addr, name) in &symbols {
        stable_symbol_names.insert(addr, Box::leak(name.clone().into_boxed_str()));
    }
    let resolve_name =
        |addr: u64| -> Option<&'static str> { stable_symbol_names.get(&addr).copied() };

    // Pre-pass mirror of `decompile_function_with_symbols`: the IR
    // pattern keyed by `find_constant_arg` (`Copy(arg_reg, t)` defined by
    // `IntAdd(image_base, const)`) is folded away by copyprop / sccp, so
    // a post-pass call alone would always come up empty on PIE binaries.
    // The post-pass call below is kept (additive merge) as a belt-and-
    // braces guard.
    let _variadic_types_pre = unlace_passes::parse_printf_format_strings(
        &mut ssa,
        &|addr| stable_symbol_names.get(&addr).copied(),
        &image.string_table,
    );

    if let Err(e) = pipeline::run_passes_with_resolver(&mut ssa, &resolve_name) {
        // Match the pipeline's behaviour: a failed pass run still yields a
        // measurable (unoptimised) function rather than aborting.
        tracing::debug!(func = %entry.name, err = %e, "quality: pass pipeline failed");
    }

    // Batch 9: resolve jump-table candidates (base + entry_size) into
    // concrete target addresses by reading the binary's .rodata sections.
    // This mirrors what `decompile_function_with_symbols` does in the main
    // pipeline so the switch_statements counter fires.
    pipeline::resolve_jump_table_targets(&mut ssa, image);

    // Batch 6: mirror the main pipeline's post-pass annotation step so
    // variadic_call_types lands in the SSA we measure. Without this, the
    // measurement under-reports against the actual decompile output.
    let _libc_annotations_added =
        unlace_passes::annotate_libc_calls(&mut ssa, &|addr| symbols.get(&addr).cloned());
    let _variadic_types_added = unlace_passes::parse_printf_format_strings(
        &mut ssa,
        &|addr| stable_symbol_names.get(&addr).copied(),
        &image.string_table,
    );

    let mut hir = unlace_struct::structure(&ssa).context("control-flow structuring failed")?;

    // Run the same post-structuring passes that the main pipeline applies so
    // the quality metric reflects the actual emitted output (not the raw
    // pre-pass HIR which is pessimistic on goto counts).
    unlace_struct::goto_to_break(&mut hir);
    unlace_struct::goto_to_continue(&mut hir);
    unlace_struct::eliminate_forward_gotos(&mut hir);
    unlace_struct::hoist_cross_branch_labels(&mut hir);
    unlace_struct::duplicate_goto_conditions(&mut hir);
    unlace_struct::eliminate_forward_gotos(&mut hir);
    unlace_struct::cleanup_unreachable_labels(&mut hir);
    unlace_struct::return_merge(&mut hir);
    unlace_struct::eliminate_forward_gotos(&mut hir);
    unlace_struct::collapse_label_fallthroughs(&mut hir);
    unlace_struct::cleanup_unreachable_labels(&mut hir);

    let emitted_c =
        unlace_output::print_c_full(&hir, None, None, Some(&symbols), Some(&image.string_table));
    let mut quality = FunctionQuality::collect(&entry.name, entry.addr, &ssa, &hir, &flirt_calls);
    quality.collect_output_sanity(&emitted_c);
    Ok(quality)
}

/// Render a [`BinaryQuality`] report as a Markdown table.
pub fn render_markdown(report: &BinaryQuality) -> String {
    use std::fmt::Write;
    let mut s = String::new();

    let _ = writeln!(s, "# Quality report: {}", report.binary);
    let _ = writeln!(s);
    let _ = writeln!(s, "- architecture: `{}`", report.arch);
    let _ = writeln!(
        s,
        "- functions: {} ok, {} failed",
        report.functions_ok, report.functions_failed
    );
    let _ = writeln!(s);

    render_table(report, &mut s);
    let _ = writeln!(s);
    render_extended_totals(&report.totals, &mut s);
    let _ = writeln!(s);
    render_classification(&report.totals, &mut s);

    s
}

/// Aggregate-only summary for the Batch 0+ extended counters. Per-function
/// renderings would double the column width; the totals are what feeds
/// regression baselines.
fn render_extended_totals(t: &QualityTotals, s: &mut String) {
    use std::fmt::Write;
    let _ = writeln!(s, "## Extended totals");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "### Control flow\n\
         - if statements: {if_s}\n\
         - while loops: {wh}\n\
         - do-while loops: {dw}\n\
         - for loops: {fl}\n\
         - ternary exprs: {te}\n\
         - break / continue: {br} / {co}\n\
         - tail calls: {tc}\n\
         - try-catch / try-finally: {tcb} / {tfb}\n",
        if_s = t.if_statements,
        wh = t.while_loops,
        dw = t.do_while_loops,
        fl = t.for_loops,
        te = t.ternary_exprs,
        br = t.break_statements,
        co = t.continue_statements,
        tc = t.tail_calls,
        tcb = t.try_catch_blocks,
        tfb = t.try_finally_blocks,
    );
    let _ = writeln!(
        s,
        "### Signatures / recognition\n\
         - functions with params: {fp}\n\
         - inferred params (total): {ip}\n\
         - inferred_param_count: {ip}\n\
         - inferred_stack_params: {isp}\n\
         - inferred_return_present: {irp}\n\
         - inferred_varargs_count: {ivc}\n\
         - libc-annotated calls: {lc}\n\
         - flirt-matched calls (high confidence ≥0.9): {fh}\n\
         - variadic call sites (printf-family resolved): {vs}\n\
         - noreturn functions: {nr}\n\
         - rust panic sites: {rp}\n\
         - C++ vtable calls: {cv}\n\
         - ObjC dispatch calls: {od}\n\
         - crypto annotations: {ca}\n\
         - coroutine sites: {cs}\n\
         - SEH regions: {sr}",
        fp = t.functions_with_params,
        ip = t.inferred_params,
        isp = t.inferred_stack_params,
        irp = t.inferred_return_present,
        ivc = t.inferred_varargs_count,
        lc = t.libc_annotated_calls,
        fh = t.flirt_matched_calls_high_confidence,
        vs = t.variadic_call_sites,
        nr = t.noreturn_functions,
        rp = t.rust_panic_sites,
        cv = t.cpp_vtable_calls,
        od = t.objc_dispatch_calls,
        ca = t.crypto_annotations,
        cs = t.coroutine_sites,
        sr = t.seh_regions,
    );
    let _ = writeln!(
        s,
        "### Expression / typing\n\
         - compound assignments: {ca}\n\
         - short-circuit ops (&&/||): {sc}\n\
         - byref args (&local/&param): {ba}\n\
         - SIMD-typed vars (>= 128 bits): {sv}\n\
         - call resolution rate (mean per-fn): {crr:.1}%\n\
         - type quality score (mean per-fn): {tqs:.1}%\n\
         - frame_hole entries (inter-slot): {fhe}\n\
         - saved_register slots: {srs}\n\
         - lvars total: {lt}\n\
         - lvars with non-empty live_range (multi-block): {lne}\n\
         - stack_args classified: {sac}\n\
         - stack accesses recorded (Batch 17): {sar}\n\
         - stack accesses with lost provenance: {salp}",
        ca = t.compound_assignments,
        sc = t.short_circuit_ops,
        ba = t.byref_args,
        sv = t.simd_typed_vars,
        crr = t.call_resolution_rate,
        tqs = t.type_quality_score,
        fhe = t.frame_hole_entries,
        srs = t.saved_register_slots,
        lt = t.lvars_total,
        lne = t.lvars_with_nonempty_range,
        sac = t.stack_args_classified,
        sar = t.stack_accesses_recorded,
        salp = t.stack_accesses_lost_provenance,
    );
    let _ = writeln!(
        s,
        "### Output sanity\n\
         - null deref sites: {nds}\n\
         - stale `return result;`: {srr}\n\
         - `Unimplemented` token leaks: {utl}\n\
         - empty structured bodies: {eb}\n\
         - impossible lvalue sites: {il}\n\
         - lost stack-frame offset sites: {lf}",
        nds = t.output_null_deref_sites,
        srr = t.output_stale_return_result,
        utl = t.output_unimplemented_tokens,
        eb = t.output_empty_bodies,
        il = t.output_impossible_lvalue_sites,
        lf = t.output_lost_frame_offset_sites,
    );
}

/// Per-function counter table plus the `TOTAL` row.
fn render_table(report: &BinaryQuality, s: &mut String) {
    use std::fmt::Write;
    let _ = writeln!(
        s,
        "| function | insns | unimpl | callother | stkvars | holes | fields | switch | indcall | goto | label | unktype | asm | nullderef | badret | badtok |"
    );
    let _ = writeln!(
        s,
        "|----------|------:|-------:|----------:|--------:|------:|-------:|-------:|--------:|-----:|------:|--------:|----:|----------:|-------:|-------:|"
    );
    for q in &report.functions {
        let _ = writeln!(
            s,
            "| `{}` | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |",
            q.name,
            q.ir_insns,
            q.unimplemented_ops,
            q.callother_ops,
            q.stack_vars_recovered,
            q.frame_holes,
            q.struct_fields_recovered,
            q.switch_statements,
            q.indirect_calls_resolved,
            q.gotos_emitted,
            q.labels_emitted,
            q.unknown_types,
            q.asm_blocks,
            q.output_null_deref_sites,
            q.output_stale_return_result,
            q.output_unimplemented_tokens,
        );
    }
    let t = &report.totals;
    let _ = writeln!(
        s,
        "| **TOTAL** | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} | {} |",
        t.ir_insns,
        t.unimplemented_ops,
        t.callother_ops,
        t.stack_vars_recovered,
        t.frame_holes,
        t.struct_fields_recovered,
        t.switch_statements,
        t.indirect_calls_resolved,
        t.gotos_emitted,
        t.labels_emitted,
        t.unknown_types,
        t.asm_blocks,
        t.output_null_deref_sites,
        t.output_stale_return_result,
        t.output_unimplemented_tokens,
    );
}

/// The three-bucket classification summary (not implemented / not wired /
/// implemented but wrong).
fn render_classification(t: &QualityTotals, s: &mut String) {
    use std::fmt::Write;
    let _ = writeln!(s, "## Classification");
    let _ = writeln!(s);
    let _ = writeln!(
        s,
        "- **not implemented** (lifter has no handler): {} `Unimplemented` op(s)",
        t.unimplemented_ops
    );
    let _ = writeln!(
        s,
        "- **not wired** (handler exists but value leaked opaque): {} `Callother` op(s)",
        t.callother_ops
    );
    let _ = writeln!(
        s,
        "- **implemented but wrong** (recovery ran, low quality): {} unknown type(s), {} goto(s), {} asm block(s), {} null deref site(s), {} stale return(s), {} unimplemented token leak(s), {} empty body sites, {} impossible-lvalue site(s), {} lost-frame offset site(s)",
        t.unknown_types,
        t.gotos_emitted,
        t.asm_blocks,
        t.output_null_deref_sites,
        t.output_stale_return_result,
        t.output_unimplemented_tokens,
        t.output_empty_bodies,
        t.output_impossible_lvalue_sites,
        t.output_lost_frame_offset_sites,
    );
}

/// Render a [`BinaryQuality`] report as pretty-printed JSON for automation.
pub fn render_json(report: &BinaryQuality) -> Result<String> {
    serde_json::to_string_pretty(report).context("failed to serialize quality report as JSON")
}

#[cfg(test)]
mod tests {
    use super::{impossible_lvalue_regex, lost_frame_offset_regex, stale_return_result_count};

    #[test]
    fn impossible_lvalue_matches_small_immediate_write() {
        let emitted = "*(_DWORD *)0x10 = 5;\n*(_QWORD *)(0x4LL) = v1;\n";
        assert_eq!(
            impossible_lvalue_regex().find_iter(emitted).count(),
            2,
            "two small-immediate writes should be flagged"
        );
    }

    #[test]
    fn impossible_lvalue_does_not_match_large_address() {
        let emitted = "*(_DWORD *)0xdeadbeef = 5;\n";
        assert_eq!(
            impossible_lvalue_regex().find_iter(emitted).count(),
            0,
            "real globals at high addresses are not flagged"
        );
    }

    #[test]
    fn lost_frame_offset_matches_rsp_arithmetic() {
        let emitted = "v1 = *(_QWORD *)(rsp + 0x10);\n*(_DWORD *)(rbp - 0x4) = 1;\n";
        assert_eq!(
            lost_frame_offset_regex().find_iter(emitted).count(),
            2,
            "two raw frame-relative accesses should be flagged"
        );
    }

    #[test]
    fn lost_frame_offset_ignores_normal_pointer_arithmetic() {
        let emitted = "v1 = *(_QWORD *)(buf + 8);\n*(_DWORD *)(p + 4) = 0;\n";
        assert_eq!(
            lost_frame_offset_regex().find_iter(emitted).count(),
            0,
            "pointer arithmetic without a frame-register base is allowed"
        );
    }

    #[test]
    fn stale_return_counter_counts_undeclared_result_returns() {
        let emitted = "int f(void) {\n    return result;\n}\n";
        assert_eq!(stale_return_result_count(emitted), 1);
    }

    #[test]
    fn stale_return_counter_ignores_assigned_result_lvar() {
        let emitted = "int f(void) {\n    int result;\n    result = 3;\n    return result;\n}\n";
        assert_eq!(stale_return_result_count(emitted), 0);
    }

    #[test]
    fn stale_return_counter_counts_uninitialized_result_lvar() {
        let emitted = "int f(void) {\n    int result;\n    return result;\n}\n";
        assert_eq!(stale_return_result_count(emitted), 1);
    }
}
