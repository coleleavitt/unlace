//! SuperH -> IR lifting rules.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::decode::{ShInsn, ShOp};

// Register file layout — each architectural register is 4 bytes wide, but
// we space them 8 apart to leave room for sub-register aliases (matches the
// pattern used by the other lifters in this workspace).
pub(crate) const REG_SIZE: u8 = 4;

pub(crate) const fn reg_offset(r: u8) -> u64 {
    (r as u64) * 8
}

// Special register offsets — see the table in `lib.rs`.
pub(crate) const PR_OFF: u64 = 16 * 8; // 128
pub(crate) const MACL_OFF: u64 = 21 * 8; // 168
/// T (truth) flag — 1-byte sub-register sourced from SR bit 0.
pub(crate) const T_OFF: u64 = 23 * 8; // 184

pub struct LiftCtx {
    pub ops: Vec<IrInsn>,
    pub addr: u64,
    unique_counter: u64,
}

impl LiftCtx {
    fn new(addr: u64) -> Self {
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

    fn r(&self, r: u8) -> Varnode {
        Varnode::reg(reg_offset(r), REG_SIZE)
    }

    fn t_flag(&self) -> Varnode {
        Varnode::reg(T_OFF, 1)
    }

    fn pr(&self) -> Varnode {
        Varnode::reg(PR_OFF, REG_SIZE)
    }
}

pub fn lift(insn: &ShInsn, addr: u64) -> LiftCtx {
    let mut ctx = LiftCtx::new(addr);
    dispatch(&mut ctx, &insn.op);
    ctx
}

fn dispatch(ctx: &mut LiftCtx, op: &ShOp) {
    match op {
        // ---- NOP ----
        ShOp::Nop => {
            // Emit a harmless unique-write so passes can still see something.
            let t = ctx.alloc_unique(1);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                t,
                smallvec![Varnode::constant(0, 1)],
                ctx.addr,
            ));
        }

        // ---- Register move ----
        ShOp::Mov { n, m } => {
            let d = ctx.r(*n);
            let s = ctx.r(*m);
            ctx.emit(IrInsn::with_output(IrOp::Copy, d, smallvec![s], ctx.addr));
        }

