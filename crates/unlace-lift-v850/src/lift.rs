use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::decode::{BranchCond, V850Insn, V850Op};

// Register file offsets (each register is 4 bytes, spaced 8 apart for alignment).
const REG_SIZE: u8 = 4;

// EP (element pointer) is r30 — base for V850 Format IV short loads/stores.
const EP_REG: u8 = 30;

// --- Callother tag namespace for V850-specific ops (0x800..) -----------------
// These mark operations that have no direct Pcode equivalent; later passes can
// recognize them by tag.
pub const CALLOTHER_V850_SATADD: u64 = 0x800;
pub const CALLOTHER_V850_SATSUB: u64 = 0x801;
pub const CALLOTHER_V850_SATSUBR: u64 = 0x802;
pub const CALLOTHER_V850_BSW: u64 = 0x803;
pub const CALLOTHER_V850_BSH: u64 = 0x804;

const fn reg_offset(r: u8) -> u64 {
    (r as u64) * 8
}

// PSW flag sub-registers (1-byte each, mapped after PSW at offset 264).
// Layout mirrors V850 PSW: Z=bit0, S=bit1, OV=bit2, CY=bit3, SAT=bit4.
const ZF: u64 = 272;
const SF: u64 = 280;
const OVF: u64 = 288;
const CYF: u64 = 296;
const SATF: u64 = 304;
const EP_REG: u8 = 30;

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

    pub fn alloc_unique(&mut self, size: u8) -> Varnode {
        let id = self.unique_counter;
        self.unique_counter += 1;
        Varnode::unique(id, size)
    }

    pub fn emit(&mut self, insn: IrInsn) {
        self.ops.push(insn);
    }

    pub fn emit_unimplemented(&mut self) {
        self.emit(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }

    fn reg_read(&self, r: u8) -> Varnode {
        if r == 0 {
            Varnode::constant(0, REG_SIZE)
        } else {
            Varnode::reg(reg_offset(r), REG_SIZE)
        }
    }

    fn reg_write(&self, r: u8) -> Option<Varnode> {
        if r == 0 {
            None // writes to r0 are discarded
        } else {
            Some(Varnode::reg(reg_offset(r), REG_SIZE))
        }
    }

    fn zf(&self) -> Varnode {
        Varnode::reg(ZF, 1)
    }
    fn sf(&self) -> Varnode {
        Varnode::reg(SF, 1)
    }
    fn ovf(&self) -> Varnode {
        Varnode::reg(OVF, 1)
    }
    fn cyf(&self) -> Varnode {
        Varnode::reg(CYF, 1)
    }
    #[allow(dead_code)]
    fn satf(&self) -> Varnode {
        Varnode::reg(SATF, 1)
    }

    fn emit_result_flags(&mut self, result: Varnode) {
        let zero = Varnode::constant(0, REG_SIZE);
        self.emit(IrInsn::with_output(
            IrOp::IntEqual,
            self.zf(),
            smallvec![result, zero],
            self.addr,
        ));

        let sign_bit = Varnode::constant(31, 1);
        let shifted = self.alloc_unique(REG_SIZE);
        self.emit(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![result, sign_bit],
            self.addr,
        ));
        let trunc = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            trunc,
            smallvec![shifted, Varnode::constant(0, 1)],
            self.addr,
        ));
        self.emit(IrInsn::with_output(
            IrOp::Copy,
            self.sf(),
            smallvec![trunc],
            self.addr,
        ));
    }

    fn emit_add_flags(&mut self, a: Varnode, b: Varnode, result: Varnode) {
        self.emit_result_flags(result);
        self.emit(IrInsn::with_output(
            IrOp::IntCarry,
            self.cyf(),
            smallvec![a, b],
            self.addr,
        ));
        self.emit(IrInsn::with_output(
            IrOp::IntScarry,
            self.ovf(),
            smallvec![a, b],
            self.addr,
        ));
    }

    fn emit_sub_flags(&mut self, a: Varnode, b: Varnode, result: Varnode) {
        self.emit_result_flags(result);
        self.emit(IrInsn::with_output(
            IrOp::IntLess,
            self.cyf(),
            smallvec![a, b],
            self.addr,
        ));
        self.emit(IrInsn::with_output(
            IrOp::IntSborrow,
            self.ovf(),
            smallvec![a, b],
            self.addr,
        ));
    }

    fn emit_logical_flags(&mut self, result: Varnode) {
        self.emit_result_flags(result);
        self.emit(IrInsn::with_output(
            IrOp::Copy,
            self.ovf(),
            smallvec![Varnode::constant(0, 1)],
            self.addr,
        ));
    }

    fn emit_shift_flags(&mut self, result: Varnode) {
        self.emit_result_flags(result);
        self.emit(IrInsn::with_output(
            IrOp::Copy,
            self.ovf(),
            smallvec![Varnode::constant(0, 1)],
            self.addr,
        ));
    }
}

