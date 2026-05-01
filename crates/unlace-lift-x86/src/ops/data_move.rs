use iced_x86::OpKind;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::ops::arithmetic::atomic_tag;
use crate::register_file::*;

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
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![src],
            ctx.addr,
        ));
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
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        dst,
        smallvec![ea],
        ctx.addr,
    ));
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
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    db,
                    smallvec![tmp],
                    ctx.addr,
                ));
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_setcc(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let dst = match dst {
        Some(d) => d,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let cond = setcc_condition(ctx, insn.mnemonic());
    let cond = match cond {
        Some(c) => c,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let value = if dst.size > 1 {
        let ext = Varnode::unique(ctx.alloc_unique(), dst.size);
        ctx.emit(IrInsn::with_output(
            IrOp::IntZext,
            ext,
            smallvec![cond],
            ctx.addr,
        ));
        ext
    } else {
        cond
    };

    ctx.write_operand_insn(insn, 0, dst, value);
}

fn setcc_condition(ctx: &mut LiftCtx, mnemonic: iced_x86::Mnemonic) -> Option<Varnode> {
    use iced_x86::Mnemonic as M;

    let zf = Varnode::new(SpaceId::Register, ZF, 1);
    let sf = Varnode::new(SpaceId::Register, SF, 1);
    let cf = Varnode::new(SpaceId::Register, CF, 1);
    let of = Varnode::new(SpaceId::Register, OF, 1);

    match mnemonic {
        // SETE/SETZ: ZF == 1
        M::Sete => Some(zf),

        // SETNE/SETNZ: ZF == 0
        M::Setne => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![zf],
                ctx.addr,
            ));
            Some(t)
        }

        // SETB/SETC/SETNAE: CF == 1
        M::Setb => Some(cf),

        // SETAE/SETNB/SETNC: CF == 0
        M::Setae => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![cf],
                ctx.addr,
            ));
            Some(t)
        }

        // SETA/SETNBE: CF == 0 AND ZF == 0
        M::Seta => {
            let not_cf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_cf,
                smallvec![cf],
                ctx.addr,
            ));
            let not_zf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_zf,
                smallvec![zf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![not_cf, not_zf],
                ctx.addr,
            ));
            Some(t)
        }

        // SETBE/SETNA: CF == 1 OR ZF == 1
        M::Setbe => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![cf, zf],
                ctx.addr,
            ));
            Some(t)
        }

        // SETL/SETNGE: SF != OF
        M::Setl => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                t,
                smallvec![sf, of],
                ctx.addr,
            ));
            Some(t)
        }

        // SETGE/SETNL: SF == OF
        M::Setge => {
            let ne = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                ne,
                smallvec![sf, of],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![ne],
                ctx.addr,
            ));
            Some(t)
        }

        // SETG/SETNLE: ZF == 0 AND SF == OF
        M::Setg => {
            let not_zf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_zf,
                smallvec![zf],
                ctx.addr,
            ));
            let sf_ne_of = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                sf_ne_of,
                smallvec![sf, of],
                ctx.addr,
            ));
            let sf_eq_of = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                sf_eq_of,
                smallvec![sf_ne_of],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![not_zf, sf_eq_of],
                ctx.addr,
            ));
            Some(t)
        }

        // SETLE/SETNG: ZF == 1 OR SF != OF
        M::Setle => {
            let sf_ne_of = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                sf_ne_of,
                smallvec![sf, of],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![zf, sf_ne_of],
                ctx.addr,
            ));
            Some(t)
        }

        // SETS: SF == 1
        M::Sets => Some(sf),

        // SETNS: SF == 0
        M::Setns => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![sf],
                ctx.addr,
            ));
            Some(t)
        }

        // SETO: OF == 1
        M::Seto => Some(of),

        // SETNO: OF == 0
        M::Setno => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![of],
                ctx.addr,
            ));
            Some(t)
        }

        // SETP/SETPE: PF == 1
        M::Setp => Some(Varnode::new(SpaceId::Register, PF, 1)),

        // SETNP/SETPO: PF == 0
        M::Setnp => {
            let pf = Varnode::new(SpaceId::Register, PF, 1);
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![pf],
                ctx.addr,
            ));
            Some(t)
        }

        _ => None,
    }
}

/// BSWAP r32/r64
///
/// Reverses the byte order of a register operand. Lowered to
/// `Callother(BSWAP, src)` which the downstream printer renders as
/// `__builtin_bswap32` / `__builtin_bswap64` based on operand width.
/// Behavior of BSWAP r16 is officially undefined; we lift it the same way
/// and let the printer pick a width-appropriate intrinsic name.
pub fn lift_bswap(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    let (dst, src) = match (dst, src) {
        (Some(d), Some(s)) => (d, s),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let tag = Varnode::constant(atomic_tag::BSWAP, 8);
    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        result,
        smallvec![tag, src],
        ctx.addr,
    ));
    ctx.write_operand_insn(insn, 0, dst, result);
}

/// MOVBE — load/store with byte swap.
///
/// `MOVBE reg, m`  ⇒ load m, byte-swap, write to reg.
/// `MOVBE m, reg`  ⇒ byte-swap reg, store to m.
/// The operand-read/operand-write helpers handle load/store transparently;
/// we emit a single BSWAP intrinsic on the value path.
pub fn lift_movbe(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 1);
    let (dst, src) = match (dst, src) {
        (Some(d), Some(s)) => (d, s),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let tag = Varnode::constant(atomic_tag::BSWAP, 8);
    let swapped = Varnode::unique(ctx.alloc_unique(), src.size);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        swapped,
        smallvec![tag, src],
        ctx.addr,
    ));
    ctx.write_operand_insn(insn, 0, dst, swapped);
}
