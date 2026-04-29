//! V850 → IR lifter (stub).

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const V850_REG_NAMES: [&str; 32] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23",
    "r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31",
];

pub struct V850Lifter {
    register_file: RegisterFile,
}

impl V850Lifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(34);
        // r0–r31: offsets 0..248 step 8 (r0 is hardwired zero)
        for (i, name) in V850_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef { name, varnode: Varnode::reg((i as u64) * 8, 4) });
        }
        // PC at 256, PSW at 264
        regs.push(RegisterDef { name: "PC", varnode: Varnode::reg(256, 4) });
        regs.push(RegisterDef { name: "PSW", varnode: Varnode::reg(264, 4) });
        Self { register_file: RegisterFile { registers: regs } }
    }
}

impl Default for V850Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for V850Lifter {
    fn arch(&self) -> ArchId {
        ArchId::V850
    }

    fn lift_insn(&self, _bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, Vec::<Varnode>::new(), addr)],
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

    #[test]
    fn test_stub_lifter_v850() {
        let lifter = V850Lifter::new();
        assert_eq!(lifter.arch(), ArchId::V850);

        let rf = lifter.register_file();
        // r0–r31 + PC + PSW = 34
        assert_eq!(rf.registers.len(), 34);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[31].name, "r31");
        assert_eq!(rf.registers[32].name, "PC");
        assert_eq!(rf.registers[33].name, "PSW");

        let result = lifter.lift_insn(&[0x00, 0x00], 0x0000_1000);
        assert!(result.is_ok());
        let lifted = result.unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