pub fn lift(insn: &V850Insn, addr: u64) -> LiftCtx {
    let mut ctx = LiftCtx::new(addr);
    dispatch(&mut ctx, &insn.op);
    ctx
}

fn dispatch(ctx: &mut LiftCtx, op: &V850Op) {
    match op {
        // -- NOP --
        V850Op::Nop => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                t,
                smallvec![Varnode::constant(0, 1)],
                ctx.addr,
            ));
        }

        // -- Data movement --
        V850Op::Mov { dst, src } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let s = ctx.reg_read(*src);
                ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![s], ctx.addr));
            }
        }
        V850Op::MovImm5 { dst, imm } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let val = Varnode::constant(*imm as u32 as u64, REG_SIZE);
                ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![val], ctx.addr));
            }
        }
        V850Op::Movea { dst, src, imm } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let s = ctx.reg_read(*src);
                let val = Varnode::constant(*imm as u32 as u64, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAdd,
                    result,
                    smallvec![s, val],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Movhi { dst, src, imm } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let s = ctx.reg_read(*src);
                let shifted = Varnode::constant((*imm as u64) << 16, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAdd,
                    result,
                    smallvec![s, shifted],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Not { dst, src } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let s = ctx.reg_read(*src);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntNegate,
                    result,
                    smallvec![s],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
                ctx.emit_logical_flags(result);
            }
        }

        // -- Arithmetic --
        V850Op::Add { dst, src } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*dst);
                let b = ctx.reg_read(*src);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAdd,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit_add_flags(a, b, result);
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::AddImm5 { dst, imm } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*dst);
                let b = Varnode::constant(*imm as u32 as u64, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAdd,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit_add_flags(a, b, result);
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Addi { dst, src, imm } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*src);
                let b = Varnode::constant(*imm as u32 as u64, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAdd,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit_add_flags(a, b, result);
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Sub { dst, src } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*dst);
                let b = ctx.reg_read(*src);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSub,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit_sub_flags(a, b, result);
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Subr { dst, src } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*src);
                let b = ctx.reg_read(*dst);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSub,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit_sub_flags(a, b, result);
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Cmp { reg1, reg2 } => {
            let a = ctx.reg_read(*reg2);
            let b = ctx.reg_read(*reg1);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.emit_sub_flags(a, b, result);
        }
        V850Op::CmpImm5 { reg2, imm } => {
            let a = ctx.reg_read(*reg2);
            let b = Varnode::constant(*imm as u32 as u64, REG_SIZE);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntSub,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.emit_sub_flags(a, b, result);
        }
        V850Op::Mulh { dst, src } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*dst);
                let b = ctx.reg_read(*src);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntMult,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::MulhImm5 { dst, imm } => {
            if let Some(d) = ctx.reg_write(*dst) {
                let a = ctx.reg_read(*dst);
                let b = Varnode::constant(*imm as u32 as u64, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntMult,
                    result,
                    smallvec![a, b],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }

        // -- Bitwise --
        V850Op::And { dst, src } => lift_binop(ctx, *dst, *src, IrOp::IntAnd, true),
        V850Op::Or { dst, src } => lift_binop(ctx, *dst, *src, IrOp::IntOr, true),
        V850Op::Xor { dst, src } => lift_binop(ctx, *dst, *src, IrOp::IntXor, true),
        V850Op::Tst { reg1, reg2 } => {
            let a = ctx.reg_read(*reg2);
            let b = ctx.reg_read(*reg1);
            let result = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAnd,
                result,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.emit_logical_flags(result);
        }
        V850Op::Andi { dst, src, imm } => {
            lift_binop_imm16(ctx, *dst, *src, *imm as u32, IrOp::IntAnd)
        }
        V850Op::Ori { dst, src, imm } => {
            lift_binop_imm16(ctx, *dst, *src, *imm as u32, IrOp::IntOr)
        }
        V850Op::Xori { dst, src, imm } => {
            lift_binop_imm16(ctx, *dst, *src, *imm as u32, IrOp::IntXor)
        }

        // -- Shifts --
        V850Op::ShlImm { dst, shift } => lift_shift(ctx, *dst, *shift, IrOp::IntLeft),
        V850Op::ShrImm { dst, shift } => lift_shift(ctx, *dst, *shift, IrOp::IntRight),
        V850Op::SarImm { dst, shift } => lift_shift(ctx, *dst, *shift, IrOp::IntSright),

        // -- Sign/Zero extension --
        V850Op::Zxb { reg } => {
            if let Some(d) = ctx.reg_write(*reg) {
                let s = ctx.reg_read(*reg);
                let mask = Varnode::constant(0xFF, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAnd,
                    result,
                    smallvec![s, mask],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Zxh { reg } => {
            if let Some(d) = ctx.reg_write(*reg) {
                let s = ctx.reg_read(*reg);
                let mask = Varnode::constant(0xFFFF, REG_SIZE);
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAnd,
                    result,
                    smallvec![s, mask],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Sxb { reg } => {
            if let Some(d) = ctx.reg_write(*reg) {
                let s = ctx.reg_read(*reg);
                let trunc = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    trunc,
                    smallvec![s, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSext,
                    result,
                    smallvec![trunc],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }
        V850Op::Sxh { reg } => {
            if let Some(d) = ctx.reg_write(*reg) {
                let s = ctx.reg_read(*reg);
                let trunc = ctx.alloc_unique(2);
                ctx.emit(IrInsn::with_output(
                    IrOp::Subpiece,
                    trunc,
                    smallvec![s, Varnode::constant(0, 1)],
                    ctx.addr,
                ));
                let result = ctx.alloc_unique(REG_SIZE);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSext,
                    result,
                    smallvec![trunc],
                    ctx.addr,
                ));
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![result],
                    ctx.addr,
                ));
            }
        }

        // -- Load/Store --
        V850Op::LdB { dst, base, disp } => lift_load(ctx, *dst, *base, *disp, 1, true),
        V850Op::LdH { dst, base, disp } => lift_load(ctx, *dst, *base, *disp, 2, true),
        V850Op::LdW { dst, base, disp } => lift_load(ctx, *dst, *base, *disp, 4, false),
        V850Op::StB { src, base, disp } => lift_store(ctx, *src, *base, *disp, 1),
        V850Op::StH { src, base, disp } => lift_store(ctx, *src, *base, *disp, 2),
        V850Op::StW { src, base, disp } => lift_store(ctx, *src, *base, *disp, 4),
        V850Op::SldB { dst, disp } => lift_load(ctx, *dst, EP_REG, *disp, 1, true),
        V850Op::SldH { dst, disp } => lift_load(ctx, *dst, EP_REG, *disp, 2, true),
        V850Op::SldW { dst, disp } => lift_load(ctx, *dst, EP_REG, *disp, 4, false),
        V850Op::SstB { src, disp } => lift_store(ctx, *src, EP_REG, *disp, 1),
        V850Op::SstH { src, disp } => lift_store(ctx, *src, EP_REG, *disp, 2),
        V850Op::SstW { src, disp } => lift_store(ctx, *src, EP_REG, *disp, 4),

        // -- Short load (EP-relative) ----------------------------------------
        // SLD.B/H sign-extend; SLD.W is a full word.
        V850Op::SldB { dst, disp } => lift_load(ctx, *dst, EP_REG, *disp as i32, 1, true),
        V850Op::SldH { dst, disp } => lift_load(ctx, *dst, EP_REG, *disp as i32, 2, true),
        V850Op::SldW { dst, disp } => lift_load(ctx, *dst, EP_REG, *disp as i32, 4, false),

        // -- Saturating arithmetic -------------------------------------------
        // Saturation requires conditional clamping that doesn't map cleanly to
        // Pcode primitives; emit a tagged Callother that downstream passes can
        // recognize. Result flags are not modeled.
        V850Op::Satadd { dst, src } => lift_sat_binop(ctx, *dst, *src, CALLOTHER_V850_SATADD),
        V850Op::SataddImm5 { dst, imm } => {
            lift_sat_binop_imm(ctx, *dst, *imm, CALLOTHER_V850_SATADD)
        }
        V850Op::Satsub { dst, src } => lift_sat_binop(ctx, *dst, *src, CALLOTHER_V850_SATSUB),
        V850Op::Satsubr { dst, src } => lift_sat_binop(ctx, *dst, *src, CALLOTHER_V850_SATSUBR),

        // -- 32x32 multiply (low word into reg2, high word into reg3) --------
        V850Op::Mul { reg1, reg2, reg3 } => lift_mul32(ctx, *reg1, *reg2, *reg3, true),
        V850Op::Mulu { reg1, reg2, reg3 } => lift_mul32(ctx, *reg1, *reg2, *reg3, false),

        // -- Divide -----------------------------------------------------------
        V850Op::Div { reg1, reg2, reg3 } => lift_div32(ctx, *reg1, *reg2, *reg3, true),
        V850Op::Divu { reg1, reg2, reg3 } => lift_div32(ctx, *reg1, *reg2, *reg3, false),
        V850Op::Divh { dst, src } => lift_divh(ctx, *dst, *src, true),
        V850Op::Divhu { reg1, reg2, reg3 } => {
            // reg2 = sign-narrowed div, reg3 = remainder. Use the 16-bit path
            // for reg2 and emit a remainder write.
            lift_divh_reg3(ctx, *reg1, *reg2, *reg3, false);
        }

        // -- Byte/half swap --------------------------------------------------
        V850Op::Bsw { src, dst } => lift_swap(ctx, *src, *dst, CALLOTHER_V850_BSW),
        V850Op::Bsh { src, dst } => lift_swap(ctx, *src, *dst, CALLOTHER_V850_BSH),

        // -- Conditional move ------------------------------------------------
        V850Op::Cmov {
            cond,
            reg1,
            reg2,
            reg3,
        } => lift_cmov(ctx, *cond, *reg1, *reg2, *reg3),
        V850Op::Cmov { cond, reg1, reg2, reg3 } => lift_cmov(ctx, *cond, *reg1, *reg2, *reg3),

        // -- Control flow --
        V850Op::Jmp { reg } => {
            if *reg == 31 {
                // JMP [r31] is the standard return sequence
                let lp = ctx.reg_read(31);
                ctx.emit(IrInsn::without_output(
                    IrOp::Return,
                    smallvec![lp],
                    ctx.addr,
                ));
            } else {
                let target = ctx.reg_read(*reg);
                ctx.emit(IrInsn::without_output(
                    IrOp::Branchind,
                    smallvec![target],
                    ctx.addr,
                ));
            }
        }
        V850Op::Jr { offset } => {
            let target = Varnode::constant(ctx.addr.wrapping_add(*offset as u64), REG_SIZE);
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![target],
                ctx.addr,
            ));
        }
        V850Op::Jarl { link, offset } => {
            let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), REG_SIZE);
            if let Some(d) = ctx.reg_write(*link) {
                ctx.emit(IrInsn::with_output(
                    IrOp::Copy,
                    d,
                    smallvec![return_addr],
                    ctx.addr,
                ));
            }
            let target = Varnode::constant(ctx.addr.wrapping_add(*offset as u64), REG_SIZE);
            ctx.emit(IrInsn::without_output(
                IrOp::Call,
                smallvec![target],
                ctx.addr,
            ));
        }
        V850Op::Bcond { cond, offset } => {
            let target = Varnode::constant(ctx.addr.wrapping_add(*offset as u64), REG_SIZE);

            if *cond == BranchCond::R {
                // BR (unconditional short branch)
                ctx.emit(IrInsn::without_output(
                    IrOp::Branch,
                    smallvec![target],
                    ctx.addr,
                ));
                return;
            }

            let cond_vn = build_condition(ctx, *cond);
            match cond_vn {
                Some(c) => {
                    ctx.emit(IrInsn::without_output(
                        IrOp::Cbranch,
                        smallvec![target, c],
                        ctx.addr,
                    ));
                }
                None => ctx.emit_unimplemented(),
            }
        }

        V850Op::Unknown { .. } => ctx.emit_unimplemented(),
    }
}

