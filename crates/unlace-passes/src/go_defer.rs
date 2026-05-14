//! Go `defer` / `recover` rendering (t299).
//!
//! Go's compiler lowers `defer f(args…)` and `recover()` into calls to a
//! small family of runtime helpers. The original `defer { … }` and
//! `recover()` source forms never appear in the binary — what we see is:
//!
//! | Source                  | Runtime helper(s)                            |
//! |-------------------------|----------------------------------------------|
//! | `defer f(args…)`        | `runtime.deferproc(siz, fn)` at registration |
//! |                         | `runtime.deferreturn` at function exit       |
//! | `recover()`             | `runtime.gorecover(arg)`                     |
//! | `panic(v)`              | `runtime.gopanic(v)`                         |
//!
//! `deferproc` registers a deferred call by pushing a `_defer` record
//! onto the goroutine's defer chain; its second argument (`fn`) is the
//! `*funcval` of the function to invoke at unwind time. The companion
//! `deferreturn` runs at function exit and pops/dispatches the chain.
//! Inside any deferred function body the compiler may emit
//! `gorecover` (the lowering of the source-level `recover()`); a
//! `gopanic` is the lowering of `panic(...)`.
//!
//! This pass recognises `deferproc` registration sites, pairs them
//! with `deferreturn` / `gorecover` calls in the same function, and
//! emits a [`GoDeferSite`] per registration. Downstream consumers
//! (the C printer, taint analysis) use the annotation to re-render
//! the source-level `defer { f(...) }` shape and mark the function
//! as containing a `recover()` clause when applicable.
//!
//! The detection is symbol-driven: callers supply a resolver mapping
//! constant callee addresses to runtime symbol names, mirroring
//! [`crate::go_select::detect_go_channel_ops`]. The pass cannot
//! identify the runtime helpers without symbol context, so callers
//! without a symbol table will get an empty result.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId};

/// One recovered `defer f(...)` registration in `func`.
///
/// Emitted once per `runtime.deferproc` call site. `has_recover` is
/// set when *this function* (i.e. the function being analysed, which
/// owns the defer chain) also contains a `runtime.gorecover` call —
/// downstream printers use it to decide whether to render the defer
/// as `defer func() { … recover() … }()` rather than the bare
/// `defer fn(args…)` shape.
#[derive(Clone, Copy, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct GoDeferSite {
    /// CFG block holding the `runtime.deferproc` `Call`.
    pub defer_block: BlockId,
    /// Address of the deferred `*funcval`, taken from
    /// `deferproc`'s second argument when that argument is a
    /// constant. `0` is reserved for "non-constant funcval" (e.g.
    /// the deferred function is computed at runtime — a closure
    /// over local state) so consumers can still surface the
    /// annotation even when the target is opaque.
    pub deferred_func: u64,
    /// Whether the enclosing function also calls
    /// `runtime.gorecover`. When `true`, every defer site in the
    /// function inherits the flag: defers and recovers don't have
    /// a per-site pairing in Go's lowering — `gorecover` is invoked
    /// from inside whichever deferred function chose to use it, and
    /// the goroutine's defer chain is shared by the whole frame.
    pub has_recover: bool,
}

