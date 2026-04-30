//! ARM / AArch64 → IR lifter (stub).

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

/// Stub lifter for AArch64. Returns `Unimplemented` for every instruction.
pub struct ArmLifter {
    register_file: RegisterFile,
}

impl ArmLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(34);
        // X0–X30 at offsets 0..240 step 8
        for i in 0..31u64 {
            regs.push(RegisterDef {
                name: match i {
                    0 => "X0",
                    1 => "X1",
                    2 => "X2",
                    3 => "X3",
                    4 => "X4",
                    5 => "X5",
                    6 => "X6",
                    7 => "X7",
                    8 => "X8",
                    9 => "X9",
                    10 => "X10",
                    11 => "X11",
                    12 => "X12",
                    13 => "X13",
                    14 => "X14",
                    15 => "X15",
                    16 => "X16",
                    17 => "X17",
                    18 => "X18",
                    19 => "X19",
                    20 => "X20",
                    21 => "X21",
                    22 => "X22",
                    23 => "X23",
                    24 => "X24",
                    25 => "X25",
                    26 => "X26",
                    27 => "X27",
                    28 => "X28",
                    29 => "X29",
                    30 => "X30",
                    _ => unreachable!(),
                },
                varnode: Varnode::reg(i * 8, 8),
            });
        }
        // SP at offset 248
        regs.push(RegisterDef { name: "SP", varnode: Varnode::reg(248, 8) });
        // PC at offset 256
        regs.push(RegisterDef { name: "PC", varnode: Varnode::reg(256, 8) });
        // NZCV at offset 264 (4 bytes — condition flags)
        regs.push(RegisterDef { name: "NZCV", varnode: Varnode::reg(264, 4) });

        Self { register_file: RegisterFile { registers: regs } }
    }
}

impl Default for ArmLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for ArmLifter {
    fn arch(&self) -> ArchId {
        ArchId::AArch64
    }

    fn lift_insn(&self, _bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, Vec::<Varnode>::new(), addr)],
            len: 4,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_stub_lifter_arm() {
        let lifter = ArmLifter::new();
        assert_eq!(lifter.arch(), ArchId::AArch64);

        let rf = lifter.register_file();
        assert!(!rf.registers.is_empty());
        // X0–X30 + SP + PC + NZCV = 34
        assert_eq!(rf.registers.len(), 34);
        assert_eq!(rf.registers[0].name, "X0");
        assert_eq!(rf.registers[30].name, "X30");
        assert_eq!(rf.registers[31].name, "SP");
        assert_eq!(rf.registers[32].name, "PC");
        assert_eq!(rf.registers[33].name, "NZCV");

        let result = lifter.lift_insn(&[0xde, 0xad, 0xbe, 0xef], 0x1000);
        assert!(result.is_ok());
        let lifted = result.expect("lift should succeed");
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
