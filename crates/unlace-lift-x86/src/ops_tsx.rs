//! Intel TSX (Transactional Synchronization Extensions) instruction lifting
//! → Callother IR.
//!
//! TSX instructions (XBEGIN, XEND, XABORT, XTEST) implement hardware
//! transactional memory. The processor speculatively executes the
//! transaction body and, on an architectural conflict / abort, rolls
//! the architectural state back to the XBEGIN site and jumps to the
//! abort handler (EAX is updated with the abort status, the txn-test
//! flag is cleared).
//!
//! For decompilation purposes the recovery model is the same as for
//! AES-NI / SHA-NI: every TSX instruction is opaque at the IR level
//! and recovers to an `_x{begin,end,abort,test}` intrinsic call in
//! the printed C source. The lifter only needs to surface the
//! mnemonic-level shape — the C-printer's intrinsic-name table does
//! the rest.
//!
//! Callother encoding: `inputs[0]` is a constant tag from [`tag`].

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

/// Constant tags for TSX Callother `inputs[0]`.
///
/// Range `0x1B0..0x1B3`, sitting in the reserved gap above the
/// SSE4.1/SSE4.2 block (which ends at `0x1AB` = PCMPISTRI) and below
/// the AVX/AVX2 block (which starts at `0x1C0` = VPADDD).
pub mod tag {
    /// XBEGIN rel16/rel32 — speculative-execution transaction start.
    ///
    /// Operand layout: `Callother(XBEGIN, fallback_target)`. On abort
    /// the CPU rolls back and jumps to `fallback_target`; the success
    /// path falls through. EAX is written implicitly with the abort
    /// status — the c_printer surfaces this via `_xbegin()`'s scalar
    /// return value.
    pub const XBEGIN: u64 = 0x1B0;

    /// XEND — commit the innermost active transaction.
    ///
    /// Operand layout: `Callother(XEND)`. No explicit operands; the
    /// transaction-test (RTM/XACQUIRE) flag is cleared as a side
    /// effect.
    pub const XEND: u64 = 0x1B1;

    /// XABORT imm8 — explicitly abort the active transaction with the
    /// 8-bit status code in EAX[31:24].
    ///
    /// Operand layout: `Callother(XABORT, imm8)`. Control transfers
    /// to the matching XBEGIN's fallback target.
    pub const XABORT: u64 = 0x1B2;

    /// XTEST — set ZF=0 iff currently inside a transactional region.
    ///
    /// Operand layout: `Callother(XTEST)` (no inputs, no output —
    /// the implicit ZF write is recovered the same way PCMPESTRI's
    /// implicit ECX write is).
    pub const XTEST: u64 = 0x1B3;
}

/// `XBEGIN rel32` — transaction start with abort-fallback target.
///
/// We surface the fallback address as the sole input so the recoverer
/// (and any future control-flow analysis) can see where the abort path
/// jumps to. EAX is written implicitly with the abort status — that
/// flow is not modeled here; the c_printer's `_xbegin` intrinsic
/// returns the abort code through its return value.
pub fn lift_xbegin(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::XBEGIN, 8);

    // XBEGIN's only operand is the relative fallback target, which
    // operand_read resolves into an absolute address constant.
    let Some(fallback) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn, fallback],
        ctx.addr,
    ));
}

/// `XEND` — commit the active transaction. No explicit operands; the
/// implicit RTM-flag clear is left to the recoverer.
pub fn lift_xend(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::XEND, 8);
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn],
        ctx.addr,
    ));
}

/// `XABORT imm8` — abort the active transaction with an 8-bit code.
pub fn lift_xabort(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::XABORT, 8);

    let imm = ctx
        .operand_read(insn, 0)
        .unwrap_or_else(|| Varnode::constant(0, 1));

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn, imm],
        ctx.addr,
    ));
}

/// `XTEST` — query whether we're inside a transaction. Writes ZF
/// implicitly; surfaced here as a tag-only Callother (same shape as
/// `lift_ud2`). The recoverer pairs the subsequent ZF-consumer with
/// the `_xtest()` intrinsic call.
pub fn lift_xtest(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::XTEST, 8);
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn],
        ctx.addr,
    ));
}