fn lift_binop(ctx: &mut LiftCtx, dst: u8, src: u8, op: IrOp, set_flags: bool) {
    if let Some(d) = ctx.reg_write(dst) {
        let a = ctx.reg_read(dst);
        let b = ctx.reg_read(src);
        let result = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(op, result, smallvec![a, b], ctx.addr));
        if set_flags {
            ctx.emit_logical_flags(result);
        }
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![result],
            ctx.addr,
        ));
    }
}

fn lift_binop_imm16(ctx: &mut LiftCtx, dst: u8, src: u8, imm: u32, op: IrOp) {
    if let Some(d) = ctx.reg_write(dst) {
        let a = ctx.reg_read(src);
        let b = Varnode::constant(imm as u64, REG_SIZE);
        let result = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(op, result, smallvec![a, b], ctx.addr));
        ctx.emit_logical_flags(result);
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![result],
            ctx.addr,
        ));
    }
}

fn lift_shift(ctx: &mut LiftCtx, dst: u8, shift: u8, op: IrOp) {
    if let Some(d) = ctx.reg_write(dst) {
        let a = ctx.reg_read(dst);
        let amt = Varnode::constant(shift as u64, 1);
        let result = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(op, result, smallvec![a, amt], ctx.addr));
        ctx.emit_shift_flags(result);
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![result],
            ctx.addr,
        ));
    }
}

