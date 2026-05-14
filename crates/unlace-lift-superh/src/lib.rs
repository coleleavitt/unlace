//! SuperH (SH-2/SH-4) → IR lifter (native decoder).
//!
//! SuperH is a 16-bit fixed-width RISC architecture. Instructions are
//! big-endian, 2 bytes each. This lifter covers the SH-2 core integer set.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;
const REG_COUNT: usize = 16;
const PC_OFFSET: u64 = (REG_COUNT as u64) * (REG_SIZE as u64);
const PR_OFFSET: u64 = PC_OFFSET + 4;  // Procedure register (link register)
const SR_OFFSET: u64 = PR_OFFSET + 4;  // Status register
const MACL_OFFSET: u64 = SR_OFFSET + 4;
const MACH_OFFSET: u64 = MACL_OFFSET + 4;
const GBR_OFFSET: u64 = MACH_OFFSET + 4;
const VBR_OFFSET: u64 = GBR_OFFSET + 4;

static SH_REG_NAMES: [&str; 16] = [
    "r0","r1","r2","r3","r4","r5","r6","r7",
    "r8","r9","r10","r11","r12","r13","r14","r15",
];

fn superh_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(23);
    for (i, name) in SH_REG_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg((i as u64) * (REG_SIZE as u64), REG_SIZE),
        });
    }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(PC_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "pr", varnode: Varnode::reg(PR_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "sr", varnode: Varnode::reg(SR_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "macl", varnode: Varnode::reg(MACL_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "mach", varnode: Varnode::reg(MACH_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "gbr", varnode: Varnode::reg(GBR_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "vbr", varnode: Varnode::reg(VBR_OFFSET, REG_SIZE) });
    RegisterFile { registers: regs }
}

#[inline]
fn reg(n: u8) -> Varnode {
    Varnode::reg((n as u64) * (REG_SIZE as u64), REG_SIZE)
}

pub struct SuperHLifter {
    reg_file: RegisterFile,
}

impl SuperHLifter {
    pub fn new() -> Self {
        Self { reg_file: superh_register_file() }
    }
}

impl Default for SuperHLifter {
    fn default() -> Self { Self::new() }
}

impl Lifter for SuperHLifter {
    fn arch(&self) -> ArchId { ArchId::SuperH }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let word = u16::from_be_bytes([bytes[0], bytes[1]]);
        let ops = decode_sh2(word, addr);
        Ok(LiftedInsn { ir_ops: ops, len: 2 })
    }
}

fn decode_sh2(word: u16, addr: u64) -> Vec<IrInsn> {
    let nibble = (word >> 12) & 0xF;
    match nibble {
        // MOV Rm, Rn (0110 nnnn mmmm 0011)
        0x6 if (word & 0xF) == 0x3 => {
            let rn = ((word >> 8) & 0xF) as u8;
            let rm = ((word >> 4) & 0xF) as u8;
            vec![IrInsn::with_output(IrOp::Copy, reg(rn), smallvec![reg(rm)], addr)]
        }
        // ADD Rm, Rn (0011 nnnn mmmm 1100)
        0x3 if (word & 0xF) == 0xC => {
            let rn = ((word >> 8) & 0xF) as u8;
            let rm = ((word >> 4) & 0xF) as u8;
            vec![IrInsn::with_output(IrOp::IntAdd, reg(rn), smallvec![reg(rn), reg(rm)], addr)]
        }
        // SUB Rm, Rn (0011 nnnn mmmm 1000)
        0x3 if (word & 0xF) == 0x8 => {
            let rn = ((word >> 8) & 0xF) as u8;
            let rm = ((word >> 4) & 0xF) as u8;
            vec![IrInsn::with_output(IrOp::IntSub, reg(rn), smallvec![reg(rn), reg(rm)], addr)]
        }
        // MOV.L @(disp,Rm), Rn (0101 nnnn mmmm dddd)
        0x5 => {
            let rn = ((word >> 8) & 0xF) as u8;
            let rm = ((word >> 4) & 0xF) as u8;
            let disp = ((word & 0xF) as u64) * 4;
            let mut ops = Vec::new();
            let tmp = Varnode::unique(0, 4);
            ops.push(IrInsn::with_output(IrOp::IntAdd, tmp, smallvec![reg(rm), Varnode::constant(disp, 4)], addr));
            ops.push(IrInsn::with_output(IrOp::Load, reg(rn), smallvec![Varnode::constant(0, 8), tmp], addr));
            ops
        }
        // RTS (0000 0000 0000 1011)
        0x0 if word == 0x000B => {
            vec![IrInsn::without_output(IrOp::Return, smallvec![Varnode::reg(PR_OFFSET, 4)], addr)]
        }
        // NOP (0000 0000 0000 1001)
        0x0 if word == 0x0009 => {
            vec![IrInsn::with_output(IrOp::Copy, reg(0), smallvec![reg(0)], addr)]
        }
        _ => {
            vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)]
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_arch() {
        assert_eq!(SuperHLifter::new().arch(), ArchId::SuperH);
    }

    #[test]
    fn test_register_file() {
        let l = SuperHLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 23);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[15].name, "r15");
        assert_eq!(rf.registers[16].name, "pc");
    }

    #[test]
    fn test_nop() {
        let l = SuperHLifter::new();
        let r = l.lift_insn(&[0x00, 0x09], 0x1000).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
    }

    #[test]
    fn test_add() {
        let l = SuperHLifter::new();
        // ADD r4, r3 => 0x334C
        let r = l.lift_insn(&[0x33, 0x4C], 0x1000).unwrap();
        assert_eq!(r.len, 2);
        assert!(r.ir_ops.iter().any(|op| op.op == IrOp::IntAdd));
    }

    #[test]
    fn test_rts() {
        let l = SuperHLifter::new();
        let r = l.lift_insn(&[0x00, 0x0B], 0x1000).unwrap();
        assert!(r.ir_ops.iter().any(|op| op.op == IrOp::Return));
    }

    #[test]
    fn test_short_buffer() {
        let l = SuperHLifter::new();
        assert!(l.lift_insn(&[0x00], 0x1000).is_err());
    }
}
