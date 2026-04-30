//! PowerPC → IR lifter (stub).

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const PPC_GPR_NAMES: [&str; 32] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23",
    "r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31",
];

pub struct PpcLifter {
    register_file: RegisterFile,
}

impl PpcLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(37);
        // r0–r31: offsets 0..248 step 8
        for (i, name) in PPC_GPR_NAMES.iter().enumerate() {
            regs.push(RegisterDef { name, varnode: Varnode::reg((i as u64) * 8, 8) });
        }
        // CR at 256, LR at 264, CTR at 272, XER at 280, PC at 288
        regs.push(RegisterDef { name: "CR", varnode: Varnode::reg(256, 4) });
        regs.push(RegisterDef { name: "LR", varnode: Varnode::reg(264, 8) });
        regs.push(RegisterDef { name: "CTR", varnode: Varnode::reg(272, 8) });
        regs.push(RegisterDef { name: "XER", varnode: Varnode::reg(280, 4) });
        regs.push(RegisterDef { name: "PC", varnode: Varnode::reg(288, 8) });
        Self { register_file: RegisterFile { registers: regs } }
    }
}

impl Default for PpcLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for PpcLifter {
    fn arch(&self) -> ArchId {
        ArchId::Ppc
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
    fn test_stub_lifter_ppc() {
        let lifter = PpcLifter::new();
        assert_eq!(lifter.arch(), ArchId::Ppc);

        let rf = lifter.register_file();
        // r0–r31 + CR + LR + CTR + XER + PC = 37
        assert_eq!(rf.registers.len(), 37);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[31].name, "r31");
        assert_eq!(rf.registers[32].name, "CR");
        assert_eq!(rf.registers[33].name, "LR");
        assert_eq!(rf.registers[34].name, "CTR");
        assert_eq!(rf.registers[35].name, "XER");
        assert_eq!(rf.registers[36].name, "PC");

        let result = lifter.lift_insn(&[0x60, 0x00, 0x00, 0x00], 0x1000_0000);
        assert!(result.is_ok());
        let lifted = result.expect("lift should succeed");
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
