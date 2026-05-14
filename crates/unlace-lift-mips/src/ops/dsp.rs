use capstone::arch::mips::MipsOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::dsp;
use crate::lift::LiftCtx;

fn dst_reg(ctx: &mut LiftCtx, op: &MipsOperand) -> Option<Varnode> {
    match op {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    }
}

fn src(ctx: &LiftCtx, op: &MipsOperand) -> Option<Varnode> {
    ctx.read_operand(op)
}

fn ac_offset(index: u64) -> u64 {
    dsp::DSP_AC_BASE + (index * dsp::AC_STRIDE)
}

fn read_ac128(index: u64) -> Varnode {
    dsp::reg128(ac_offset(index))
}

fn imm_u8(op: &MipsOperand) -> Option<Varnode> {
    match op {
        MipsOperand::Imm(imm) => Some(Varnode::constant(*imm as u64, 1)),
        _ => None,
    }
}

fn write_callother_reg(ctx: &mut LiftCtx, ops: &[MipsOperand], tag: u64) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let mut inputs = Vec::with_capacity(ops.len() - 1);
    for op in &ops[1..] {
        let Some(vn) = src(ctx, op) else {
            ctx.emit_unimplemented();
            return;
        };
        inputs.push(vn);
    }
    dsp::emit_callother_with_output(ctx, dst, tag, inputs);
}

fn binary_reg(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let (Some(a), Some(b)) = (src(ctx, &ops[1]), src(ctx, &ops[2])) else {
        ctx.emit_unimplemented();
        return;
    };
    let tmp = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(ir_op, tmp, smallvec![a, b], ctx.addr));
    ctx.write_to_reg(dst, tmp);
}

fn binary_reg_with_dsp_outflag(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let (Some(a), Some(b)) = (src(ctx, &ops[1]), src(ctx, &ops[2])) else {
        ctx.emit_unimplemented();
        return;
    };
    let tmp = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(ir_op, tmp, smallvec![a, b], ctx.addr));
    ctx.write_to_reg(dst, tmp);
    let carry = ctx.alloc_unique(1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntCarry,
        carry,
        smallvec![a, b],
        ctx.addr,
    ));
    let carry64 = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntZext,
        carry64,
        smallvec![carry],
        ctx.addr,
    ));
    ctx.write_to_reg(dsp::reg64(dsp::DSPOUTFLAG), carry64);
}

fn unary_shift_imm(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(value) = src(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(amount) = imm_u8(&ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    let tmp = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(
        ir_op,
        tmp,
        smallvec![value, amount],
        ctx.addr,
    ));
    ctx.write_to_reg(dst, tmp);
}

pub fn lift_append(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_APPEND);
}

pub fn lift_balign(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_BALIGN);
}

pub fn lift_prepend(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PREPEND);
}

pub fn lift_packrl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PACKRL);
}

pub fn lift_pick(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PICK);
}

pub fn lift_preceq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECEQ);
}

pub fn lift_precequ(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECEQU);
}

pub fn lift_preceu(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECEU);
}

pub fn lift_precrq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECRQ);
}

pub fn lift_precrqu_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECRQU_S);
}

pub fn lift_precrq_rs(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECRQ_RS);
}

pub fn lift_precr(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECR);
}

pub fn lift_precr_sra(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECR_SRA);
}

pub fn lift_precr_sra_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECR_SRA_R);
}

pub fn lift_repl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_REPL);
}

pub fn lift_replv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_REPLV);
}

pub fn lift_addq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntAdd);
}

pub fn lift_addq_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntAdd);
}

pub fn lift_addqh(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntAdd);
}

pub fn lift_addqh_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntAdd);
}

pub fn lift_subq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntSub);
}

pub fn lift_subq_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntSub);
}

pub fn lift_subqh(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSub);
}

pub fn lift_subqh_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSub);
}

pub fn lift_cmp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let mut inputs = Vec::with_capacity(ops.len());
    for op in ops {
        let Some(vn) = src(ctx, op) else {
            ctx.emit_unimplemented();
            return;
        };
        inputs.push(vn);
    }
    let dst = dsp::reg64(dsp::DSPCCOND);
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_CMP, inputs);
}