/// Classify a callee symbol name as one of the four Go defer-related
/// runtime helpers. Returns `None` for anything else.
fn classify_defer_call(name: &str) -> Option<DeferHelper> {
    match name {
        "runtime.deferproc" => Some(DeferHelper::DeferProc),
        "runtime.deferreturn" => Some(DeferHelper::DeferReturn),
        "runtime.gorecover" => Some(DeferHelper::GoRecover),
        "runtime.gopanic" => Some(DeferHelper::GoPanic),
        _ => None,
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum DeferHelper {
    DeferProc,
    DeferReturn,
    GoRecover,
    GoPanic,
}

/// Scan `func` for Go `defer` / `recover` runtime call patterns.
///
/// Returns one [`GoDeferSite`] per `runtime.deferproc` registration.
/// `runtime.deferreturn` and `runtime.gopanic` are recognised but do
/// not generate sites on their own — the source-level structure is
/// anchored at the defer *registration*, not at the unwind dispatch.
/// `runtime.gorecover` calls only influence the `has_recover` flag
/// stamped on every site in the same function (see field docs).
///
/// The `resolve_name` closure maps a constant callee address (the
/// first operand of every direct `Call`) to its symbol name. Callers
/// without symbol context can pass `|_| None`; the pass will then
/// return an empty vector.
pub fn detect_go_defer(
    func: &SsaFunction,
    resolve_name: impl Fn(u64) -> Option<&'static str>,
) -> Vec<GoDeferSite> {
    // First pass: locate every deferproc registration and decide
    // whether the function as a whole contains a gorecover.
    let mut registrations: Vec<(BlockId, u64)> = Vec::new();
    let mut has_recover = false;

    for (&bid, block) in &func.function.blocks {
        for insn in &block.insns {
            if insn.op != IrOp::Call || insn.inputs.is_empty() {
                continue;
            }
            // Only direct calls (constant callee address) carry a
            // resolvable symbol — CALLIND can never name a runtime
            // helper at this stage.
            let target = insn.inputs[0];
            if target.space != SpaceId::Const {
                continue;
            }
            let Some(name) = resolve_name(target.offset) else {
                continue;
            };
            let Some(helper) = classify_defer_call(name) else {
                continue;
            };

            match helper {
                DeferHelper::DeferProc => {
                    // deferproc(siz, fn) — fn is the second non-callee
                    // operand (inputs[2] because inputs[0] is the
                    // callee and inputs[1] is `siz`). When fn is a
                    // constant we surface its address; otherwise we
                    // stamp 0 so the site is still visible but flagged
                    // as opaque.
                    let fn_addr =
                        if insn.inputs.len() >= 3 && insn.inputs[2].space == SpaceId::Const {
                            insn.inputs[2].offset
                        } else {
                            0
                        };
                    registrations.push((bid, fn_addr));
                }
                DeferHelper::GoRecover => {
                    has_recover = true;
                }
                DeferHelper::DeferReturn | DeferHelper::GoPanic => {
                    // Recognised but does not, on its own, anchor a
                    // source-level defer site.
                }
            }
        }
    }

    registrations
        .into_iter()
        .map(|(defer_block, deferred_func)| GoDeferSite {
            defer_block,
            deferred_func,
            has_recover,
        })
        .collect()
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    use super::*;

    /// Build a single-block SSA function ending in a synthetic Return.
    fn make_func(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Pretend address → name table for the runtime helpers.
    fn mock_resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0x1000 => Some("runtime.deferproc"),
            0x2000 => Some("runtime.deferreturn"),
            0x3000 => Some("runtime.gorecover"),
            0x4000 => Some("runtime.gopanic"),
            0x5000 => Some("runtime.newobject"), // negative control
            _ => None,
        }
    }

    // -------------------------------------------------------------------
    // deferproc alone — a bare `defer f()` with no recover in the frame.
    // -------------------------------------------------------------------
    #[test]
    fn t299_detects_deferproc_without_recover() {
        // deferproc(siz=16, fn=0xCAFE)
        let siz = Varnode::constant(16, 4);
        let fnval = Varnode::constant(0xCAFE, 8);

        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1000, 8), siz, fnval],
            0x100,
        )];

        let ssa = make_func(insns);
        let sites = detect_go_defer(&ssa, mock_resolver);

        assert_eq!(sites.len(), 1, "expected one defer registration");
        let site = sites[0];
        assert_eq!(site.defer_block, BlockId(0));
        assert_eq!(site.deferred_func, 0xCAFE);
        assert!(
            !site.has_recover,
            "no gorecover in frame → has_recover=false"
        );
    }

    // -------------------------------------------------------------------
    // deferproc + gorecover — the canonical `defer func() { recover() }()`
    // shape. Every site in the frame inherits has_recover=true.
    // -------------------------------------------------------------------
    #[test]
    fn t299_pairs_deferproc_with_gorecover() {
        let siz = Varnode::constant(8, 4);
        let fnval = Varnode::constant(0xBEEF, 8);
        let recover_arg = Varnode::constant(0, 8);

        let insns = vec![
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x1000, 8), siz, fnval],
                0x100,
            ),
            // gorecover anywhere in the same function flips the flag.
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x3000, 8), recover_arg],
                0x110,
            ),
        ];

        let ssa = make_func(insns);
        let sites = detect_go_defer(&ssa, mock_resolver);

        assert_eq!(sites.len(), 1);
        let site = sites[0];
        assert_eq!(site.deferred_func, 0xBEEF);
        assert!(site.has_recover, "gorecover present → has_recover=true");
    }

    // -------------------------------------------------------------------
    // Multiple defers in the same frame — each emits its own site, and
    // a single gorecover flips has_recover on *all* of them.
    // -------------------------------------------------------------------
    #[test]
    fn t299_multiple_defers_share_recover_flag() {
        let siz = Varnode::constant(8, 4);
        let fn_a = Varnode::constant(0xAAAA, 8);
        let fn_b = Varnode::constant(0xBBBB, 8);
        let recover_arg = Varnode::constant(0, 8);

        let insns = vec![
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x1000, 8), siz, fn_a],
                0x100,
            ),
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x1000, 8), siz, fn_b],
                0x108,
            ),
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x3000, 8), recover_arg],
                0x110,
            ),
            // deferreturn at function exit — recognised but does not
            // generate a site on its own.
            IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x2000, 8)], 0x118),
        ];

        let ssa = make_func(insns);
        let sites = detect_go_defer(&ssa, mock_resolver);

        assert_eq!(sites.len(), 2, "two deferproc sites expected");
        let funcs: Vec<u64> = sites.iter().map(|s| s.deferred_func).collect();
        assert!(funcs.contains(&0xAAAA));
        assert!(funcs.contains(&0xBBBB));
        assert!(
            sites.iter().all(|s| s.has_recover),
            "single gorecover flips has_recover on every site",
        );
    }

    // -------------------------------------------------------------------
    // Unrelated runtime calls (`runtime.newobject`) and isolated
    // `gopanic` / `deferreturn` must not be reported as defer sites.
    // A non-constant funcval should still emit a site but stamp 0.
    // -------------------------------------------------------------------
    #[test]
    fn t299_ignores_unrelated_and_handles_opaque_funcval() {
        let siz = Varnode::constant(8, 4);
        // Non-constant funcval: a register, not a SpaceId::Const.
        let opaque_fn = Varnode::reg(0, 8);
        let arg = Varnode::constant(0, 8);

        let insns = vec![
            // Unrelated runtime call — must be ignored entirely.
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x5000, 8), arg],
                0x100,
            ),
            // Bare gopanic with no deferproc — no site emitted.
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x4000, 8), arg],
                0x108,
            ),
            // deferproc with a non-constant funcval — site emitted
            // with deferred_func=0.
            IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(0x1000, 8), siz, opaque_fn],
                0x110,
            ),
        ];

        let ssa = make_func(insns);
        let sites = detect_go_defer(&ssa, mock_resolver);

        assert_eq!(
            sites.len(),
            1,
            "only the deferproc site counts; newobject / lone gopanic don't",
        );
        let site = sites[0];
        assert_eq!(
            site.deferred_func, 0,
            "non-constant funcval is surfaced as opaque (0)",
        );
        assert!(
            !site.has_recover,
            "no gorecover in this frame → has_recover=false",
        );
