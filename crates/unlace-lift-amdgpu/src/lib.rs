//! AMDGPU (RDNA/GCN) → IR lifter.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const SGPR_COUNT: usize = 16;
const VGPR_COUNT: usize = 16;
const REG_SIZE: u8 = 4;
const PC_OFFSET: u64 = ((SGPR_COUNT + VGPR_COUNT) as u64) * (REG_SIZE as u64);

fn amdgpu_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(SGPR_COUNT + VGPR_COUNT + 1);
    static S_NAMES: [&str; 16] = ["s0","s1","s2","s3","s4","s5","s6","s7","s8","s9","s10","s11","s12","s13","s14","s15"];
    static V_NAMES: [&str; 16] = ["v0","v1","v2","v3","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15"];
    for (i, n) in S_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg((i as u64) * 4, REG_SIZE) });
    }
    for (i, n) in V_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg((SGPR_COUNT as u64 + i as u64) * 4, REG_SIZE) });
    }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(PC_OFFSET, REG_SIZE) });
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
    #[test] fn test_reg_file() { let l = AmdGpuLifter::new(); assert_eq!(l.register_file().registers.len(), 33); }
    #[test] fn test_short() { assert!(AmdGpuLifter::new().lift_insn(&[0,0], 0).is_err()); }
}
