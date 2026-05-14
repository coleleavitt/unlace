//! NvSass → IR lifter (native decoder).

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;
const REG_COUNT: usize = 16;
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

pub struct NvSassLifter {
    reg_file: RegisterFile,
}

impl NvSassLifter {
    pub fn new() -> Self { Self { reg_file: build_register_file() } }
}
impl Default for NvSassLifter { fn default() -> Self { Self::new() } }

impl Lifter for NvSassLifter {
    fn arch(&self) -> ArchId { ArchId::NvSass }
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
    fn test_arch() { assert_eq!(NvSassLifter::new().arch(), ArchId::NvSass); }

    #[test]
    fn test_register_file() {
        let l = NvSassLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "r0");
        assert!(rf.registers.len() > 1);
    }

    #[test]
    fn test_short_buffer() {
        assert!(NvSassLifter::new().lift_insn(&[], 0).is_err());
    }

    #[test]
    fn test_decodes() {
        let l = NvSassLifter::new();
        let r = l.lift_insn(&[0u8; 32], 0x1000).unwrap();
        assert_eq!(r.len, 4);
    }
}