pub fn lift_shll(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shll_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shra(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntSright);
}

pub fn lift_shra_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntSright);
}

pub fn lift_shrl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntRight);
}

pub fn lift_shllv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shllv_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shrav(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSright);
}

pub fn lift_shrav_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSright);
}

pub fn lift_shrlv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntRight);
}

pub fn lift_mulq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let (Some(a), Some(b)) = (src(ctx, &ops[0]), src(ctx, &ops[1])) else {
        ctx.emit_unimplemented();
        return;
    };
    let dst = if ops.len() >= 3 {
        match &ops[2] {
            MipsOperand::Reg(_) => dst_reg(ctx, &ops[2]).unwrap_or_else(|| read_ac128(0)),
            _ => read_ac128(0),
        }
    } else {
        read_ac128(0)
    };
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_MULQ, [a, b]);
}

pub fn lift_dpa(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let (Some(a), Some(b)) = (src(ctx, &ops[0]), src(ctx, &ops[1])) else {
        ctx.emit_unimplemented();
        return;
    };
    let acc_index = match &ops[2] {
        MipsOperand::Imm(imm) if (0..=3).contains(imm) => *imm as u64,
        MipsOperand::Reg(_) => 0,
        _ => 0,
    };
    let dst = read_ac128(acc_index);
    dsp::emit_callother_with_output(
        ctx,
        dst,
        dsp::CALLOTHER_DSP_DPA,
        [a, b, Varnode::constant(acc_index, 1)],
    );
}

pub fn lift_dps(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let (Some(a), Some(b)) = (src(ctx, &ops[0]), src(ctx, &ops[1])) else {
        ctx.emit_unimplemented();
        return;
    };
    let acc_index = match &ops[2] {
        MipsOperand::Imm(imm) if (0..=3).contains(imm) => *imm as u64,
        MipsOperand::Reg(_) => 0,
        _ => 0,
    };
    let dst = read_ac128(acc_index);
    dsp::emit_callother_with_output(
        ctx,
        dst,
        dsp::CALLOTHER_DSP_DPS,
        [a, b, Varnode::constant(acc_index, 1)],
    );
}

pub fn lift_shilo(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_SHILO);
}

pub fn lift_shilov(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_SHILOV);
}

pub fn lift_extp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTP);
}

pub fn lift_extpv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTPV);
}

pub fn lift_extpdp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTPDP);
}

pub fn lift_extpdpv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTPDPV);
}

pub fn lift_insv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_INSV);
}

pub fn lift_rddsp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let selector = ops
        .get(1)
        .and_then(imm_u8)
        .unwrap_or_else(|| Varnode::constant(0, 1));
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_RDDSP, [selector]);
}

pub fn lift_wrdsp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let Some(value) = src(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let mask = ops
        .get(1)
        .and_then(imm_u8)
        .unwrap_or_else(|| Varnode::constant(0xff, 1));
    ctx.emit(IrInsn::with_output(IrOp::IntCarry, carry, smallvec![a, b], ctx.addr));
    let carry64 = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(IrOp::IntZext, carry64, smallvec![carry], ctx.addr));
    ctx.write_to_reg(dsp::reg64(dsp::DSPOUTFLAG), carry64);
}

fn unary_shift_imm(ctx: &mut LiftCtx, ops: &[MipsOperand], ir_op: IrOp) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(value) = src(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(amount) = imm_u8(&ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    let tmp = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(ir_op, tmp, smallvec![value, amount], ctx.addr));
    ctx.write_to_reg(dst, tmp);
}

pub fn lift_append(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_APPEND);
}

pub fn lift_balign(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_BALIGN);
}

pub fn lift_prepend(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PREPEND);
}

pub fn lift_packrl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PACKRL);
}

pub fn lift_pick(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PICK);
}

pub fn lift_preceq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECEQ);
}

pub fn lift_precequ(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECEQU);
}

pub fn lift_preceu(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECEU);
}

pub fn lift_precrq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECRQ);
}

pub fn lift_precrqu_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECRQU_S);
}

pub fn lift_precrq_rs(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECRQ_RS);
}

pub fn lift_precr(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECR);
}

pub fn lift_precr_sra(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECR_SRA);
}

