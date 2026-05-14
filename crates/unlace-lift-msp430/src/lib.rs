//! MSP430 → IR lifter.
//!
//! This crate implements a compact native decoder/lifter for the classic
//! 16-bit MSP430 instruction set. MSP430 instructions are little-endian
//! 16-bit words with optional 16-bit extension words for indexed, absolute,
//! symbolic, and immediate addressing modes.
//!
//! # Register file model
//!
//! Registers `r0`–`r15` are 16-bit values at register-space offsets `0..32`.
//! Conventional aliases are also exposed: `PC`=`r0`, `SP`=`r1`, `SR`=`r2`,
//! and `CG`=`r3`. A byte operation writes the low byte of the register.

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const WORD_LEN: usize = 2;
const NUM_REGS: usize = 16;
const REG_PC: u8 = 0;
const REG_SP: u8 = 1;
const REG_SR: u8 = 2;
const REG_CG: u8 = 3;
const UNIQUE_BASE: u64 = 0x4300;

const FLAG_C: u64 = 0x0001;
const FLAG_Z: u64 = 0x0002;
const FLAG_N: u64 = 0x0004;

#[inline]
fn reg(idx: u8, size: u8) -> Varnode {
    Varnode::reg((idx as u64) * 2, size)
}

#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, size)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 2)
}

#[inline]
fn decode_word(bytes: &[u8], off: usize) -> Result<u16, LiftError> {
    if bytes.len() < off + 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_le_bytes([bytes[off], bytes[off + 1]]))
}

#[inline]
fn sign_extend(value: u16, bits: u8) -> i16 {
    let shift = 16 - bits;
    ((value << shift) as i16) >> shift
}

#[inline]
fn op_size(word: u16) -> u8 {
    if (word & 0x0040) != 0 { 1 } else { 2 }
}

