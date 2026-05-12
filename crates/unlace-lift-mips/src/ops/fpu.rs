use capstone::RegId;
use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{FCC0, FCSR, fcc_reg, fpr_reg};

fn reg_operand(op: &MipsOperand) -> Option<RegId> {
    match op {
        MipsOperand::Reg(reg) => Some(*reg),
        _ => None,
    }
}

fn fpr_operand(op: &MipsOperand, size: u8) -> Option<Varnode> {
    reg_operand(op).and_then(|reg| fpr_reg(reg, size))
}

fn gpr_operand(ctx: &LiftCtx, op: &MipsOperand) -> Option<Varnode> {
    reg_operand(op).and_then(|reg| ctx.read_reg(reg))
}

fn gpr_dst(ctx: &LiftCtx, op: &MipsOperand) -> Option<Varnode> {
    reg_operand(op).and_then(|reg| ctx.write_reg(reg))
}

fn emit_fp_binary(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8, op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = fpr_operand(&ops[0], size);
    let a = fpr_operand(&ops[1], size);
    let b = fpr_operand(&ops[2], size);
    match (dst, a, b) {
        (Some(dst), Some(a), Some(b)) => {
            ctx.emit(IrInsn::with_output(op, dst, smallvec![a, b], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

fn emit_fp_unary(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8, op: IrOp) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = fpr_operand(&ops[0], size);
    let src = fpr_operand(&ops[1], size);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            ctx.emit(IrInsn::with_output(op, dst, smallvec![src], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_fp_add(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_binary(ctx, ops, size, IrOp::FloatAdd);
}

pub fn lift_fp_sub(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_binary(ctx, ops, size, IrOp::FloatSub);
}

pub fn lift_fp_mul(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_binary(ctx, ops, size, IrOp::FloatMult);
}

pub fn lift_fp_div(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_binary(ctx, ops, size, IrOp::FloatDiv);
}

pub fn lift_fp_sqrt(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_unary(ctx, ops, size, IrOp::FloatSqrt);
}

pub fn lift_fp_abs(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_unary(ctx, ops, size, IrOp::FloatAbs);
}

pub fn lift_fp_neg(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    emit_fp_unary(ctx, ops, size, IrOp::FloatNeg);
}

pub fn lift_fp_mov(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = fpr_operand(&ops[0], size);
    let src = fpr_operand(&ops[1], size);
    match (dst, src) {
        (Some(dst), Some(src)) => ctx.write_to_reg(dst, src),
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_fp_convert(ctx: &mut LiftCtx, ops: &[MipsOperand], dst_size: u8, src_size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = fpr_operand(&ops[0], dst_size);
    let src = fpr_operand(&ops[1], src_size);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            ctx.emit(IrInsn::with_output(
                IrOp::FloatFloat2float,
                dst,
                smallvec![src],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_fp_round_to_int(
    ctx: &mut LiftCtx,
    ops: &[MipsOperand],
    dst_size: u8,
    src_size: u8,
    op: IrOp,
) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = fpr_operand(&ops[0], dst_size);
    let src = fpr_operand(&ops[1], src_size);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let rounded = ctx.alloc_unique(src_size);
            ctx.emit(IrInsn::with_output(op, rounded, smallvec![src], ctx.addr));
            ctx.emit(IrInsn::with_output(
                IrOp::FloatFloat2int,
                dst,
                smallvec![rounded],
                ctx.addr,
            ));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_fp_compare(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8, op: IrOp) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    // Capstone exposes the common c.<cond>.<fmt> form as fs, ft.  FCC0 is the
    // implicit destination for legacy compare instructions.
    let a = fpr_operand(&ops[0], size);
    let b = fpr_operand(&ops[1], size);
    match (a, b) {
        (Some(a), Some(b)) => {
            let fcc0 = Varnode::reg(FCC0, 1);
            ctx.emit(IrInsn::with_output(op, fcc0, smallvec![a, b], ctx.addr));
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_cfc1(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = gpr_dst(ctx, &ops[0]);
    match dst {
        Some(dst) => {
            let fcsr = Varnode::reg(FCSR, 4);
            let extended = ctx.alloc_unique(8);
            ctx.emit(IrInsn::with_output(
                IrOp::IntZext,
                extended,
                smallvec![fcsr],
                ctx.addr,
            ));
            ctx.write_to_reg(dst, extended);
        }
        None => {}
    }
}

pub fn lift_ctc1(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let src = gpr_operand(ctx, &ops[0]);
    match src {
        Some(src) => {
            let truncated = ctx.alloc_unique(4);
            ctx.emit(IrInsn::with_output(
                IrOp::Subpiece,
                truncated,
                smallvec![src, Varnode::constant(0, 1)],
                ctx.addr,
            ));
            ctx.write_to_reg(Varnode::reg(FCSR, 4), truncated);
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_mfc1(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = gpr_dst(ctx, &ops[0]);
    let src = fpr_operand(&ops[1], size);
    match (dst, src) {
        (Some(dst), Some(src)) => {
            let value = if size < 8 {
                let extended = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    extended,
                    smallvec![src],
                    ctx.addr,
                ));
                extended
            } else {
                src
            };
            ctx.write_to_reg(dst, value);
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_dmfc1(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_mfc1(ctx, ops, 8);
}

pub fn lift_mtc1(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let src = gpr_operand(ctx, &ops[0]);
    let dst = fpr_operand(&ops[1], size);
    match (src, dst) {
        (Some(src), Some(dst)) => {
            if size < 8 {
                let truncated = ctx.alloc_unique(size);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    truncated,
                    smallvec![src, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                ctx.write_to_reg(dst, truncated);
            } else {
                ctx.write_to_reg(dst, src);
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_dmtc1(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    lift_mtc1(ctx, ops, 8);
}

pub fn lift_fp_int_to_float(ctx: &mut LiftCtx, ops: &[MipsOperand], dst_size: u8, fmt: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let src_size = match fmt {
        20 => 4,
        21 => 8,
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let dst = fpr_operand(&ops[0], dst_size);
    let src = fpr_operand(&ops[1], src_size);
    match (dst, src) {
        (Some(dst), Some(src)) => ctx.emit(IrInsn::with_output(
            IrOp::FloatInt2float,
            dst,
            smallvec![src],
            ctx.addr,
        )),
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_fpu_load(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let dst = fpr_operand(&ops[0], size);
    let addr_vn = ctx.mem_addr(&ops[1]);
    match (dst, addr_vn) {
        (Some(dst), Some(addr_vn)) => ctx.emit_load(dst, addr_vn),
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_fpu_store(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }

    let src = fpr_operand(&ops[0], size);
    let addr_vn = ctx.mem_addr(&ops[1]);
    match (src, addr_vn) {
        (Some(src), Some(addr_vn)) => ctx.emit_store(addr_vn, src),
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_bc1(ctx: &mut LiftCtx, ops: &[MipsOperand], branch_on_true: bool) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }

    let target = ctx.read_operand(&ops[0]);
    match target {
        Some(target) => {
            let cond = fcc_reg(0);
            let branch_cond = if branch_on_true {
                cond
            } else {
                let negated = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::BoolNegate,
                    negated,
                    smallvec![cond],
                    ctx.addr,
                ));
                negated
            };
            ctx.emit(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![target, branch_cond],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_fp_unimplemented_callother(ctx: &mut LiftCtx, name_id: u64, ops: &[MipsOperand]) {
    let mut inputs = smallvec![Varnode::constant(name_id, 8)];
    for op in ops {
        match op {
            MipsOperand::Reg(reg) => {
                if let Some(fpr) = fpr_reg(*reg, 8) {
                    inputs.push(fpr);
                } else if let Some(gpr) = ctx.read_reg(*reg) {
                    inputs.push(gpr);
                }
            }
            MipsOperand::Imm(imm) => inputs.push(Varnode::constant(*imm as u64, 8)),
            MipsOperand::Mem(mem) => {
                if let Some(base) = ctx.read_reg(mem.base()) {
                    inputs.push(base);
                    inputs.push(Varnode::constant(mem.disp() as u64, 8));
                }
            }
            MipsOperand::Invalid => {}
        }
    }
    // Preserve instruction recognition without inventing inaccurate semantics for
    // obscure FPU encodings not representable by the current IR.
    ctx.emit(IrInsn::without_output(IrOp::Callother, inputs, ctx.addr));
}