fn lift_load(ctx: &mut LiftCtx, dst: u8, base: u8, disp: i32, mem_size: u8, sign_extend: bool) {
    if let Some(d) = ctx.reg_write(dst) {
        let base_vn = ctx.reg_read(base);
        let disp_vn = Varnode::constant(disp as u32 as u64, REG_SIZE);
        let addr_vn = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            addr_vn,
            smallvec![base_vn, disp_vn],
            ctx.addr,
        ));

        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let loaded = ctx.alloc_unique(mem_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram_space, addr_vn],
            ctx.addr,
        ));

        if mem_size < REG_SIZE {
            let extended = ctx.alloc_unique(REG_SIZE);
            let ext_op = if sign_extend {
                IrOp::IntSext
            } else {
                IrOp::IntZext
            };
            ctx.emit(IrInsn::with_output(
                ext_op,
                extended,
                smallvec![loaded],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                d,
                smallvec![extended],
                ctx.addr,
            ));
        } else {
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                d,
                smallvec![loaded],
                ctx.addr,
            ));
        }
    }
}

fn lift_store(ctx: &mut LiftCtx, src: u8, base: u8, disp: i32, mem_size: u8) {
    let base_vn = ctx.reg_read(base);
    let disp_vn = Varnode::constant(disp as u32 as u64, REG_SIZE);
    let addr_vn = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        addr_vn,
        smallvec![base_vn, disp_vn],
        ctx.addr,
    ));

    let src_vn = ctx.reg_read(src);
    let value = if mem_size < REG_SIZE {
        let trunc = ctx.alloc_unique(mem_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            trunc,
            smallvec![src_vn, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        trunc
    } else {
        src_vn
    };

    let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
    ctx.emit(IrInsn::without_output(
        IrOp::Store,
        smallvec![ram_space, addr_vn, value],
        ctx.addr,
    ));
}

/// Emit a saturating binary op as a tagged Callother whose result lands in `dst`.
/// Inputs are read as (dst, src) per V850 semantics: reg2 = sat(reg2 op reg1).
fn lift_sat_binop(ctx: &mut LiftCtx, dst: u8, src: u8, tag: u64) {
    if let Some(d) = ctx.reg_write(dst) {
        let a = ctx.reg_read(dst);
        let b = ctx.reg_read(src);
        let tag_vn = Varnode::constant(tag, 8);
        let result = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            result,
            smallvec![tag_vn, a, b],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![result],
            ctx.addr,
        ));
    }
}

