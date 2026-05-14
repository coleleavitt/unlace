//! SuperH SH-2/SH-3/SH-4 → IR lifter.
//!
//! SuperH uses fixed-width 16-bit big-endian instructions. This crate provides
//! a native decoder and lifter for the common SH-2/SH-3/SH-4 integer core plus
//! SH-4 single-precision FPU operations used by Sega Dreamcast and automotive
//! ECU firmware.
//!
//! Register file: R0–R15, PC, PR, SR, GBR, VBR, MACH, MACL, FPUL, FPSCR, T and
//! FR0–FR15. Integer registers and control registers are 32-bit; T is exposed as
//! a one-byte condition alias.

mod decode;
mod lift;

pub use decode::{BranchCond, ShInsn};

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

const SH_REG_NAMES: [&str; 16] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14",
    "r15",
];
const SH_FREG_NAMES: [&str; 16] = [
    "fr0", "fr1", "fr2", "fr3", "fr4", "fr5", "fr6", "fr7", "fr8", "fr9", "fr10", "fr11", "fr12",
    "fr13", "fr14", "fr15",
];

pub struct SuperHLifter {
    register_file: RegisterFile,
}

impl SuperHLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(16 + 10 + 16);
        for (i, name) in SH_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg(lift::reg_offset(i as u8), 4),
            });
        }
        regs.push(RegisterDef {
            name: "pc",
            varnode: Varnode::reg(lift::PC_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "pr",
            varnode: Varnode::reg(lift::PR_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "sr",
            varnode: Varnode::reg(lift::SR_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "gbr",
            varnode: Varnode::reg(lift::GBR_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "vbr",
            varnode: Varnode::reg(lift::VBR_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "mach",
            varnode: Varnode::reg(lift::MACH_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "macl",
            varnode: Varnode::reg(lift::MACL_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "fpul",
            varnode: Varnode::reg(lift::FPUL_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "fpscr",
            varnode: Varnode::reg(lift::FPSCR_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "t",
            varnode: Varnode::reg(lift::T_OFFSET, 1),
        });
        for (i, name) in SH_FREG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg(lift::freg_offset(i as u8), 4),
            });
        }
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }
}

impl Default for SuperHLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for SuperHLifter {
    fn arch(&self) -> ArchId {
        ArchId::SuperH
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let decoded = decode::decode(bytes)
            .ok_or_else(|| LiftError::Decode("unrecognized SuperH instruction".into()))?;
        let ctx = lift::lift(&decoded, addr);
        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: 2,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::{IrOp, SpaceId};

    fn lift_bytes(bytes: [u8; 2], addr: u64) -> LiftedInsn {
        SuperHLifter::new()
            .lift_insn(&bytes, addr)
            .expect("lift succeeds")
    }

    #[test]
    fn register_file_has_sh2_sh3_sh4_core_and_fpu_regs() {
        let lifter = SuperHLifter::new();
        let rf = lifter.register_file();
        assert_eq!(lifter.arch(), ArchId::SuperH);
        assert_eq!(rf.registers.len(), 42);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[15].name, "r15");
        assert_eq!(rf.registers[16].name, "pc");
        assert_eq!(rf.registers[17].name, "pr");
        assert_eq!(rf.registers[25].name, "t");
        assert_eq!(rf.registers[25].varnode.size, 1);
        assert_eq!(rf.registers[26].name, "fr0");
        assert_eq!(rf.registers[41].name, "fr15");
    }

    #[test]
    fn lift_mov_immediate_and_register() {
        let mov_imm = lift_bytes([0xE3, 0x7F], 0x1000); // MOV #0x7f,R3
        assert_eq!(mov_imm.len, 2);
        assert_eq!(mov_imm.ir_ops[0].op, IrOp::Copy);
        assert_eq!(
            mov_imm.ir_ops[0].output.unwrap(),
            Varnode::reg(lift::reg_offset(3), 4)
        );
        assert_eq!(mov_imm.ir_ops[0].inputs[0], Varnode::constant(0x7f, 4));

        let mov_reg = lift_bytes([0x61, 0x23], 0x1000); // MOV R2,R1
        assert_eq!(mov_reg.ir_ops[0].op, IrOp::Copy);
        assert_eq!(
            mov_reg.ir_ops[0].inputs[0],
            Varnode::reg(lift::reg_offset(2), 4)
        );
        assert_eq!(
            mov_reg.ir_ops[0].output.unwrap(),
            Varnode::reg(lift::reg_offset(1), 4)
        );
    }

    #[test]
    fn lift_load_store_and_displacement() {
        let load = lift_bytes([0x52, 0x34], 0x1000); // MOV.L @(4,R3),R2
        assert!(load.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        let load_op = load.ir_ops.iter().find(|i| i.op == IrOp::Load).unwrap();
        assert_eq!(
            load_op.output.unwrap(),
            Varnode::reg(lift::reg_offset(2), 4)
        );

        let store = lift_bytes([0x12, 0x34], 0x1000); // MOV.L R3,@(4,R2)
        assert!(store.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn lift_integer_alu_and_compare() {
        let add = lift_bytes([0x31, 0x2C], 0x1000); // ADD R2,R1
        assert_eq!(add.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(
            add.ir_ops[0].output.unwrap(),
            Varnode::reg(lift::reg_offset(1), 4)
        );

        let cmp = lift_bytes([0x31, 0x20], 0x1000); // CMP/EQ R2,R1
        assert_eq!(cmp.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(
            cmp.ir_ops[0].output.unwrap(),
            Varnode::reg(lift::T_OFFSET, 1)
        );

        let andi = lift_bytes([0xC9, 0x55], 0x1000); // AND #0x55,R0
        assert_eq!(andi.ir_ops[0].op, IrOp::IntAnd);
    }

    #[test]
    fn lift_branches_calls_returns() {
        let bra = lift_bytes([0xA0, 0x02], 0x1000); // BRA +2 => 0x1008
        let br = bra.ir_ops.iter().find(|i| i.op == IrOp::Branch).unwrap();
        assert_eq!(br.inputs[0].space, SpaceId::Ram);
        assert_eq!(br.inputs[0].offset, 0x1008);

        let bsr = lift_bytes([0xB0, 0x01], 0x2000); // BSR +1 => 0x2006
        assert_eq!(bsr.ir_ops[0].op, IrOp::Call);
        assert_eq!(bsr.ir_ops[0].inputs[0].offset, 0x2006);

        let bt = lift_bytes([0x89, 0x02], 0x3000); // BT +2
        assert_eq!(bt.ir_ops[0].op, IrOp::Cbranch);

        let bf = lift_bytes([0x8B, 0x02], 0x3000); // BF +2
        assert!(bf.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
        assert!(bf.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));

        let jmp = lift_bytes([0x41, 0x2B], 0x4000); // JMP @R1
        assert_eq!(jmp.ir_ops[0].op, IrOp::Branchind);

        let rts = lift_bytes([0x00, 0x0B], 0x4000);
        assert_eq!(rts.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn lift_sh4_fpu_ops() {
        let fadd = lift_bytes([0xF1, 0x20], 0x1000); // FADD FR2,FR1
        assert_eq!(fadd.ir_ops[0].op, IrOp::FloatAdd);
        assert_eq!(
            fadd.ir_ops[0].output.unwrap(),
            Varnode::reg(lift::freg_offset(1), 4)
        );

        let fcmp = lift_bytes([0xF1, 0x24], 0x1000); // FCMP/EQ FR2,FR1
        assert_eq!(fcmp.ir_ops[0].op, IrOp::FloatEqual);
        assert_eq!(
            fcmp.ir_ops[0].output.unwrap(),
            Varnode::reg(lift::T_OFFSET, 1)
        );
    }
}
