use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{CF, OF, PF, RAX, SF, ZF};

/// Tag identifiers for atomic / byte-swap Callother intrinsics.
///
/// Distinct from `bit_tag::*` and the string-op tags so a downstream consumer
/// can dispatch on the constant in `inputs[0]` without ambiguity.
pub mod atomic_tag {
    /// `_InterlockedCompareExchange(dst, src, expected)` — LOCK CMPXCHG.
    pub const CMPXCHG: u64 = 0x400;
    /// `_InterlockedExchangeAdd(dst, src)` — LOCK XADD.
    pub const XADD: u64 = 0x401;
    /// `__builtin_bswap{32,64}(src)` — BSWAP / MOVBE byte reversal.
    pub const BSWAP: u64 = 0x402;
}

fn emit_result_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let zero = Varnode::constant(0, op_size);
    let zf = Varnode::new(unlace_ir::SpaceId::Register, ZF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        zf,
        smallvec![result, zero],
        ctx.addr,
    ));

    let sf = Varnode::new(unlace_ir::SpaceId::Register, SF, 1);
    let sign_bit = (op_size as u32) * 8 - 1;
    let shift_amt = Varnode::constant(sign_bit as u64, 1);
    let tmp_sf = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        tmp_sf,
        smallvec![result, shift_amt],
        ctx.addr,
    ));
    let trunc_sf = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        trunc_sf,
        smallvec![tmp_sf, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        sf,
        smallvec![trunc_sf],
        ctx.addr,
    ));
}

fn emit_add_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);

    let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntCarry,
        cf,
        smallvec![a, b],
        ctx.addr,
    ));

    let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntScarry,
        of,
        smallvec![a, b],
        ctx.addr,
    ));

    // PF: popcount of low byte mod 2, then negate
    emit_parity_flag(ctx, result, op_size);
}

fn emit_sub_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);

    let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntLess,
        cf,
        smallvec![a, b],
        ctx.addr,
    ));

    let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSborrow,
        of,
        smallvec![a, b],
        ctx.addr,
    ));

    emit_parity_flag(ctx, result, op_size);
}

fn emit_parity_flag(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let pf = Varnode::new(unlace_ir::SpaceId::Register, PF, 1);
    let low_byte = if op_size == 1 {
        result
    } else {
        let t = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            t,
            smallvec![result, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        t
    };
    let popcount = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Popcount,
        popcount,
        smallvec![low_byte],
        ctx.addr,
    ));
    let one = Varnode::constant(1, 1);
    let low_bit = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        low_bit,
        smallvec![popcount, one],
        ctx.addr,
    ));
    // PF = !(popcount & 1) — even parity
    let zero = Varnode::constant(0, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        pf,
        smallvec![low_bit, zero],
        ctx.addr,
    ));
}

fn emit_logical_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);

    let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        cf,
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));

    let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        of,
        smallvec![Varnode::constant(0, 1)],
        ctx.addr,
    ));

    emit_parity_flag(ctx, result, op_size);
}

