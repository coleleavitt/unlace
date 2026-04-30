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
    pub const MOVSD:  u64 = 0x104;

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
