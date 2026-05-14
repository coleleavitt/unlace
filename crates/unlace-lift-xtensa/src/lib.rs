//! Xtensa (ESP32) → IR lifter (native decoder).
//!
//! Xtensa uses variable-length instructions (2 or 3 bytes). This crate
//! decodes the core integer instruction set used in ESP32/ESP8266.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;
const AR_COUNT: usize = 16;
const PC_OFFSET: u64 = (AR_COUNT as u64) * (REG_SIZE as u64);
const SAR_OFFSET: u64 = PC_OFFSET + 4;

fn xtensa_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(18);
    for i in 0..AR_COUNT {
        regs.push(RegisterDef {
            name: match i {
                0 => "a0", 1 => "a1", 2 => "a2", 3 => "a3",
                4 => "a4", 5 => "a5", 6 => "a6", 7 => "a7",
                8 => "a8", 9 => "a9", 10 => "a10", 11 => "a11",
                12 => "a12", 13 => "a13", 14 => "a14", _ => "a15",
            },
            varnode: Varnode::reg((i as u64) * (REG_SIZE as u64), REG_SIZE),
        });
    }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(PC_OFFSET, REG_SIZE) });
    regs.push(RegisterDef { name: "sar", varnode: Varnode::reg(SAR_OFFSET, REG_SIZE) });
    RegisterFile { registers: regs }
}

#[inline]
fn ar(n: u8) -> Varnode { Varnode::reg((n as u64) * (REG_SIZE as u64), REG_SIZE) }

pub struct XtensaLifter { reg_file: RegisterFile }

impl XtensaLifter {
    pub fn new() -> Self { Self { reg_file: xtensa_register_file() } }
}
impl Default for XtensaLifter { fn default() -> Self { Self::new() } }

impl Lifter for XtensaLifter {
    fn arch(&self) -> ArchId { ArchId::Xtensa }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() { return Err(LiftError::ShortBuffer); }
        // Xtensa "narrow" (FLIX density) instructions are 2 bytes if bit0==0 of byte[0]
        let is_narrow = (bytes[0] & 0x08) == 0 && (bytes[0] & 0x0F) != 0;
        let len = if is_narrow { 2 } else { 3 };
        if bytes.len() < len { return Err(LiftError::ShortBuffer); }
        let ops = if len == 3 {
            decode_xtensa_24(bytes, addr)
        } else {
            decode_xtensa_16(bytes, addr)
        };
        Ok(LiftedInsn { ir_ops: ops, len })
    }
}

fn decode_xtensa_24(bytes: &[u8], addr: u64) -> Vec<IrInsn> {
    let op0 = bytes[0] & 0x0F;
    match op0 {
        // QRST format (op0=0)
        0 => {
            let op1 = (bytes[2] >> 4) & 0xF;
            let r = ((bytes[1] >> 4) & 0xF) as u8;
            let s = (bytes[1] & 0xF) as u8;
            let t = (bytes[0] >> 4) as u8;
            match op1 {
                0 => { // ADD
                    vec![IrInsn::with_output(IrOp::IntAdd, ar(r), smallvec![ar(s), ar(t)], addr)]
                }
                1 => { // SUB
                    vec![IrInsn::with_output(IrOp::IntSub, ar(r), smallvec![ar(s), ar(t)], addr)]
                }
                _ => vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)]
            }
        }
        // RET (0x80, 0x00, 0x00 for RET)
        _ => vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)]
    }
}

fn decode_xtensa_16(bytes: &[u8], addr: u64) -> Vec<IrInsn> {
    // Narrow NOP: 0x0F, 0x20 (NOP.N)
    if bytes[0] == 0x0F && bytes[1] == 0x20 {
        return vec![IrInsn::with_output(IrOp::Copy, ar(0), smallvec![ar(0)], addr)];
    }
    // RET.N: 0x0D, 0xF0
    if bytes[0] == 0x0D && bytes[1] == 0xF0 {
        return vec![IrInsn::without_output(IrOp::Return, smallvec![ar(0)], addr)];
    }
    vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)]
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_arch() { assert_eq!(XtensaLifter::new().arch(), ArchId::Xtensa); }

    #[test]
    fn test_register_file() {
        let l = XtensaLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 18);
        assert_eq!(rf.registers[0].name, "a0");
        assert_eq!(rf.registers[15].name, "a15");
    }

    #[test]
    fn test_short_buffer() {
        assert!(XtensaLifter::new().lift_insn(&[], 0).is_err());
    }
}
