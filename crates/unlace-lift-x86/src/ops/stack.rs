use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{RBP, RSP};

pub fn lift_push(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let src = ctx.operand_read(insn, 0);
    match src {
        Some(src) => {
            let push_size: u8 = if src.size < 8 { 8 } else { src.size };
            let value = if src.size < push_size {
                let ext = Varnode::unique(ctx.alloc_unique(), push_size);
                ctx.emit(IrInsn::with_output(IrOp::IntZext, ext, smallvec![src], ctx.addr));
                ext
            } else {
                src
            };

            let rsp = Varnode::new(SpaceId::Register, RSP, 8);
            let decr = Varnode::constant(push_size as u64, 8);
            let new_rsp = Varnode::unique(ctx.alloc_unique(), 8);
            ctx.emit(IrInsn::with_output(IrOp::IntSub, new_rsp, smallvec![rsp, decr], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::Copy, rsp, smallvec![new_rsp], ctx.addr));

            let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
            ctx.emit(IrInsn::without_output(IrOp::Store, smallvec![ram_space, new_rsp, value], ctx.addr));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_pop(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let dst = ctx.operand_write(insn, 0);
    match dst {
        Some(dst) => {
            let pop_size: u8 = if dst.size < 8 { 8 } else { dst.size };

            let rsp = Varnode::new(SpaceId::Register, RSP, 8);
            let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
            let loaded = Varnode::unique(ctx.alloc_unique(), pop_size);
            ctx.emit(IrInsn::with_output(IrOp::Load, loaded, smallvec![ram_space, rsp], ctx.addr));

            let incr = Varnode::constant(pop_size as u64, 8);
            let new_rsp = Varnode::unique(ctx.alloc_unique(), 8);
            ctx.emit(IrInsn::with_output(IrOp::IntAdd, new_rsp, smallvec![rsp, incr], ctx.addr));
            ctx.emit(IrInsn::with_output(IrOp::Copy, rsp, smallvec![new_rsp], ctx.addr));

            let value = if dst.size < pop_size {
                let t = Varnode::unique(ctx.alloc_unique(), dst.size);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece, t,
                    smallvec![loaded, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                t
            } else {
                loaded
            };

            ctx.write_operand_insn(insn, 0, dst, value);
        }
        None => ctx.emit_unimplemented(),
    }
}

/// LEAVE = MOV RSP, RBP; POP RBP
pub fn lift_leave(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let rsp = Varnode::new(SpaceId::Register, RSP, 8);
    let rbp = Varnode::new(SpaceId::Register, RBP, 8);

    // RSP = RBP
    ctx.emit(IrInsn::with_output(IrOp::Copy, rsp, smallvec![rbp], ctx.addr));

    // RBP = LOAD(RSP)  (pop old frame pointer)
    let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
    let loaded = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(IrOp::Load, loaded, smallvec![ram_space, rsp], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rbp, smallvec![loaded], ctx.addr));

    // RSP = RSP + 8
    let eight = Varnode::constant(8, 8);
    let new_rsp = Varnode::unique(ctx.alloc_unique(), 8);
    ctx.emit(IrInsn::with_output(IrOp::IntAdd, new_rsp, smallvec![rsp, eight], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::Copy, rsp, smallvec![new_rsp], ctx.addr));
}
