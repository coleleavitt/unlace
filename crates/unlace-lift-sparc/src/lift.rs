//! SPARC → IR lifting implementation.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

use crate::decode::{self, Src2, SparcInsn};

// ---------------------------------------------------------------------------
// Register file layout
// ---------------------------------------------------------------------------

/// SPARC v8 register size (4 bytes / 32-bit).
const REG_SIZE: u8 = 4;

/// Register names: g0-g7, o0-o7, l0-l7, i0-i7 (32 registers).
const SPARC_REG_NAMES: [&str; 32] = [
    "g0", "g1", "g2", "g3", "g4", "g5", "g6", "g7", // globals
    "o0", "o1", "o2", "o3", "o4", "o5", "o6", "o7", // outs (o6=sp, o7=return addr)
    "l0", "l1", "l2", "l3", "l4", "l5", "l6", "l7", // locals
    "i0", "i1", "i2", "i3", "i4", "i5", "i6", "i7", // ins (i6=fp, i7=return addr)
];

/// Offset of condition code flags in register space (after 32 GPRs × 4 bytes = 128).
const ICC_BASE: u64 = 128;

/// PC offset in the register space (after GPRs + flags).
const PC_OFFSET: u64 = ICC_BASE + 4;

/// Individual condition code flag offsets (each 1 byte).
/// SPARC icc: N (negative), Z (zero), V (overflow), C (carry).
pub const SPARC_FLAG_N: Varnode = Varnode::reg(ICC_BASE, 1);
pub const SPARC_FLAG_Z: Varnode = Varnode::reg(ICC_BASE + 1, 1);
pub const SPARC_FLAG_V: Varnode = Varnode::reg(ICC_BASE + 2, 1);
pub const SPARC_FLAG_C: Varnode = Varnode::reg(ICC_BASE + 3, 1);

fn sparc_register_file() -> RegisterFile {
    let mut registers = Vec::with_capacity(37);
    for (idx, name) in SPARC_REG_NAMES.iter().enumerate() {
        registers.push(RegisterDef {
            name,
            varnode: Varnode::reg((idx as u64) * (REG_SIZE as u64), REG_SIZE),
        });
    }
    // Condition code flags
    registers.push(RegisterDef {
        name: "icc_n",
        varnode: SPARC_FLAG_N,
    });
    registers.push(RegisterDef {
        name: "icc_z",
        varnode: SPARC_FLAG_Z,
    });
    registers.push(RegisterDef {
        name: "icc_v",
        varnode: SPARC_FLAG_V,
    });
    registers.push(RegisterDef {
        name: "icc_c",
        varnode: SPARC_FLAG_C,
    });
    // PC pseudo-register
    registers.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(PC_OFFSET, REG_SIZE),
    });
    RegisterFile { registers }
}

/// Read a register: g0 always produces constant 0.
#[inline]
fn read_reg(reg: u8) -> Varnode {
    if reg == 0 {
        Varnode::constant(0, REG_SIZE)
    } else {
        Varnode::reg((reg as u64) * (REG_SIZE as u64), REG_SIZE)
    }
}

/// Write destination register varnode (None for g0 — writes discarded).
#[inline]
fn write_reg(reg: u8) -> Option<Varnode> {
    if reg == 0 {
        None
    } else {
        Some(Varnode::reg((reg as u64) * (REG_SIZE as u64), REG_SIZE))
    }
}

/// Resolve Src2 to a Varnode.
#[inline]
fn src2_varnode(s: &Src2) -> Varnode {
    match s {
        Src2::Reg(r) => read_reg(*r),
        Src2::Imm(imm) => Varnode::constant(*imm as u32 as u64, REG_SIZE),
    }
}

// ---------------------------------------------------------------------------
// Lifter
// ---------------------------------------------------------------------------

/// SPARC v8 instruction lifter.
pub struct SparcLifter {
    reg_file: RegisterFile,
}

impl SparcLifter {
    pub fn new() -> Self {
        Self {
            reg_file: sparc_register_file(),
        }
    }
}

impl Default for SparcLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for SparcLifter {
    fn arch(&self) -> ArchId {
        ArchId::Sparc
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }

        let insn = decode::decode(bytes)
            .ok_or_else(|| LiftError::Decode("unrecognized SPARC instruction".into()))?;