#[inline]
fn all_ones(size: u8) -> u64 {
    if size == 1 { 0xff } else { 0xffff }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Dst {
    Reg(u8),
    Mem(Varnode),
}

/// MSP430 architecture lifter.
pub struct Msp430Lifter {
    register_file: RegisterFile,
}

impl Msp430Lifter {
    /// Create a new MSP430 lifter.
    pub fn new() -> Self {
        const NAMES: [&str; NUM_REGS] = [
            "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13",
            "r14", "r15",
        ];

        let mut registers = Vec::with_capacity(NUM_REGS + 4);
        for (idx, name) in NAMES.iter().enumerate() {
            registers.push(RegisterDef {
                name,
                varnode: reg(idx as u8, 2),
            });
        }
        registers.extend([
            RegisterDef {
                name: "PC",
                varnode: reg(REG_PC, 2),
            },
            RegisterDef {
                name: "SP",
                varnode: reg(REG_SP, 2),
            },
            RegisterDef {
                name: "SR",
                varnode: reg(REG_SR, 2),
            },
            RegisterDef {
                name: "CG",
                varnode: reg(REG_CG, 2),
            },
        ]);

        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let word = decode_word(bytes, 0)?;
        trace!(addr = %format!("{addr:#x}"), word = %format!("{word:#06x}"), "decoding MSP430 instruction");

        // RET is the assembler alias for MOV @SP+, PC. Treat it as a return
        // before the generic double-operand decoder turns it into a branch.
        if word == 0x4130 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                len: WORD_LEN,
            });
        }

        // Jumps: 001 ccc oooooooooo, where the signed 10-bit offset is in
        // words and is relative to the following instruction.
        if (word & 0xe000) == 0x2000 {
            return Ok(self.lift_jump(word, addr));
        }

        // Single-operand format: 0001 00 ooo b aa rrrr.
        if (word & 0xfc00) == 0x1000 {
            return self.lift_single(bytes, word, addr);
        }

        // Double-operand format opcodes occupy 0x4..=0xf in bits 15..12.
        if (word >> 12) >= 0x4 {
            return self.lift_double(bytes, word, addr);
        }

        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::new(),
                addr,
            )],
            len: WORD_LEN,
        })
    }

    fn lift_jump(&self, word: u16, addr: u64) -> LiftedInsn {
        let cond = ((word >> 10) & 0x7) as u8;
        let off = sign_extend(word & 0x03ff, 10) as i64;
        let target = (addr as i64 + 2 + off * 2) as u64;

        if cond == 7 {
            return LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[ram_target(target)]),
                    addr,
                )],
                len: WORD_LEN,
            };
        }

        let mut ops = Vec::new();
        let sr = reg(REG_SR, 2);
        let bit = tmp(0, 2);
        let cmp = tmp(1, 1);
        let flag = match cond {
            0 | 1 => FLAG_Z, // JNE/JNZ, JEQ/JZ
            2 | 3 => FLAG_C, // JNC/JLO, JC/JHS
            4 => FLAG_N,     // JN
            5 | 6 => FLAG_N, // Approximate JGE/JL with N in this IR-level MVP.
            _ => 0,
        };
        ops.push(IrInsn::with_output(
            IrOp::IntAnd,
            bit,
            SmallVec::from_slice(&[sr, const_vn(flag, 2)]),
            addr,
        ));
        let is_set = matches!(cond, 1 | 3 | 4 | 6);
        ops.push(IrInsn::with_output(
            if is_set {
                IrOp::IntNotequal
            } else {
                IrOp::IntEqual
            },
            cmp,
            SmallVec::from_slice(&[bit, const_vn(0, 2)]),
            addr,
        ));
        ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            SmallVec::from_slice(&[ram_target(target), cmp]),
            addr,
        ));

        LiftedInsn {
            ir_ops: ops,
            len: WORD_LEN,
        }
    }

    fn lift_double(&self, bytes: &[u8], word: u16, addr: u64) -> Result<LiftedInsn, LiftError> {
        let opcode = ((word >> 12) & 0x0f) as u8;
        let src_reg = ((word >> 8) & 0x0f) as u8;
        let ad = ((word >> 7) & 0x1) as u8;
        let size = op_size(word);
        let as_bits = ((word >> 4) & 0x3) as u8;
        let dst_reg = (word & 0x0f) as u8;

        let mut off = WORD_LEN;
        let mut ops = Vec::new();
        let src = self.decode_src(bytes, &mut off, src_reg, as_bits, size, addr, &mut ops)?;
        let dst = self.decode_dst(bytes, &mut off, dst_reg, ad, size, addr, &mut ops)?;

        // MOV source, PC is the canonical BR pseudo-instruction.
        if opcode == 0x4 && matches!(dst, Dst::Reg(REG_PC)) {
            ops.push(IrInsn::without_output(
                IrOp::Branchind,
                SmallVec::from_slice(&[src]),
                addr,
            ));
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: off,
            });
        }

        let dst_val = match dst {
            Dst::Reg(r) => reg(r, size),
            Dst::Mem(ptr) => {
                let val = tmp(10, size);
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    val,
                    SmallVec::from_slice(&[ptr]),
                    addr,
                ));
                val
            }
        };

        match opcode {
            0x4 => self.write_dst(&mut ops, dst, src, addr), // MOV
            0x5 | 0x6 => {
                // ADD/ADDC. ADDC is conservatively represented as ADD; flag
                // refinement can recover the carry input later.
                let out = tmp(11, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    out,
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
                self.write_dst(&mut ops, dst, out, addr);
            }
            0x7 | 0x8 => {
                // SUBC/SUB: dst = dst - src. SUBC carry semantics are lowered
                // to the same core subtract in this first-pass lifter.
                let out = tmp(11, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntSub,
                    out,
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
                self.write_dst(&mut ops, dst, out, addr);
            }
            0x9 => {
                // CMP: compute comparison subtraction without writing dst.
                ops.push(IrInsn::with_output(
                    IrOp::IntSub,
                    tmp(11, size),
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
            }
            0xa => {
                // DADD is BCD-specific; keep the instruction visible.
                ops.push(IrInsn::without_output(
                    IrOp::Unimplemented,
                    SmallVec::new(),
                    addr,
                ));
            }
            0xb => {
                // BIT: test bits without writing dst.
                ops.push(IrInsn::with_output(
                    IrOp::IntAnd,
                    tmp(11, size),
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
            }
            0xc => {
                // BIC: dst &= !src.
                let inv = tmp(11, size);
                let out = tmp(12, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntXor,
                    inv,
                    SmallVec::from_slice(&[src, const_vn(all_ones(size), size)]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::IntAnd,
                    out,
                    SmallVec::from_slice(&[dst_val, inv]),
                    addr,
                ));
                self.write_dst(&mut ops, dst, out, addr);
            }
            0xd => {
                let out = tmp(11, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntOr,
                    out,
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
                self.write_dst(&mut ops, dst, out, addr);
            }
            0xe => {
                let out = tmp(11, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntXor,
                    out,
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
                self.write_dst(&mut ops, dst, out, addr);
            }
            0xf => {
                let out = tmp(11, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntAnd,
                    out,
                    SmallVec::from_slice(&[dst_val, src]),
                    addr,
                ));
                self.write_dst(&mut ops, dst, out, addr);
            }
            _ => ops.push(IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::new(),
                addr,
            )),
        }

        Ok(LiftedInsn {
            ir_ops: ops,
            len: off,
        })
    }

    fn lift_single(&self, bytes: &[u8], word: u16, addr: u64) -> Result<LiftedInsn, LiftError> {
        let op = ((word >> 7) & 0x7) as u8;
        let size = op_size(word);
        let as_bits = ((word >> 4) & 0x3) as u8;
        let r = (word & 0x0f) as u8;
        let mut off = WORD_LEN;
        let mut ops = Vec::new();

        if op == 6 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                len: WORD_LEN,
            });
        }

        let src = self.decode_src(bytes, &mut off, r, as_bits, size, addr, &mut ops)?;
        match op {
            0 => {
                // RRC: expose the right shift; carry update is left for flags.
                let out = tmp(8, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntRight,
                    out,
                    SmallVec::from_slice(&[src, const_vn(1, size)]),
                    addr,
                ));
                if as_bits == 0 {
                    ops.push(IrInsn::with_output(
                        IrOp::Copy,
                        reg(r, size),
                        SmallVec::from_slice(&[out]),
                        addr,
                    ));
                }
            }
            1 => {
                // SWPB swaps bytes of a word. Model as unimplemented rather
                // than hiding it behind a lossy expression.
                ops.push(IrInsn::without_output(
                    IrOp::Unimplemented,
                    SmallVec::new(),
                    addr,
                ));
            }
            2 => {
                let out = tmp(8, size);
                ops.push(IrInsn::with_output(
                    IrOp::IntSright,
                    out,
                    SmallVec::from_slice(&[src, const_vn(1, size)]),
                    addr,
                ));
                if as_bits == 0 {
                    ops.push(IrInsn::with_output(
                        IrOp::Copy,
                        reg(r, size),
                        SmallVec::from_slice(&[out]),
                        addr,
                    ));
                }
            }
            3 => {
                // SXT extends the low byte to a word destination.
                let out = tmp(8, 2);
                ops.push(IrInsn::with_output(
                    IrOp::IntSext,
                    out,
                    SmallVec::from_slice(&[reg(r, 1)]),
                    addr,
                ));
                if as_bits == 0 {
                    ops.push(IrInsn::with_output(
                        IrOp::Copy,
                        reg(r, 2),
                        SmallVec::from_slice(&[out]),
                        addr,
                    ));
                }
            }
            4 => self.lift_push(&mut ops, src, size, addr),
            5 => ops.push(IrInsn::without_output(
                IrOp::Call,
                SmallVec::from_slice(&[src]),
                addr,
            )),
            _ => ops.push(IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::new(),
                addr,
            )),
        }

        Ok(LiftedInsn {
            ir_ops: ops,
            len: off,
        })
    }

    fn decode_src(
        &self,
        bytes: &[u8],
        off: &mut usize,
        r: u8,
        as_bits: u8,
        size: u8,
        addr: u64,
        ops: &mut Vec<IrInsn>,
    ) -> Result<Varnode, LiftError> {
        // Constant generator encodings.
        if r == REG_CG {
            return Ok(match as_bits {
                0 => const_vn(0, size),
                1 => const_vn(1, size),
                2 => const_vn(2, size),
                3 => const_vn(all_ones(size), size),
                _ => unreachable!(),
            });
        }
        if r == REG_SR {
            match as_bits {
                2 => return Ok(const_vn(4, size)),
                3 => return Ok(const_vn(8, size)),
                _ => {}
            }
        }

        match as_bits {
            0 => Ok(reg(r, size)),
            1 => {
                let ext = decode_word(bytes, *off)?;
                *off += 2;
                let ptr = self.indexed_ptr(r, ext, addr, ops);
                let val = tmp(2, size);
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    val,
                    SmallVec::from_slice(&[ptr]),
                    addr,
                ));
                Ok(val)
            }
            2 => {
                // @Rn
                let ptr = reg(r, 2);
                let val = tmp(2, size);
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    val,
                    SmallVec::from_slice(&[ptr]),
                    addr,
                ));
                Ok(val)
            }
            3 => {
                if r == REG_PC {
                    // Immediate #imm.
                    let imm = decode_word(bytes, *off)?;
                    *off += 2;
                    Ok(const_vn(
                        if size == 1 {
                            (imm & 0xff) as u64
                        } else {
                            imm as u64
                        },
                        size,
                    ))
                } else {
                    // @Rn+; model the load and post-increment.
                    let ptr = reg(r, 2);
                    let val = tmp(2, size);
                    let inc = if r == REG_SP || size == 2 { 2 } else { 1 };
                    let next = tmp(3, 2);
                    ops.push(IrInsn::with_output(
                        IrOp::Load,
                        val,
                        SmallVec::from_slice(&[ptr]),
                        addr,
                    ));
                    ops.push(IrInsn::with_output(
                        IrOp::IntAdd,
                        next,
                        SmallVec::from_slice(&[ptr, const_vn(inc, 2)]),
                        addr,
                    ));
                    ops.push(IrInsn::with_output(
                        IrOp::Copy,
                        reg(r, 2),
                        SmallVec::from_slice(&[next]),
                        addr,
                    ));
                    Ok(val)
                }
            }
            _ => unreachable!(),
        }
    }

    fn decode_dst(
        &self,
        bytes: &[u8],
        off: &mut usize,
        r: u8,
        ad: u8,
        _size: u8,
        addr: u64,
        ops: &mut Vec<IrInsn>,
    ) -> Result<Dst, LiftError> {
        if ad == 0 {
            Ok(Dst::Reg(r))
        } else {
            let ext = decode_word(bytes, *off)?;
            *off += 2;
            Ok(Dst::Mem(self.indexed_ptr(r, ext, addr, ops)))
        }
    }

    fn indexed_ptr(&self, r: u8, ext: u16, addr: u64, ops: &mut Vec<IrInsn>) -> Varnode {
        if r == REG_PC {
            // Symbolic mode: X(PC) addresses relative to the following word.
            return ram_target((addr as i64 + 2 + sign_extend(ext, 16) as i64) as u64);
        }
        if r == REG_SR {
            // Absolute mode: &ADDR.
            return ram_target(ext as u64);
        }
        let ptr = tmp(1, 2);
        ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            ptr,
            SmallVec::from_slice(&[reg(r, 2), const_vn(ext as u64, 2)]),
            addr,
        ));
        ptr
    }

    fn write_dst(&self, ops: &mut Vec<IrInsn>, dst: Dst, value: Varnode, addr: u64) {
        match dst {
            Dst::Reg(r) => ops.push(IrInsn::with_output(
                IrOp::Copy,
                reg(r, value.size),
                SmallVec::from_slice(&[value]),
                addr,
            )),
            Dst::Mem(ptr) => ops.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[ptr, value]),
                addr,
            )),
        }
    }

    fn lift_push(&self, ops: &mut Vec<IrInsn>, src: Varnode, size: u8, addr: u64) {
        let sp = reg(REG_SP, 2);
        let next = tmp(4, 2);
        let dec = if size == 1 { 1 } else { 2 };
        ops.push(IrInsn::with_output(
            IrOp::IntSub,
            next,
            SmallVec::from_slice(&[sp, const_vn(dec, 2)]),
            addr,
        ));
        ops.push(IrInsn::with_output(
            IrOp::Copy,
            sp,
            SmallVec::from_slice(&[next]),
            addr,
        ));
        ops.push(IrInsn::without_output(
            IrOp::Store,
            SmallVec::from_slice(&[sp, src]),
            addr,
        ));
    }
}

