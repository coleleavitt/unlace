//! SPARC → IR lifting implementation.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

use crate::decode::{self, SparcInsn, Src2};

// ---------------------------------------------------------------------------
// Register file layout
// ---------------------------------------------------------------------------

/// SPARC v8 register size (4 bytes / 32-bit).
const REG_SIZE: u8 = 4;

/// Register names: g0-g7, o0-o7, l0-l7, i0-i7 (32 registers).
const SPARC_REG_NAMES: [&str; 32] = [
    "g0", "g1", "g2", "g3", "g4", "g5", "g6", "g7", "o0", "o1", "o2", "o3", "o4", "o5", "o6", "o7",
    "l0", "l1", "l2", "l3", "l4", "l5", "l6", "l7", "i0", "i1", "i2", "i3", "i4", "i5", "i6", "i7",
];

/// PC offset in the register space (after the 32 GPRs).
const PC_OFFSET: u64 = 32 * (REG_SIZE as u64);

fn sparc_register_file() -> RegisterFile {
    let mut registers = Vec::with_capacity(33);
    for (idx, name) in SPARC_REG_NAMES.iter().enumerate() {
        registers.push(RegisterDef {
            name,
            varnode: Varnode::reg((idx as u64) * (REG_SIZE as u64), REG_SIZE),
        });
    }
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
        // -- ALU ops --
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

        // -- Load --
        SparcInsn::Ld { rd, rs1, src2 } => {
            // effective address = rs1 + src2
            let ea = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![read_reg(*rs1), src2_varnode(src2)],
                addr,
            ));
            if let Some(dst) = write_reg(*rd) {
                ops.push(IrInsn::with_output(IrOp::Load, dst, smallvec![ea], addr));
            }
        }

        // -- Store --
        SparcInsn::St { rd, rs1, src2 } => {
            let ea = Varnode::unique(0, REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![read_reg(*rs1), src2_varnode(src2)],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![ea, read_reg(*rd)],
                addr,
            ));
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
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            // Cbranch: input[0] = condition (zero flag placeholder), input[1] = target
            let cond = Varnode::unique(1, 1);
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![cond, Varnode::constant(target, REG_SIZE)],
                addr,
            ));
        }
        SparcInsn::Bne { disp22 } => {
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            let cond = Varnode::unique(2, 1);
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![cond, Varnode::constant(target, REG_SIZE)],
                addr,
            ));
        }
        SparcInsn::Bl { disp22 } => {
            let target = (addr as i64 + (*disp22 as i64) * 4) as u64;
            let cond = Varnode::unique(3, 1);
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![cond, Varnode::constant(target, REG_SIZE)],
                addr,
            ));
        }

        // -- Call --
        SparcInsn::Call { disp30 } => {
            let target = (addr as i64 + (*disp30 as i64) * 4) as u64;
            ops.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(target, REG_SIZE)],
                addr,
            ));
        }

        // -- Return --
        SparcInsn::Retl | SparcInsn::Ret => {
            ops.push(IrInsn::without_output(IrOp::Return, smallvec![], addr));
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

// Condition code flag varnodes in the PSR register (1-byte flags)
pub const SPARC_FLAG_C: Varnode = Varnode::reg(0x200, 1);
pub const SPARC_FLAG_V: Varnode = Varnode::reg(0x201, 1);
pub const SPARC_FLAG_Z: Varnode = Varnode::reg(0x202, 1);
pub const SPARC_FLAG_N: Varnode = Varnode::reg(0x203, 1);