        let ops = lift_one(&insn, addr)?;

        Ok(LiftedInsn {
            ir_ops: ops,
            len: 4,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }
}

// ---------------------------------------------------------------------------
// Per-instruction lifting
// ---------------------------------------------------------------------------

fn lift_one(insn: &SparcInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
    let mut ops = Vec::new();

    match insn {
        // -- ALU ops (no condition codes) --
        SparcInsn::Add { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntAdd, *rd, *rs1, src2, addr);
        }
        SparcInsn::Sub { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntSub, *rd, *rs1, src2, addr);
        }
        SparcInsn::And { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntAnd, *rd, *rs1, src2, addr);
        }
        SparcInsn::Or { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntOr, *rd, *rs1, src2, addr);
        }
        SparcInsn::Xor { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntXor, *rd, *rs1, src2, addr);
        }
        SparcInsn::Sll { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntLeft, *rd, *rs1, src2, addr);
        }
        SparcInsn::Srl { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntRight, *rd, *rs1, src2, addr);
        }
        SparcInsn::Sra { rd, rs1, src2 } => {
            lift_binop(&mut ops, IrOp::IntSright, *rd, *rs1, src2, addr);
        }

        // -- ALU ops with condition codes --
        SparcInsn::Addcc { rd, rs1, src2 } => {
            lift_binop_cc(&mut ops, IrOp::IntAdd, *rd, *rs1, src2, addr, true);
        }
        SparcInsn::Subcc { rd, rs1, src2 } => {
            lift_binop_cc(&mut ops, IrOp::IntSub, *rd, *rs1, src2, addr, false);
        }

        // -- Load byte (unsigned) --
        SparcInsn::Ldub { rd, rs1, src2 } => {
            lift_load(&mut ops, *rd, *rs1, src2, 1, false, addr);
        }
        // -- Load byte (signed) --
        SparcInsn::Ldsb { rd, rs1, src2 } => {
            lift_load(&mut ops, *rd, *rs1, src2, 1, true, addr);
        }
        // -- Load half (unsigned) --
        SparcInsn::Lduh { rd, rs1, src2 } => {
            lift_load(&mut ops, *rd, *rs1, src2, 2, false, addr);
        }
        // -- Load half (signed) --
        SparcInsn::Ldsh { rd, rs1, src2 } => {
            lift_load(&mut ops, *rd, *rs1, src2, 2, true, addr);
        }
        // -- Load word --
        SparcInsn::Ld { rd, rs1, src2 } => {
            lift_load(&mut ops, *rd, *rs1, src2, 4, false, addr);
        }
        // -- Load doubleword --
        SparcInsn::Ldd { rd, rs1, src2 } => {
            // LDD loads 8 bytes into rd and rd+1 (even/odd pair).
            // First word → rd, second word → rd+1.
            let ea = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![read_reg(*rs1), src2_varnode(src2)],
                addr,
            ));
            if let Some(dst) = write_reg(*rd) {
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    dst,
                    smallvec![ea],
                    addr,
                ));
            }
            // Second word at ea+4 → rd+1
            let ea2 = Varnode::unique(4, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea2,
                smallvec![ea, Varnode::constant(4, REG_SIZE)],
                addr,
            ));
            if let Some(dst2) = write_reg(rd + 1) {
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    dst2,
                    smallvec![ea2],
                    addr,
                ));
            }
        }

        // -- Store byte --
        SparcInsn::Stb { rd, rs1, src2 } => {
            lift_store(&mut ops, *rd, *rs1, src2, 1, addr);
        }
        // -- Store half --
        SparcInsn::Sth { rd, rs1, src2 } => {
            lift_store(&mut ops, *rd, *rs1, src2, 2, addr);
        }
        // -- Store word --
        SparcInsn::St { rd, rs1, src2 } => {
            lift_store(&mut ops, *rd, *rs1, src2, 4, addr);
        }
        // -- Store doubleword --
        SparcInsn::Std { rd, rs1, src2 } => {
            // STD stores rd and rd+1 to consecutive word addresses.
            let ea = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![read_reg(*rs1), src2_varnode(src2)],
                addr,
            ));
            // Truncate rd to 4 bytes and store
            ops.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![ea, read_reg(*rd)],
                addr,
            ));
            // Second word at ea+4
            let ea2 = Varnode::unique(4, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea2,
                smallvec![ea, Varnode::constant(4, REG_SIZE)],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![ea2, read_reg(rd + 1)],
                addr,
            ));
        }

        // -- SAVE (register window push) --
        // SAVE rotates the register window: the current out regs become the new
        // in regs. Also computes rd = rs1 + src2 in the NEW window.
        // We model this with a Callother (opcode for "implementation-defined
        // side effect") to represent the window rotation, plus the ALU result.
        SparcInsn::Save { rd, rs1, src2 } => {
            // The ALU part: rd_new = rs1_old + src2_old (computed BEFORE window shift)
            // In our flat register model, SAVE is: compute result, then Callother
            // to indicate the register window has been rotated.
            let lhs = read_reg(*rs1);
            let rhs = src2_varnode(src2);
            let result = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![lhs, rhs],
                addr,
            ));
            // Callother #0 = SAVE window rotation side-effect
            ops.push(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(0, REG_SIZE)],
                addr,
            ));
            // Write to destination register in the NEW window
            if let Some(dst) = write_reg(*rd) {
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    dst,
                    smallvec![result],
                    addr,
                ));
            }
        }

        // -- RESTORE (register window pop) --
        // RESTORE is the inverse of SAVE: rotates the window back.
        // rd_new = rs1_old + src2_old (computed before the window rotation).
        SparcInsn::Restore { rd, rs1, src2 } => {
            let lhs = read_reg(*rs1);
            let rhs = src2_varnode(src2);
            let result = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                result,
                smallvec![lhs, rhs],
                addr,
            ));
            // Callother #1 = RESTORE window rotation side-effect
            ops.push(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(1, REG_SIZE)],
                addr,
            ));
            if let Some(dst) = write_reg(*rd) {
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    dst,
                    smallvec![result],
                    addr,
                ));
            }
        }

        // -- Branches --
        SparcInsn::Ba { disp22 } => {
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            ops.push(IrInsn::without_output(
                IrOp::Branch,
                smallvec![Varnode::constant(target, REG_SIZE)],
                addr,
            ));
        }
        SparcInsn::Be { disp22 } => {
            // BE: branch if Z == 1
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(target, REG_SIZE), SPARC_FLAG_Z],
                addr,
            ));
        }
        SparcInsn::Bne { disp22 } => {
            // BNE: branch if Z == 0 → negate Z
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            let not_z = Varnode::unique(10, 1);
            ops.push(IrInsn::with_output(
                IrOp::BoolNegate,
                not_z,
                smallvec![SPARC_FLAG_Z],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(target, REG_SIZE), not_z],
                addr,
            ));
        }
        SparcInsn::Bg { disp22 } => {
            // BG: branch if !(Z || (N ^ V))
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            let n_xor_v = Varnode::unique(10, 1);
            ops.push(IrInsn::with_output(
                IrOp::BoolXor,
                n_xor_v,
                smallvec![SPARC_FLAG_N, SPARC_FLAG_V],
                addr,
            ));
            let z_or_nv = Varnode::unique(11, 1);
            ops.push(IrInsn::with_output(
                IrOp::BoolOr,
                z_or_nv,
                smallvec![SPARC_FLAG_Z, n_xor_v],
                addr,
            ));
            let cond = Varnode::unique(12, 1);
            ops.push(IrInsn::with_output(
                IrOp::BoolNegate,
                cond,
                smallvec![z_or_nv],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(target, REG_SIZE), cond],
                addr,
            ));
        }
        SparcInsn::Bl { disp22 } => {
            // BL: branch if N ^ V
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            let cond = Varnode::unique(10, 1);
            ops.push(IrInsn::with_output(
                IrOp::BoolXor,
                cond,
                smallvec![SPARC_FLAG_N, SPARC_FLAG_V],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![Varnode::constant(target, REG_SIZE), cond],
                addr,
            ));
        }

        // -- Call --
        SparcInsn::Call { disp30 } => {
            let target = (addr as i64 + (*disp30 as i64) * 4) as u64;
            // CALL stores PC in %o7 (register 15), then branches to target
            let o7 = Varnode::reg(15 * (REG_SIZE as u64), REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::Copy,
                o7,
                smallvec![Varnode::constant(addr, REG_SIZE)],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(target, REG_SIZE)],
                addr,
            ));
        }

        // -- JMPL --
        // jmpl rs1+src2, rd: rd = PC; PC = rs1 + src2
        // Common patterns: jmpl %o7+8, %g0 = retl; jmpl %i7+8, %g0 = ret
        SparcInsn::Jmpl { rd, rs1, src2 } => {
            let target = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                target,
                smallvec![read_reg(*rs1), src2_varnode(src2)],
                addr,
            ));
            // rd = PC (return address linkage)
            if let Some(dst) = write_reg(*rd) {
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    dst,
                    smallvec![Varnode::constant(addr, REG_SIZE)],
                    addr,
                ));
            }
            // Determine if this is a return pattern (rd=g0, rs1=o7 or i7, src2=8)
            if *rd == 0 {
                if let Src2::Imm(8) = src2 {
                    if *rs1 == 15 || *rs1 == 31 {
                        // retl (%o7+8) or ret (%i7+8)
                        ops.push(IrInsn::without_output(
                            IrOp::Return,
                            smallvec![target],
                            addr,
                        ));
                        return Ok(ops);
                    }
                }
            }
            // General indirect branch/call
            if *rd != 0 {
                // rd != g0 means this is a call (link register is saved)
                ops.push(IrInsn::without_output(
                    IrOp::Callind,
                    smallvec![target],
                    addr,
                ));
            } else {
                ops.push(IrInsn::without_output(
                    IrOp::Branchind,
                    smallvec![target],
                    addr,
                ));
            }
        }

        // -- SETHI --
        SparcInsn::Sethi { rd, imm22 } => {
            // rd = imm22 << 10
            let val = (*imm22 as u64) << 10;
            if let Some(dst) = write_reg(*rd) {
                ops.push(IrInsn::with_output(
                    IrOp::Copy,
                    dst,
                    smallvec![Varnode::constant(val, REG_SIZE)],
                    addr,
                ));
            }
        }

        // -- NOP --
        SparcInsn::Nop => {
            // NOP produces no meaningful IR ops (dead copy)
            ops.push(IrInsn::with_output(
                IrOp::Copy,
                Varnode::unique(0, REG_SIZE),
                smallvec![Varnode::constant(0, REG_SIZE)],
                addr,
            ));
        }
    }

    Ok(ops)
}