pub fn lift_add(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_add_flags(ctx, a, b, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sub(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_sub_flags(ctx, a, b, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_adc(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let cf_in = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
            let cf_ext = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntZext,
                cf_ext,
                smallvec![cf_in],
                ctx.addr,
            ));

            let tmp = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![tmp, cf_ext],
                ctx.addr,
            ));

            emit_add_flags(ctx, a, b, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_sbb(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            let cf_in = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
            let cf_ext = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntZext,
                cf_ext,
                smallvec![cf_in],
                ctx.addr,
            ));

            let tmp = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                tmp,
                smallvec![a, b],
                ctx.addr,
            ));
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![tmp, cf_ext],
                ctx.addr,
            ));

            emit_sub_flags(ctx, a, b, result, dst.size);
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_cmp(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), a.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_sub_flags(ctx, a, b, result, a.size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_test(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let a = ctx.operand_read(insn, 0);
    let b = ctx.operand_read(insn, 1);
    match (a, b) {
        (Some(a), Some(b)) => {
            let result = Varnode::unique(ctx.alloc_unique(), a.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            emit_logical_flags(ctx, result, a.size);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_imul(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let op_count = insn.op_count();
    match op_count {
        1 => {
            // One-operand: RDX:RAX = RAX * src
            let src = ctx.operand_read(insn, 0);
            match src {
                Some(src) => {
                    let op_size = src.size;
                    let rax = Varnode::new(
                        unlace_ir::SpaceId::Register,
                        crate::register_file::RAX,
                        op_size,
                    );
                    let result = Varnode::unique(ctx.alloc_unique(), op_size);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntMult,
                        result,
                        smallvec![rax, src],
                        ctx.addr,
                    ));
                    ctx.emit(IrInsn::with_output(
                        IrOp::Copy,
                        Varnode::new(
                            unlace_ir::SpaceId::Register,
                            crate::register_file::RAX,
                            op_size,
                        ),
                        smallvec![result],
                        ctx.addr,
                    ));
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        2 => {
            let dst = ctx.operand_write(insn, 0);
            let src = ctx.operand_read(insn, 1);
            match (dst, src) {
                (Some(dst), Some(src)) => {
                    let a = ctx.operand_read(insn, 0).unwrap_or(dst);
                    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntMult,
                        result,
                        smallvec![a, src],
                        ctx.addr,
                    ));
                    ctx.write_operand_insn(insn, 0, dst, result);
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        3 => {
            let dst = ctx.operand_write(insn, 0);
            let a = ctx.operand_read(insn, 1);
            let b = ctx.operand_read(insn, 2);
            match (dst, a, b) {
                (Some(dst), Some(a), Some(b)) => {
                    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntMult,
                        result,
                        smallvec![a, b],
                        ctx.addr,
                    ));
                    ctx.write_operand_insn(insn, 0, dst, result);
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_mul(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let op_size = src.size;
            let rax = Varnode::new(
                unlace_ir::SpaceId::Register,
                crate::register_file::RAX,
                op_size,
            );
            let result = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntMult,
                result,
                smallvec![rax, src],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                Varnode::new(
                    unlace_ir::SpaceId::Register,
                    crate::register_file::RAX,
                    op_size,
                ),
                smallvec![result],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_div(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let op_size = src.size;
            let rax = Varnode::new(
                unlace_ir::SpaceId::Register,
                crate::register_file::RAX,
                op_size,
            );
            let rdx = Varnode::new(
                unlace_ir::SpaceId::Register,
                crate::register_file::RDX,
                op_size,
            );
            let quot = Varnode::unique(ctx.alloc_unique(), op_size);
            let rem = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntDiv,
                quot,
                smallvec![rax, src],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::IntRem,
                rem,
                smallvec![rax, src],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rax,
                smallvec![quot],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rdx,
                smallvec![rem],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_idiv(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let op_size = src.size;
            let rax = Varnode::new(
                unlace_ir::SpaceId::Register,
                crate::register_file::RAX,
                op_size,
            );
            let rdx = Varnode::new(
                unlace_ir::SpaceId::Register,
                crate::register_file::RDX,
                op_size,
            );
            let quot = Varnode::unique(ctx.alloc_unique(), op_size);
            let rem = Varnode::unique(ctx.alloc_unique(), op_size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSdiv,
                quot,
                smallvec![rax, src],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::IntSrem,
                rem,
                smallvec![rax, src],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rax,
                smallvec![quot],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rdx,
                smallvec![rem],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_neg(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::Int2comp,
                result,
                smallvec![src],
                ctx.addr,
            ));

            // CF = (src != 0)
            let zero = Varnode::constant(0, dst.size);
            let cf = Varnode::new(unlace_ir::SpaceId::Register, CF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntNotequal,
                cf,
                smallvec![src, zero],
                ctx.addr,
            ));

            emit_result_flags(ctx, result, dst.size);
            emit_parity_flag(ctx, result, dst.size);

            let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSborrow,
                of,
                smallvec![zero, src],
                ctx.addr,
            ));

            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_inc(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let one = Varnode::constant(1, dst.size);
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![src, one],
                ctx.addr,
            ));
            emit_result_flags(ctx, result, dst.size);
            emit_parity_flag(ctx, result, dst.size);
            let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntScarry,
                of,
                smallvec![src, one],
                ctx.addr,
            ));
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_dec(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    let src = ctx.operand_read(insn, 0);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let one = Varnode::constant(1, dst.size);
            let result = Varnode::unique(ctx.alloc_unique(), dst.size);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![src, one],
                ctx.addr,
            ));
            emit_result_flags(ctx, result, dst.size);
            emit_parity_flag(ctx, result, dst.size);
            let of = Varnode::new(unlace_ir::SpaceId::Register, OF, 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSborrow,
                of,
                smallvec![src, one],
                ctx.addr,
            ));
            ctx.write_operand_insn(insn, 0, dst, result);
        }
        _ => ctx.emit_unimplemented(),
    }
}

// ── Sign-extension family ─────────────────────────────────────────────

/// CBW: sign-extend AL (1 byte) → AX (2 bytes)
pub fn lift_cbw(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let Some(al) = ctx.read_register(iced_x86::Register::AL) else {
        ctx.emit_unimplemented();
        return;
    };
    let ext = Varnode::unique(ctx.alloc_unique(), 2);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSext,
        ext,
        smallvec![al],
        ctx.addr,
    ));
    if ctx.write_register(iced_x86::Register::AX, ext).is_none() {
        ctx.emit_unimplemented();
    }
}

