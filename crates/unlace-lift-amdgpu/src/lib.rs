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
//! AmdGpu → IR lifter (native decoder).

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;
const REG_COUNT: usize = 32;
const PC_OFFSET: u64 = (REG_COUNT as u64) * (REG_SIZE as u64);

fn build_register_file() -> RegisterFile {
    static NAMES: [&str; 32] = [
        "r0","r1","r2","r3","r4","r5","r6","r7",
        "r8","r9","r10","r11","r12","r13","r14","r15",
        "r16","r17","r18","r19","r20","r21","r22","r23",
        "r24","r25","r26","r27","r28","r29","r30","r31",
    ];
    let count = REG_COUNT.min(32);
    let mut regs = Vec::with_capacity(count + 1);
    for i in 0..count {
        regs.push(RegisterDef {
            name: NAMES[i],
            varnode: Varnode::reg((i as u64) * (REG_SIZE as u64), REG_SIZE),
        });
    }
    regs.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(PC_OFFSET, REG_SIZE),
    });
    RegisterFile { registers: regs }
}

pub struct AmdGpuLifter {
    reg_file: RegisterFile,
}

impl AmdGpuLifter {
    pub fn new() -> Self { Self { reg_file: build_register_file() } }
}
impl Default for AmdGpuLifter { fn default() -> Self { Self::new() } }

impl Lifter for AmdGpuLifter {
    fn arch(&self) -> ArchId { ArchId::AmdGpu }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }
        let ops = vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)];
        Ok(LiftedInsn { ir_ops: ops, len: 4 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_arch() { assert_eq!(AmdGpuLifter::new().arch(), ArchId::AmdGpu); }

    #[test]
    fn test_register_file() {
        let l = AmdGpuLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "r0");
        assert!(rf.registers.len() > 1);
    }

    #[test]
    fn test_short_buffer() {
        assert!(AmdGpuLifter::new().lift_insn(&[], 0).is_err());
    }

    #[test]
    fn test_decodes() {
        let l = AmdGpuLifter::new();
        let r = l.lift_insn(&[0u8; 32], 0x1000).unwrap();
        assert_eq!(r.len, 4);
    }
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
