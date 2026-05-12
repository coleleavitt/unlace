//! Go channel / `select` recovery (t206).
//!
//! The Go compiler lowers channel sends, channel receives, and `select`
//! blocks into runtime helper calls. The original source-level shape
//! never appears in the binary — what we see is a `CALL` to a fixed
//! runtime symbol with a stereotyped argument layout:
//!
//! | Source                | Runtime helper                                 |
//! |-----------------------|------------------------------------------------|
//! | `ch <- v`             | `runtime.chansend1(ch, &v)`                    |
//! | `v = <-ch`            | `runtime.chanrecv1(ch, &v)`                    |
//! | `v, ok = <-ch`        | `runtime.chanrecv2(ch, &v) -> ok`              |
//! | `select { … }`        | `runtime.selectgo(cas, order, ncases, ...)`    |
//!
//! This pass walks every `Call` whose target is a constant address,
//! consults a caller-supplied resolver to map the address back to a
//! symbol name, and — for the four runtime helpers above — emits a
//! [`GoChannelOp`] annotation describing what the source-level
//! operation looked like.
//!
//! The annotation surfaces the SSA varnode that carried the *channel*
//! argument so downstream consumers (the C printer, taint analysis,
//! type inference) can stitch the runtime call back into a recognisable
//! `<-` / `<-` / `select` shape.

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

/// Kind of channel operation recovered from a runtime call site.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum GoChannelOpKind {
    /// `ch <- *elem` — `runtime.chansend1(ch, *elem)`.
    Send,
    /// `*out = <-ch` — `runtime.chanrecv1(ch, *out)`.
    Recv,
    /// `*out, ok = <-ch` — `runtime.chanrecv2(ch, *out) -> ok`.
    RecvOk,
    /// `select { … }` — `runtime.selectgo(…)`. The channel slot is
    /// unused (set to a synthetic zero varnode) because `selectgo`
    /// takes an array of cases, not a single channel.
    Select,
}

/// Recovered Go channel operation at a single `Call` site.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct GoChannelOp {
    /// CFG block holding the `Call`.
    pub block_id: BlockId,
    /// Index of the `Call` within its block.
    pub insn_idx: usize,
    /// Which source-level operation this `Call` realises.
    pub kind: GoChannelOpKind,
    /// SSA varnode that carried the channel argument.
    ///
    /// For `Send` / `Recv` / `RecvOk` this is the first non-callee
    /// argument (`insn.inputs[1]`). For `Select` the runtime helper
    /// receives an array of cases rather than a single channel — we
    /// surface a placeholder varnode here so the annotation shape
    /// stays uniform across all four kinds.
    pub channel: SsaVarnode,
}

/// Classify a callee symbol name as one of the four Go channel
/// runtime helpers. Returns `None` for any other symbol.
fn classify_channel_call(name: &str) -> Option<GoChannelOpKind> {
    match name {
        "runtime.chansend1" => Some(GoChannelOpKind::Send),
        "runtime.chanrecv1" => Some(GoChannelOpKind::Recv),
        "runtime.chanrecv2" => Some(GoChannelOpKind::RecvOk),
        "runtime.selectgo" => Some(GoChannelOpKind::Select),
        _ => None,
    }
}

/// Scan `func` for Go channel runtime calls.
///
/// The `resolve_name` closure maps a constant callee address (the
/// first operand of every direct `Call`) to its symbol name, exactly
/// as `RustPanicPass::run_with_resolver` does. Callers that don't
/// have a symbol table available can pass `|_| None` and the pass
/// will report no operations.
pub fn detect_go_channel_ops(
    func: &SsaFunction,
    resolve_name: impl Fn(u64) -> Option<&'static str>,
) -> Vec<GoChannelOp> {
    let mut out = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Call || insn.inputs.is_empty() {
                continue;
            }

            // Target must be a constant address; non-constants are
            // CALLINDs in disguise and not eligible.
            let target = insn.inputs[0];
            if target.space != SpaceId::Const {
                continue;
            }

            let Some(name) = resolve_name(target.offset) else {
                continue;
            };
            let Some(kind) = classify_channel_call(name) else {
                continue;
            };

            // Channel arg is input[1] for send / recv helpers. For
            // `selectgo` there is no single-channel slot — we emit a
            // synthetic zero varnode to keep the annotation shape
            // uniform.
            let channel = match kind {
                GoChannelOpKind::Send | GoChannelOpKind::Recv | GoChannelOpKind::RecvOk => {
                    if insn.inputs.len() < 2 {
                        // Malformed runtime call — skip rather than
                        // mis-annotate.
                        continue;
                    }
                    let ch_vn = insn.inputs[1];
                    lookup_input_ssa(func, bid, insn_idx, 1, &ch_vn)
                }
                GoChannelOpKind::Select => SsaVarnode {
                    base: Varnode::constant(0, 8),
                    version: 0,
                },
            };

            out.push(GoChannelOp {
                block_id: bid,
                insn_idx,
                kind,
                channel,
            });
        }
    }

    out
}

