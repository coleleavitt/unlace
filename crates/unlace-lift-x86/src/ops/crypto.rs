//! AES-NI and SHA-NI instruction lifting → Callother IR.
//!
//! Callother encoding: `inputs[0]` is a constant tag from [`tag`].
//! The intrinsic C name is recoverable via the c_printer's
//! `callother_intrinsic_name` table.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

/// Constant tags for AES-NI / SHA-NI Callother `inputs[0]`.
///
/// Range `0x1E0..0x1EF` — sits above the AVX-512 block (`0x1D0..0x1D2`).
pub mod tag {
    // ── AES-NI (0x1E0..0x1E4) ───────────────────────────────────
    pub const AESENC: u64 = 0x1E0;
    pub const AESENCLAST: u64 = 0x1E1;
    pub const AESDEC: u64 = 0x1E2;
    pub const AESDECLAST: u64 = 0x1E3;
    pub const AESKEYGENASSIST: u64 = 0x1E4;

    // ── SHA-NI (0x1E8..0x1EC) ───────────────────────────────────
    pub const SHA1RNDS4: u64 = 0x1E8;
    pub const SHA1NEXTE: u64 = 0x1E9;
    pub const SHA256RNDS2: u64 = 0x1EA;
    pub const SHA256MSG1: u64 = 0x1EB;
    pub const SHA256MSG2: u64 = 0x1EC;
}

/// Two-operand AES-NI binop (AESENC, AESENCLAST, AESDEC, AESDECLAST):
/// `dst_xmm = Callother(tag, dst_xmm, src_xmm)`.
///
/// These are destructive (op0 is both read and written), identical to the
/// SSE `lift_sse_binop` shape.
pub fn lift_aes_binop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1],
        ctx.addr,
    ));
}

/// Three-operand AES/SHA op with imm8 (AESKEYGENASSIST, SHA1RNDS4):
/// `dst_xmm = Callother(tag, dst_xmm, src_xmm, imm8)`.
pub fn lift_aes_imm(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let imm = ctx
        .operand_read(insn, 2)
        .unwrap_or_else(|| Varnode::constant(0, 1));
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1, imm],
        ctx.addr,
    ));
}

/// Two-operand SHA-NI binop (SHA1NEXTE, SHA256RNDS2, SHA256MSG1, SHA256MSG2):
/// `dst_xmm = Callother(tag, dst_xmm, src_xmm)`.
///
/// Same shape as `lift_aes_binop`; separated for clarity in the dispatch.
pub fn lift_sha_binop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    lift_aes_binop(ctx, insn, callother_tag);
}
