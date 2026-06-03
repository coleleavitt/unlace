//! Renesas RX (32-bit RISC) MVP lifter.
//!
//! RX is a little-endian variable-length ISA (1..=15 bytes per insn). This
//! crate provides a [`Lifter`] implementation for a documented subset:
//!
//! * Data movement: `MOV.L #imm4`, `MOV.L Rs, Rd`, `MOV.L [Rs], Rd`,
//!   `MOV.L Rs, [Rd]` → `Copy` / `Load` / `Store`.
//! * Integer arithmetic: `ADD`, `SUB`, `AND`, `OR`, `XOR`, `MUL` → `IntAdd`
//!   etc., with PSW flag updates for `ADD`/`SUB`/`CMP`.
//! * `CMP Rs, Rd` → `IntSub` (result discarded, flags only).
//! * Control flow: `BRA.B` → `Branch`, `BSR.W` → `Call`, `BEQ/BNE/BGE/BLE.B`
//!   → `Cbranch`, `RTS` → `Return`, `NOP`.
//!
//! Register file: R0–R15 (4 bytes each, R0 doubles as the stack pointer in
//! the RX convention), PC (4 bytes), PSW (4 bytes) plus 1-byte Z/S/O/C flag
//! aliases used by lifted comparisons.

mod decode;
mod lift;

pub use decode::{BranchCond, RxInsn, RxOp};

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

const RX_REG_NAMES: [&str; 16] = [
    "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14",
    "R15",
];

pub struct RxLifter {
    register_file: RegisterFile,
}

impl RxLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(16 + 2 + 4);
        for (i, name) in RX_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg(lift::reg_offset(i as u8), 4),
            });
        }
        regs.push(RegisterDef {
            name: "PC",
            varnode: Varnode::reg(lift::PC_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "PSW",
            varnode: Varnode::reg(lift::PSW_OFFSET, 4),
        });
        regs.push(RegisterDef {
            name: "Z",
            varnode: Varnode::reg(lift::ZF_OFFSET, 1),
        });
        regs.push(RegisterDef {
            name: "S",
            varnode: Varnode::reg(lift::SF_OFFSET, 1),
        });
        regs.push(RegisterDef {
            name: "O",
            varnode: Varnode::reg(lift::OF_OFFSET, 1),
        });
        regs.push(RegisterDef {
            name: "C",
            varnode: Varnode::reg(lift::CF_OFFSET, 1),
        });
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }
}

impl Default for RxLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for RxLifter {
    fn arch(&self) -> ArchId {
        ArchId::RxRenesas
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }
        let decoded = decode::decode(bytes).ok_or(LiftError::ShortBuffer)?;
        if decoded.len > bytes.len() {
            return Err(LiftError::ShortBuffer);
        }
        let ctx = lift::lift(&decoded, addr);
        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: decoded.len,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    fn lift_bytes(bytes: &[u8], addr: u64) -> LiftedInsn {
        let lifter = RxLifter::new();
        lifter.lift_insn(bytes, addr).expect("lift should succeed")
    }