/// Resolve an input slot to its SSA-versioned varnode.
///
/// Prefers the direct `(bid, insn_idx, Input(slot))` entry in `var_map`
/// when present; falls back to a version-0 varnode otherwise so
/// callers always get something structurally usable.
fn lookup_input_ssa(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    slot: usize,
    vn: &Varnode,
) -> SsaVarnode {
    if let Some(sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(slot))) {
        return *sv;
    }
    SsaVarnode {
        base: *vn,
        version: 0,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    use super::*;

    /// Build a single-block SSA function ending in a synthetic Return,
    /// matching the helper used elsewhere in this crate.
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
            0x1000 => Some("runtime.chansend1"),
            0x2000 => Some("runtime.chanrecv1"),
            0x3000 => Some("runtime.chanrecv2"),
            0x4000 => Some("runtime.selectgo"),
            0x5000 => Some("runtime.newobject"), // negative control
            _ => None,
        }
    }

    // -------------------------------------------------------------------
    // chansend1 — `ch <- *elem`
    // -------------------------------------------------------------------
    #[test]
    fn t206_detects_chansend1() {
        let ch = Varnode::reg(0, 8);
        let elem_ptr = Varnode::reg(8, 8);

        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1000, 8), ch, elem_ptr],
            0x100,
        )];

        let ssa = make_func(insns);
        let ops = detect_go_channel_ops(&ssa, mock_resolver);

        assert_eq!(ops.len(), 1, "expected exactly one chansend1 site");
        let op = &ops[0];
        assert_eq!(op.block_id, BlockId(0));
        assert_eq!(op.insn_idx, 0);
        assert_eq!(op.kind, GoChannelOpKind::Send);
        assert_eq!(op.channel.base, ch);
    }

    // -------------------------------------------------------------------
    // chanrecv1 — `*out = <-ch`
    // -------------------------------------------------------------------
    #[test]
    fn t206_detects_chanrecv1() {
        let ch = Varnode::reg(0, 8);
        let out_ptr = Varnode::reg(8, 8);

        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x2000, 8), ch, out_ptr],
            0x200,
        )];

        let ssa = make_func(insns);
        let ops = detect_go_channel_ops(&ssa, mock_resolver);

        assert_eq!(ops.len(), 1);
        let op = &ops[0];
        assert_eq!(op.kind, GoChannelOpKind::Recv);
        assert_eq!(op.channel.base, ch);
    }

    // -------------------------------------------------------------------
    // chanrecv2 — `*out, ok = <-ch`
    // -------------------------------------------------------------------
    #[test]
    fn t206_detects_chanrecv2() {
        let ch = Varnode::reg(0, 8);
        let out_ptr = Varnode::reg(8, 8);
        let ok = Varnode::reg(16, 1);

        let insns = vec![IrInsn::with_output(
            IrOp::Call,
            ok,
            smallvec![Varnode::constant(0x3000, 8), ch, out_ptr],
            0x300,
        )];

        let ssa = make_func(insns);
        let ops = detect_go_channel_ops(&ssa, mock_resolver);

        assert_eq!(ops.len(), 1);
        let op = &ops[0];
        assert_eq!(op.kind, GoChannelOpKind::RecvOk);
        assert_eq!(op.channel.base, ch);
    }

    // -------------------------------------------------------------------
    // selectgo — `select { … }`
    // -------------------------------------------------------------------
    #[test]
    fn t206_detects_selectgo() {
        // selectgo's real signature is `(*scase, *uint16, int)`, but
        // the matcher only needs the constant callee address.
        let cas_ptr = Varnode::reg(0, 8);
        let order_ptr = Varnode::reg(8, 8);
        let ncases = Varnode::reg(16, 8);

        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x4000, 8), cas_ptr, order_ptr, ncases],
            0x400,
        )];

        let ssa = make_func(insns);
        let ops = detect_go_channel_ops(&ssa, mock_resolver);

        assert_eq!(ops.len(), 1, "expected one selectgo site");
        let op = &ops[0];
        assert_eq!(op.kind, GoChannelOpKind::Select);
        // Select carries a synthetic zero placeholder.
        assert_eq!(op.channel.base.space, SpaceId::Const);
        assert_eq!(op.channel.base.offset, 0);
    }

    // -------------------------------------------------------------------
    // Non-channel runtime calls must NOT be matched.
    // -------------------------------------------------------------------
    #[test]
    fn t206_ignores_unrelated_runtime_calls() {
        let arg = Varnode::reg(0, 8);
        let insns = vec![IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x5000, 8), arg],
            0x500,
        )];

        let ssa = make_func(insns);
        let ops = detect_go_channel_ops(&ssa, mock_resolver);
        assert!(
            ops.is_empty(),
            "runtime.newobject must not be classified as a channel op"
        );
    }
}