fn lift_sat_binop_imm(ctx: &mut LiftCtx, dst: u8, imm: i32, tag: u64) {
    if let Some(d) = ctx.reg_write(dst) {
        let a = ctx.reg_read(dst);
        let b = Varnode::constant(imm as u32 as u64, REG_SIZE);
        let tag_vn = Varnode::constant(tag, 8);
        let result = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            result,
            smallvec![tag_vn, a, b],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![result],
            ctx.addr,
        ));
    }
}

/// MUL/MULU: reg2 ← low32(reg1 * reg2), reg3 ← high32(reg1 * reg2).
/// Computed as 64-bit multiply, then Subpiece-split.
fn lift_mul32(ctx: &mut LiftCtx, reg1: u8, reg2: u8, reg3: u8, signed: bool) {
    let a = ctx.reg_read(reg1);
    let b = ctx.reg_read(reg2);

    // Extend operands to 64 bits.
    let a64 = ctx.alloc_unique(8);
    let b64 = ctx.alloc_unique(8);
    let ext_op = if signed { IrOp::IntSext } else { IrOp::IntZext };
    ctx.emit(IrInsn::with_output(ext_op, a64, smallvec![a], ctx.addr));
    ctx.emit(IrInsn::with_output(ext_op, b64, smallvec![b], ctx.addr));

    let prod = ctx.alloc_unique(8);
    ctx.emit(IrInsn::with_output(
        IrOp::IntMult,
        prod,
        smallvec![a64, b64],
        ctx.addr,
    ));

    // Low 32 -> reg2
    if let Some(d_lo) = ctx.reg_write(reg2) {
        let lo = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            lo,
            smallvec![prod, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_lo,
            smallvec![lo],
            ctx.addr,
        ));
    }
    // High 32 -> reg3
    if let Some(d_hi) = ctx.reg_write(reg3) {
        let hi = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            hi,
            smallvec![prod, Varnode::constant(4, 1)],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_hi,
            smallvec![hi],
            ctx.addr,
        ));
    }
}

