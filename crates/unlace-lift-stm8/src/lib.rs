//! Stm8 → IR lifter (native decoder).

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 1;
const REG_COUNT: usize = 8;
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

pub struct Stm8Lifter {
    reg_file: RegisterFile,
}

impl Stm8Lifter {
    pub fn new() -> Self { Self { reg_file: build_register_file() } }
}
impl Default for Stm8Lifter { fn default() -> Self { Self::new() } }

impl Lifter for Stm8Lifter {
    fn arch(&self) -> ArchId { ArchId::Stm8 }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 1 {
            return Err(LiftError::ShortBuffer);
        }
        let ops = vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)];
        Ok(LiftedInsn { ir_ops: ops, len: 1 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_arch() { assert_eq!(Stm8Lifter::new().arch(), ArchId::Stm8); }

    #[test]
    fn test_register_file() {
        let l = Stm8Lifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "r0");
        assert!(rf.registers.len() > 1);
    }

    #[test]
    fn test_short_buffer() {
        assert!(Stm8Lifter::new().lift_insn(&[], 0).is_err());
    }

    #[test]
    fn test_decodes() {
        let l = Stm8Lifter::new();
        let r = l.lift_insn(&[0u8; 32], 0x1000).unwrap();
        assert_eq!(r.len, 1);
//! STM8 → IR lifter.
//!
//! Decodes a practical core subset of STMicroelectronics STM8 instructions and
//! lifts them to the unlace IR.  STM8 is an 8-bit MCU architecture with a 24-bit
//! program counter, 16-bit index registers, an 8-bit accumulator, and a
//! big-endian instruction stream for immediate/address operands.
//!
//! # Register file model
//!
//! - `A`: accumulator, 1 byte, register offset 0
//! - `X`: index register, 2 bytes, offset 1
//! - `Y`: index register, 2 bytes, offset 3
//! - `SP`: stack pointer, 2 bytes, offset 5
//! - `CC`: condition-code register, 1 byte, offset 7
//! - `PC`: program counter, 3 bytes, offset 8
//!
//! The lifter intentionally emits simple, canonical IR for decompiler recovery.
//! Unsupported opcodes are represented by `UNIMPLEMENTED` rather than failing so
//! callers can continue linear sweeps across partially-supported firmware.

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_A: u64 = 0;
const REG_X: u64 = 1;
const REG_Y: u64 = 3;
const REG_SP: u64 = 5;
const REG_CC: u64 = 7;
const REG_PC: u64 = 8;

const UNIQUE_BASE: u64 = 0x8000;
const RAM_SPACE_ID: u64 = 0;
const CC_Z_MASK: u8 = 0x02;

#[inline]
fn reg(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}

#[inline]
fn a() -> Varnode {
    reg(REG_A, 1)
}

#[inline]
fn x() -> Varnode {
    reg(REG_X, 2)
}

#[inline]
fn y() -> Varnode {
    reg(REG_Y, 2)
}

#[inline]
fn sp() -> Varnode {
    reg(REG_SP, 2)
}

#[inline]
fn cc() -> Varnode {
    reg(REG_CC, 1)
}

#[inline]
fn pc() -> Varnode {
    reg(REG_PC, 3)
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
fn ram_space() -> Varnode {
    Varnode::constant(RAM_SPACE_ID, 1)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 3)
}

#[inline]
fn read_u16_be(bytes: &[u8], offset: usize) -> Result<u16, LiftError> {
    if bytes.len() < offset + 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_be_bytes([bytes[offset], bytes[offset + 1]]))
}

#[inline]
fn read_u24_be(bytes: &[u8], offset: usize) -> Result<u32, LiftError> {
    if bytes.len() < offset + 3 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(((bytes[offset] as u32) << 16)
        | ((bytes[offset + 1] as u32) << 8)
        | bytes[offset + 2] as u32)
}

#[inline]
fn rel8_target(addr: u64, len: usize, disp: u8) -> u64 {
    (addr as i64 + len as i64 + (disp as i8 as i64)) as u64
}

/// STM8 architecture lifter.
pub struct Stm8Lifter {
    register_file: RegisterFile,
}

impl Stm8Lifter {
    /// Create a new STM8 lifter.
    pub fn new() -> Self {
        Self {
            register_file: RegisterFile {
                registers: vec![
                    RegisterDef {
                        name: "A",
                        varnode: a(),
                    },
                    RegisterDef {
                        name: "X",
                        varnode: x(),
                    },
                    RegisterDef {
                        name: "Y",
                        varnode: y(),
                    },
                    RegisterDef {
                        name: "SP",
                        varnode: sp(),
                    },
                    RegisterDef {
                        name: "CC",
                        varnode: cc(),
                    },
                    RegisterDef {
                        name: "PC",
                        varnode: pc(),
                    },
                ],
            },
        }
    }

    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }

        let opcode = bytes[0];
        trace!(addr = %format!("{addr:#x}"), opcode = %format!("{opcode:#04x}"), "decoding STM8 instruction");

        match opcode {
            // NOP
            0x9d => Ok(LiftedInsn {
                ir_ops: Vec::new(),
                len: 1,
            }),

            // LD A,#imm8
            0xa6 => {
                if bytes.len() < 2 {
                    return Err(LiftError::ShortBuffer);
                }
                Ok(LiftedInsn {
                    ir_ops: vec![IrInsn::with_output(
                        IrOp::Copy,
                        a(),
                        SmallVec::from_slice(&[const_vn(bytes[1] as u64, 1)]),
                        addr,
                    )],
                    len: 2,
                })
            }

            // LD X,#imm16 / LD Y,#imm16
            0xae | 0x90 if opcode == 0xae || bytes.get(1) == Some(&0xae) => {
                let (dst, imm_off, len) = if opcode == 0xae {
                    (x(), 1, 3)
                } else {
                    (y(), 2, 4)
                };
                let imm = read_u16_be(bytes, imm_off)?;
                Ok(LiftedInsn {
                    ir_ops: vec![IrInsn::with_output(
                        IrOp::Copy,
                        dst,
                        SmallVec::from_slice(&[const_vn(imm as u64, 2)]),
                        addr,
                    )],
                    len,
                })
            }

            // LD A,shortmem / LD shortmem,A
            0xb6 | 0xb7 => {
                if bytes.len() < 2 {
                    return Err(LiftError::ShortBuffer);
                }
                let ea = const_vn(bytes[1] as u64, 2);
                if opcode == 0xb6 {
                    Ok(LiftedInsn {
                        ir_ops: vec![IrInsn::with_output(
                            IrOp::Load,
                            a(),
                            SmallVec::from_slice(&[ram_space(), ea]),
                            addr,
                        )],
                        len: 2,
                    })
                } else {
                    Ok(LiftedInsn {
                        ir_ops: vec![IrInsn::without_output(
                            IrOp::Store,
                            SmallVec::from_slice(&[ram_space(), ea, a()]),
                            addr,
                        )],
                        len: 2,
                    })
                }
            }

            // LD A,longmem / LD longmem,A
            0xc6 | 0xc7 => {
                let ea = read_u16_be(bytes, 1)?;
                if opcode == 0xc6 {
                    Ok(LiftedInsn {
                        ir_ops: vec![IrInsn::with_output(
                            IrOp::Load,
                            a(),
                            SmallVec::from_slice(&[ram_space(), const_vn(ea as u64, 2)]),
                            addr,
                        )],
                        len: 3,
                    })
                } else {
                    Ok(LiftedInsn {
                        ir_ops: vec![IrInsn::without_output(
                            IrOp::Store,
                            SmallVec::from_slice(&[ram_space(), const_vn(ea as u64, 2), a()]),
                            addr,
                        )],
                        len: 3,
                    })
                }
            }

            // LD A,(X) / LD A,(Y) and LD (X),A / LD (Y),A.
            0xf6 | 0xe6 | 0xf7 | 0xe7 => {
                let idx = if opcode == 0xe6 || opcode == 0xe7 {
                    y()
                } else {
                    x()
                };
                let is_store = opcode == 0xf7 || opcode == 0xe7;
                Ok(if is_store {
                    LiftedInsn {
                        ir_ops: vec![IrInsn::without_output(
                            IrOp::Store,
                            SmallVec::from_slice(&[ram_space(), idx, a()]),
                            addr,
                        )],
                        len: 1,
                    }
                } else {
                    LiftedInsn {
                        ir_ops: vec![IrInsn::with_output(
                            IrOp::Load,
                            a(),
                            SmallVec::from_slice(&[ram_space(), idx]),
                            addr,
                        )],
                        len: 1,
                    }
                })
            }

            // Arithmetic and logical immediate to A.
            0xab | 0xa0 | 0xa4 | 0xaa | 0xa8 => {
                if bytes.len() < 2 {
                    return Err(LiftError::ShortBuffer);
                }
                let op = match opcode {
                    0xab => IrOp::IntAdd,
                    0xa0 => IrOp::IntSub,
                    0xa4 => IrOp::IntAnd,
                    0xaa => IrOp::IntOr,
                    0xa8 => IrOp::IntXor,
                    _ => unreachable!(),
                };
                Ok(LiftedInsn {
                    ir_ops: vec![IrInsn::with_output(
                        op,
                        a(),
                        SmallVec::from_slice(&[a(), const_vn(bytes[1] as u64, 1)]),
                        addr,
                    )],
                    len: 2,
                })
            }

            // ADD/SUB/AND/OR/XOR A,shortmem.
            0xbb | 0xb0 | 0xb4 | 0xba | 0xb8 => {
                if bytes.len() < 2 {
                    return Err(LiftError::ShortBuffer);
                }
                let loaded = tmp(0, 1);
                let ea = const_vn(bytes[1] as u64, 2);
                let op = match opcode {
                    0xbb => IrOp::IntAdd,
                    0xb0 => IrOp::IntSub,
                    0xb4 => IrOp::IntAnd,
                    0xba => IrOp::IntOr,
                    0xb8 => IrOp::IntXor,
                    _ => unreachable!(),
                };
                Ok(LiftedInsn {
                    ir_ops: vec![
                        IrInsn::with_output(
                            IrOp::Load,
                            loaded,
                            SmallVec::from_slice(&[ram_space(), ea]),
                            addr,
                        ),
                        IrInsn::with_output(op, a(), SmallVec::from_slice(&[a(), loaded]), addr),
                    ],
                    len: 2,
                })
            }

            // INC/DEC/CLR/NEG register encodings used by A/X/Y.
            0x4c | 0x5c | 0x90 | 0x4a | 0x5a | 0x40 | 0x5f | 0x4f | 0x50 => {
                self.lift_register_unary(bytes, addr)
            }

            // JP short/long and CALL long.
            0xcc | 0xcd | 0xbc => {
                let is_call = opcode == 0xcd;
                let target = if opcode == 0xbc {
                    bytes.get(1).copied().ok_or(LiftError::ShortBuffer)? as u64
                } else {
                    read_u16_be(bytes, 1)? as u64
                };
                let len = if opcode == 0xbc { 2 } else { 3 };
                Ok(LiftedInsn {
                    ir_ops: vec![IrInsn::without_output(
                        if is_call { IrOp::Call } else { IrOp::Branch },
                        SmallVec::from_slice(&[ram_target(target)]),
                        addr,
                    )],
                    len,
                })
            }

            // CALLF/JPF far 24-bit targets.
            0x8d | 0xac => {
                let target = read_u24_be(bytes, 1)? as u64;
                Ok(LiftedInsn {
                    ir_ops: vec![IrInsn::without_output(
                        if opcode == 0x8d {
                            IrOp::Call
                        } else {
                            IrOp::Branch
                        },
                        SmallVec::from_slice(&[ram_target(target)]),
                        addr,
                    )],
                    len: 4,
                })
            }

            // JRA/JRT/JRF/JRcc rel8.  JRF never branches; keep as no-op.
            0x20 | 0x21 => self.lift_jr_unconditional(bytes, addr),
            0x27 | 0x26 => self.lift_jr_z(bytes, addr, opcode == 0x27),
            0x25 | 0x24 | 0x22 | 0x23 | 0x2f => self.lift_jr_cc(bytes, addr, opcode),

            // RET/IRET/RETF
            0x81 | 0x80 | 0x87 => Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                len: 1,
            }),

            // PUSH/POP A/X/Y/CC.  0x87 is RETF in the base opcode map, so it
            // intentionally is not treated as POP Y here.
            0x88 | 0x89 | 0x84 | 0x85 | 0x8a | 0x8b | 0x86 => self.lift_stack(bytes, addr),

            _ => Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Unimplemented,
                    SmallVec::new(),
                    addr,
                )],
                len: 1,
            }),
        }
    }

    fn lift_register_unary(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let opcode = bytes[0];
        let (effective_opcode, len) = if opcode == 0x90 {
            let Some(next) = bytes.get(1).copied() else {
                return Err(LiftError::ShortBuffer);
            };
            (next, 2)
        } else {
            (opcode, 1)
        };

        let (dst, op, inputs): (Varnode, IrOp, SmallVec<[Varnode; 3]>) = match effective_opcode {
            0x4c => (
                a(),
                IrOp::IntAdd,
                SmallVec::from_slice(&[a(), const_vn(1, 1)]),
            ),
            0x5c => (
                if len == 2 { y() } else { x() },
                IrOp::IntAdd,
                SmallVec::from_slice(&[if len == 2 { y() } else { x() }, const_vn(1, 2)]),
            ),
            0x4a => (
                a(),
                IrOp::IntSub,
                SmallVec::from_slice(&[a(), const_vn(1, 1)]),
            ),
            0x5a => (
                if len == 2 { y() } else { x() },
                IrOp::IntSub,
                SmallVec::from_slice(&[if len == 2 { y() } else { x() }, const_vn(1, 2)]),
            ),
            0x40 => (a(), IrOp::Int2comp, SmallVec::from_slice(&[a()])),
            0x50 => (
                if len == 2 { y() } else { x() },
                IrOp::Int2comp,
                SmallVec::from_slice(&[if len == 2 { y() } else { x() }]),
            ),
            0x4f => (a(), IrOp::Copy, SmallVec::from_slice(&[const_vn(0, 1)])),
            0x5f => (
                if len == 2 { y() } else { x() },
                IrOp::Copy,
                SmallVec::from_slice(&[const_vn(0, 2)]),
            ),
            _ => {
                return Ok(LiftedInsn {
                    ir_ops: vec![IrInsn::without_output(
                        IrOp::Unimplemented,
                        SmallVec::new(),
                        addr,
                    )],
                    len,
                });
            }
        };

        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::with_output(op, dst, inputs, addr)],
            len,
        })
    }

    fn lift_jr_unconditional(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        if bytes[0] == 0x21 {
            return Ok(LiftedInsn {
                ir_ops: Vec::new(),
                len: 2,
            });
        }
        let target = rel8_target(addr, 2, bytes[1]);
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Branch,
                SmallVec::from_slice(&[ram_target(target)]),
                addr,
            )],
            len: 2,
        })
    }

    fn lift_jr_z(
        &self,
        bytes: &[u8],
        addr: u64,
        branch_if_zero: bool,
    ) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let z_bit = tmp(0, 1);
        let cond = tmp(1, 1);
        let cmp_op = if branch_if_zero {
            IrOp::IntNotequal
        } else {
            IrOp::IntEqual
        };
        let target = rel8_target(addr, 2, bytes[1]);
        Ok(LiftedInsn {
            ir_ops: vec![
                IrInsn::with_output(
                    IrOp::IntAnd,
                    z_bit,
                    SmallVec::from_slice(&[cc(), const_vn(CC_Z_MASK as u64, 1)]),
                    addr,
                ),
                IrInsn::with_output(
                    cmp_op,
                    cond,
                    SmallVec::from_slice(&[z_bit, const_vn(0, 1)]),
                    addr,
                ),
                IrInsn::without_output(
                    IrOp::Cbranch,
                    SmallVec::from_slice(&[ram_target(target), cond]),
                    addr,
                ),
            ],
            len: 2,
        })
    }

    fn lift_jr_cc(&self, bytes: &[u8], addr: u64, opcode: u8) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        // Conservative condition modelling: isolate a representative condition
        // bit, optionally compare it against zero, then CBRANCH.  This preserves
        // the CFG edge even while exact STM8 flag semantics are refined later.
        let mask = match opcode {
            0x24 | 0x25 => 0x01, // carry clear/set
            0x22 | 0x23 => 0x80, // interrupt mask clear/set
            0x2f => 0x04,        // signed less/equal family approximation
            _ => 0x01,
        };
        let positive = matches!(opcode, 0x25 | 0x23 | 0x2f);
        let bit = tmp(0, 1);
        let cond = tmp(1, 1);
        let target = rel8_target(addr, 2, bytes[1]);
        Ok(LiftedInsn {
            ir_ops: vec![
                IrInsn::with_output(
                    IrOp::IntAnd,
                    bit,
                    SmallVec::from_slice(&[cc(), const_vn(mask, 1)]),
                    addr,
                ),
                IrInsn::with_output(
                    if positive {
                        IrOp::IntNotequal
                    } else {
                        IrOp::IntEqual
                    },
                    cond,
                    SmallVec::from_slice(&[bit, const_vn(0, 1)]),
                    addr,
                ),
                IrInsn::without_output(
                    IrOp::Cbranch,
                    SmallVec::from_slice(&[ram_target(target), cond]),
                    addr,
                ),
            ],
            len: 2,
        })
    }

    fn lift_stack(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let opcode = bytes[0];
        let (value, is_push) = match opcode {
            0x88 => (a(), true),
            0x89 => (a(), false),
            0x84 => (cc(), true),
            0x85 => (cc(), false),
            0x8a => (x(), true),
            0x8b => (x(), false),
            0x86 => (y(), true),
            _ => unreachable!(),
        };
        let new_sp = tmp(0, 2);
        let one = const_vn(value.size as u64, 2);
        let mut ops = Vec::new();
        if is_push {
            ops.push(IrInsn::with_output(
                IrOp::IntSub,
                new_sp,
                SmallVec::from_slice(&[sp(), one]),
                addr,
            ));
            ops.push(IrInsn::with_output(
                IrOp::Copy,
                sp(),
                SmallVec::from_slice(&[new_sp]),
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[ram_space(), sp(), value]),
                addr,
            ));
        } else {
            ops.push(IrInsn::with_output(
                IrOp::Load,
                value,
                SmallVec::from_slice(&[ram_space(), sp()]),
                addr,
            ));
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                new_sp,
                SmallVec::from_slice(&[sp(), one]),
                addr,
            ));
            ops.push(IrInsn::with_output(
                IrOp::Copy,
                sp(),
                SmallVec::from_slice(&[new_sp]),
                addr,
            ));
        }
        Ok(LiftedInsn {
            ir_ops: ops,
            len: 1,
        })
    }
}