/// CWDE: sign-extend AX (2 bytes) → EAX (4 bytes)
pub fn lift_cwde(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let Some(ax) = ctx.read_register(iced_x86::Register::AX) else {
        ctx.emit_unimplemented();
        return;
    };
    let ext = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSext,
        ext,
        smallvec![ax],
        ctx.addr,
    ));
    if ctx.write_register(iced_x86::Register::EAX, ext).is_none() {
        ctx.emit_unimplemented();
    }
}

/// CDQE (AT&T: CLTQ): sign-extend EAX (4 bytes) → RAX (8 bytes)
pub fn lift_cdqe(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let Some(eax) = ctx.read_register(iced_x86::Register::EAX) else {
        ctx.emit_unimplemented();
        return;
    };
    let ext = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSext,
        ext,
        smallvec![eax],
        ctx.addr,
    ));
    if ctx.write_register(iced_x86::Register::RAX, ext).is_none() {
        ctx.emit_unimplemented();
    }
}

/// CDQ (AT&T: CLTD): sign-extend EAX → EDX:EAX.
/// Fills EDX with the sign bit of EAX: `EDX = INT_SRIGHT(EAX, 31)`.
pub fn lift_cdq(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let Some(eax) = ctx.read_register(iced_x86::Register::EAX) else {
        ctx.emit_unimplemented();
        return;
    };
    let shift = Varnode::constant(31, 1);
    let result = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSright,
        result,
        smallvec![eax, shift],
        ctx.addr,
    ));
    if ctx
        .write_register(iced_x86::Register::EDX, result)
        .is_none()
    {
        ctx.emit_unimplemented();
    }
}

/// CQO (AT&T: CQTO): sign-extend RAX → RDX:RAX.
/// Fills RDX with the sign bit of RAX: `RDX = INT_SRIGHT(RAX, 63)`.
pub fn lift_cqo(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let rax = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RAX, 8);
    let rdx = Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::RDX, 8);
    let shift = Varnode::constant(63, 1);
    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSright,
        result,
        smallvec![rax, shift],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rdx,
        smallvec![result],
        ctx.addr,
    ));
}