/// DIV/DIVU: reg2 ← reg2 / reg1, reg3 ← reg2 % reg1.
fn lift_div32(ctx: &mut LiftCtx, reg1: u8, reg2: u8, reg3: u8, signed: bool) {
    let dividend = ctx.reg_read(reg2);
    let divisor = ctx.reg_read(reg1);

    let (div_op, rem_op) = if signed {
        (IrOp::IntSdiv, IrOp::IntSrem)
    } else {
        (IrOp::IntDiv, IrOp::IntRem)
    };

    let quot = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        div_op,
        quot,
        smallvec![dividend, divisor],
        ctx.addr,
    ));
    if let Some(d_q) = ctx.reg_write(reg2) {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_q,
            smallvec![quot],
            ctx.addr,
        ));
    }

    let rem = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        rem_op,
        rem,
        smallvec![dividend, divisor],
        ctx.addr,
    ));
    if let Some(d_r) = ctx.reg_write(reg3) {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_r,
            smallvec![rem],
            ctx.addr,
        ));
    }
}

/// DIVH 2-operand: reg2 = sign_ext32(reg2) / sign_ext16(reg1[15:0]).
fn lift_divh(ctx: &mut LiftCtx, dst: u8, src: u8, signed: bool) {
    if let Some(d) = ctx.reg_write(dst) {
        let dividend = ctx.reg_read(dst);
        // Take low 16 bits of src and sign/zero-extend to 32.
        let src_full = ctx.reg_read(src);
        let half = ctx.alloc_unique(2);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            half,
            smallvec![src_full, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        let divisor = ctx.alloc_unique(REG_SIZE);
        let ext_op = if signed { IrOp::IntSext } else { IrOp::IntZext };
        ctx.emit(IrInsn::with_output(
            ext_op,
            divisor,
            smallvec![half],
            ctx.addr,
        ));

        let div_op = if signed { IrOp::IntSdiv } else { IrOp::IntDiv };
        let quot = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            div_op,
            quot,
            smallvec![dividend, divisor],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![quot],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(IrOp::Copy, d_lo, smallvec![lo], ctx.addr));
    }
    // High 32 -> reg3
    if let Some(d_hi) = ctx.reg_write(reg3) {
        let hi = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            hi,
            smallvec![prod, Varnode::constant(4, 1)],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(IrOp::Copy, d_hi, smallvec![hi], ctx.addr));
    }
}

