//! Motorola 68000 → IR lifter (native decoder).

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;

fn m68k_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(17);
    static D_NAMES: [&str; 8] = ["d0","d1","d2","d3","d4","d5","d6","d7"];
    static A_NAMES: [&str; 8] = ["a0","a1","a2","a3","a4","a5","a6","a7"];
    for (i, n) in D_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg((i as u64) * 4, REG_SIZE) });
    }
    for (i, n) in A_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg(32 + (i as u64) * 4, REG_SIZE) });
    }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(64, REG_SIZE) });
    RegisterFile { registers: regs }
}

pub struct M68kLifter { reg_file: RegisterFile }
impl M68kLifter {
    pub fn new() -> Self { Self { reg_file: m68k_register_file() } }
}
impl Default for M68kLifter { fn default() -> Self { Self::new() } }

impl Lifter for M68kLifter {
    fn arch(&self) -> ArchId { ArchId::M68k }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
        let ops = vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)];
        Ok(LiftedInsn { ir_ops: ops, len: 2 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test] fn test_arch() { assert_eq!(M68kLifter::new().arch(), ArchId::M68k); }
    #[test] fn test_reg_file() {
        let l = M68kLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 17);
        assert_eq!(rf.registers[0].name, "d0");
        assert_eq!(rf.registers[8].name, "a0");
    }
    #[test] fn test_short() { assert!(M68kLifter::new().lift_insn(&[0], 0).is_err()); }
}
