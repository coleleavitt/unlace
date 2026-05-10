use capstone::arch::arm64::{Arm64CC, Arm64OperandType, Arm64Shift};
use capstone::prelude::*;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_to_varnode};
use crate::register_file::{CF, NF, VF, X30, ZF};

type Ops = [(Arm64OperandType, Arm64Shift)];

pub fn lift_b(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail) {
    let arch = detail.arch_detail();
    let cc = arch.arm64().map(|a| a.cc());

    let target = match ops.first() {
        Some((Arm64OperandType::Imm(imm), _)) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match cc {
        Some(cc) if cc != Arm64CC::ARM64_CC_AL && cc != Arm64CC::ARM64_CC_INVALID => {
            let cond = build_condition(ctx, cc);
            match cond {
                Some(cond) => {
                    ctx.emit(IrInsn::without_output(
                        IrOp::Cbranch,
                        smallvec![target, cond],
                        ctx.addr,
                    ));
                }
                None => ctx.emit_unimplemented(),
            }
        }
        _ => {
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![target],
                ctx.addr,
            ));
        }
    }
}

pub fn lift_bl(ctx: &mut LiftCtx, ops: &Ops) {
    let target = match ops.first() {
        Some((Arm64OperandType::Imm(imm), _)) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let lr = Varnode::reg(X30, 8);
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), 8);
    ctx.emit_copy(lr, return_addr);

    ctx.emit(IrInsn::without_output(
        IrOp::Call,
        smallvec![target],
        ctx.addr,
    ));
}

