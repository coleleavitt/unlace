use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_imm, operand_reg};

/// ADD rD, rA, rB  →  rD = rA + rB
pub fn lift_add(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        result,
        smallvec![ra, rb],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![result],
        ctx.addr,
    ));
}

/// ADDI rD, rA, imm  →  rD = rA + sext(imm)
pub fn lift_addi(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ra = ops.get(1).and_then(operand_reg);
    let imm = ops
        .get(1)
        .and_then(|o| operand_imm(o))
        .or_else(|| ops.get(2).and_then(|o| operand_imm(o)));

    match (ra, imm) {
        (Some(ra_vn), Some(imm_val)) => {
            let imm_vn = Varnode::constant(imm_val as u64, 8);
            let result = Varnode::unique(ctx.alloc_unique(), 8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![ra_vn, imm_vn],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rd,
                smallvec![result],
                ctx.addr,
            ));
        }
        (None, Some(imm_val)) => {
            // ADDI rD, 0, imm  →  rD = imm  (rA=r0 treated as literal 0)
            let imm_vn = Varnode::constant(imm_val as u64, 8);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rd,
                smallvec![imm_vn],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

/// ADDIS rD, rA, imm  →  rD = rA + (imm << 16)
pub fn lift_addis(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let ra = ops.get(1).and_then(operand_reg);
    let imm = ops
        .get(1)
        .and_then(|o| operand_imm(o))
        .or_else(|| ops.get(2).and_then(|o| operand_imm(o)));

    match (ra, imm) {
        (Some(ra_vn), Some(imm_val)) => {
            let shifted = (imm_val as i16 as i64) << 16;
            let imm_vn = Varnode::constant(shifted as u64, 8);
            let result = Varnode::unique(ctx.alloc_unique(), 8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![ra_vn, imm_vn],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rd,
                smallvec![result],
                ctx.addr,
            ));
        }
        (None, Some(imm_val)) => {
            let shifted = (imm_val as i16 as i64) << 16;
            let imm_vn = Varnode::constant(shifted as u64, 8);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                rd,
                smallvec![imm_vn],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

/// SUBF rD, rA, rB  →  rD = rB - rA  (note operand order)
pub fn lift_subf(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSub,
        result,
        smallvec![rb, ra],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![result],
        ctx.addr,
    ));
}

/// SUB rD, rA, rB  →  rD = rA - rB  (simplified mnemonic for SUBF with swapped args)
pub fn lift_sub(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSub,
        result,
        smallvec![ra, rb],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![result],
        ctx.addr,
    ));
}
