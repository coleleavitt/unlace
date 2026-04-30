//! RISC-V (RV64I) → IR lifter (stub).

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const RV_REG_NAMES: [&str; 32] = [
    "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7",
    "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15",
    "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23",
    "x24", "x25", "x26", "x27", "x28", "x29", "x30", "x31",
];

pub struct RiscVLifter {
    register_file: RegisterFile,
}

impl RiscVLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(33);
        // x0–x31: offsets 0..248 step 8 (x0 is hardwired zero)
        for (i, name) in RV_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef { name, varnode: Varnode::reg((i as u64) * 8, 8) });
        }
        // pc at offset 256
        regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(256, 8) });
        Self { register_file: RegisterFile { registers: regs } }
    }
}

impl Default for RiscVLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for RiscVLifter {
    fn arch(&self) -> ArchId {
        ArchId::RiscV64
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
    fn test_stub_lifter_riscv() {
        let lifter = RiscVLifter::new();
        assert_eq!(lifter.arch(), ArchId::RiscV64);

        let rf = lifter.register_file();
        // x0–x31 + pc = 33
        assert_eq!(rf.registers.len(), 33);
        assert_eq!(rf.registers[0].name, "x0");
        assert_eq!(rf.registers[31].name, "x31");
        assert_eq!(rf.registers[32].name, "pc");

        let result = lifter.lift_insn(&[0x00; 4], 0x8000_0000);
        assert!(result.is_ok());
        let lifted = result.expect("lift should succeed");
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