pub fn lift_br(ctx: &mut LiftCtx, ops: &Ops) {
    let target = match ops.first() {
        Some((op_type, _)) => operand_to_varnode(ctx, op_type),
        None => None,
    };
    match target {
        Some(t) => {
            ctx.emit(IrInsn::without_output(
                IrOp::Branchind,
                smallvec![t],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_blr(ctx: &mut LiftCtx, ops: &Ops) {
    let target = match ops.first() {
        Some((op_type, _)) => operand_to_varnode(ctx, op_type),
        None => None,
    };
    match target {
        Some(t) => {
            let lr = Varnode::reg(X30, 8);
            let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), 8);
            ctx.emit_copy(lr, return_addr);

            ctx.emit(IrInsn::without_output(
                IrOp::Callind,
                smallvec![t],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_cbz(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let reg_vn = operand_to_varnode(ctx, &ops[0].0);
    let target = match &ops[1].0 {
        Arm64OperandType::Imm(imm) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match reg_vn {
        Some(reg) => {
            let zero = Varnode::constant(0, reg.size);
            let cond = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                cond,
                smallvec![reg, zero],
                ctx.addr,
            ));
            ctx.emit(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![target, cond],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_cbnz(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let reg_vn = operand_to_varnode(ctx, &ops[0].0);
    let target = match &ops[1].0 {
        Arm64OperandType::Imm(imm) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match reg_vn {
        Some(reg) => {
            let zero = Varnode::constant(0, reg.size);
            let cond = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntNotequal,
                cond,
                smallvec![reg, zero],
                ctx.addr,
            ));
            ctx.emit(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![target, cond],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_ret(ctx: &mut LiftCtx, ops: &Ops) {
    let target = if ops.is_empty() {
        Varnode::reg(X30, 8)
    } else {
        match operand_to_varnode(ctx, &ops[0].0) {
            Some(v) => v,
            None => Varnode::reg(X30, 8),
        }
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Return,
        smallvec![target],
        ctx.addr,
    ));
}

/// CSET Rd, cond  ≡  CSINC Rd, XZR, XZR, !cond  ≡  `Rd = (cond) ? 1 : 0`.
/// CSETM Rd, cond ≡  CSINV Rd, XZR, XZR, !cond  ≡  `Rd = (cond) ? -1 : 0`.
/// Capstone reports only the destination register; the condition lives in
/// the detail. We lower to the same `Callother` shape as CSEL with constant
/// inputs for `Rn`/`Rm` so downstream consumers can render uniformly.
pub fn lift_cset(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail, tag: u64) {
    let cc = detail.arch_detail().arm64().map(|a| a.cc());
    let cond = match cc.and_then(|cc| build_condition(ctx, cc)) {
        Some(cond) => cond,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let dst = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) if !crate::register_file::is_zero_reg(*reg) => {
            crate::register_file::reg_varnode(*reg)
        }
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let Some(dst) = dst else {
        ctx.emit_unimplemented();
        return;
    };
    let (true_val, false_val): (u64, u64) = if tag == 0x331 {
        (1, 0)
    } else {
        (u64::MAX, 0)
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![
            Varnode::constant(tag, 8),
            cond,
            Varnode::constant(true_val, dst.size),
            Varnode::constant(false_val, dst.size),
        ],
        ctx.addr,
    ));
}

pub fn lift_csel(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail, tag: u64) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }

    let cc = detail.arch_detail().arm64().map(|a| a.cc());
    let cond = match cc.and_then(|cc| build_condition(ctx, cc)) {
        Some(cond) => cond,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let rn = operand_to_varnode(ctx, &ops[1].0);
    let rm = operand_to_varnode(ctx, &ops[2].0);
    let dst = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) if !crate::register_file::is_zero_reg(*reg) => {
            crate::register_file::reg_varnode(*reg)
        }
        Some((Arm64OperandType::Reg(_), _)) => return,
        _ => None,
    };

    match (dst, rn, rm) {
        (Some(dst), Some(rn), Some(rm)) => ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            dst,
            smallvec![Varnode::constant(tag, 8), cond, rn, rm],
            ctx.addr,
        )),
        _ => ctx.emit_unimplemented(),
    }
}

fn build_condition(ctx: &mut LiftCtx, cc: Arm64CC) -> Option<Varnode> {
    let zf = Varnode::reg(ZF, 1);
    let nf = Varnode::reg(NF, 1);
    let cf = Varnode::reg(CF, 1);
    let vf = Varnode::reg(VF, 1);

    match cc {
        // EQ: Z == 1
        Arm64CC::ARM64_CC_EQ => Some(zf),

        // NE: Z == 0
        Arm64CC::ARM64_CC_NE => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![zf],
                ctx.addr,
            ));
            Some(t)
        }

        // HS/CS: C == 1
        Arm64CC::ARM64_CC_HS => Some(cf),

        // LO/CC: C == 0
        Arm64CC::ARM64_CC_LO => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![cf],
                ctx.addr,
            ));
            Some(t)
        }

        // MI: N == 1
        Arm64CC::ARM64_CC_MI => Some(nf),

        // PL: N == 0
        Arm64CC::ARM64_CC_PL => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![nf],
                ctx.addr,
            ));
            Some(t)
        }

        // VS: V == 1
        Arm64CC::ARM64_CC_VS => Some(vf),

        // VC: V == 0
        Arm64CC::ARM64_CC_VC => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![vf],
                ctx.addr,
            ));
            Some(t)
        }

        // HI: C == 1 && Z == 0
        Arm64CC::ARM64_CC_HI => {
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
                smallvec![cf, not_zf],
                ctx.addr,
            ));
            Some(t)
        }

        // LS: C == 0 || Z == 1
        Arm64CC::ARM64_CC_LS => {
            let not_cf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_cf,
                smallvec![cf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![not_cf, zf],
                ctx.addr,
            ));
            Some(t)
        }

        // GE: N == V
        Arm64CC::ARM64_CC_GE => {
            let ne = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                ne,
                smallvec![nf, vf],
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

        // LT: N != V
        Arm64CC::ARM64_CC_LT => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                t,
                smallvec![nf, vf],
                ctx.addr,
            ));
            Some(t)
        }

        // GT: Z == 0 && N == V
        Arm64CC::ARM64_CC_GT => {
            let not_zf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_zf,
                smallvec![zf],
                ctx.addr,
            ));
            let n_ne_v = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                n_ne_v,
                smallvec![nf, vf],
                ctx.addr,
            ));
            let n_eq_v = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                n_eq_v,
                smallvec![n_ne_v],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![not_zf, n_eq_v],
                ctx.addr,
            ));
            Some(t)
        }

        // LE: Z == 1 || N != V
        Arm64CC::ARM64_CC_LE => {
            let n_ne_v = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                n_ne_v,
                smallvec![nf, vf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![zf, n_ne_v],
                ctx.addr,
            ));
            Some(t)
        }

        _ => None,
    }
}
