//! IR lowering for the RX MVP decoder.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::decode::{BranchCond, RxInsn, RxOp};

const REG_SIZE: u8 = 4;
const STRIDE: u64 = 8;

/// Byte offset of register `r` (0..=15) in the RX register file.
pub const fn reg_offset(r: u8) -> u64 {
    (r as u64) * STRIDE
}

// PC and PSW immediately follow the 16 GP registers in the register space.
pub const PC_OFFSET: u64 = 16 * STRIDE; // 128
pub const PSW_OFFSET: u64 = PC_OFFSET + STRIDE; // 136

// PSW flag sub-registers, one byte each. Layout: Z, S, O, C.
pub const ZF_OFFSET: u64 = PSW_OFFSET + STRIDE; // 144
pub const SF_OFFSET: u64 = ZF_OFFSET + STRIDE; // 152
pub const OF_OFFSET: u64 = SF_OFFSET + STRIDE; // 160
pub const CF_OFFSET: u64 = OF_OFFSET + STRIDE; // 168

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

    fn reg(&self, r: u8) -> Varnode {
        Varnode::reg(reg_offset(r), REG_SIZE)
    }

    fn zf(&self) -> Varnode {
        Varnode::reg(ZF_OFFSET, 1)
    }

    fn sf(&self) -> Varnode {
        Varnode::reg(SF_OFFSET, 1)
    }

    fn of(&self) -> Varnode {
        Varnode::reg(OF_OFFSET, 1)
    }

    fn cf(&self) -> Varnode {
        Varnode::reg(CF_OFFSET, 1)
    }

    /// Emit the four standard arithmetic flags (Z, S, O, C) derived from a
    /// `lhs op rhs = result` triple. `is_sub` selects between IntCarry /
    /// IntSborrow semantics.
    fn emit_arith_flags(&mut self, lhs: Varnode, rhs: Varnode, result: Varnode, is_sub: bool) {
        let zero = Varnode::constant(0, REG_SIZE);
        self.emit(IrInsn::with_output(
            IrOp::IntEqual,
            self.zf(),
            smallvec![result, zero],
            self.addr,
        ));

        // Sign flag = high bit of result.
        let shifted = self.alloc_unique(REG_SIZE);
        self.emit(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![result, Varnode::constant(31, REG_SIZE)],
            self.addr,
        ));
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            self.sf(),
            smallvec![shifted, Varnode::constant(0, 4)],
            self.addr,
        ));

        if is_sub {
            self.emit(IrInsn::with_output(
                IrOp::IntSborrow,
                self.of(),
                smallvec![lhs, rhs],
                self.addr,
            ));
            self.emit(IrInsn::with_output(
                IrOp::IntLess,
                self.cf(),
                smallvec![lhs, rhs],
                self.addr,
            ));
        } else {
            self.emit(IrInsn::with_output(
                IrOp::IntScarry,
                self.of(),
                smallvec![lhs, rhs],
                self.addr,
            ));
            self.emit(IrInsn::with_output(
                IrOp::IntCarry,
                self.cf(),
                smallvec![lhs, rhs],
                self.addr,
            ));
        }
    }
}

/// Lift a decoded RX instruction into IR ops.
pub fn lift(insn: &RxInsn, addr: u64) -> LiftCtx {
    let mut ctx = LiftCtx::new(addr);
    let _len = insn.len as u64;

    match &insn.op {
        RxOp::Nop => {
            // NOP — emit a no-op COPY of r0 to r0 so consumers see at least one IR op.
            let r0 = ctx.reg(0);
            ctx.emit(IrInsn::with_output(IrOp::Copy, r0, smallvec![r0], ctx.addr));
        }
        RxOp::Rts => {
            ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![], ctx.addr));
        }
        RxOp::MovImm4L { dst, imm } => {
            let dst_v = ctx.reg(*dst);
            let imm_v = Varnode::constant(*imm as u64, REG_SIZE);
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![imm_v], ctx.addr));
        }
        RxOp::MovRegL { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![src_v], ctx.addr));
        }
        RxOp::MovLoadL { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let addr_v = ctx.reg(*src);
            let space_v = Varnode::constant(SpaceId::Ram as u64, 4);
            ctx.emit(IrInsn::with_output(
                IrOp::Load,
                dst_v,
                smallvec![space_v, addr_v],
                ctx.addr,
            ));
        }
        RxOp::MovStoreL { dst, src } => {
            let addr_v = ctx.reg(*dst);
            let val_v = ctx.reg(*src);
            let space_v = Varnode::constant(SpaceId::Ram as u64, 4);
            ctx.emit(IrInsn::without_output(
                IrOp::Store,
                smallvec![space_v, addr_v, val_v],
                ctx.addr,
            ));
        }
        RxOp::Add { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![result], ctx.addr));
            ctx.emit_arith_flags(dst_v, src_v, result, false);
        }
        RxOp::Sub { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![result], ctx.addr));
            ctx.emit_arith_flags(dst_v, src_v, result, true);
        }
        RxOp::And { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![result], ctx.addr));
        }
        RxOp::Or { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntOr,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![result], ctx.addr));
        }
        RxOp::Xor { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntXor,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![result], ctx.addr));
        }
        RxOp::Mul { dst, src } => {
            let dst_v = ctx.reg(*dst);
            let src_v = ctx.reg(*src);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntMult,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(IrOp::Copy, dst_v, smallvec![result], ctx.addr));
        }
        RxOp::Cmp { src1, src2 } => {
            // CMP src, dst sets flags from (dst - src). Result is discarded.
            let src_v = ctx.reg(*src1);
            let dst_v = ctx.reg(*src2);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![dst_v, src_v],
                ctx.addr,
            ));
            ctx.emit_arith_flags(dst_v, src_v, result, true);
        }
        RxOp::BraB { disp } => {
            let target = addr.wrapping_add(*disp as i64 as u64);
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![Varnode::ram(target, REG_SIZE)],
                ctx.addr,
            ));
        }
        RxOp::BsrW { disp } => {
            let target = addr.wrapping_add(*disp as i64 as u64);
            ctx.emit(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::ram(target, REG_SIZE)],
                ctx.addr,
            ));
        }
        RxOp::BcondB { cond, disp } => {
            let target = addr.wrapping_add(*disp as i64 as u64);
            let cond_v = match cond {
                BranchCond::Eq => ctx.zf(),
                BranchCond::Ne => {
                    let neg = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        IrOp::BoolNegate,
                        neg,
                        smallvec![ctx.zf()],
                        ctx.addr,
                    ));
                    neg
                }
                BranchCond::Ge => {
                    // GE = (S == O)
                    let eq = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntEqual,
                        eq,
                        smallvec![ctx.sf(), ctx.of()],
                        ctx.addr,
                    ));
                    eq
                }
                BranchCond::Le => {
                    // LE = Z OR (S != O)
                    let ne = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntNotequal,
                        ne,
                        smallvec![ctx.sf(), ctx.of()],
                        ctx.addr,
                    ));
                    let or = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        IrOp::BoolOr,
                        or,
                        smallvec![ctx.zf(), ne],
                        ctx.addr,
                    ));
                    or
                }
            };
            ctx.emit(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::ram(target, REG_SIZE), cond_v],
                ctx.addr,
            ));
        }
        RxOp::Unknown => {
            ctx.emit(IrInsn::without_output(IrOp::Unimplemented, smallvec![], ctx.addr));
        }
    }

    // Silence unused warning when `cf` is not used (e.g. logic-only path).
    let _ = ctx.cf();
    ctx
}
