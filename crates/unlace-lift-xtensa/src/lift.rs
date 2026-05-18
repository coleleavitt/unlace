//! Xtensa -> IR lowering.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::decode::{XtensaInsn, XtensaOp};

/// All Xtensa AR registers are 4 bytes.
pub(crate) const REG_SIZE: u8 = 4;
/// Each AR register occupies an 8-byte slot in register space (for alignment
/// and to match the spacing convention used by other unlace lifters).
const REG_STRIDE: u64 = 8;
/// PC lives just past the 16 AR registers.
const PC_OFFSET: u64 = 16 * REG_STRIDE;

#[inline]
pub(crate) const fn reg_offset(r: u8) -> u64 {
    (r as u64) * REG_STRIDE
}

#[inline]
fn reg_vn(r: u8) -> Varnode {
    Varnode::reg(reg_offset(r & 0x0F), REG_SIZE)
}

pub struct LiftCtx {
    pub ops: Vec<IrInsn>,
    pub addr: u64,
    unique_counter: u64,
}

impl LiftCtx {
    pub fn new(addr: u64) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            unique_counter: 0,
        }
    }

    fn alloc_unique(&mut self, size: u8) -> Varnode {
        let id = self.unique_counter;
        self.unique_counter += 1;
        Varnode::unique(id, size)
    }

    fn emit(&mut self, insn: IrInsn) {
        self.ops.push(insn);
    }

    fn emit_unimplemented(&mut self) {
        self.emit(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }
}

/// Lift a decoded Xtensa instruction into IR.
pub fn lift(insn: &XtensaInsn, addr: u64) -> LiftCtx {
    let mut ctx = LiftCtx::new(addr);
    dispatch(&mut ctx, &insn.op, insn.len);
    ctx
}

