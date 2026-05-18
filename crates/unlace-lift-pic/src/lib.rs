//! PIC16 → IR lifter (§5.13 stub→Beta promotion).
//!
//! PIC16F is a 14-bit fixed-length instruction set. The word is little
//! endian on the wire. Top-level dispatch is by the upper 6 bits
//! (0..=0x3F), with file-register opcodes occupying 0x00..=0x0F,
//! literal/control opcodes 0x30..=0x3F, and bit-oriented opcodes
//! 0x10..=0x1F.
//!
//! This MVP covers the 30 most-common opcodes from the Microchip
//! PIC16F87X datasheet: load/store, ALU, bit set/clear, branch, call,
//! return, sleep, nop, clr-watchdog.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 1;

// Register layout: W at offset 0, then synthetic file registers at 1..255.
// Real PIC code addresses file registers by 7-bit address but for IR
// purposes we model them as a generic 256-byte register file.
const REG_W: u64 = 0;
const PC_OFFSET: u64 = 256;
const STATUS_OFFSET: u64 = 257;

fn vn_w() -> Varnode {
    Varnode::reg(REG_W, REG_SIZE)
}

fn vn_f(addr: u8) -> Varnode {
    // Avoid the W slot at offset 0; remap file address 0 → offset 1.
    let offset = (addr as u64).max(1);
    Varnode::reg(offset, REG_SIZE)
}

fn const_vn(value: u64) -> Varnode {
    Varnode::constant(value, REG_SIZE)
}

fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 2)
}

fn build_register_file() -> RegisterFile {
    let mut regs = vec![
        RegisterDef {
            name: "W",
            varnode: vn_w(),
        },
        RegisterDef {
            name: "PC",
            varnode: Varnode::reg(PC_OFFSET, REG_SIZE),
        },
        RegisterDef {
            name: "STATUS",
            varnode: Varnode::reg(STATUS_OFFSET, REG_SIZE),
        },
    ];
    // Sample of named file registers for fixture readability.
    for i in 1u8..8 {
        let name = match i {
            1 => "TMR0",
            2 => "PCL",
            3 => "STATUS_F",
            4 => "FSR",
            5 => "PORTA",
            6 => "PORTB",
            7 => "PCLATH",
            _ => "f",
        };
        regs.push(RegisterDef {
            name,
            varnode: vn_f(i),
        });
    }
    RegisterFile { registers: regs }
}

pub struct Pic16Lifter {
    reg_file: RegisterFile,
}

impl Pic16Lifter {
    pub fn new() -> Self {
        Self {
            reg_file: build_register_file(),
        }
    }
}

impl Default for Pic16Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Pic16Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Pic16
    }
    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        // PIC16 instructions are 14 bits, stored as 16-bit little-endian
        // with the top 2 bits zero.
        let word = u16::from_le_bytes([bytes[0], bytes[1]]) & 0x3FFF;

        let ops = decode(word, addr);
        Ok(LiftedInsn {
            ir_ops: ops,
            len: 2,
        })
    }
}

