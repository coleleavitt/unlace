//! MIPS → IR lifter (stub).

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const MIPS_REG_NAMES: [&str; 32] = [
    "$zero", "$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3",
    "$t0", "$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7",
    "$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7",
    "$t8", "$t9", "$k0", "$k1", "$gp", "$sp", "$fp", "$ra",
];

pub struct MipsLifter {
    register_file: RegisterFile,
}

impl MipsLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(35);
        // $0–$31: offsets 0..248 step 8
        for (i, name) in MIPS_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef { name, varnode: Varnode::reg((i as u64) * 8, 8) });
        }
        // HI at offset 256, LO at 264, PC at 272
        regs.push(RegisterDef { name: "HI", varnode: Varnode::reg(256, 8) });
        regs.push(RegisterDef { name: "LO", varnode: Varnode::reg(264, 8) });
        regs.push(RegisterDef { name: "PC", varnode: Varnode::reg(272, 8) });
        Self { register_file: RegisterFile { registers: regs } }
    }
}

impl Default for MipsLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for MipsLifter {
    fn arch(&self) -> ArchId {
        ArchId::Mips
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
    fn test_stub_lifter_mips() {
        let lifter = MipsLifter::new();
        assert_eq!(lifter.arch(), ArchId::Mips);

        let rf = lifter.register_file();
        // $0–$31 + HI + LO + PC = 35
        assert_eq!(rf.registers.len(), 35);
        assert_eq!(rf.registers[0].name, "$zero");
        assert_eq!(rf.registers[31].name, "$ra");
        assert_eq!(rf.registers[32].name, "HI");
        assert_eq!(rf.registers[33].name, "LO");
        assert_eq!(rf.registers[34].name, "PC");

        let result = lifter.lift_insn(&[0x00, 0x00, 0x00, 0x00], 0x0040_0000);
        assert!(result.is_ok());
        let lifted = result.expect("lift should succeed");
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