impl Default for Msp430Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Msp430Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Msp430
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        self.lift_inner(bytes, addr)
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn encode(words: &[u16]) -> Vec<u8> {
        words.iter().flat_map(|w| w.to_le_bytes()).collect()
    }

    fn lift(words: &[u16], addr: u64) -> LiftedInsn {
        Msp430Lifter::new().lift_insn(&encode(words), addr).unwrap()
    }

    #[test]
    fn register_file_layout_and_arch() {
        let lifter = Msp430Lifter::new();
        assert_eq!(lifter.arch(), ArchId::Msp430);
        assert_eq!(lifter.register_file().registers[0].name, "r0");
        assert_eq!(lifter.register_file().registers[0].varnode, reg(0, 2));
        assert_eq!(lifter.register_file().registers[16].name, "PC");
        assert_eq!(lifter.register_file().registers[17].name, "SP");
    }

    #[test]
    fn mov_register_to_register() {
        // MOV r5, r6: opcode=4 src=5 As=0 Ad=0 dst=6.
        let lifted = lift(&[0x4506], 0x1000);
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].output, Some(reg(6, 2)));
        assert_eq!(lifted.ir_ops[0].inputs[0], reg(5, 2));
    }

    #[test]
    fn mov_immediate_to_register() {
        // MOV #0x1234, r10: source is @PC+ (As=3) with extension word.
        let lifted = lift(&[0x403a, 0x1234], 0x2000);
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].output, Some(reg(10, 2)));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0x1234, 2));
    }

    #[test]
    fn add_registers() {
        let lifted = lift(&[0x5506], 0x3000); // ADD r5, r6
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[1].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[1].output, Some(reg(6, 2)));
    }

    #[test]
    fn bic_constant_generator() {
        // BIC #1, r7 uses CG r3 As=1.
        let lifted = lift(&[0xc317], 0x3000);
        assert!(lifted.ir_ops.iter().any(|op| op.op == IrOp::IntXor));
        assert!(lifted.ir_ops.iter().any(|op| op.output == Some(reg(7, 2))));
    }

    #[test]
    fn jmp_and_jne_targets() {
        let jmp = lift(&[0x3c03], 0x1000); // JMP +3 -> 0x1008
        assert_eq!(jmp.ir_ops[0].op, IrOp::Branch);
        assert_eq!(jmp.ir_ops[0].inputs[0], ram_target(0x1008));

        let jne = lift(&[0x2001], 0x1000); // JNE +1 -> 0x1004
        assert_eq!(jne.ir_ops.len(), 3);
        assert_eq!(jne.ir_ops[2].op, IrOp::Cbranch);
        assert_eq!(jne.ir_ops[2].inputs[0], ram_target(0x1004));
    }

    #[test]
    fn call_and_ret() {
        let call = lift(&[0x12b0, 0x4400], 0x4000); // CALL #0x4400
        assert_eq!(call.len, 4);
        assert_eq!(call.ir_ops[0].op, IrOp::Call);
        assert_eq!(call.ir_ops[0].inputs[0], const_vn(0x4400, 2));

        let ret = lift(&[0x4130], 0x5000);
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn load_and_store_indexed() {
        // MOV 4(r5), r6.
        let load = lift(&[0x4516, 0x0004], 0x6000);
        assert_eq!(load.len, 4);
        assert!(load.ir_ops.iter().any(|op| op.op == IrOp::Load));
        assert!(load.ir_ops.iter().any(|op| op.output == Some(reg(6, 2))));

        // MOV r6, 8(r5).
        let store = lift(&[0x4685, 0x0008], 0x6000);
        assert_eq!(store.len, 4);
        assert!(store.ir_ops.iter().any(|op| op.op == IrOp::Store));
    }

    #[test]
    fn short_buffer_for_missing_extension_word() {
        let err = Msp430Lifter::new()
            .lift_insn(&encode(&[0x403a]), 0)
            .unwrap_err();
        assert!(matches!(err, LiftError::ShortBuffer));
    }
}
