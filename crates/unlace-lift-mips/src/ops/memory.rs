use capstone::arch::mips::MipsOperand;
use unlace_ir::IrOp;
use smallvec::smallvec;
use unlace_ir::{IrInsn, Varnode};

use crate::lift::LiftCtx;

pub fn lift_load(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let dst = match &ops[0] {
        MipsOperand::Reg(r) => ctx.write_reg(*r),
        _ => None,
    };
    let addr_vn = ctx.mem_addr(&ops[1]);
    match (dst, addr_vn) {
        (Some(dst), Some(addr_vn)) => {
            let loaded = ctx.alloc_unique(size);
            ctx.emit_load(loaded, addr_vn);
            if size < 8 {
                let extended = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    extended,
                    smallvec![loaded],
                    ctx.addr,
                ));
                ctx.write_to_reg(dst, extended);
            } else {
                ctx.write_to_reg(dst, loaded);
            }
        }
        (None, _) => {}
        _ => ctx.emit_unimplemented(),
    }
}

pub fn lift_store(ctx: &mut LiftCtx, ops: &[MipsOperand], size: u8) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let src = ctx.read_operand(&ops[0]);
    let addr_vn = ctx.mem_addr(&ops[1]);
    match (src, addr_vn) {
        (Some(src), Some(addr_vn)) => {
            if size < 8 {
                let truncated = ctx.alloc_unique(size);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    truncated,
                    smallvec![src, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                ctx.emit_store(addr_vn, truncated);
            } else {
                ctx.emit_store(addr_vn, src);
            }
        }
        _ => ctx.emit_unimplemented(),
    }
}