        // ---- Arithmetic ----
        ShOp::Add { n, m } => lift_rr(ctx, *n, *m, IrOp::IntAdd),
        ShOp::Sub { n, m } => lift_rr(ctx, *n, *m, IrOp::IntSub),
        ShOp::MulL { n, m } => {
            // MUL.L stores the low 32 bits of Rn * Rm into MACL.
            let a = ctx.r(*n);
            let b = ctx.r(*m);
            let prod = ctx.alloc_unique(REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::IntMult,
                prod,
                smallvec![a, b],
                ctx.addr,
            ));
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                Varnode::reg(MACL_OFF, REG_SIZE),
                smallvec![prod],
                ctx.addr,
            ));
        }

        // ---- Bitwise ----
        ShOp::And { n, m } => lift_rr(ctx, *n, *m, IrOp::IntAnd),
        ShOp::Or { n, m } => lift_rr(ctx, *n, *m, IrOp::IntOr),
        ShOp::Xor { n, m } => lift_rr(ctx, *n, *m, IrOp::IntXor),

        // ---- Loads ----
        ShOp::MovBLoad { n, m } => lift_load(ctx, *n, *m, 1, true, 0),
        ShOp::MovWLoad { n, m } => lift_load(ctx, *n, *m, 2, true, 0),
        ShOp::MovLLoad { n, m } => lift_load(ctx, *n, *m, 4, false, 0),
        ShOp::MovBLoadPostInc { n, m } => lift_load(ctx, *n, *m, 1, true, 1),
        ShOp::MovWLoadPostInc { n, m } => lift_load(ctx, *n, *m, 2, true, 2),
        ShOp::MovLLoadPostInc { n, m } => lift_load(ctx, *n, *m, 4, false, 4),

        // ---- Stores ----
        ShOp::MovBStore { n, m } => lift_store(ctx, *n, *m, 1, 0),
        ShOp::MovWStore { n, m } => lift_store(ctx, *n, *m, 2, 0),
        ShOp::MovLStore { n, m } => lift_store(ctx, *n, *m, 4, 0),
        ShOp::MovBStorePreDec { n, m } => lift_store(ctx, *n, *m, 1, 1),
        ShOp::MovWStorePreDec { n, m } => lift_store(ctx, *n, *m, 2, 2),
        ShOp::MovLStorePreDec { n, m } => lift_store(ctx, *n, *m, 4, 4),

        // ---- Shifts (always by 1) ----
        ShOp::Shll { n } => lift_shift1(ctx, *n, IrOp::IntLeft),
        ShOp::Shlr { n } => lift_shift1(ctx, *n, IrOp::IntRight),
        ShOp::Shar { n } => lift_shift1(ctx, *n, IrOp::IntSright),

        // ---- Compares (write T) ----
        ShOp::CmpEq { n, m } => lift_cmp(ctx, *n, *m, IrOp::IntEqual, false),
        ShOp::CmpHs { n, m } => lift_cmp(ctx, *n, *m, IrOp::IntLessequal, true),
        ShOp::CmpGe { n, m } => lift_cmp(ctx, *n, *m, IrOp::IntSlessequal, true),
        ShOp::CmpHi { n, m } => lift_cmp(ctx, *n, *m, IrOp::IntLess, true),
        ShOp::CmpGt { n, m } => lift_cmp(ctx, *n, *m, IrOp::IntSless, true),

        // ---- Control flow ----
        ShOp::Bt { offset } => lift_cbranch(ctx, *offset, false),
        ShOp::Bf { offset } => lift_cbranch(ctx, *offset, true),
        ShOp::Bra { offset } => {
            // Target = PC + 4 + offset. `ctx.addr` is the address of this insn;
            // SH's PC register is +4 when relative branches execute (pipeline).
            let target_addr = ctx.addr.wrapping_add(4).wrapping_add(*offset as u64);
            let target = Varnode::constant(target_addr, REG_SIZE);
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![target],
                ctx.addr,
            ));
        }
        ShOp::Bsr { offset } => {
            // BSR: PR = PC + 4 (return address), then call.
            let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                ctx.pr(),
                smallvec![return_addr],
                ctx.addr,
            ));
            let target_addr = ctx.addr.wrapping_add(4).wrapping_add(*offset as u64);
            let target = Varnode::constant(target_addr, REG_SIZE);
            ctx.emit(IrInsn::without_output(
                IrOp::Call,
                smallvec![target],
                ctx.addr,
            ));
        }
        ShOp::Jsr { n } => {
            // JSR @Rn: PR = PC + 4; PC = Rn.
            let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), REG_SIZE);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                ctx.pr(),
                smallvec![return_addr],
                ctx.addr,
            ));
            let target = ctx.r(*n);
            ctx.emit(IrInsn::without_output(
                IrOp::Call,
                smallvec![target],
                ctx.addr,
            ));
        }
        ShOp::Rts => {
            // RTS: PC = PR.
            let pr = ctx.pr();
            ctx.emit(IrInsn::without_output(
                IrOp::Return,
                smallvec![pr],
                ctx.addr,
            ));
        }

        ShOp::Unknown { .. } => ctx.emit_unimplemented(),
    }
}

// -- Helpers -----------------------------------------------------------------

fn lift_rr(ctx: &mut LiftCtx, n: u8, m: u8, op: IrOp) {
    let a = ctx.r(n);
    let b = ctx.r(m);
    let result = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(op, result, smallvec![a, b], ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        ctx.r(n),
        smallvec![result],
        ctx.addr,
    ));
}

