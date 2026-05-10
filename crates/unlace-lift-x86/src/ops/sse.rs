//! SSE2 data-movement and packed-integer arithmetic → Callother IR.
//!
//! Callother encoding: `inputs[0]` is a constant tag from [`tag`].
//! The intrinsic C name is recoverable via
//! [`IntrinsicRegistry`](crate::intrinsics::IntrinsicRegistry).

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

/// Constant tags for SSE Callother `inputs[0]`.
///
/// Range `0x100..0x1FF` — string ops use `0x1..0xF`.
pub mod tag {
    pub const MOVDQA: u64 = 0x100;
    pub const MOVDQU: u64 = 0x101;
    pub const MOVAPS: u64 = 0x102;
    pub const MOVUPS: u64 = 0x103;
    pub const MOVSD: u64 = 0x104;

    pub const PADDB: u64 = 0x110;
    pub const PADDW: u64 = 0x111;
    pub const PADDD: u64 = 0x112;
    pub const PADDQ: u64 = 0x113;

    pub const PSUBB: u64 = 0x118;
    pub const PSUBW: u64 = 0x119;
    pub const PSUBD: u64 = 0x11A;
    pub const PSUBQ: u64 = 0x11B;

    pub const PAND: u64 = 0x120;
    pub const POR: u64 = 0x121;
    pub const PXOR: u64 = 0x122;

    pub const PMULLD: u64 = 0x123;
    /// SSE2 unsigned 32×32→64 multiply of the low dword of each 64-bit lane.
    pub const PMULUDQ: u64 = 0x127;

    pub const PCMPEQB: u64 = 0x124;
    pub const PCMPEQW: u64 = 0x125;
    pub const PCMPEQD: u64 = 0x126;

    pub const ADDPS: u64 = 0x130;
    pub const SUBPS: u64 = 0x131;
    pub const MULPS: u64 = 0x132;
    pub const DIVPS: u64 = 0x133;
    pub const MINPS: u64 = 0x134;
    pub const MAXPS: u64 = 0x135;
    pub const SQRTPS: u64 = 0x136;

    pub const PSHUFD: u64 = 0x140;
    pub const PSHUFB: u64 = 0x141;
    pub const PUNPCKLBW: u64 = 0x142;

    // ── SSSE3 packed integer ops (t174) ─────────────────────────
    /// SSSE3 packed horizontal add, 16-bit lanes.
    pub const PHADDW: u64 = 0x180;
    /// SSSE3 packed horizontal add, 32-bit lanes.
    pub const PHADDD: u64 = 0x181;
    /// SSSE3 packed horizontal sub, 16-bit lanes.
    pub const PHSUBW: u64 = 0x182;
    /// SSSE3 packed horizontal sub, 32-bit lanes.
    pub const PHSUBD: u64 = 0x183;
    /// SSSE3 packed align right (3-operand: dst, src, imm8).
    pub const PALIGNR: u64 = 0x184;
    /// SSSE3 packed multiply-add of unsigned bytes by signed bytes,
    /// summing adjacent pairs to 16-bit lanes.
    pub const PMADDUBSW: u64 = 0x185;
    /// SSSE3 packed sign of bytes (negate / zero / keep per src2 sign).
    pub const PSIGNB: u64 = 0x186;
    /// SSSE3 packed sign of 16-bit lanes.
    pub const PSIGNW: u64 = 0x187;
    /// SSSE3 packed sign of 32-bit lanes.
    pub const PSIGND: u64 = 0x188;

    pub const PMOVMSKB: u64 = 0x150;

    pub const PACKSSWB: u64 = 0x160;
    pub const PACKUSWB: u64 = 0x161;

    pub const BLENDPS: u64 = 0x170;
    pub const PBLENDVB: u64 = 0x171;
}

/// MOVDQA / MOVDQU: store form emits without output, load/reg form with output.
pub fn lift_sse_mov(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    let tag_vn = Varnode::constant(callother_tag, 8);

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(src) = ctx.operand_read(insn, 1) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag_vn, dst_addr, src],
            ctx.addr,
        ));
        return;
    }

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src],
        ctx.addr,
    ));
}

/// Two-operand packed SSE: `dest = Callother(tag, src0, src1)`.
pub fn lift_sse_binop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
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

/// Single-source packed SSE (e.g. SQRTPS, PMOVMSKB): `dst = Callother(tag, src)`.
///
/// The destination is operand 0 (which may be a GP register for movemask) and
/// the only input is operand 1.
pub fn lift_sse_unop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src) = ctx.operand_read(insn, 1) else {
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
        smallvec![tag_vn, src],
        ctx.addr,
    ));
}

/// Three-operand SSE4.1 blend (BLENDPS, PBLENDVB): `dst = Callother(tag, a, b, mask)`.
///
/// BLENDPS uses an immediate mask in operand 2; BLENDVPS/PBLENDVB use the
/// implicit XMM0 register as the mask. Both reach the IR as
/// `(tag, src0, src1, mask)`.
pub fn lift_sse_blend(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let mask = ctx
        .operand_read(insn, 2)
        .unwrap_or_else(|| Varnode::constant(0, 1));
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1, mask],
        ctx.addr,
    ));
}

/// MOVSD (scalar double): 8-byte move in the low half of an XMM register.
///
/// Unlike the 16-byte MOVDQA/MOVUPS family, MOVSD operates on only 8 bytes.
/// We emit a Callother with `tag::MOVSD` so the semantics are recoverable.
pub fn lift_sse_mov_scalar(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    use iced_x86::OpKind;

    let tag_vn = Varnode::constant(callother_tag, 8);

    if insn.op_kind(0) == OpKind::Memory {
        let Some(dst_addr) = ctx.memory_address(insn) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(src) = ctx.operand_read(insn, 1) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::without_output(
            IrOp::Callother,
            smallvec![tag_vn, dst_addr, src],
            ctx.addr,
        ));
        return;
    }

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src],
        ctx.addr,
    ));
}