//! Go `defer` / `recover` runtime-call recovery (t302).
//!
//! Go lowers `defer f(...)` and `recover()` to calls into the runtime. The
//! exact helper selected varies by Go version and optimisation level
//! (`runtime.deferproc`, `runtime.deferprocStack`, `runtime.deferreturn`,
//! `runtime.gorecover`, and open-coded defer helpers), but the symbol names are
//! stable enough that a decompiler can surface useful source-style annotations
//! before it can reconstruct the full closure body.
//!
//! This pass recognises those runtime calls and records the source-level role of
//! each call site. Downstream renderers use the annotations to print
//! `defer ...` / `recover()` comments or pseudo-statements instead of opaque
//! `runtime.*` calls.

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

/// Source-level role recovered from a Go runtime helper call.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum GoDeferRecoverKind {
    /// A `defer f(...)` registration (`runtime.deferproc*` or open-coded
    /// `runtime.deferprocat`).
    Defer,
    /// Function-epilogue execution of pending defers (`runtime.deferreturn`).
    DeferReturn,
    /// A `recover()` expression (`runtime.gorecover`).
    Recover,
}

/// Recovered Go defer/recover operation at a single call site.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct GoDeferRecoverOp {
    /// CFG block holding the runtime call.
    pub block_id: BlockId,
    /// Index of the call within its block.
    pub insn_idx: usize,
    /// Which source-level construct this call represents.
    pub kind: GoDeferRecoverKind,
    /// Best-effort function value / argument pointer passed to `deferproc*`.
    ///
    /// For `recover` and `deferreturn` this is `None` because those helpers do
    /// not carry a user function value in their first argument.
    pub funcval: Option<SsaVarnode>,
}