fn lift_shift1(ctx: &mut LiftCtx, n: u8, op: IrOp) {
    let a = ctx.r(n);
    let amt = Varnode::constant(1, 1);
    let result = ctx.alloc_unique(REG_SIZE);
    ctx.emit(IrInsn::with_output(op, result, smallvec![a, amt], ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        ctx.r(n),
        smallvec![result],
        ctx.addr,
    ));
}

fn lift_cmp(ctx: &mut LiftCtx, n: u8, m: u8, op: IrOp, swap: bool) {
    // For CMP/GE, CMP/HS, CMP/HI, CMP/GT we model `Rn >= Rm` (resp. >) by
    // computing the inverted relational op on swapped operands so we can use
    // the IR's `IntLess`/`IntSless`/`IntLessequal`/`IntSlessequal` primitives
    // directly. `swap=true` means: Rn ≥ Rm  ≡  IntLessequal(Rm, Rn).
    let a = ctx.r(n);
    let b = ctx.r(m);
    let (lhs, rhs) = if swap { (b, a) } else { (a, b) };
    let t = ctx.alloc_unique(1);
    ctx.emit(IrInsn::with_output(op, t, smallvec![lhs, rhs], ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        ctx.t_flag(),
        smallvec![t],
        ctx.addr,
    ));
}

fn lift_cbranch(ctx: &mut LiftCtx, offset: i32, negate: bool) {
    let target_addr = ctx.addr.wrapping_add(4).wrapping_add(offset as u64);
    let target = Varnode::constant(target_addr, REG_SIZE);
    let cond = if negate {
        let n = ctx.alloc_unique(1);
        ctx.emit(IrInsn::with_output(
            IrOp::BoolNegate,
            n,
            smallvec![ctx.t_flag()],
            ctx.addr,
        ));
        n
    } else {
        ctx.t_flag()
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target, cond],
        ctx.addr,
    ));
}

/// Lift a load of `mem_size` bytes from `@Rm` (with optional post-increment).
/// `post_inc` is the number of bytes to add to Rm after the load (0 = none).
fn lift_load(ctx: &mut LiftCtx, n: u8, m: u8, mem_size: u8, sign_extend: bool, post_inc: u8) {
    let addr_vn = ctx.r(m);

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
            ctx.r(n),
            smallvec![extended],
            ctx.addr,
        ));
    } else {
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            ctx.r(n),
            smallvec![loaded],
            ctx.addr,
        ));
    }

    if post_inc != 0 && m != n {
        // Rm = Rm + post_inc  (skip if Rm == Rn, matching SH semantics where
        // the loaded value takes precedence).
        let bumped = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            bumped,
            smallvec![ctx.r(m), Varnode::constant(post_inc as u64, REG_SIZE),],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            ctx.r(m),
            smallvec![bumped],
            ctx.addr,
        ));
    }
}

/// Lift a store of `mem_size` bytes from Rm into `@Rn` (with optional
/// pre-decrement). `pre_dec` is the number of bytes to subtract from Rn
/// *before* the store (0 = none).
fn lift_store(ctx: &mut LiftCtx, n: u8, m: u8, mem_size: u8, pre_dec: u8) {
    let mut addr_vn = ctx.r(n);

    if pre_dec != 0 {
        let dec = ctx.alloc_unique(REG_SIZE);
        ctx.emit(IrInsn::with_output(
            IrOp::IntSub,
            dec,
            smallvec![ctx.r(n), Varnode::constant(pre_dec as u64, REG_SIZE),],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            ctx.r(n),
            smallvec![dec],
            ctx.addr,
        ));
        addr_vn = ctx.r(n);
    }

    let src = ctx.r(m);
    let value = if mem_size < REG_SIZE {
        let trunc = ctx.alloc_unique(mem_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            trunc,
            smallvec![src, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        trunc
    } else {
        src
    };

    let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
    ctx.emit(IrInsn::without_output(
        IrOp::Store,
        smallvec![ram_space, addr_vn, value],
        ctx.addr,
    ));
}