/// Lift a binary ALU operation: rd = rs1 OP src2.
fn lift_binop(ops: &mut Vec<IrInsn>, op: IrOp, rd: u8, rs1: u8, src2: &Src2, addr: u64) {
    let lhs = read_reg(rs1);
    let rhs = src2_varnode(src2);
    if let Some(dst) = write_reg(rd) {
        ops.push(IrInsn::with_output(op, dst, smallvec![lhs, rhs], addr));
    } else {
        // Writing to g0 is a no-op; emit a Copy to unique to keep the op visible.
        ops.push(IrInsn::with_output(
            op,
            Varnode::unique(0, REG_SIZE),
            smallvec![lhs, rhs],
            addr,
        ));
    }
}

// t331 — SPARC v9 callother tags for privileged/atomic/window operations.
pub const CALLOTHER_SPARC_SAVE: u64 = 0x5350_5243_0001;
pub const CALLOTHER_SPARC_RESTORE: u64 = 0x5350_5243_0002;
pub const CALLOTHER_SPARC_CAS: u64 = 0x5350_5243_0003;
pub const CALLOTHER_SPARC_MEMBAR: u64 = 0x5350_5243_0004;
pub const CALLOTHER_SPARC_FLUSH: u64 = 0x5350_5243_0005;
pub const CALLOTHER_SPARC_POPC: u64 = 0x5350_5243_0006;
pub const CALLOTHER_SPARC_MOVCC: u64 = 0x5350_5243_0007;
pub const CALLOTHER_SPARC_PREFETCH: u64 = 0x5350_5243_0008;
/// Lift a binary ALU operation that also sets icc condition codes.
/// `is_add` controls whether we emit IntCarry/IntScarry (add) or IntSborrow (sub).
fn lift_binop_cc(
    ops: &mut Vec<IrInsn>,
    op: IrOp,
    rd: u8,
    rs1: u8,
    src2: &Src2,
    addr: u64,
    is_add: bool,
) {
    let lhs = read_reg(rs1);
    let rhs = src2_varnode(src2);

    // Compute result
    let result = if let Some(dst) = write_reg(rd) {
        ops.push(IrInsn::with_output(op, dst, smallvec![lhs, rhs], addr));
        dst
    } else {
        let tmp = Varnode::unique(0, REG_SIZE);
        ops.push(IrInsn::with_output(op, tmp, smallvec![lhs, rhs], addr));
        tmp
    };

    // Z flag: result == 0
    ops.push(IrInsn::with_output(
        IrOp::IntEqual,
        SPARC_FLAG_Z,
        smallvec![result, Varnode::constant(0, REG_SIZE)],
        addr,
    ));

    // N flag: result < 0 (signed)  → bit 31 of result
    // We use IntSless(result, 0) as a proxy for the sign bit.
    ops.push(IrInsn::with_output(
        IrOp::IntSless,
        SPARC_FLAG_N,
        smallvec![result, Varnode::constant(0, REG_SIZE)],
        addr,
    ));

    // C flag: carry (add) or borrow (sub)
    if is_add {
        ops.push(IrInsn::with_output(
            IrOp::IntCarry,
            SPARC_FLAG_C,
            smallvec![lhs, rhs],
            addr,
        ));
    } else {
        ops.push(IrInsn::with_output(
            IrOp::IntSborrow,
            SPARC_FLAG_C,
            smallvec![lhs, rhs],
            addr,
        ));
    }

    // V flag: overflow
    if is_add {
        ops.push(IrInsn::with_output(
            IrOp::IntScarry,
            SPARC_FLAG_V,
            smallvec![lhs, rhs],
            addr,
        ));
    } else {
        ops.push(IrInsn::with_output(
            IrOp::IntSborrow,
            SPARC_FLAG_V,
            smallvec![lhs, rhs],
            addr,
        ));
    }
}

