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
            Err(LiftError::ShortBuffer)
        ));
    }
}