pub fn lift_precr_sra_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_PRECR_SRA_R);
}

pub fn lift_repl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_REPL);
}

pub fn lift_replv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_REPLV);
}

pub fn lift_addq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntAdd);
}

pub fn lift_addq_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntAdd);
}

pub fn lift_addqh(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntAdd);
}

pub fn lift_addqh_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntAdd);
}

pub fn lift_subq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntSub);
}

pub fn lift_subq_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg_with_dsp_outflag(ctx, ops, IrOp::IntSub);
}

pub fn lift_subqh(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSub);
}

pub fn lift_subqh_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSub);
}

pub fn lift_cmp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let mut inputs = Vec::with_capacity(ops.len());
    for op in ops {
        let Some(vn) = src(ctx, op) else {
            ctx.emit_unimplemented();
            return;
        };
        inputs.push(vn);
    }
    let dst = dsp::reg64(dsp::DSPCCOND);
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_CMP, inputs);
}

pub fn lift_shll(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shll_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shra(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntSright);
}

pub fn lift_shra_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntSright);
}

pub fn lift_shrl(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    unary_shift_imm(ctx, ops, IrOp::IntRight);
}

pub fn lift_shllv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shllv_s(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntLeft);
}

pub fn lift_shrav(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSright);
}

pub fn lift_shrav_r(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntSright);
}

pub fn lift_shrlv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    binary_reg(ctx, ops, IrOp::IntRight);
}

pub fn lift_mulq(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let (Some(a), Some(b)) = (src(ctx, &ops[0]), src(ctx, &ops[1])) else {
        ctx.emit_unimplemented();
        return;
    };
    let dst = if ops.len() >= 3 {
        match &ops[2] {
            MipsOperand::Reg(_) => dst_reg(ctx, &ops[2]).unwrap_or_else(|| read_ac128(0)),
            _ => read_ac128(0),
        }
    } else {
        read_ac128(0)
    };
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_MULQ, [a, b]);
}

pub fn lift_dpa(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let (Some(a), Some(b)) = (src(ctx, &ops[0]), src(ctx, &ops[1])) else {
        ctx.emit_unimplemented();
        return;
    };
    let acc_index = match &ops[2] {
        MipsOperand::Imm(imm) if (0..=3).contains(imm) => *imm as u64,
        MipsOperand::Reg(_) => 0,
        _ => 0,
    };
    let dst = read_ac128(acc_index);
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_DPA, [a, b, Varnode::constant(acc_index, 1)]);
}

pub fn lift_dps(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let (Some(a), Some(b)) = (src(ctx, &ops[0]), src(ctx, &ops[1])) else {
        ctx.emit_unimplemented();
        return;
    };
    let acc_index = match &ops[2] {
        MipsOperand::Imm(imm) if (0..=3).contains(imm) => *imm as u64,
        MipsOperand::Reg(_) => 0,
        _ => 0,
    };
    let dst = read_ac128(acc_index);
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_DPS, [a, b, Varnode::constant(acc_index, 1)]);
}

pub fn lift_shilo(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_SHILO);
}

pub fn lift_shilov(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_SHILOV);
}

pub fn lift_extp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTP);
}

pub fn lift_extpv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTPV);
}

pub fn lift_extpdp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTPDP);
}

pub fn lift_extpdpv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_EXTPDPV);
}

pub fn lift_insv(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    write_callother_reg(ctx, ops, dsp::CALLOTHER_DSP_INSV);
}

pub fn lift_rddsp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = dst_reg(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let selector = ops.get(1).and_then(imm_u8).unwrap_or_else(|| Varnode::constant(0, 1));
    dsp::emit_callother_with_output(ctx, dst, dsp::CALLOTHER_DSP_RDDSP, [selector]);
}

pub fn lift_wrdsp(ctx: &mut LiftCtx, ops: &[MipsOperand]) {
    if ops.is_empty() {
        ctx.emit_unimplemented();
        return;
    }
    let Some(value) = src(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let mask = ops.get(1).and_then(imm_u8).unwrap_or_else(|| Varnode::constant(0xff, 1));
    dsp::emit_callother(ctx, dsp::CALLOTHER_DSP_WRDSP, [value, mask]);
}
