use capstone::arch::DetailsArchInsn;
use capstone::arch::ppc::PpcOperand;
use capstone::{Capstone, Insn, InsnDetail};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::{LiftCtx, operand_imm, trace_lift_lazy};
use crate::register_file::{cr_eq, ctr_with_size, lr_with_size};

pub fn lift_b(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let target = match ops.first().and_then(operand_imm) {
        Some(t) => Varnode::constant(t as u64, ctx.ptr_size),
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Branch,
        smallvec![target],
        ctx.addr,
    ));
}

pub fn lift_bl(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    // BL target: LR = addr + 4, then call target
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), ctx.ptr_size);
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        lr_with_size(ctx.ptr_size),
        smallvec![return_addr],
        ctx.addr,
    ));

    let target = match ops.first().and_then(operand_imm) {
        Some(t) => Varnode::constant(t as u64, ctx.ptr_size),
        None => return ctx.emit_unimplemented(),
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Call,
        smallvec![target],
        ctx.addr,
    ));
}

pub fn lift_bc(ctx: &mut LiftCtx, _cs: &Capstone, insn: &Insn<'_>, detail: &InsnDetail<'_>) {
    let arch_ops: Vec<PpcOperand> = detail
        .arch_detail()
        .ppc()
        .map(|d| d.operands().collect())
        .unwrap_or_default();

    let target = arch_ops.iter().rev().find_map(|o| {
        if let PpcOperand::Imm(v) = o {
            Some(v)
        } else {
            None
        }
    });

    let target_vn = match target {
        Some(t) => Varnode::constant(*t as u64, ctx.ptr_size),
        None => {
            trace_lift_lazy(ctx.addr, || format!("bc unsupported operands={arch_ops:?}"));
            return ctx.emit_unimplemented();
        }
    };

    let Some(invert) = ppc_bc_cr_eq_polarity(insn.mnemonic().unwrap_or(""), &arch_ops) else {
        trace_lift_lazy(ctx.addr, || {
            format!(
                "bc unsupported-condition mnemonic={} operands={arch_ops:?}",
                insn.mnemonic().unwrap_or("")
            )
        });
        return ctx.emit_unimplemented();
    };

    let mut cond = cr_eq();
    trace_lift_lazy(ctx.addr, || {
        format!("bc operands={arch_ops:?} target={target_vn:?} cond={cond:?} invert={invert}")
    });
    if invert {
        let inverted = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::BoolNegate,
            inverted,
            smallvec![cond],
            ctx.addr,
        ));
        cond = inverted;
    }
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target_vn, cond],
        ctx.addr,
    ));
}

fn ppc_bc_cr_eq_polarity(mnemonic: &str, ops: &[PpcOperand]) -> Option<bool> {
    if explicit_non_cr0_operand(ops) {
        return None;
    }

    let mnemonic = mnemonic.trim_end_matches(['+', '-']);
    match mnemonic {
        "beq" => return Some(false),
        "bne" => return Some(true),
        "bc" => {}
        _ => return None,
    }

    let immediates: Vec<i64> = ops.iter().filter_map(operand_imm).collect();
    if immediates.len() < 3 {
        return None;
    }
    let bo = immediates[0];
    let bi = immediates[1];
    match (bo, bi) {
        (12, 2) => Some(false),
        (4, 2) => Some(true),
        _ => None,
    }
}

fn explicit_non_cr0_operand(ops: &[PpcOperand]) -> bool {
    ops.iter()
        .any(|op| matches!(op, PpcOperand::Reg(reg) if (13..=19).contains(&reg.0)))
}

pub fn lift_bctr(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![ctr_with_size(ctx.ptr_size)],
        ctx.addr,
    ));
}

pub fn lift_blr(ctx: &mut LiftCtx) {
    ctx.emit(IrInsn::without_output(
        IrOp::Return,
        smallvec![lr_with_size(ctx.ptr_size)],
        ctx.addr,
    ));
}
