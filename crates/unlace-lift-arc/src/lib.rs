//! ARC → IR lifter (stub).

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const ARC_CORE_REG_NAMES: [&str; 64] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23",
    "r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31",
    "r32", "r33", "r34", "r35", "r36", "r37", "r38", "r39",
    "r40", "r41", "r42", "r43", "r44", "r45", "r46", "r47",
    "r48", "r49", "r50", "r51", "r52", "r53", "r54", "r55",
    "r56", "r57", "r58", "r59", "r60", "r61", "r62", "r63",
];

pub struct ArcLifter {
    register_file: RegisterFile,
}

impl ArcLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(68);
        // r0–r63: offsets 0..504 step 8
        for (i, name) in ARC_CORE_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef { name, varnode: Varnode::reg((i as u64) * 8, 4) });
        }
        // STATUS32 at 512, BTA at 520, LP_START at 528, LP_END at 536
        regs.push(RegisterDef { name: "STATUS32", varnode: Varnode::reg(512, 4) });
        regs.push(RegisterDef { name: "BTA", varnode: Varnode::reg(520, 4) });
        regs.push(RegisterDef { name: "LP_START", varnode: Varnode::reg(528, 4) });
        regs.push(RegisterDef { name: "LP_END", varnode: Varnode::reg(536, 4) });
        Self { register_file: RegisterFile { registers: regs } }
    }
}

impl Default for ArcLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for ArcLifter {
    fn arch(&self) -> ArchId {
        ArchId::Arc
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
    fn test_stub_lifter_arc() {
        let lifter = ArcLifter::new();
        assert_eq!(lifter.arch(), ArchId::Arc);

        let rf = lifter.register_file();
        // r0–r63 + STATUS32 + BTA + LP_START + LP_END = 68
        assert_eq!(rf.registers.len(), 68);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[63].name, "r63");
        assert_eq!(rf.registers[64].name, "STATUS32");
        assert_eq!(rf.registers[65].name, "BTA");
        assert_eq!(rf.registers[66].name, "LP_START");
        assert_eq!(rf.registers[67].name, "LP_END");

        let result = lifter.lift_insn(&[0x00, 0x00, 0x00, 0x00], 0x0000_0000);
        assert!(result.is_ok());
        let lifted = result.expect("lift should succeed");
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