/// DIV/DIVU: reg2 ← reg2 / reg1, reg3 ← reg2 % reg1.
fn lift_div32(ctx: &mut LiftCtx, reg1: u8, reg2: u8, reg3: u8, signed: bool) {
    let dividend = ctx.reg_read(reg2);
    let divisor = ctx.reg_read(reg1);

    let (div_op, rem_op) = if signed {
        (IrOp::IntSdiv, IrOp::IntSrem)
    } else {
        (IrOp::IntDiv, IrOp::IntRem)
    };

    let quot = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        div_op,
        quot,
        smallvec![dividend, divisor],
        ctx.addr,
    ));
    if let Some(d_q) = ctx.reg_write(reg2) {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_q,
            smallvec![quot],
            ctx.addr,
        ));
    }

    let rem = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        rem_op,
        rem,
        smallvec![dividend, divisor],
        ctx.addr,
    ));
    if let Some(d_r) = ctx.reg_write(reg3) {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_r,
            smallvec![rem],
            ctx.addr,
        ));
    }
}

/// DIVH 2-operand: reg2 = sign_ext32(reg2) / sign_ext16(reg1[15:0]).
fn lift_divh(ctx: &mut LiftCtx, dst: u8, src: u8, signed: bool) {
    if let Some(d) = ctx.reg_write(dst) {
        let dividend = ctx.reg_read(dst);
        // Take low 16 bits of src and sign/zero-extend to 32.
        let src_full = ctx.reg_read(src);
        let half = ctx.alloc_unique(2);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            half,
            smallvec![src_full, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        let divisor = ctx.alloc_unique(REG_SIZE);
        let ext_op = if signed { IrOp::IntSext } else { IrOp::IntZext };
        ctx.emit(IrInsn::with_output(
            ext_op,
            divisor,
            smallvec![half],
            ctx.addr,
        ));

        let div_op = if signed { IrOp::IntSdiv } else { IrOp::IntDiv };
        let quot = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            div_op,
            quot,
            smallvec![dividend, divisor],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![quot], ctx.addr));
    }
}

/// DIVHU 3-operand: reg2 = reg2 / zero_ext16(reg1), reg3 = remainder.
fn lift_divh_reg3(ctx: &mut LiftCtx, reg1: u8, reg2: u8, reg3: u8, signed: bool) {
    let dividend = ctx.reg_read(reg2);
    let src_full = ctx.reg_read(reg1);
    let half = ctx.alloc_unique(2);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        half,
        smallvec![src_full, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    let divisor = ctx.alloc_unique(REG_SIZE);
    let ext_op = if signed { IrOp::IntSext } else { IrOp::IntZext };
    ctx.emit(IrInsn::with_output(
        ext_op,
        divisor,
        smallvec![half],
        ctx.addr,
    ));

    let (div_op, rem_op) = if signed {
        (IrOp::IntSdiv, IrOp::IntSrem)
    } else {
        (IrOp::IntDiv, IrOp::IntRem)
    };

    let quot = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        div_op,
        quot,
        smallvec![dividend, divisor],
        ctx.addr,
    ));
    if let Some(d_q) = ctx.reg_write(reg2) {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_q,
            smallvec![quot],
            ctx.addr,
        ));
    }

    let rem = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(
        rem_op,
        rem,
        smallvec![dividend, divisor],
        ctx.addr,
    ));
    if let Some(d_r) = ctx.reg_write(reg3) {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d_r,
            smallvec![rem],
            ctx.addr,
        ));
    }
}

/// BSW/BSH: byte swap. Modeled as a tagged Callother since Pcode lacks bswap.
fn lift_swap(ctx: &mut LiftCtx, src: u8, dst: u8, tag: u64) {
    if let Some(d) = ctx.reg_write(dst) {
        let s = ctx.reg_read(src);
        let tag_vn = Varnode::constant(tag, 8);
        let result = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            result,
            smallvec![tag_vn, s],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            d,
            smallvec![result],
            ctx.addr,
        ));
    }
}