/// Lift a load instruction with variable access size and optional sign-extension.
fn lift_load(
    ops: &mut Vec<IrInsn>,
    rd: u8,
    rs1: u8,
    src2: &Src2,
    access_size: u8,
    sign_extend: bool,
    addr: u64,
) {
    // Compute effective address: rs1 + src2
    let ea = Varnode::unique(0, REG_SIZE);
    ops.push(IrInsn::with_output(
        IrOp::IntAdd,
        ea,
        smallvec![read_reg(rs1), src2_varnode(src2)],
        addr,
    ));

    if let Some(dst) = write_reg(rd) {
        if access_size == REG_SIZE {
            // Word-sized load: directly into register
            ops.push(IrInsn::with_output(
                IrOp::Load,
                dst,
                smallvec![ea],
                addr,
            ));
        } else {
            // Sub-word load: load into temporary, then extend
            let tmp = Varnode::unique(8, access_size);
            ops.push(IrInsn::with_output(
                IrOp::Load,
                tmp,
                smallvec![ea],
                addr,
            ));
            let ext_op = if sign_extend { IrOp::IntSext } else { IrOp::IntZext };
            ops.push(IrInsn::with_output(
                ext_op,
                dst,
                smallvec![tmp],
                addr,
            ));
        }
    }
}

/// Lift a store instruction with variable access size.
fn lift_store(ops: &mut Vec<IrInsn>, rd: u8, rs1: u8, src2: &Src2, access_size: u8, addr: u64) {
    // Compute effective address: rs1 + src2
    let ea = Varnode::unique(0, REG_SIZE);
    ops.push(IrInsn::with_output(
        IrOp::IntAdd,
        ea,
        smallvec![read_reg(rs1), src2_varnode(src2)],
        addr,
    ));

    if access_size == REG_SIZE {
        // Full word store
        ops.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![ea, read_reg(rd)],
            addr,
        ));
    } else {
        // Sub-word store: truncate register to the access size
        let trunc = Varnode::unique(8, access_size);
        ops.push(IrInsn::with_output(
            IrOp::Subpiece,
            trunc,
            smallvec![read_reg(rd), Varnode::constant(0, REG_SIZE)],
            addr,
        ));
        ops.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![ea, trunc],
            addr,
        ));
    }
}