/// Classify a Go runtime symbol as a defer/recover helper.
fn classify_go_defer_recover_call(name: &str) -> Option<GoDeferRecoverKind> {
    let name = name.trim_start_matches('_');
    match name {
        "runtime.deferproc"
        | "runtime.deferprocStack"
        | "runtime.deferprocStack0"
        | "runtime.deferprocat"
        | "runtime.deferprocHeap" => Some(GoDeferRecoverKind::Defer),
        "runtime.deferreturn" => Some(GoDeferRecoverKind::DeferReturn),
        "runtime.gorecover" => Some(GoDeferRecoverKind::Recover),
        _ => None,
    }
}

/// Scan `func` for Go defer/recover runtime calls.
///
/// `resolve_name` maps a constant call target address to a symbol name. Passing
/// `|_| None` is valid and simply produces no annotations.
pub fn detect_go_defer_recover_ops<'a>(
    func: &SsaFunction,
    resolve_name: impl Fn(u64) -> Option<&'a str>,
) -> Vec<GoDeferRecoverOp> {
    let mut out = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Call || insn.inputs.is_empty() {
                continue;
            }

            let target = insn.inputs[0];
            if target.space != SpaceId::Const {
                continue;
            }

            let Some(name) = resolve_name(target.offset) else {
                continue;
            };
            let Some(kind) = classify_go_defer_recover_call(name) else {
                continue;
            };

            let funcval = if kind == GoDeferRecoverKind::Defer && insn.inputs.len() >= 2 {
                Some(lookup_input_ssa(func, bid, insn_idx, 1, &insn.inputs[1]))
            } else {
                None
            };

            out.push(GoDeferRecoverOp {
                block_id: bid,
                insn_idx,
                kind,
                funcval,
            });
        }
    }

    out
}

fn lookup_input_ssa(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    slot: usize,
    vn: &Varnode,
) -> SsaVarnode {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(slot)))
        .copied()
        .unwrap_or(SsaVarnode {
            base: *vn,
            version: 0,
        })
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    fn make_func(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("go_defer_recover", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1fff,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    fn resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0x1000 => Some("runtime.deferprocStack"),
            0x2000 => Some("runtime.deferreturn"),
            0x3000 => Some("runtime.gorecover"),
            0x4000 => Some("runtime.morestack_noctxt"),
            _ => None,
        }
    }

    #[test]
    fn t302_detects_defer_registration() {
        let funcval = Varnode::reg(0, 8);
        let ssa = make_func(vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1000, 8), funcval],
            0x1010,
        )]);

        let ops = detect_go_defer_recover_ops(&ssa, resolver);
        assert_eq!(ops.len(), 1);
        assert_eq!(ops[0].kind, GoDeferRecoverKind::Defer);
        assert_eq!(ops[0].funcval.map(|sv| sv.base), Some(funcval));
    }

    #[test]
    fn t302_detects_deferreturn_and_recover() {
        let ret = Varnode::reg(0, 8);
        let ssa = make_func(vec![
            IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x2000, 8)], 0x2010),
            IrInsn::with_output(
                IrOp::Call,
                ret,
                smallvec![Varnode::constant(0x3000, 8), Varnode::constant(0, 8)],
                0x3010,
            ),
            IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x4000, 8)], 0x4010),
        ]);

        let ops = detect_go_defer_recover_ops(&ssa, resolver);
        assert_eq!(ops.len(), 2);
        assert_eq!(ops[0].kind, GoDeferRecoverKind::DeferReturn);
        assert_eq!(ops[1].kind, GoDeferRecoverKind::Recover);
        assert!(ops.iter().all(|op| op.funcval.is_none()));
    }
}