/// Decode one 14-bit PIC16 instruction word.
fn decode(word: u16, addr: u64) -> Vec<IrInsn> {
    let top6 = (word >> 8) & 0x3F;
    let f_addr = (word & 0x7F) as u8;
    let d_bit = (word >> 7) & 0x1 != 0; // destination: 0=W, 1=F
    let k8 = (word & 0xFF) as u64;

    // Special opcodes (exact match).
    match word {
        // NOP
        0x0000 | 0x0020 | 0x0040 | 0x0060 => return Vec::new(),
        // RETURN
        0x0008 => return vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
        // RETFIE
        0x0009 => return vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
        // SLEEP
        0x0063 => return vec![IrInsn::without_output(IrOp::Callother, smallvec![], addr)],
        // CLRWDT
        0x0064 => return vec![IrInsn::without_output(IrOp::Callother, smallvec![], addr)],
        _ => {}
    }

    // File-register opcodes: top 6 bits == 0b000000..0b000111 (0..=7).
    let f = vn_f(f_addr);
    let w = vn_w();
    let dst = if d_bit { f } else { w };

    match top6 {
        // ADDWF f, d  (0b000111_dfffffff = 0x07yy)
        0x07 => return vec![alu(IrOp::IntAdd, dst, f, w, addr)],
        // SUBWF f, d  (0b000010)
        0x02 => return vec![alu(IrOp::IntSub, dst, f, w, addr)],
        // ANDWF f, d  (0b000101)
        0x05 => return vec![alu(IrOp::IntAnd, dst, f, w, addr)],
        // IORWF f, d  (0b000100)
        0x04 => return vec![alu(IrOp::IntOr, dst, f, w, addr)],
        // XORWF f, d  (0b000110)
        0x06 => return vec![alu(IrOp::IntXor, dst, f, w, addr)],
        // MOVF f, d  (0b001000)
        0x08 => return vec![IrInsn::with_output(IrOp::Copy, dst, smallvec![f], addr)],
        // INCF f, d  (0b001010)
        0x0A => {
            return vec![IrInsn::with_output(
                IrOp::IntAdd,
                dst,
                smallvec![f, const_vn(1)],
                addr,
            )];
        }
        // DECF f, d  (0b000011)
        0x03 => {
            return vec![IrInsn::with_output(
                IrOp::IntSub,
                dst,
                smallvec![f, const_vn(1)],
                addr,
            )];
        }
        // CLRF f      (0b000001 1fffffff)
        0x01 => {
            // CLRW shares 0b000001 but with f field zero; both clear
            // the destination.
            let target = if d_bit { f } else { w };
            return vec![IrInsn::with_output(
                IrOp::Copy,
                target,
                smallvec![const_vn(0)],
                addr,
            )];
        }
        // RLF f, d    (0b001101)
        0x0D => {
            return vec![IrInsn::with_output(
                IrOp::IntLeft,
                dst,
                smallvec![f, const_vn(1)],
                addr,
            )];
        }
        // RRF f, d    (0b001100)
        0x0C => {
            return vec![IrInsn::with_output(
                IrOp::IntRight,
                dst,
                smallvec![f, const_vn(1)],
                addr,
            )];
        }
        // MOVWF f     (0b000000 1fffffff)
        0x00 if (word & 0x80) != 0 => {
            return vec![IrInsn::with_output(IrOp::Copy, f, smallvec![w], addr)];
        }
        _ => {}
    }

    // Bit-oriented opcodes: top 4 bits 0b01__.
    match (word >> 10) & 0xF {
        // BCF f, b   (0b0100)
        0x4 => return vec![bit_clear_or_set(f, word, false, addr)],
        // BSF f, b   (0b0101)
        0x5 => return vec![bit_clear_or_set(f, word, true, addr)],
        // BTFSC      (0b0110) — branch if bit clear; modelled as Cbranch
        0x6 => return vec![btfs(f, word, false, addr)],
        // BTFSS      (0b0111)
        0x7 => return vec![btfs(f, word, true, addr)],
        _ => {}
    }

    // Literal / control: top 4 bits 0b11__.
    match (word >> 11) & 0x7 {
        // CALL k     (0b100 kkkk kkkkkkk)
        0b100 => {
            let target = (word & 0x07FF) as u64 * 2;
            return vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![ram_target(target)],
                addr,
            )];
        }
        // GOTO k     (0b101)
        0b101 => {
            let target = (word & 0x07FF) as u64 * 2;
            return vec![IrInsn::without_output(
                IrOp::Branch,
                smallvec![ram_target(target)],
                addr,
            )];
        }
        _ => {}
    }

    // 8-bit literal opcodes (top 4 bits 0b11_xx with bit 11 set).
    let top4 = (word >> 8) & 0x3F;
    match top4 {
        // MOVLW k    (0b1100_xxxx = 0x30..=0x3F)
        0x30..=0x33 => {
            return vec![IrInsn::with_output(
                IrOp::Copy,
                vn_w(),
                smallvec![const_vn(k8)],
                addr,
            )];
        }
        // RETLW k    (0b1101_xxxx = 0x34..=0x37)
        0x34..=0x37 => {
            return vec![
                IrInsn::with_output(IrOp::Copy, vn_w(), smallvec![const_vn(k8)], addr),
                IrInsn::without_output(IrOp::Return, smallvec![], addr),
            ];
        }
        // ADDLW k    (0b111110)
        0x3E | 0x3F => {
            return vec![IrInsn::with_output(
                IrOp::IntAdd,
                vn_w(),
                smallvec![vn_w(), const_vn(k8)],
                addr,
            )];
        }
        // SUBLW k    (0b111100)
        0x3C | 0x3D => {
            return vec![IrInsn::with_output(
                IrOp::IntSub,
                vn_w(),
                smallvec![const_vn(k8), vn_w()],
                addr,
            )];
        }
        // ANDLW k    (0b111001)
        0x39 => {
            return vec![IrInsn::with_output(
                IrOp::IntAnd,
                vn_w(),
                smallvec![vn_w(), const_vn(k8)],
                addr,
            )];
        }
        // IORLW k    (0b111000)
        0x38 => {
            return vec![IrInsn::with_output(
                IrOp::IntOr,
                vn_w(),
                smallvec![vn_w(), const_vn(k8)],
                addr,
            )];
        }
        // XORLW k    (0b111010)
        0x3A => {
            return vec![IrInsn::with_output(
                IrOp::IntXor,
                vn_w(),
                smallvec![vn_w(), const_vn(k8)],
                addr,
            )];
        }
        _ => {}
    }

    vec![IrInsn::without_output(
        IrOp::Unimplemented,
        smallvec![],
        addr,
    )]
}

