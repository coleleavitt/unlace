//! AMDGPU (RDNA/GCN) → IR lifter.
use smallvec::smallvec;
use unlace_ir::{ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

fn amdgpu_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(33);
    static S: [&str; 16] = ["s0","s1","s2","s3","s4","s5","s6","s7","s8","s9","s10","s11","s12","s13","s14","s15"];
    static V: [&str; 16] = ["v0","v1","v2","v3","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15"];
    for (i, n) in S.iter().enumerate() { regs.push(RegisterDef { name: n, varnode: Varnode::reg(i as u64 * 4, 4) }); }
    for (i, n) in V.iter().enumerate() { regs.push(RegisterDef { name: n, varnode: Varnode::reg(64 + i as u64 * 4, 4) }); }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(128, 4) });
    RegisterFile { registers: regs }
}

pub struct AmdGpuLifter { reg_file: RegisterFile }
impl AmdGpuLifter { pub fn new() -> Self { Self { reg_file: amdgpu_register_file() } } }
impl Default for AmdGpuLifter { fn default() -> Self { Self::new() } }

impl Lifter for AmdGpuLifter {
    fn arch(&self) -> ArchId { ArchId::AmdGpu }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 { return Err(LiftError::ShortBuffer); }
        Ok(LiftedInsn { ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)], len: 4 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test] fn test_arch() { assert_eq!(AmdGpuLifter::new().arch(), ArchId::AmdGpu); }
    #[test] fn test_regs() { assert_eq!(AmdGpuLifter::new().register_file().registers.len(), 33); }
    #[test] fn test_short() { assert!(AmdGpuLifter::new().lift_insn(&[0,0], 0).is_err()); }
}