/// CMPXCHG dst, src
///
/// Intel SDM pseudocode:
///   IF (RAX == dst) THEN ZF = 1; dst = src
///   ELSE              ZF = 0; RAX = dst
///
/// LOCK form lowers to `Callother(CMPXCHG, dst_value, src, RAX)`; the intrinsic
/// returns the *original* dst, which is used to set ZF and to update RAX in the
/// mismatch case (the equal case is a no-op for RAX since `original == RAX`).
///
/// Non-LOCK form uses a branchless mux: ZF is sign-extended into a full-width
/// mask, then `dst' = (mask & src) | (~mask & original)` selects between src
/// (if equal) and original (if not), and the symmetric expression updates RAX.
pub fn lift_cmpxchg(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst_loc = ctx.operand_write(insn, 0);
    let dst_val = ctx.operand_read(insn, 0);
    let src_val = ctx.operand_read(insn, 1);
    let (dst_loc, dst_val, src_val) = match (dst_loc, dst_val, src_val) {
        (Some(a), Some(b), Some(c)) => (a, b, c),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let op_size = dst_val.size;
    let rax_acc = Varnode::new(unlace_ir::SpaceId::Register, RAX, op_size);

    if insn.has_lock_prefix() {
        let tag = Varnode::constant(atomic_tag::CMPXCHG, 8);
        let original = Varnode::unique(ctx.alloc_unique(), op_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            original,
            smallvec![tag, dst_val, src_val, rax_acc],
            ctx.addr,
        ));

        let zf = Varnode::new(unlace_ir::SpaceId::Register, ZF, 1);
        ctx.emit(IrInsn::with_output(
            IrOp::IntEqual,
            zf,
            smallvec![original, rax_acc],
            ctx.addr,
        ));

        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            rax_acc,
            smallvec![original],
            ctx.addr,
        ));
        return;
    }

    let original = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        original,
        smallvec![dst_val],
        ctx.addr,
    ));

    let cmp_result = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSub,
        cmp_result,
        smallvec![rax_acc, original],
        ctx.addr,
    ));
    emit_sub_flags(ctx, rax_acc, original, cmp_result, op_size);

    let zf = Varnode::new(unlace_ir::SpaceId::Register, ZF, 1);
    let mask = build_zf_mask(ctx, zf, op_size);
    let inv_mask = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntNegate,
        inv_mask,
        smallvec![mask],
        ctx.addr,
    ));

    let new_dst = mux_select(ctx, mask, inv_mask, src_val, original, op_size);
    ctx.write_operand_insn(insn, 0, dst_loc, new_dst);

    let new_rax = mux_select(ctx, mask, inv_mask, rax_acc, original, op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rax_acc,
        smallvec![new_rax],
        ctx.addr,
    ));
}

fn build_zf_mask(ctx: &mut LiftCtx, zf: Varnode, op_size: u8) -> Varnode {
    let zf_ext = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntZext,
        zf_ext,
        smallvec![zf],
        ctx.addr,
    ));
    let mask = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSub,
        mask,
        smallvec![Varnode::constant(0, op_size), zf_ext],
        ctx.addr,
    ));
    mask
}

fn mux_select(
    ctx: &mut LiftCtx,
    mask_true: Varnode,
    mask_false: Varnode,
    val_true: Varnode,
    val_false: Varnode,
    op_size: u8,
) -> Varnode {
    let t = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        t,
        smallvec![val_true, mask_true],
        ctx.addr,
    ));
    let f = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        f,
        smallvec![val_false, mask_false],
        ctx.addr,
    ));
    let result = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        result,
        smallvec![t, f],
        ctx.addr,
    ));
    result
}

/// XADD dst, src (operands are usually `[mem], reg` or `reg, reg`).
///
/// Intel SDM pseudocode:
///   temp := dst + src
///   src  := dst        (the original dst is moved into src register)
///   dst  := temp
///
/// LOCK form lowers to `Callother(XADD, dst, src)`; the intrinsic captures the
/// atomic read-modify-write and returns the original dst, which is written
/// back into the src register. Add-flags are emitted from the captured values
/// for both forms.
pub fn lift_xadd(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst_loc = ctx.operand_write(insn, 0);
    let src_loc = ctx.operand_write(insn, 1);
    let dst_val = ctx.operand_read(insn, 0);
    let src_val = ctx.operand_read(insn, 1);
    let (dst_loc, src_loc, dst_val, src_val) = match (dst_loc, src_loc, dst_val, src_val) {
        (Some(a), Some(b), Some(c), Some(d)) => (a, b, c, d),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let op_size = dst_val.size;

    if insn.has_lock_prefix() {
        let tag = Varnode::constant(atomic_tag::XADD, 8);
        let original_dst = Varnode::unique(ctx.alloc_unique(), op_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            original_dst,
            smallvec![tag, dst_val, src_val],
            ctx.addr,
        ));

        let sum = Varnode::unique(ctx.alloc_unique(), op_size);
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            sum,
            smallvec![original_dst, src_val],
            ctx.addr,
        ));
        emit_add_flags(ctx, original_dst, src_val, sum, op_size);

        ctx.write_operand_insn(insn, 1, src_loc, original_dst);
        return;
    }

    let saved_dst = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        saved_dst,
        smallvec![dst_val],
        ctx.addr,
    ));

    let sum = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        sum,
        smallvec![saved_dst, src_val],
        ctx.addr,
    ));
    emit_add_flags(ctx, saved_dst, src_val, sum, op_size);

    ctx.write_operand_insn(insn, 0, dst_loc, sum);
    ctx.write_operand_insn(insn, 1, src_loc, saved_dst);
}