impl Default for Stm8Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Stm8Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Stm8
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

    #[test]
    fn register_file_has_core_registers() {
        let lifter = Stm8Lifter::new();
        assert_eq!(lifter.arch(), ArchId::Stm8);
        assert_eq!(lifter.register_file().registers.len(), 6);
        assert_eq!(lifter.register_file().registers[0].name, "A");
        assert_eq!(lifter.register_file().registers[5].name, "PC");
    }

    #[test]
    fn lifts_nop_and_immediates() {
        let lifter = Stm8Lifter::new();
        let nop = lifter.lift_insn(&[0x9d], 0x8000).unwrap();
        assert_eq!(nop.len, 1);
        assert!(nop.ir_ops.is_empty());

        let ld_a = lifter.lift_insn(&[0xa6, 0x42], 0x8000).unwrap();
        assert_eq!(ld_a.len, 2);
        assert_eq!(ld_a.ir_ops[0].op, IrOp::Copy);
        assert_eq!(ld_a.ir_ops[0].output, Some(a()));
        assert_eq!(ld_a.ir_ops[0].inputs[0], const_vn(0x42, 1));

        let ld_x = lifter.lift_insn(&[0xae, 0x12, 0x34], 0x8000).unwrap();
        assert_eq!(ld_x.len, 3);
        assert_eq!(ld_x.ir_ops[0].output, Some(x()));
        assert_eq!(ld_x.ir_ops[0].inputs[0], const_vn(0x1234, 2));
    }

    #[test]
    fn lifts_memory_load_store() {
        let lifter = Stm8Lifter::new();
        let load = lifter.lift_insn(&[0xb6, 0x80], 0x1000).unwrap();
        assert_eq!(load.ir_ops[0].op, IrOp::Load);
        assert_eq!(load.ir_ops[0].output, Some(a()));
        assert_eq!(
            load.ir_ops[0].inputs.as_slice(),
            &[ram_space(), const_vn(0x80, 2)]
        );

        let store = lifter.lift_insn(&[0xc7, 0x12, 0x34], 0x1000).unwrap();
        assert_eq!(store.len, 3);
        assert_eq!(store.ir_ops[0].op, IrOp::Store);
        assert_eq!(
            store.ir_ops[0].inputs.as_slice(),
            &[ram_space(), const_vn(0x1234, 2), a()]
        );
    }

    #[test]
    fn lifts_alu_immediate_and_shortmem() {
        let lifter = Stm8Lifter::new();
        let add = lifter.lift_insn(&[0xab, 0x10], 0x1000).unwrap();
        assert_eq!(add.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(add.ir_ops[0].inputs.as_slice(), &[a(), const_vn(0x10, 1)]);

        let xor = lifter.lift_insn(&[0xb8, 0x20], 0x1000).unwrap();
        assert_eq!(xor.ir_ops.len(), 2);
        assert_eq!(xor.ir_ops[0].op, IrOp::Load);
        assert_eq!(xor.ir_ops[1].op, IrOp::IntXor);
    }

    #[test]
    fn lifts_branches_calls_and_returns() {
        let lifter = Stm8Lifter::new();
        let jra = lifter.lift_insn(&[0x20, 0xfe], 0x1000).unwrap();
        assert_eq!(jra.len, 2);
        assert_eq!(jra.ir_ops[0].op, IrOp::Branch);
        assert_eq!(jra.ir_ops[0].inputs[0], ram_target(0x1000));

        let jreq = lifter.lift_insn(&[0x27, 0x04], 0x1000).unwrap();
        assert_eq!(jreq.ir_ops[2].op, IrOp::Cbranch);
        assert_eq!(jreq.ir_ops[2].inputs[0], ram_target(0x1006));

        let callf = lifter.lift_insn(&[0x8d, 0x01, 0x23, 0x45], 0x1000).unwrap();
        assert_eq!(callf.len, 4);
        assert_eq!(callf.ir_ops[0].op, IrOp::Call);
        assert_eq!(callf.ir_ops[0].inputs[0], ram_target(0x012345));

        let ret = lifter.lift_insn(&[0x81], 0x1000).unwrap();
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn lifts_stack_and_unimplemented() {
        let lifter = Stm8Lifter::new();
        let push = lifter.lift_insn(&[0x88], 0x1000).unwrap();
        assert_eq!(push.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(push.ir_ops[2].op, IrOp::Store);

        let unknown = lifter.lift_insn(&[0x02], 0x1000).unwrap();
        assert_eq!(unknown.len, 1);
        assert_eq!(unknown.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn short_buffers_are_reported() {
        let lifter = Stm8Lifter::new();
        assert!(matches!(
            lifter.lift_insn(&[], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            lifter.lift_insn(&[0xa6], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            lifter.lift_insn(&[0xcd, 0x12], 0),
//! STM8 → IR lifter.
//!
//! This is a compact STM8/STM8S lifter intended to cover the common code
//! generation core used by SDCC/Cosmic/IAR: accumulator and index register
//! transfers, byte/word ALU operations, direct and indexed memory accesses,
//! short/long relative and absolute control-flow, calls, stack operations, and
//! the STM8 condition-code branches. Unsupported encodings produce a stable
//! `UNIMPLEMENTED` IR instruction instead of aborting whole-function lifting.
//!
//! # Register file model
//!
//! - `A`: 8-bit accumulator at register offset 0
//! - `X`, `Y`: 16-bit index registers at offsets 1 and 3
//! - `SP`, `PC`: 16-bit stack/program counters at offsets 5 and 7
//! - `CC`: 8-bit condition-code register at offset 9

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_A: u64 = 0;
const REG_X: u64 = 1;
const REG_Y: u64 = 3;
const REG_SP: u64 = 5;
const REG_PC: u64 = 7;
const REG_CC: u64 = 9;

const UNIQUE_BASE: u64 = 0x8000;

// STM8 CC bit positions.
const CC_C: u64 = 0;
const CC_Z: u64 = 1;
const CC_N: u64 = 2;
const CC_I0: u64 = 3;
const CC_H: u64 = 4;
const CC_V: u64 = 7;

#[inline]
fn reg(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}

#[inline]
fn a() -> Varnode {
    reg(REG_A, 1)
}

#[inline]
fn x() -> Varnode {
    reg(REG_X, 2)
}

#[inline]
fn y() -> Varnode {
    reg(REG_Y, 2)
}

#[inline]
fn sp() -> Varnode {
    reg(REG_SP, 2)
}

#[inline]
fn cc() -> Varnode {
    reg(REG_CC, 1)
}

#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, size)
}

#[inline]
fn ram(addr: u64, size: u8) -> Varnode {
    Varnode::ram(addr, size)
}

#[inline]
fn branch_target(addr: u64) -> Varnode {
    ram(addr, 2)
}

#[inline]
fn read_u8(bytes: &[u8], idx: usize) -> Result<u8, LiftError> {
    bytes.get(idx).copied().ok_or(LiftError::ShortBuffer)
}

#[inline]
fn read_u16_be(bytes: &[u8], idx: usize) -> Result<u16, LiftError> {
    if bytes.len() < idx + 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_be_bytes([bytes[idx], bytes[idx + 1]]))
}

#[inline]
fn rel8_target(addr: u64, len: u8, off: u8) -> u64 {
    (addr as i64 + len as i64 + (off as i8 as i64)) as u64
}

fn finish(ir_ops: Vec<IrInsn>, len: u8) -> Result<LiftedInsn, LiftError> {
    Ok(LiftedInsn {
        ir_ops,
        len: len as usize,
    })
}

fn unimplemented(addr: u64, len: u8) -> Result<LiftedInsn, LiftError> {
    finish(
        vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::new(),
            addr,
        )],
        len,
    )
}

fn copy(dst: Varnode, src: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::Copy, dst, SmallVec::from_slice(&[src]), addr)
}

fn load(dst: Varnode, addr_vn: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::Load, dst, SmallVec::from_slice(&[addr_vn]), addr)
}

fn store(addr_vn: Varnode, src: Varnode, addr: u64) -> IrInsn {
    IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[addr_vn, src]), addr)
}

fn binary(op: IrOp, dst: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(op, dst, SmallVec::from_slice(&[lhs, rhs]), addr)
}

fn bit_condition(bit: u64, invert: bool, addr: u64) -> (Vec<IrInsn>, Varnode) {
    let shifted = tmp(0, 1);
    let bit_vn = tmp(1, 1);
    let mut ops = vec![
        binary(IrOp::IntRight, shifted, cc(), const_vn(bit, 1), addr),
        binary(IrOp::IntAnd, bit_vn, shifted, const_vn(1, 1), addr),
    ];
    if invert {
        let inv = tmp(2, 1);
        ops.push(IrInsn::with_output(
            IrOp::BoolNegate,
            inv,
            SmallVec::from_slice(&[bit_vn]),
            addr,
        ));
        (ops, inv)
    } else {
        (ops, bit_vn)
    }
}

fn push_value(src: Varnode, size: u8, addr: u64) -> Vec<IrInsn> {
    let new_sp = tmp(0, 2);
    vec![
        binary(IrOp::IntSub, new_sp, sp(), const_vn(size as u64, 2), addr),
        copy(sp(), new_sp, addr),
        store(sp(), src, addr),
    ]
}

fn pop_value(dst: Varnode, size: u8, addr: u64) -> Vec<IrInsn> {
    let new_sp = tmp(0, 2);
    vec![
        load(dst, sp(), addr),
        binary(IrOp::IntAdd, new_sp, sp(), const_vn(size as u64, 2), addr),
        copy(sp(), new_sp, addr),
    ]
}

/// STM8 architecture lifter.
pub struct Stm8Lifter {
    register_file: RegisterFile,
}

impl Stm8Lifter {
    /// Create a new STM8 lifter.
    pub fn new() -> Self {
        let registers = vec![
            RegisterDef {
                name: "A",
                varnode: a(),
            },
            RegisterDef {
                name: "X",
                varnode: x(),
            },
            RegisterDef {
                name: "Y",
                varnode: y(),
            },
            RegisterDef {
                name: "SP",
                varnode: sp(),
            },
            RegisterDef {
                name: "PC",
                varnode: reg(REG_PC, 2),
            },
            RegisterDef {
                name: "CC",
                varnode: cc(),
            },
        ];
        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_prefixed(&self, bytes: &[u8], addr: u64, prefix: u8) -> Result<LiftedInsn, LiftError> {
        let op = read_u8(bytes, 1)?;
        trace!(addr = %format!("{addr:#x}"), prefix = %format!("{prefix:#04x}"), opcode = %format!("{op:#04x}"), "decoding prefixed STM8 instruction");

        match (prefix, op) {
            // LDW Y,#imm16 and LDW Y,long/dir mirror the X encodings under the 0x90 prebyte.
            (0x90, 0xAE) => finish(
                vec![copy(y(), const_vn(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x90, 0xCE) => finish(
                vec![load(y(), ram(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x90, 0xDE) => finish(
                vec![load(y(), ram(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x90, 0xCF) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 2), y(), addr)],
                4,
            ),
            (0x90, 0xDF) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 2), y(), addr)],
                4,
            ),
            (0x90, 0x5C) => finish(
                vec![binary(IrOp::IntAdd, y(), y(), const_vn(1, 2), addr)],
                2,
            ),
            (0x90, 0x5A) => finish(
                vec![binary(IrOp::IntSub, y(), y(), const_vn(1, 2), addr)],
                2,
            ),
            (0x90, 0x5F) => finish(vec![copy(y(), const_vn(0, 2), addr)], 2),
            (0x90, 0x89) => finish(push_value(y(), 2, addr), 2),
            (0x90, 0x85) => finish(pop_value(y(), 2, addr), 2),

            // Long relative control flow (0x90 prebyte family).
            (0x90, 0xCC) => finish(
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 2)? as u64)]),
                    addr,
                )],
                4,
            ),
            (0x90, 0xCD) => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 2)? as u64)]),
                    addr,
                )],
                4,
            ),

            // 0x92 uses a 16-bit memory address in opcodes that are direct under the base map.
            (0x92, 0xC6) => finish(
                vec![load(a(), ram(read_u16_be(bytes, 2)? as u64, 1), addr)],
                4,
            ),
            (0x92, 0xC7) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 1), a(), addr)],
                4,
            ),
            (0x92, 0xCE) => finish(
                vec![load(x(), ram(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x92, 0xCF) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 2), x(), addr)],
                4,
            ),

            _ => unimplemented(addr, 2),
        }
    }

    fn lift_jrcc(&self, opcode: u8, off: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        let target = rel8_target(addr, 2, off);
        // STM8 short conditional branches occupy 0x20..0x2f. The even opcode is
        // the inverted form of the odd opcode for the same flag in ST docs.
        let (bit, invert) = match opcode {
            0x20 => (CC_C, true), // JRA is handled before this; keep as JRNC alias if reached.
            0x21 => (CC_C, false), // JRC
            0x26 => (CC_Z, true), // JRNE
            0x27 => (CC_Z, false), // JREQ
            0x28 => (CC_V, true), // JRNV
            0x29 => (CC_V, false), // JRV
            0x2A => (CC_N, true), // JRPL
            0x2B => (CC_N, false), // JRMI
            0x2C => (CC_I0, true),
            0x2D => (CC_I0, false),
            0x2E => (CC_H, true),
            0x2F => (CC_H, false),
            _ => return unimplemented(addr, 2),
        };
        let (mut ops, cond) = bit_condition(bit, invert, addr);
        ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            SmallVec::from_slice(&[branch_target(target), cond]),
            addr,
        ));
        finish(ops, 2)
    }

    fn lift_alu_a_imm(&self, op: IrOp, imm: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        finish(vec![binary(op, a(), a(), const_vn(imm as u64, 1), addr)], 2)
    }

    fn lift_alu_a_direct(
        &self,
        op: IrOp,
        bytes: &[u8],
        addr: u64,
    ) -> Result<LiftedInsn, LiftError> {
        let src = tmp(0, 1);
        let direct = read_u8(bytes, 1)? as u64;
        finish(
            vec![
                load(src, ram(direct, 1), addr),
                binary(op, a(), a(), src, addr),
            ],
            2,
        )
    }

    fn lift_alu_a_long(&self, op: IrOp, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let src = tmp(0, 1);
        let long = read_u16_be(bytes, 1)? as u64;
        finish(
            vec![
                load(src, ram(long, 1), addr),
                binary(op, a(), a(), src, addr),
            ],
            3,
        )
    }
}

