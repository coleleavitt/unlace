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
