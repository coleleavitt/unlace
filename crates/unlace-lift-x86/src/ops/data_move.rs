use iced_x86::OpKind;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

pub fn lift_mov(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let is_mem_dst = insn.op0_kind() == OpKind::Memory;
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 1);
    let (dst, src) = match (dst, src) {
        (Some(d), Some(s)) => (d, s),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    if is_mem_dst {
        ctx.emit_store(dst, src);
    } else {
        ctx.emit(IrInsn::with_output(IrOp::Copy, dst, smallvec![src], ctx.addr));
    }
}

pub fn lift_lea(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let effective_addr = ctx.memory_address(insn);
    let (dst, ea) = match (dst, effective_addr) {
        (Some(d), Some(e)) => (d, e),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    ctx.emit(IrInsn::with_output(IrOp::Copy, dst, smallvec![ea], ctx.addr));
}

pub fn lift_nop(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let uid = ctx.alloc_unique();
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        Varnode::unique(uid, 1),
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));
}

pub fn lift_xchg(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let is_mem_0 = insn.op0_kind() == OpKind::Memory;
    let is_mem_1 = insn.op_count() > 1 && insn.op_kind(1) == OpKind::Memory;
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    let dst_a = ctx.operand_write(insn, 0);
    let dst_b = ctx.operand_write(insn, 1);
    match (a, b, dst_a, dst_b) {
        (Some(a), Some(b), Some(da), Some(db)) => {
            let tmp = Varnode::unique(ctx.alloc_unique(), a.size);
            ctx.emit(IrInsn::with_output(IrOp::Copy, tmp, smallvec![a], ctx.addr));
            if is_mem_0 {
                ctx.emit_store(da, b);
            } else {
                ctx.emit(IrInsn::with_output(IrOp::Copy, da, smallvec![b], ctx.addr));
            }
            if is_mem_1 {
                ctx.emit_store(db, tmp);
            } else {
                ctx.emit(IrInsn::with_output(IrOp::Copy, db, smallvec![tmp], ctx.addr));
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}