fn dispatch(ctx: &mut LiftCtx, op: &XtensaOp, insn_len: usize) {
    match *op {
        // -- NOP: emit a single Copy unique <- 0 (effect-free, keeps the op list non-empty). --
        XtensaOp::Nop => {
            let u = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                u,
                smallvec![Varnode::constant(0, 1)],
                ctx.addr,
            ));
        }

        // -- Arithmetic / bitwise RRR --
        XtensaOp::Add { r, s, t } => emit_rrr(ctx, IrOp::IntAdd, r, s, t),
        XtensaOp::Sub { r, s, t } => emit_rrr(ctx, IrOp::IntSub, r, s, t),
        XtensaOp::And { r, s, t } => emit_rrr(ctx, IrOp::IntAnd, r, s, t),
        XtensaOp::Or { r, s, t } => emit_rrr(ctx, IrOp::IntOr, r, s, t),
        XtensaOp::Xor { r, s, t } => emit_rrr(ctx, IrOp::IntXor, r, s, t),

        // -- Load / Store (32-bit, offset is imm8 << 2). --
        XtensaOp::L32i { t, s, imm } => {
            let base = reg_vn(s);
            let off_val = (imm as u64) << 2;
            let off = Varnode::constant(off_val, REG_SIZE);
            let ea = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![base, off],
                ctx.addr,
            ));
            let dst = reg_vn(t);
            ctx.emit(IrInsn::with_output(
                IrOp::Load,
                dst,
                smallvec![ea],
                ctx.addr,
            ));
        }
        XtensaOp::S32i { t, s, imm } => {
            let base = reg_vn(s);
            let off_val = (imm as u64) << 2;
            let off = Varnode::constant(off_val, REG_SIZE);
            let ea = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![base, off],
                ctx.addr,
            ));
            let src = reg_vn(t);
            // STORE has no output; inputs are (addr, value).
            ctx.emit(IrInsn::without_output(
                IrOp::Store,
                smallvec![ea, src],
                ctx.addr,
            ));
        }

        // -- MOVI: a_t <- sign_ext(imm8) --
        XtensaOp::Movi { t, imm } => {
            let dst = reg_vn(t);
            let val = Varnode::constant(imm as i64 as u64, REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                dst,
                smallvec![val],
                ctx.addr,
            ));
        }

        // -- CALL0: direct call to PC + offset; link in a0. --
        XtensaOp::Call0 { offset } => {
            let target = ctx
                .addr
                .wrapping_add(insn_len as u64)
                .wrapping_add(offset as i64 as u64);
            // Save return address in a0.
            let ret_addr = Varnode::constant(ctx.addr.wrapping_add(insn_len as u64), REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                reg_vn(0),
                smallvec![ret_addr],
                ctx.addr,
            ));
            let tgt = Varnode::new(SpaceId::Ram, target, 1);
            ctx.emit(IrInsn::without_output(IrOp::Call, smallvec![tgt], ctx.addr));
        }

        // -- CALLX0 a_s: indirect call via a_s, link in a0. --
        XtensaOp::Callx0 { s } => {
            let ret_addr = Varnode::constant(ctx.addr.wrapping_add(insn_len as u64), REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                reg_vn(0),
                smallvec![ret_addr],
                ctx.addr,
            ));
            let tgt = reg_vn(s);
            ctx.emit(IrInsn::without_output(IrOp::Call, smallvec![tgt], ctx.addr));
        }

        // -- RET / RETW: return through a0. --
        XtensaOp::Ret | XtensaOp::Retw => {
            ctx.emit(IrInsn::without_output(
                IrOp::Return,
                smallvec![reg_vn(0)],
                ctx.addr,
            ));
        }

        // -- J: unconditional branch to PC + offset. --
        XtensaOp::J { offset } => {
            let target = ctx
                .addr
                .wrapping_add(insn_len as u64)
                .wrapping_add(offset as i64 as u64);
            let tgt = Varnode::new(SpaceId::Ram, target, 1);
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![tgt],
                ctx.addr,
            ));
        }

        // -- Conditional branches: emit IntEqual / IntNotequal + Cbranch. --
        XtensaOp::Beq { s, t, offset } => {
            emit_cbranch(ctx, IrOp::IntEqual, reg_vn(s), reg_vn(t), offset, insn_len);
        }
        XtensaOp::Bne { s, t, offset } => {
            emit_cbranch(
                ctx,
                IrOp::IntNotequal,
                reg_vn(s),
                reg_vn(t),
                offset,
                insn_len,
            );
        }
        XtensaOp::Beqz { s, offset } => {
            let zero = Varnode::constant(0, REG_SIZE);
            emit_cbranch(ctx, IrOp::IntEqual, reg_vn(s), zero, offset, insn_len);
        }
        XtensaOp::Bnez { s, offset } => {
            let zero = Varnode::constant(0, REG_SIZE);
            emit_cbranch(ctx, IrOp::IntNotequal, reg_vn(s), zero, offset, insn_len);
        }

        XtensaOp::Unknown => ctx.emit_unimplemented(),
    }
}

fn emit_rrr(ctx: &mut LiftCtx, op: IrOp, r: u8, s: u8, t: u8) {
    let a = reg_vn(s);
    let b = reg_vn(t);
    let dst = reg_vn(r);
    ctx.emit(IrInsn::with_output(op, dst, smallvec![a, b], ctx.addr));
}

fn emit_cbranch(
    ctx: &mut LiftCtx,
    cmp: IrOp,
    lhs: Varnode,
    rhs: Varnode,
    offset: i32,
    insn_len: usize,
) {
    let cond = ctx.alloc_unique(1);
    ctx.emit(IrInsn::with_output(
        cmp,
        cond,
        smallvec![lhs, rhs],
        ctx.addr,
    ));
    let target = ctx
        .addr
        .wrapping_add(insn_len as u64)
        .wrapping_add(offset as i64 as u64);
    let tgt = Varnode::new(SpaceId::Ram, target, 1);
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![tgt, cond],
        ctx.addr,
    ));
}

/// Anti-aliased re-export so the parent module can compute `PC` slot.
#[allow(dead_code)]
pub(crate) const PC_REG_OFFSET: u64 = PC_OFFSET;