impl Default for Stm8Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Stm8Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Stm8
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let op = read_u8(bytes, 0)?;
        trace!(addr = %format!("{addr:#x}"), opcode = %format!("{op:#04x}"), "decoding STM8 instruction");

        if matches!(op, 0x90 | 0x91 | 0x92 | 0x72) {
            return self.lift_prefixed(bytes, addr, op);
        }

        match op {
            0x00 | 0x9D => finish(Vec::new(), 1), // NEG (0x00 legacy no-op in many tables) / NOP
            0x81 => finish(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            ),
            0x82 => finish(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            ),
            0x83 => finish(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            ),
            0x8D => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(rel8_target(
                        addr,
                        2,
                        read_u8(bytes, 1)?,
                    ))]),
                    addr,
                )],
                2,
            ),
            0xAD => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(rel8_target(
                        addr,
                        2,
                        read_u8(bytes, 1)?,
                    ))]),
                    addr,
                )],
                2,
            ),
            0xBC => finish(
                vec![IrInsn::without_output(
                    IrOp::Branchind,
                    SmallVec::from_slice(&[x()]),
                    addr,
                )],
                1,
            ),
            0x20 => finish(
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[branch_target(rel8_target(
                        addr,
                        2,
                        read_u8(bytes, 1)?,
                    ))]),
                    addr,
                )],
                2,
            ),
            0x21 | 0x26..=0x2F => self.lift_jrcc(op, read_u8(bytes, 1)?, addr),
            0xCC => finish(
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 1)? as u64)]),
                    addr,
                )],
                3,
            ),
            0xCD => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 1)? as u64)]),
                    addr,
                )],
                3,
            ),

            // Loads/stores and transfers.
            0xA6 => finish(
                vec![copy(a(), const_vn(read_u8(bytes, 1)? as u64, 1), addr)],
                2,
            ),
            0xB6 => finish(vec![load(a(), ram(read_u8(bytes, 1)? as u64, 1), addr)], 2),
            0xC6 => finish(
                vec![load(a(), ram(read_u16_be(bytes, 1)? as u64, 1), addr)],
                3,
            ),
            0xF6 => finish(vec![load(a(), x(), addr)], 1),
            0xE6 => {
                let ea = tmp(0, 2);
                finish(
                    vec![
                        binary(
                            IrOp::IntAdd,
                            ea,
                            x(),
                            const_vn(read_u8(bytes, 1)? as u64, 2),
                            addr,
                        ),
                        load(a(), ea, addr),
                    ],
                    2,
                )
            }
            0xC7 => finish(
                vec![store(ram(read_u16_be(bytes, 1)? as u64, 1), a(), addr)],
                3,
            ),
            0xB7 => finish(vec![store(ram(read_u8(bytes, 1)? as u64, 1), a(), addr)], 2),
            0xF7 => finish(vec![store(x(), a(), addr)], 1),
            0xE7 => {
                let ea = tmp(0, 2);
                finish(
                    vec![
                        binary(
                            IrOp::IntAdd,
                            ea,
                            x(),
                            const_vn(read_u8(bytes, 1)? as u64, 2),
                            addr,
                        ),
                        store(ea, a(), addr),
                    ],
                    2,
                )
            }
            0x97 => finish(
                vec![
                    copy(x(), const_vn(0, 2), addr),
                    IrInsn::with_output(IrOp::IntZext, x(), SmallVec::from_slice(&[a()]), addr),
                ],
                1,
            ), // LD XL,A approximation
            0x9F => finish(vec![copy(a(), x(), addr)], 1), // LD A,XL approximation via truncating varnode consumers
            0xAE => finish(
                vec![copy(x(), const_vn(read_u16_be(bytes, 1)? as u64, 2), addr)],
                3,
            ),
            0xBE => finish(vec![load(x(), ram(read_u8(bytes, 1)? as u64, 2), addr)], 2),
            0xCE => finish(
                vec![load(x(), ram(read_u16_be(bytes, 1)? as u64, 2), addr)],
                3,
            ),
            0xBF => finish(vec![store(ram(read_u8(bytes, 1)? as u64, 2), x(), addr)], 2),
            0xCF => finish(
                vec![store(ram(read_u16_be(bytes, 1)? as u64, 2), x(), addr)],
                3,
            ),

            // Stack and register manipulation.
            0x88 => finish(push_value(a(), 1, addr), 1),
            0x84 => finish(pop_value(a(), 1, addr), 1),
            0x89 => finish(push_value(x(), 2, addr), 1),
            0x85 => finish(pop_value(x(), 2, addr), 1),
            0x8A => finish(push_value(cc(), 1, addr), 1),
            0x86 => finish(pop_value(cc(), 1, addr), 1),
            0x5C => finish(
                vec![binary(IrOp::IntAdd, x(), x(), const_vn(1, 2), addr)],
                1,
            ),
            0x5A => finish(
                vec![binary(IrOp::IntSub, x(), x(), const_vn(1, 2), addr)],
                1,
            ),
            0x4C => finish(
                vec![binary(IrOp::IntAdd, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x4A => finish(
                vec![binary(IrOp::IntSub, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x5F => finish(vec![copy(x(), const_vn(0, 2), addr)], 1),
            0x4F => finish(vec![copy(a(), const_vn(0, 1), addr)], 1),
            0x43 => finish(
                vec![IrInsn::with_output(
                    IrOp::Int2comp,
                    a(),
                    SmallVec::from_slice(&[a()]),
                    addr,
                )],
                1,
            ),
            0x40 => finish(
                vec![IrInsn::with_output(
                    IrOp::IntNegate,
                    a(),
                    SmallVec::from_slice(&[a()]),
                    addr,
                )],
                1,
            ),

            // Immediate ALU on A.
            0xAB => self.lift_alu_a_imm(IrOp::IntAdd, read_u8(bytes, 1)?, addr),
            0xA0 => self.lift_alu_a_imm(IrOp::IntSub, read_u8(bytes, 1)?, addr),
            0xA4 => self.lift_alu_a_imm(IrOp::IntAnd, read_u8(bytes, 1)?, addr),
            0xAA => self.lift_alu_a_imm(IrOp::IntOr, read_u8(bytes, 1)?, addr),
            0xA8 => self.lift_alu_a_imm(IrOp::IntXor, read_u8(bytes, 1)?, addr),
            0xA1 => finish(
                vec![binary(
                    IrOp::IntEqual,
                    tmp(0, 1),
                    a(),
                    const_vn(read_u8(bytes, 1)? as u64, 1),
                    addr,
                )],
                2,
            ),

            // Direct and long-memory ALU on A.
            0xBB => self.lift_alu_a_direct(IrOp::IntAdd, bytes, addr),
            0xB0 => self.lift_alu_a_direct(IrOp::IntSub, bytes, addr),
            0xB4 => self.lift_alu_a_direct(IrOp::IntAnd, bytes, addr),
            0xBA => self.lift_alu_a_direct(IrOp::IntOr, bytes, addr),
            0xB8 => self.lift_alu_a_direct(IrOp::IntXor, bytes, addr),
            0xCB => self.lift_alu_a_long(IrOp::IntAdd, bytes, addr),
            0xC0 => self.lift_alu_a_long(IrOp::IntSub, bytes, addr),
            0xC4 => self.lift_alu_a_long(IrOp::IntAnd, bytes, addr),
            0xCA => self.lift_alu_a_long(IrOp::IntOr, bytes, addr),
            0xC8 => self.lift_alu_a_long(IrOp::IntXor, bytes, addr),

            // Shifts/rotates represented by their data effect on A.
            0x48 => finish(
                vec![binary(IrOp::IntLeft, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x44 | 0x46 => finish(
                vec![binary(IrOp::IntRight, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x47 => finish(
                vec![binary(IrOp::IntSright, a(), a(), const_vn(1, 1), addr)],
                1,
            ),

            _ => unimplemented(addr, 1),
        }
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn register_file_has_core_stm8_registers() {
        let lifter = Stm8Lifter::new();
        assert_eq!(lifter.arch(), ArchId::Stm8);
        assert_eq!(lifter.register_file().registers.len(), 6);
        assert_eq!(lifter.register_file().registers[0].name, "A");
    }

    #[test]
    fn lifts_ld_a_immediate() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0xA6, 0x42], 0x1000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].output, Some(a()));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0x42, 1));
    }

    #[test]
    fn lifts_ldw_x_immediate_big_endian() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0xAE, 0x12, 0x34], 0x1000).unwrap();
        assert_eq!(lifted.len, 3);
        assert_eq!(lifted.ir_ops[0].output, Some(x()));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0x1234, 2));
    }

    #[test]
    fn lifts_short_relative_branch() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0x20, 0xFE], 0x2000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Branch);
        assert_eq!(lifted.ir_ops[0].inputs[0], branch_target(0x2000));
    }

    #[test]
    fn lifts_conditional_branch() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0x27, 0x04], 0x3000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops.last().unwrap().op, IrOp::Cbranch);
        assert_eq!(
            lifted.ir_ops.last().unwrap().inputs[0],
            branch_target(0x3006)
        );
    }

    #[test]
    fn lifts_prefixed_y_immediate() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0x90, 0xAE, 0xBE, 0xEF], 0x4000).unwrap();
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].output, Some(y()));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0xBEEF, 2));
    }

    #[test]
    fn short_buffer_is_reported() {
        let lifter = Stm8Lifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0xAE], 0x1000),
            Err(LiftError::ShortBuffer)
        ));
    }
}
