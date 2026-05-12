//! SuperH → IR lifting implementation.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::decode::ShInsn;

pub const REG_SIZE: u8 = 4;
pub const GPR_COUNT: u64 = 16;
pub const R0_OFFSET: u64 = 0;
pub const PC_OFFSET: u64 = GPR_COUNT * 8;
pub const PR_OFFSET: u64 = PC_OFFSET + 8;
pub const SR_OFFSET: u64 = PR_OFFSET + 8;
pub const GBR_OFFSET: u64 = SR_OFFSET + 8;
pub const VBR_OFFSET: u64 = GBR_OFFSET + 8;
pub const MACH_OFFSET: u64 = VBR_OFFSET + 8;
pub const MACL_OFFSET: u64 = MACH_OFFSET + 8;
pub const FPUL_OFFSET: u64 = MACL_OFFSET + 8;
pub const FPSCR_OFFSET: u64 = FPUL_OFFSET + 8;
pub const T_OFFSET: u64 = FPSCR_OFFSET + 8;
pub const FR_OFFSET: u64 = T_OFFSET + 8;

#[inline]
pub fn reg_offset(reg: u8) -> u64 {
    R0_OFFSET + (reg as u64) * 8
}

#[inline]
pub fn freg_offset(reg: u8) -> u64 {
    FR_OFFSET + (reg as u64) * 8
}

#[inline]
fn r(reg: u8) -> Varnode {
    Varnode::reg(reg_offset(reg), REG_SIZE)
}

#[inline]
fn fr(reg: u8) -> Varnode {
    Varnode::reg(freg_offset(reg), REG_SIZE)
}

#[inline]
fn c(value: u64) -> Varnode {
    Varnode::constant(value, REG_SIZE)
}

#[inline]
fn sc(value: i64) -> Varnode {
    Varnode::constant(value as i32 as u32 as u64, REG_SIZE)
}

#[inline]
fn t() -> Varnode {
    Varnode::reg(T_OFFSET, 1)
}

#[inline]
fn pc_rel(addr: u64, disp: i64) -> Varnode {
    // SH branch displacements are relative to PC after the two-instruction
    // prefetch: target = current + 4 + disp * 2.
    Varnode::ram((addr as i64 + 4 + disp * 2) as u64, REG_SIZE)
}

#[inline]
fn label_base(addr: u64) -> u64 {
    (addr + 4) & !3
}

#[inline]
fn temp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(idx, size)
}

#[derive(Default)]
pub struct LiftCtx {
    pub ops: Vec<IrInsn>,
}

impl LiftCtx {
    fn push_out(
        &mut self,
        op: IrOp,
        out: Varnode,
        inputs: smallvec::SmallVec<[Varnode; 3]>,
        addr: u64,
    ) {
        self.ops.push(IrInsn::with_output(op, out, inputs, addr));
    }

    fn push_no(&mut self, op: IrOp, inputs: smallvec::SmallVec<[Varnode; 3]>, addr: u64) {
        self.ops.push(IrInsn::without_output(op, inputs, addr));
    }

    fn copy(&mut self, out: Varnode, input: Varnode, addr: u64) {
        self.push_out(IrOp::Copy, out, smallvec![input], addr);
    }

    fn ea_reg_disp(&mut self, base: Varnode, disp: u64, addr: u64) -> Varnode {
        if disp == 0 {
            base
        } else {
            let ea = temp(0, REG_SIZE);
            self.push_out(IrOp::IntAdd, ea, smallvec![base, c(disp)], addr);
            ea
        }
    }

    fn load(&mut self, dst: Varnode, base: Varnode, disp: u64, size: u8, addr: u64) {
        let ea = self.ea_reg_disp(base, disp, addr);
        let out = if size == REG_SIZE { dst } else { temp(1, size) };
        self.push_out(IrOp::Load, out, smallvec![ea], addr);
        if size != REG_SIZE {
            self.push_out(IrOp::IntSext, dst, smallvec![out], addr);
        }
    }

    fn store(&mut self, base: Varnode, disp: u64, value: Varnode, addr: u64) {
        let ea = self.ea_reg_disp(base, disp, addr);
        self.push_no(IrOp::Store, smallvec![ea, value], addr);
    }