fn alu(op: IrOp, dst: Varnode, f: Varnode, w: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(op, dst, smallvec![f, w], addr)
}

fn bit_clear_or_set(f: Varnode, word: u16, set: bool, addr: u64) -> IrInsn {
    let bit = (word >> 7) & 0x7;
    let mask = 1u64 << bit;
    if set {
        IrInsn::with_output(IrOp::IntOr, f, smallvec![f, const_vn(mask)], addr)
    } else {
        IrInsn::with_output(
            IrOp::IntAnd,
            f,
            smallvec![f, const_vn((!mask) & 0xFF)],
            addr,
        )
    }
}

fn btfs(f: Varnode, word: u16, skip_if_set: bool, addr: u64) -> IrInsn {
    // BTFSC/BTFSS conditionally skip the next instruction. We model as
    // a Cbranch to addr+4 (skip 2-byte next insn) with a condition that
    // tests the bit. The structurer recovers the if-style.
    let bit = (word >> 7) & 0x7;
    let mask = 1u64 << bit;
    let _ = skip_if_set;
    let _ = mask;
    let _ = f;
    // For now, lift as Callother so structuring sees the side-effect
    // without a fake branch target.
    IrInsn::without_output(IrOp::Callother, smallvec![], addr)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn lift(word: u16) -> LiftedInsn {
        let bytes = word.to_le_bytes();
        Pic16Lifter::new().lift_insn(&bytes, 0x100).unwrap()
    }

    #[test]
    fn test_arch_and_regs() {
        let l = Pic16Lifter::new();
        assert_eq!(l.arch(), ArchId::Pic16);
        assert!(l.register_file().registers.iter().any(|r| r.name == "W"));
    }

    #[test]
    fn test_short_buffer() {
        assert!(Pic16Lifter::new().lift_insn(&[], 0).is_err());
    }

    /// NOP — 14-bit 0x0000.
    #[test]
    fn nop() {
        let r = lift(0x0000);
        assert!(r.ir_ops.is_empty());
        assert_eq!(r.len, 2);
    }

    /// RETURN — 0x0008.
    #[test]
    fn return_op() {
        let r = lift(0x0008);
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    /// RETFIE — 0x0009.
    #[test]
    fn retfie() {
        let r = lift(0x0009);
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    /// SLEEP — 0x0063, CLRWDT — 0x0064.
    #[test]
    fn sleep_and_clrwdt() {
        assert_eq!(lift(0x0063).ir_ops[0].op, IrOp::Callother);
        assert_eq!(lift(0x0064).ir_ops[0].op, IrOp::Callother);
    }

    /// MOVLW 0x42 → 0b1100_0000_0100_0010 = 0x3042.
    #[test]
    fn movlw() {
        let r = lift(0x3042);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(vn_w()));
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(0x42));
    }

    /// ADDLW 5 → 0b1111_1110_0000_0101 = 0x3E05.
    #[test]
    fn addlw() {
        let r = lift(0x3E05);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
    }

    /// SUBLW 5 → 0x3C05.
    #[test]
    fn sublw() {
        let r = lift(0x3C05);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
    }

    /// ANDLW 0xF → 0x390F.
    #[test]
    fn andlw() {
        let r = lift(0x390F);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    /// IORLW / XORLW.
    #[test]
    fn iorlw_xorlw() {
        assert_eq!(lift(0x3801).ir_ops[0].op, IrOp::IntOr);
        assert_eq!(lift(0x3AAA).ir_ops[0].op, IrOp::IntXor);
    }

    /// RETLW 0 → Copy + Return.
    #[test]
    fn retlw() {
        let r = lift(0x3400);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[1].op, IrOp::Return);
    }

    /// GOTO 0x100 → 0b101_0_0001_0000_0000 = 0x2900.
    /// Target = (0x100 & 0x7FF) * 2 = 0x200.
    #[test]
    fn goto() {
        let r = lift(0x2900);
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
        assert_eq!(r.ir_ops[0].inputs[0], ram_target(0x200));
    }

    /// CALL 0x100 → 0b100_0_0001_0000_0000 = 0x2100.
    #[test]
    fn call() {
        let r = lift(0x2100);
        assert_eq!(r.ir_ops[0].op, IrOp::Call);
        assert_eq!(r.ir_ops[0].inputs[0], ram_target(0x200));
    }

    /// ADDWF 0x20, W → 0b000111 0 0010_0000 = 0x0720.
    /// d_bit=0 means destination is W.
    #[test]
    fn addwf() {
        let r = lift(0x0720);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(vn_w()));
    }

    /// SUBWF 0x20, F → 0b000010 1 0010_0000 = 0x02A0.
    #[test]
    fn subwf_to_f() {
        let r = lift(0x02A0);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(r.ir_ops[0].output, Some(vn_f(0x20)));
    }

    /// ANDWF / IORWF / XORWF.
    #[test]
    fn andwf_iorwf_xorwf() {
        assert_eq!(lift(0x0520).ir_ops[0].op, IrOp::IntAnd);
        assert_eq!(lift(0x0420).ir_ops[0].op, IrOp::IntOr);
        assert_eq!(lift(0x0620).ir_ops[0].op, IrOp::IntXor);
    }

    /// MOVF f, d → Copy.
    #[test]
    fn movf() {
        let r = lift(0x0820);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
    }

    /// INCF / DECF.
    #[test]
    fn incf_decf() {
        let inc = lift(0x0A20);
        assert_eq!(inc.ir_ops[0].op, IrOp::IntAdd);
        let dec = lift(0x0320);
        assert_eq!(dec.ir_ops[0].op, IrOp::IntSub);
    }

    /// RLF / RRF → IntLeft / IntRight.
    #[test]
    fn rlf_rrf() {
        assert_eq!(lift(0x0D20).ir_ops[0].op, IrOp::IntLeft);
        assert_eq!(lift(0x0C20).ir_ops[0].op, IrOp::IntRight);
    }

    /// MOVWF f → 0b000000 1 fffffff = 0x008x.
    #[test]
    fn movwf() {
        let r = lift(0x00A0); // file 0x20
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(vn_f(0x20)));
    }

    /// CLRF — 0b000001 1 fffffff.
    #[test]
    fn clrf() {
        let r = lift(0x01A0);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
    }

    /// BSF f, b → 0b0101 bbb f_fffffff.
    /// BSF 0x10, bit 3 → 0b0101 011 0_0010_000 + 0 = 0x1990.
    #[test]
    fn bsf() {
        // 0101 0bbb fff_ffff → b=3, f=0x10 → 0b0101_0011_0001_0000 = 0x1590
        let r = lift(0x1590);
        assert_eq!(r.ir_ops[0].op, IrOp::IntOr);
    }

    /// BCF f, b.
    #[test]
    fn bcf() {
        let r = lift(0x1190);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    /// BTFSC / BTFSS lift to Callother in the MVP.
    #[test]
    fn btfsc_btfss() {
        assert_eq!(lift(0x1990).ir_ops[0].op, IrOp::Callother);
        assert_eq!(lift(0x1D90).ir_ops[0].op, IrOp::Callother);
    }
}