    #[test]
    fn register_file_has_r0_to_r15_pc_psw() {
        let lifter = RxLifter::new();
        let rf = lifter.register_file();
        // 16 GP regs + PC + PSW + 4 flag aliases = 22.
        assert_eq!(rf.registers.len(), 22);
        assert_eq!(rf.registers[0].name, "R0");
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[15].name, "R15");
        assert_eq!(rf.registers[16].name, "PC");
        assert_eq!(rf.registers[16].varnode.size, 4);
        assert_eq!(rf.registers[17].name, "PSW");
        assert_eq!(rf.registers[17].varnode.size, 4);
        assert_eq!(lifter.arch(), ArchId::RxRenesas);
    }

    #[test]
    fn lift_nop_and_rts() {
        // NOP = 0x03 → single Copy of R0 to R0.
        let nop = lift_bytes(&[0x03], 0x1000);
        assert_eq!(nop.len, 1);
        assert_eq!(nop.ir_ops.len(), 1);
        assert_eq!(nop.ir_ops[0].op, IrOp::Copy);

        // RTS = 0x02 → Return.
        let rts = lift_bytes(&[0x02], 0x1000);
        assert_eq!(rts.len, 1);
        assert_eq!(rts.ir_ops.len(), 1);
        assert_eq!(rts.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn lift_mov_load_store_l() {
        // MOV.L #5, R3 → Copy of a constant 5 into R3.
        let mov_imm = lift_bytes(&[0x66, (5 << 4) | 3], 0x1000);
        assert_eq!(mov_imm.len, 2);
        let copy = mov_imm.ir_ops.iter().find(|i| i.op == IrOp::Copy).unwrap();
        assert_eq!(copy.inputs[0].space, unlace_ir::SpaceId::Const);
        assert_eq!(copy.inputs[0].offset, 5);

        // MOV.L R2, R5 (reg-to-reg) → Copy R2 → R5.
        let mov_reg = lift_bytes(&[0xCF, (2 << 4) | 5], 0x1000);
        assert_eq!(mov_reg.len, 2);
        let copy = mov_reg.ir_ops.iter().find(|i| i.op == IrOp::Copy).unwrap();
        assert_eq!(copy.inputs[0], Varnode::reg(2 * 8, 4));
        assert_eq!(copy.output.unwrap(), Varnode::reg(5 * 8, 4));

        // MOV.L [R4], R7 → Load.
        let mov_ld = lift_bytes(&[0xCC, (4 << 4) | 7], 0x1000);
        assert_eq!(mov_ld.len, 2);
        let load = mov_ld.ir_ops.iter().find(|i| i.op == IrOp::Load).unwrap();
        assert_eq!(load.output.unwrap(), Varnode::reg(7 * 8, 4));

        // MOV.L R6, [R1] → Store.
        let mov_st = lift_bytes(&[0xCE, (6 << 4) | 1], 0x1000);
        assert_eq!(mov_st.len, 2);
        assert!(mov_st.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn lift_alu_ops() {
        // ADD R1, R2 → IntAdd + flags.
        let add = lift_bytes(&[0x4B, (1 << 4) | 2], 0x1000);
        assert!(add.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(add.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
        assert!(add.ir_ops.iter().any(|i| i.op == IrOp::IntScarry));

        // SUB R1, R2 → IntSub + flags.
        let sub = lift_bytes(&[0x43, (1 << 4) | 2], 0x1000);
        assert!(sub.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(sub.ir_ops.iter().any(|i| i.op == IrOp::IntSborrow));
        assert!(sub.ir_ops.iter().any(|i| i.op == IrOp::IntLess));

        // AND R3, R4 → IntAnd.
        let and = lift_bytes(&[0x53, (3 << 4) | 4], 0x1000);
        assert!(and.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));

        // OR R5, R6 → IntOr.
        let or = lift_bytes(&[0x55, (5 << 4) | 6], 0x1000);
        assert!(or.ir_ops.iter().any(|i| i.op == IrOp::IntOr));

        // XOR R7, R8 (FC-group, 3 bytes) → IntXor.
        let xor = lift_bytes(&[0xFC, 0x33, (7 << 4) | 8], 0x1000);
        assert_eq!(xor.len, 3);
        assert!(xor.ir_ops.iter().any(|i| i.op == IrOp::IntXor));

        // MUL R2, R3 → IntMult.
        let mul = lift_bytes(&[0x4F, (2 << 4) | 3], 0x1000);
        assert!(mul.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
    }

    #[test]
    fn lift_cmp_sets_flags_without_writing_gpr() {
        // CMP R1, R2 → IntSub feeding flags only.
        let cmp = lift_bytes(&[0x47, (1 << 4) | 2], 0x1000);
        assert!(cmp.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(cmp.ir_ops.iter().any(|i| i.op == IrOp::IntSborrow));

        // No write into a GP register slot.
        let writes_gpr = cmp.ir_ops.iter().any(|i| {
            i.output.is_some_and(|v| {
                v.space == unlace_ir::SpaceId::Register && v.offset < 16 * 8 && v.size == 4
            })
        });
        assert!(!writes_gpr, "CMP must not write a 32-bit GP register");
    }

    #[test]
    fn lift_control_flow() {
        // BRA.B +0x10 from 0x1000 → Branch to 0x1010.
        let bra = lift_bytes(&[0x2E, 0x10], 0x1000);
        let br = bra.ir_ops.iter().find(|i| i.op == IrOp::Branch).unwrap();
        assert_eq!(br.inputs[0].space, unlace_ir::SpaceId::Ram);
        assert_eq!(br.inputs[0].offset, 0x1010);

        // BSR.W +0x100 from 0x2000 → Call to 0x2100.
        let bsr = lift_bytes(&[0x39, 0x00, 0x01], 0x2000);
        let call = bsr.ir_ops.iter().find(|i| i.op == IrOp::Call).unwrap();
        assert_eq!(call.inputs[0].offset, 0x2100);

        // BEQ.B +4 → Cbranch guarded by ZF.
        let beq = lift_bytes(&[0x20, 0x04], 0x1000);
        assert!(beq.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));

        // BNE.B → Cbranch with BoolNegate on ZF.
        let bne = lift_bytes(&[0x21, 0x04], 0x1000);
        assert!(bne.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
        assert!(bne.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));

        // BGE.B → Cbranch with (S == O).
        let bge = lift_bytes(&[0x28, 0x04], 0x1000);
        assert!(bge.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
        assert!(bge.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));

        // BLE.B → Cbranch with Z OR (S != O).
        let ble = lift_bytes(&[0x2B, 0x04], 0x1000);
        assert!(ble.ir_ops.iter().any(|i| i.op == IrOp::IntNotequal));
        assert!(ble.ir_ops.iter().any(|i| i.op == IrOp::BoolOr));
        assert!(ble.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }
}