/// CMOV: reg3 = cond ? reg1 : reg2.
/// Lowered to a sequence: evaluate the condition (reusing `build_condition`)
/// then produce both branches and select via a Cbranch-free pattern using
/// arithmetic — but Pcode has no `select`, so we emit a small if/else via
/// Cbranch over the destination write.
fn lift_cmov(ctx: &mut LiftCtx, cond: BranchCond, reg1: u8, reg2: u8, reg3: u8) {
    let Some(d) = ctx.reg_write(reg3) else { return };

    // BR (always-true) collapses to a plain copy of reg1.
    if cond == BranchCond::R {
        let s = ctx.reg_read(reg1);
        ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![s], ctx.addr));
        return;
    }

    // Default: write reg2 ("false" branch) first, then conditionally overwrite
    // with reg1 when the condition holds. This mirrors a typical 2-address
    // CMOV decomposition and keeps the IR pure-Pcode (no Callother).
    let r2 = ctx.reg_read(reg2);
    ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![r2], ctx.addr));

    let cond_vn = match build_condition(ctx, cond) {
        Some(v) => v,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };

    // Cbranch (rel +2) over the "write reg1" insn, predicated on !cond.
    // We instead express it as: if (cond) dst = reg1 — using a Cbranch that
    // skips the write. The branch target is a constant offset (skip = 2 ops).
    let skip = Varnode::constant(ctx.addr.wrapping_add(8), REG_SIZE);
    let neg = ctx.alloc_unique(1);
    ctx.emit(IrInsn::with_output(
        IrOp::BoolNegate,
        neg,
        smallvec![cond_vn],
        ctx.addr,
    ));
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![skip, neg],
        ctx.addr,
    ));
    let r1 = ctx.reg_read(reg1);
    ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![r1], ctx.addr));
}

fn build_condition(ctx: &mut LiftCtx, cond: BranchCond) -> Option<Varnode> {
    let zf = ctx.zf();
    let sf = ctx.sf();
    let ovf = ctx.ovf();
    let cyf = ctx.cyf();

    match cond {
        // BV: OV == 1
        BranchCond::V => Some(ovf),
        // BNV: OV == 0
        BranchCond::Nv => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![ovf],
                ctx.addr,
            ));
            Some(t)
        }
        // BL: CY == 1
        BranchCond::L => Some(cyf),
        // BNL: CY == 0
        BranchCond::Nl => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![cyf],
                ctx.addr,
            ));
            Some(t)
        }
        // BE: Z == 1
        BranchCond::E => Some(zf),
        // BNE: Z == 0
        BranchCond::Ne => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![zf],
                ctx.addr,
            ));
            Some(t)
        }
        // BNH: CY || Z (unsigned not higher)
        BranchCond::Nh => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![cyf, zf],
                ctx.addr,
            ));
            Some(t)
        }
        // BH: !CY && !Z (unsigned higher)
        BranchCond::H => {
            let not_cy = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_cy,
                smallvec![cyf],
                ctx.addr,
            ));
            let not_z = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_z,
                smallvec![zf],
                ctx.addr,
            ));
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![not_cy, not_z],
                ctx.addr,
            ));
            Some(t)
        }
        // BN: S == 1
        BranchCond::N => Some(sf),
        // BP: S == 0
        BranchCond::P => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![sf],
                ctx.addr,
            ));
            Some(t)
        }
        // BLT: S != OV
        BranchCond::Lt => {
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                t,
                smallvec![sf, ovf],
                ctx.addr,
            ));
            Some(t)
        }
        // BGE: S == OV
        BranchCond::Ge => {
            let ne = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                ne,
                smallvec![sf, ovf],
                ctx.addr,
            ));
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![ne],
                ctx.addr,
            ));
            Some(t)
        }
        // BLE: Z || (S != OV)
        BranchCond::Le => {
            let sf_ne_ov = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                sf_ne_ov,
                smallvec![sf, ovf],
                ctx.addr,
            ));
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![zf, sf_ne_ov],
                ctx.addr,
            ));
            Some(t)
        }
        // BGT: !Z && (S == OV)
        BranchCond::Gt => {
            let not_z = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_z,
                smallvec![zf],
                ctx.addr,
            ));
            let sf_ne_ov = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                sf_ne_ov,
                smallvec![sf, ovf],
                ctx.addr,
            ));
            let sf_eq_ov = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                sf_eq_ov,
                smallvec![sf_ne_ov],
                ctx.addr,
            ));
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![not_z, sf_eq_ov],
                ctx.addr,
            ));
            Some(t)
        }
        // BSA: SAT == 1
        BranchCond::Sa => Some(ctx.satf()),
        // BR: always — handled in dispatch, not here
        BranchCond::R => unreachable!("BR handled before build_condition"),
    }
}
