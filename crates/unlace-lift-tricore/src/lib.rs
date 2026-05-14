//! Infineon TriCore → IR lifter.
use smallvec::smallvec;
use unlace_ir::{ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

fn tricore_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(17);
    static NAMES: [&str; 16] = ["d0","d1","d2","d3","d4","d5","d6","d7","a0","a1","a2","a3","a4","a5","a6","a7"];
    for (i, n) in NAMES.iter().enumerate() { regs.push(RegisterDef { name: n, varnode: Varnode::reg(i as u64 * 4, 4) }); }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(64, 4) });
    RegisterFile { registers: regs }
}

pub struct TriCoreLifter { reg_file: RegisterFile }
impl TriCoreLifter { pub fn new() -> Self { Self { reg_file: tricore_register_file() } } }
impl Default for TriCoreLifter { fn default() -> Self { Self::new() } }
impl Lifter for TriCoreLifter {
    fn arch(&self) -> ArchId { ArchId::TriCore }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
        // TriCore has 16 and 32-bit instructions; bit[0] of first byte signals length
        let len = if bytes[0] & 1 == 1 { 4 } else { 2 };
        if bytes.len() < len { return Err(LiftError::ShortBuffer); }
        Ok(LiftedInsn { ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)], len })
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    #[test] fn test_arch() { assert_eq!(TriCoreLifter::new().arch(), ArchId::TriCore); }
    #[test] fn test_regs() { assert_eq!(TriCoreLifter::new().register_file().registers.len(), 17); }
    #[test] fn test_short() { assert!(TriCoreLifter::new().lift_insn(&[0], 0).is_err()); }
}