    fn cmp_to_t(&mut self, op: IrOp, lhs: Varnode, rhs: Varnode, addr: u64) {
        self.push_out(op, t(), smallvec![lhs, rhs], addr);
    }

    fn unimpl(&mut self, addr: u64) {
        self.push_no(IrOp::Unimplemented, smallvec![], addr);
    }
}

pub fn lift(insn: &ShInsn, addr: u64) -> LiftCtx {
    let mut ctx = LiftCtx::default();
    match *insn {
        ShInsn::Nop => ctx.copy(r(0), r(0), addr),
        ShInsn::MovReg { rm, rn } => ctx.copy(r(rn), r(rm), addr),
        ShInsn::MovImm { imm, rn } => ctx.copy(r(rn), sc(imm as i64), addr),

        ShInsn::MovBLoad { rm, rn } => ctx.load(r(rn), r(rm), 0, 1, addr),
        ShInsn::MovWLoad { rm, rn } => ctx.load(r(rn), r(rm), 0, 2, addr),
        ShInsn::MovLLoad { rm, rn } => ctx.load(r(rn), r(rm), 0, 4, addr),
        ShInsn::MovBStore { rm, rn }
        | ShInsn::MovWStore { rm, rn }
        | ShInsn::MovLStore { rm, rn } => ctx.store(r(rn), 0, r(rm), addr),
        ShInsn::MovBLoadDispR0 { rm } => ctx.load(r(0), r(rm), r(0).offset, 1, addr),
        ShInsn::MovWLoadDispR0 { rm } => ctx.load(r(0), r(rm), r(0).offset, 2, addr),
        ShInsn::MovLLoadDisp { disp, rm, rn } => ctx.load(r(rn), r(rm), (disp as u64) * 4, 4, addr),
        ShInsn::MovBStoreDispR0 { rn } => ctx.store(r(rn), r(0).offset, r(0), addr),
        ShInsn::MovWStoreDispR0 { rn } => ctx.store(r(rn), r(0).offset, r(0), addr),
        ShInsn::MovLStoreDisp { disp, rm, rn } => ctx.store(r(rn), (disp as u64) * 4, r(rm), addr),
        ShInsn::MovALabel { disp, rn } => ctx.copy(
            r(rn),
            Varnode::ram(label_base(addr) + (disp as u64) * 4, REG_SIZE),
            addr,
        ),
        ShInsn::MovWLabel { disp, rn } => ctx.load(
            r(rn),
            Varnode::ram(addr + 4 + (disp as u64) * 2, REG_SIZE),
            0,
            2,
            addr,
        ),
        ShInsn::MovLLabel { disp, rn } => ctx.load(
            r(rn),
            Varnode::ram(label_base(addr) + (disp as u64) * 4, REG_SIZE),
            0,
            4,
            addr,
        ),

        ShInsn::Add { rm, rn } => ctx.push_out(IrOp::IntAdd, r(rn), smallvec![r(rn), r(rm)], addr),
        ShInsn::AddImm { imm, rn } => {
            ctx.push_out(IrOp::IntAdd, r(rn), smallvec![r(rn), sc(imm as i64)], addr)
        }
        ShInsn::AddCarry { rm, rn } => {
            let sum = temp(2, REG_SIZE);
            ctx.push_out(IrOp::IntAdd, sum, smallvec![r(rn), r(rm)], addr);
            ctx.push_out(IrOp::IntAdd, r(rn), smallvec![sum, t()], addr);
            ctx.push_out(IrOp::IntCarry, t(), smallvec![r(rn), r(rm)], addr);
        }
        ShInsn::AddOverflow { rm, rn } => {
            ctx.push_out(IrOp::IntScarry, t(), smallvec![r(rn), r(rm)], addr);
            ctx.push_out(IrOp::IntAdd, r(rn), smallvec![r(rn), r(rm)], addr);
        }
        ShInsn::Sub { rm, rn } => ctx.push_out(IrOp::IntSub, r(rn), smallvec![r(rn), r(rm)], addr),
        ShInsn::SubCarry { rm, rn } => {
            let diff = temp(3, REG_SIZE);
            ctx.push_out(IrOp::IntSub, diff, smallvec![r(rn), r(rm)], addr);
            ctx.push_out(IrOp::IntSub, r(rn), smallvec![diff, t()], addr);
            ctx.push_out(IrOp::IntLess, t(), smallvec![r(rn), r(rm)], addr);
        }
        ShInsn::SubOverflow { rm, rn } => {
            ctx.push_out(IrOp::IntSborrow, t(), smallvec![r(rn), r(rm)], addr);
            ctx.push_out(IrOp::IntSub, r(rn), smallvec![r(rn), r(rm)], addr);
        }
        ShInsn::Neg { rm, rn } => ctx.push_out(IrOp::IntSub, r(rn), smallvec![c(0), r(rm)], addr),
        ShInsn::NegCarry { rm, rn } => {
            let diff = temp(4, REG_SIZE);
            ctx.push_out(IrOp::IntSub, diff, smallvec![c(0), r(rm)], addr);
            ctx.push_out(IrOp::IntSub, r(rn), smallvec![diff, t()], addr);
        }
        ShInsn::MulL { rm, rn } | ShInsn::Dmulu { rm, rn } | ShInsn::Dmuls { rm, rn } => ctx
            .push_out(
                IrOp::IntMult,
                Varnode::reg(MACL_OFFSET, REG_SIZE),
                smallvec![r(rn), r(rm)],
                addr,
            ),
        ShInsn::And { rm, rn } => ctx.push_out(IrOp::IntAnd, r(rn), smallvec![r(rn), r(rm)], addr),
        ShInsn::Or { rm, rn } => ctx.push_out(IrOp::IntOr, r(rn), smallvec![r(rn), r(rm)], addr),
        ShInsn::Xor { rm, rn } => ctx.push_out(IrOp::IntXor, r(rn), smallvec![r(rn), r(rm)], addr),
        ShInsn::Not { rm, rn } => ctx.push_out(
            IrOp::IntXor,
            r(rn),
            smallvec![r(rm), c(u32::MAX as u64)],
            addr,
        ),
        ShInsn::AndImm { imm } => {
            ctx.push_out(IrOp::IntAnd, r(0), smallvec![r(0), c(imm as u64)], addr)
        }
        ShInsn::OrImm { imm } => {
            ctx.push_out(IrOp::IntOr, r(0), smallvec![r(0), c(imm as u64)], addr)
        }
        ShInsn::XorImm { imm } => {
            ctx.push_out(IrOp::IntXor, r(0), smallvec![r(0), c(imm as u64)], addr)
        }
        ShInsn::Tst { rm, rn } => {
            let tmp = temp(5, REG_SIZE);
            ctx.push_out(IrOp::IntAnd, tmp, smallvec![r(rn), r(rm)], addr);
            ctx.cmp_to_t(IrOp::IntEqual, tmp, c(0), addr);
        }
        ShInsn::TstImm { imm } => {
            let tmp = temp(5, REG_SIZE);
            ctx.push_out(IrOp::IntAnd, tmp, smallvec![r(0), c(imm as u64)], addr);
            ctx.cmp_to_t(IrOp::IntEqual, tmp, c(0), addr);
        }

        ShInsn::CmpEq { rm, rn } => ctx.cmp_to_t(IrOp::IntEqual, r(rn), r(rm), addr),
        ShInsn::CmpHs { rm, rn } => ctx.cmp_to_t(IrOp::IntLessequal, r(rm), r(rn), addr),
        ShInsn::CmpGe { rm, rn } => ctx.cmp_to_t(IrOp::IntSlessequal, r(rm), r(rn), addr),
        ShInsn::CmpHi { rm, rn } => ctx.cmp_to_t(IrOp::IntLess, r(rm), r(rn), addr),
        ShInsn::CmpGt { rm, rn } => ctx.cmp_to_t(IrOp::IntSless, r(rm), r(rn), addr),
        ShInsn::CmpStr { rm, rn } => ctx.cmp_to_t(IrOp::IntEqual, r(rn), r(rm), addr),
        ShInsn::CmpEqImm { imm } => ctx.cmp_to_t(IrOp::IntEqual, r(0), sc(imm as i64), addr),

        ShInsn::Shll { rn } | ShInsn::Shal { rn } => {
            ctx.push_out(IrOp::IntLeft, r(rn), smallvec![r(rn), c(1)], addr)
        }
        ShInsn::Shlr { rn } => ctx.push_out(IrOp::IntRight, r(rn), smallvec![r(rn), c(1)], addr),
        ShInsn::Shar { rn } => ctx.push_out(IrOp::IntSright, r(rn), smallvec![r(rn), c(1)], addr),
        ShInsn::Shll2 { rn } => ctx.push_out(IrOp::IntLeft, r(rn), smallvec![r(rn), c(2)], addr),
        ShInsn::Shlr2 { rn } => ctx.push_out(IrOp::IntRight, r(rn), smallvec![r(rn), c(2)], addr),
        ShInsn::Shll8 { rn } => ctx.push_out(IrOp::IntLeft, r(rn), smallvec![r(rn), c(8)], addr),
        ShInsn::Shlr8 { rn } => ctx.push_out(IrOp::IntRight, r(rn), smallvec![r(rn), c(8)], addr),
        ShInsn::Shll16 { rn } => ctx.push_out(IrOp::IntLeft, r(rn), smallvec![r(rn), c(16)], addr),
        ShInsn::Shlr16 { rn } => ctx.push_out(IrOp::IntRight, r(rn), smallvec![r(rn), c(16)], addr),
        ShInsn::Rotl { rn: _ } | ShInsn::Rotr { rn: _ } => ctx.unimpl(addr),

        ShInsn::Bra { disp } => {
            ctx.push_no(IrOp::Branch, smallvec![pc_rel(addr, disp as i64)], addr)
        }
        ShInsn::Bsr { disp } => ctx.push_no(IrOp::Call, smallvec![pc_rel(addr, disp as i64)], addr),
        ShInsn::Bt { disp } | ShInsn::BtS { disp } => ctx.push_no(
            IrOp::Cbranch,
            smallvec![t(), pc_rel(addr, disp as i64)],
            addr,
        ),
        ShInsn::Bf { disp } | ShInsn::BfS { disp } => {
            let nt = temp(6, 1);
            ctx.push_out(IrOp::BoolNegate, nt, smallvec![t()], addr);
            ctx.push_no(
                IrOp::Cbranch,
                smallvec![nt, pc_rel(addr, disp as i64)],
                addr,
            );
        }
        ShInsn::Jmp { rn } | ShInsn::Braf { rn } => {
            ctx.push_no(IrOp::Branchind, smallvec![r(rn)], addr)
        }
        ShInsn::Jsr { rn } | ShInsn::Bsrf { rn } => {
            ctx.push_no(IrOp::Callind, smallvec![r(rn)], addr)
        }
        ShInsn::Rts | ShInsn::Rte => ctx.push_no(IrOp::Return, smallvec![], addr),
        ShInsn::Trapa { imm } => ctx.push_no(IrOp::Callother, smallvec![c(imm as u64)], addr),

        ShInsn::MovToSr { rm } => ctx.copy(Varnode::reg(SR_OFFSET, REG_SIZE), r(rm), addr),
        ShInsn::MovFromSr { rn } => ctx.copy(r(rn), Varnode::reg(SR_OFFSET, REG_SIZE), addr),
        ShInsn::MovToGbr { rm } => ctx.copy(Varnode::reg(GBR_OFFSET, REG_SIZE), r(rm), addr),
        ShInsn::MovFromGbr { rn } => ctx.copy(r(rn), Varnode::reg(GBR_OFFSET, REG_SIZE), addr),
        ShInsn::MovToVbr { rm } => ctx.copy(Varnode::reg(VBR_OFFSET, REG_SIZE), r(rm), addr),
        ShInsn::MovFromVbr { rn } => ctx.copy(r(rn), Varnode::reg(VBR_OFFSET, REG_SIZE), addr),
        ShInsn::MovToMach { rm } => ctx.copy(Varnode::reg(MACH_OFFSET, REG_SIZE), r(rm), addr),
        ShInsn::MovFromMach { rn } => ctx.copy(r(rn), Varnode::reg(MACH_OFFSET, REG_SIZE), addr),
        ShInsn::MovToMacl { rm } => ctx.copy(Varnode::reg(MACL_OFFSET, REG_SIZE), r(rm), addr),
        ShInsn::MovFromMacl { rn } => ctx.copy(r(rn), Varnode::reg(MACL_OFFSET, REG_SIZE), addr),
        ShInsn::MovToPr { rm } => ctx.copy(Varnode::reg(PR_OFFSET, REG_SIZE), r(rm), addr),
        ShInsn::MovFromPr { rn } => ctx.copy(r(rn), Varnode::reg(PR_OFFSET, REG_SIZE), addr),

        ShInsn::Fmov { fm, fn_ } => ctx.copy(fr(fn_), fr(fm), addr),
        ShInsn::Fadd { fm, fn_ } => {
            ctx.push_out(IrOp::FloatAdd, fr(fn_), smallvec![fr(fn_), fr(fm)], addr)
        }
        ShInsn::Fsub { fm, fn_ } => {
            ctx.push_out(IrOp::FloatSub, fr(fn_), smallvec![fr(fn_), fr(fm)], addr)
        }
        ShInsn::Fmul { fm, fn_ } => {
            ctx.push_out(IrOp::FloatMult, fr(fn_), smallvec![fr(fn_), fr(fm)], addr)
        }
        ShInsn::Fdiv { fm, fn_ } => {
            ctx.push_out(IrOp::FloatDiv, fr(fn_), smallvec![fr(fn_), fr(fm)], addr)
        }
        ShInsn::FcmpEq { fm, fn_ } => {
            ctx.push_out(IrOp::FloatEqual, t(), smallvec![fr(fn_), fr(fm)], addr)
        }
        ShInsn::FcmpGt { fm, fn_ } => {
            ctx.push_out(IrOp::FloatLess, t(), smallvec![fr(fm), fr(fn_)], addr)
        }
        ShInsn::Fneg { fn_ } => ctx.push_out(IrOp::FloatNeg, fr(fn_), smallvec![fr(fn_)], addr),
        ShInsn::Fabs { fn_ } => ctx.push_out(IrOp::FloatAbs, fr(fn_), smallvec![fr(fn_)], addr),
        ShInsn::Fsqrt { fn_ } => ctx.push_out(IrOp::FloatSqrt, fr(fn_), smallvec![fr(fn_)], addr),
        ShInsn::Fldi0 { fn_ } => ctx.copy(fr(fn_), Varnode::constant(0, REG_SIZE), addr),
        ShInsn::Fldi1 { fn_ } => ctx.copy(fr(fn_), Varnode::constant(0x3f80_0000, REG_SIZE), addr),
        ShInsn::FstsFp { fpul_to_frn } => {
            ctx.copy(fr(fpul_to_frn), Varnode::reg(FPUL_OFFSET, REG_SIZE), addr)
        }
        ShInsn::FldsFp { frm_to_fpul } => {
            ctx.copy(Varnode::reg(FPUL_OFFSET, REG_SIZE), fr(frm_to_fpul), addr)
        }
        ShInsn::Ftrc { fm } => ctx.push_out(
            IrOp::FloatFloat2int,
            Varnode::reg(FPUL_OFFSET, REG_SIZE),
            smallvec![fr(fm)],
            addr,
        ),
        ShInsn::Float { fn_ } => ctx.push_out(
            IrOp::FloatInt2float,
            fr(fn_),
            smallvec![Varnode::reg(FPUL_OFFSET, REG_SIZE)],
            addr,
        ),

        ShInsn::Div0u
        | ShInsn::Div0s { .. }
        | ShInsn::Div1 { .. }
        | ShInsn::Xtrct { .. }
        | ShInsn::SwapB { .. }
        | ShInsn::SwapW { .. }
        | ShInsn::ExtuB { .. }
        | ShInsn::ExtuW { .. }
        | ShInsn::ExtsB { .. }
        | ShInsn::ExtsW { .. }
        | ShInsn::StcLsr { .. }
        | ShInsn::StcLgbr { .. }
        | ShInsn::StcLvbr { .. }
        | ShInsn::LdcLsr { .. }
        | ShInsn::LdcLgbr { .. }
        | ShInsn::LdcLvbr { .. }
        | ShInsn::MacW { .. }
        | ShInsn::Sleep => ctx.unimpl(addr),
    }
    ctx
}
