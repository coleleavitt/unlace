use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::*;

pub fn lift_jmp(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let target = match insn.op0_kind() {
        iced_x86::OpKind::NearBranch16
        | iced_x86::OpKind::NearBranch32
        | iced_x86::OpKind::NearBranch64 => Varnode::constant(insn.near_branch_target(), 8),
        _ => match ctx.operand_read(insn, 0) {
            Some(v) => v,
            None => {
                ctx.emit_unimplemented();
                return;
            }
        },
    };

    if matches!(
        insn.op0_kind(),
        iced_x86::OpKind::NearBranch16
            | iced_x86::OpKind::NearBranch32
            | iced_x86::OpKind::NearBranch64
    ) {
        ctx.emit(IrInsn::without_output(
            IrOp::Branch,
            smallvec![target],
            ctx.addr,
        ));
    } else {
        ctx.emit(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![target],
            ctx.addr,
        ));
    }
}

pub fn lift_jcc(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let target = Varnode::constant(insn.near_branch_target(), 8);

    let condition = jcc_condition(ctx, insn.mnemonic());
    match condition {
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

fn jcc_condition(ctx: &mut LiftCtx, mnemonic: iced_x86::Mnemonic) -> Option<Varnode> {
    use iced_x86::Mnemonic as M;

    let zf = Varnode::new(SpaceId::Register, ZF, 1);
    let sf = Varnode::new(SpaceId::Register, SF, 1);
    let cf = Varnode::new(SpaceId::Register, CF, 1);
    let of = Varnode::new(SpaceId::Register, OF, 1);

    match mnemonic {
        // JE/JZ: ZF == 1
        M::Je => Some(zf),

        // JNE/JNZ: ZF == 0
        M::Jne => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![zf],
                ctx.addr,
            ));
            Some(t)
        }

        // JB/JC/JNAE: CF == 1 (unsigned below)
        M::Jb => Some(cf),

        // JAE/JNC/JNB: CF == 0 (unsigned above or equal)
        M::Jae => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![cf],
                ctx.addr,
            ));
            Some(t)
        }

        // JA/JNBE: CF==0 && ZF==0 (unsigned above)
        M::Ja => {
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

        // JBE/JNA: CF==1 || ZF==1 (unsigned below or equal)
        M::Jbe => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![cf, zf],
                ctx.addr,
            ));
            Some(t)
        }

        // JL/JNGE: SF != OF (signed less)
        M::Jl => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                t,
                smallvec![sf, of],
                ctx.addr,
            ));
            Some(t)
        }

        // JGE/JNL: SF == OF (signed greater or equal)
        M::Jge => {
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

        // JG/JNLE: ZF==0 && SF==OF (signed greater)
        M::Jg => {
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

        // JLE/JNG: ZF==1 || SF!=OF (signed less or equal)
        M::Jle => {
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

        // JS: SF == 1
        M::Js => Some(sf),

        // JNS: SF == 0
        M::Jns => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![sf],
                ctx.addr,
            ));
            Some(t)
        }

        // JO: OF == 1
        M::Jo => Some(of),

        // JNO: OF == 0
        M::Jno => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![of],
                ctx.addr,
            ));
            Some(t)
        }

        // JP: PF == 1
        M::Jp => Some(Varnode::new(SpaceId::Register, PF, 1)),

        // JNP: PF == 0
        M::Jnp => {
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

pub fn lift_call(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let return_value = Varnode::new(SpaceId::Register, RAX, 8);
    match insn.op0_kind() {
        iced_x86::OpKind::NearBranch16
        | iced_x86::OpKind::NearBranch32
        | iced_x86::OpKind::NearBranch64 => {
            let t = Varnode::constant(insn.near_branch_target(), 8);
            ctx.emit(IrInsn::with_output(
                IrOp::Call,
                return_value,
                smallvec![t],
                ctx.addr,
            ));
        }
        _ => match ctx.operand_read(insn, 0) {
            Some(t) => {
                ctx.emit(IrInsn::with_output(
                    IrOp::Callind,
                    return_value,
                    smallvec![t],
                    ctx.addr,
                ));
            }
            None => ctx.emit_unimplemented(),
        },
    };
}

pub fn lift_ret(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let return_value = Varnode::new(SpaceId::Register, RAX, 4);
    ctx.emit(IrInsn::without_output(
        IrOp::Return,
        smallvec![return_value],
        ctx.addr,
    ));
}
