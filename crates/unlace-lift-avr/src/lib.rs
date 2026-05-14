//! AVR → IR lifter.
//!
//! Decodes AVR instructions (16-bit words, some 32-bit) and lifts them to the
//! unlace IR. AVR is an 8-bit Harvard-architecture MCU with 16-bit instruction
//! words. Some instructions (LDS, STS, JMP, CALL) use 32-bit (two-word) encoding.
//!
//! # Register file model
//!
//! - r0–r31: 1 byte each, offsets 0..32 in register space
//! - SREG: 1 byte, offset 32
//! - SP: 2 bytes (SPL:SPH), offset 33

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

// ---------------------------------------------------------------------------
// Constants
// ---------------------------------------------------------------------------

/// Number of general-purpose registers.
const NUM_GP_REGS: usize = 32;

/// Offset of SREG in register space.
const SREG_OFFSET: u64 = 32;

/// Offset of SP (2 bytes) in register space.
const SP_OFFSET: u64 = 33;

/// Base offset in unique-space for temporaries.
const UNIQUE_BASE: u64 = 0x1000;

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Build a register-space Varnode for GPR `idx` (1 byte each).
#[inline]
fn reg(idx: u8) -> Varnode {
    Varnode::reg(idx as u64, 1)
}

/// SREG register varnode.
#[inline]
fn sreg() -> Varnode {
    Varnode::reg(SREG_OFFSET, 1)
}

/// SP register varnode (2 bytes).
#[inline]
fn sp() -> Varnode {
    Varnode::reg(SP_OFFSET, 2)
}

/// Build a constant Varnode.
#[inline]
fn const_vn(val: u64, size: u8) -> Varnode {
    Varnode::constant(val, size)
}

/// Build a unique temporary.
#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, size)
}

/// Build a RAM-space target for branch addresses.
#[inline]
fn ram_target(offset: u64) -> Varnode {
    Varnode::ram(offset, 2)
}

/// Decode a 16-bit little-endian instruction word from bytes.
#[inline]
fn decode_word(bytes: &[u8]) -> Result<u16, LiftError> {
    if bytes.len() < 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_le_bytes([bytes[0], bytes[1]]))
}

/// Extract 5-bit Rd field from various instruction formats.
/// For many instructions: bits[8:4] give Rd (d4..d0).
#[inline]
fn rd5(word: u16) -> u8 {
    ((word >> 4) & 0x1F) as u8
}

/// Extract 5-bit Rr field encoded across bits 9 and 3:0.
#[inline]
fn rr5(word: u16) -> u8 {
    let hi = ((word >> 9) & 0x01) as u8;
    let lo = (word & 0x0F) as u8;
    (hi << 4) | lo
}

/// Extract 4-bit Rd for LDI (r16–r31): bits[7:4].
#[inline]
fn rd4_ldi(word: u16) -> u8 {
    (((word >> 4) & 0x0F) as u8) + 16
}

/// Extract 8-bit immediate K for LDI: bits[11:8] | bits[3:0].
#[inline]
fn k8_ldi(word: u16) -> u8 {
    let hi = ((word >> 8) & 0x0F) as u8;
    let lo = (word & 0x0F) as u8;
    (hi << 4) | lo
}

/// Extract 12-bit signed offset for RJMP/RCALL (bits 11:0, sign-extended).
#[inline]
fn offset12(word: u16) -> i16 {
    let raw = (word & 0x0FFF) as i16;
    // sign-extend from 12 bits
    if raw & 0x0800 != 0 {
        raw | !0x0FFF
    } else {
        raw
    }
}

/// Extract 7-bit signed offset for conditional branches (bits 9:3, sign-extended).
#[inline]
fn offset7(word: u16) -> i16 {
    let raw = ((word >> 3) & 0x7F) as i16;
    // sign-extend from 7 bits
    if raw & 0x40 != 0 { raw | !0x7F } else { raw }
}

// ---------------------------------------------------------------------------
// AvrLifter
// ---------------------------------------------------------------------------

/// AVR lifter implementing the [`Lifter`] trait.
pub struct AvrLifter {
    register_file: RegisterFile,
}

impl AvrLifter {
    /// Create a new AVR lifter.
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(NUM_GP_REGS + 2);
        // r0–r31
        for i in 0..NUM_GP_REGS {
            // Use static strings for register names
            let name: &'static str = match i {
                0 => "r0",
                1 => "r1",
                2 => "r2",
                3 => "r3",
                4 => "r4",
                5 => "r5",
                6 => "r6",
                7 => "r7",
                8 => "r8",
                9 => "r9",
                10 => "r10",
                11 => "r11",
                12 => "r12",
                13 => "r13",
                14 => "r14",
                15 => "r15",
                16 => "r16",
                17 => "r17",
                18 => "r18",
                19 => "r19",
                20 => "r20",
                21 => "r21",
                22 => "r22",
                23 => "r23",
                24 => "r24",
                25 => "r25",
                26 => "r26",
                27 => "r27",
                28 => "r28",
                29 => "r29",
                30 => "r30",
                31 => "r31",
                _ => unreachable!(),
            };
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg(i as u64, 1),
            });
        }
        // SREG
        regs.push(RegisterDef {
            name: "SREG",
            varnode: sreg(),
        });
        // SP (2 bytes)
        regs.push(RegisterDef {
            name: "SP",
            varnode: sp(),
        });

        Self {
            register_file: RegisterFile { registers: regs },
        }
    }

    /// Lift a single AVR instruction.
    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let word = decode_word(bytes)?;

        trace!(
            addr = %format!("{addr:#x}"),
            word = %format!("{word:#06x}"),
            "decoding AVR instruction"
        );

        // NOP: 0x0000
        if word == 0x0000 {
            return Ok(LiftedInsn {
                ir_ops: Vec::new(),
                len: 2,
            });
        }

        // -- ALU two-register instructions --
        // ADD Rd, Rr: 0000 11rd dddd rrrr
        if word & 0xFC00 == 0x0C00 {
            return self.lift_alu_rr(word, addr, IrOp::IntAdd);
        }
        // SUB Rd, Rr: 0001 10rd dddd rrrr
        if word & 0xFC00 == 0x1800 {
            return self.lift_alu_rr(word, addr, IrOp::IntSub);
        }
        // AND Rd, Rr: 0010 00rd dddd rrrr
        if word & 0xFC00 == 0x2000 {
            return self.lift_alu_rr(word, addr, IrOp::IntAnd);
        }
        // OR Rd, Rr: 0010 10rd dddd rrrr
        if word & 0xFC00 == 0x2800 {
            return self.lift_alu_rr(word, addr, IrOp::IntOr);
        }
        // EOR Rd, Rr: 0010 01rd dddd rrrr
        if word & 0xFC00 == 0x2400 {
            return self.lift_alu_rr(word, addr, IrOp::IntXor);
        }

        // MOV Rd, Rr: 0010 11rd dddd rrrr
        if word & 0xFC00 == 0x2C00 {
            let rd = rd5(word);
            let rr = rr5(word);
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    reg(rd),
                    SmallVec::from_slice(&[reg(rr)]),
                    addr,
                )],
                len: 2,
            });
        }

        // LDI Rd, K: 1110 KKKK dddd KKKK (Rd = r16..r31)
        if word & 0xF000 == 0xE000 {
            let rd = rd4_ldi(word);
            let k = k8_ldi(word);
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    reg(rd),
                    SmallVec::from_slice(&[const_vn(k as u64, 1)]),
                    addr,
                )],
                len: 2,
            });
        }

        // -- Load/Store with X/Y/Z --
        // LD Rd, X (unchanged): 1001 000d dddd 1100
        if word & 0xFE0F == 0x900C {
            let rd = rd5(word);
            return self.lift_load_indirect(rd, 26, addr);
        }
        // LD Rd, Y (unchanged): 1000 000d dddd 1000
        if word & 0xFE0F == 0x8008 {
            let rd = rd5(word);
            return self.lift_load_indirect(rd, 28, addr);
        }
        // LD Rd, Z (unchanged): 1000 000d dddd 0000
        if word & 0xFE0F == 0x8000 {
            let rd = rd5(word);
            return self.lift_load_indirect(rd, 30, addr);
        }

        // ST X, Rr (unchanged): 1001 001r rrrr 1100
        if word & 0xFE0F == 0x920C {
            let rr = rd5(word); // same bit position as Rd
            return self.lift_store_indirect(rr, 26, addr);
        }
        // ST Y, Rr (unchanged): 1000 001r rrrr 1000
        if word & 0xFE0F == 0x8208 {
            let rr = rd5(word);
            return self.lift_store_indirect(rr, 28, addr);
        }
        // ST Z, Rr (unchanged): 1000 001r rrrr 0000
        if word & 0xFE0F == 0x8200 {
            let rr = rd5(word);
            return self.lift_store_indirect(rr, 30, addr);
        }

        // -- PUSH / POP --
        // PUSH Rr: 1001 001r rrrr 1111
        if word & 0xFE0F == 0x920F {
            let rr = rd5(word);
            return self.lift_push(rr, addr);
        }
        // POP Rd: 1001 000d dddd 1111
        if word & 0xFE0F == 0x900F {
            let rd = rd5(word);
            return self.lift_pop(rd, addr);
        }

        // -- Branches --
        // RJMP: 1100 kkkk kkkk kkkk
        if word & 0xF000 == 0xC000 {
            let offset = offset12(word);
            // PC-relative: target = addr + 2 + offset*2 (word-addressed)
            let target = (addr as i64 + 2 + (offset as i64) * 2) as u64;
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[ram_target(target)]),
                    addr,
                )],
                len: 2,
            });
        }

        // RCALL: 1101 kkkk kkkk kkkk
        if word & 0xF000 == 0xD000 {
            let offset = offset12(word);
            let target = (addr as i64 + 2 + (offset as i64) * 2) as u64;
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[ram_target(target)]),
                    addr,
                )],
                len: 2,
            });
        }

        // BRNE: 1111 01kk kkkk k001
        if word & 0xFC07 == 0xF401 {
            return self.lift_conditional_branch(word, addr, false);
        }
        // BREQ: 1111 00kk kkkk k001
        if word & 0xFC07 == 0xF001 {
            return self.lift_conditional_branch(word, addr, true);
        }

        // RET: 1001 0101 0000 1000
        if word == 0x9508 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                len: 2,
            });
        }
        // RETI: 1001 0101 0001 1000
        if word == 0x9518 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                len: 2,
            });
        }

        // Unrecognized → Unimplemented
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::new(),
                addr,
            )],
            len: 2,
        })
    }

    /// Lift a two-register ALU op (ADD, SUB, AND, OR, EOR).
    fn lift_alu_rr(&self, word: u16, addr: u64, op: IrOp) -> Result<LiftedInsn, LiftError> {
        let rd = rd5(word);
        let rr = rr5(word);
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                reg(rd),
                SmallVec::from_slice(&[reg(rd), reg(rr)]),
                addr,
            )],
            len: 2,
        })
    }

    /// Lift LD Rd, [ptr_reg_lo:ptr_reg_lo+1] (X/Y/Z indirect load).
    fn lift_load_indirect(
        &self,
        rd: u8,
        ptr_reg_lo: u8,
        addr: u64,
    ) -> Result<LiftedInsn, LiftError> {
        // Build 16-bit pointer from register pair (little-endian: lo, hi)
        let ptr_lo = reg(ptr_reg_lo);
        let ptr_hi = reg(ptr_reg_lo + 1);
        let ptr16 = tmp(0, 2);
        let loaded = reg(rd);

        Ok(LiftedInsn {
            ir_ops: vec![
                // ptr16 = PIECE(hi, lo) → 2-byte value
                IrInsn::with_output(
                    IrOp::Piece,
                    ptr16,
                    SmallVec::from_slice(&[ptr_hi, ptr_lo]),
                    addr,
                ),
                // Rd = Load(ptr16)
                IrInsn::with_output(IrOp::Load, loaded, SmallVec::from_slice(&[ptr16]), addr),
            ],
            len: 2,
        })
    }

    /// Lift ST [ptr_reg_lo:ptr_reg_lo+1], Rr (X/Y/Z indirect store).
    fn lift_store_indirect(
        &self,
        rr: u8,
        ptr_reg_lo: u8,
        addr: u64,
    ) -> Result<LiftedInsn, LiftError> {
        let ptr_lo = reg(ptr_reg_lo);
        let ptr_hi = reg(ptr_reg_lo + 1);
        let ptr16 = tmp(0, 2);
        let src = reg(rr);

        Ok(LiftedInsn {
            ir_ops: vec![
                // ptr16 = PIECE(hi, lo)
                IrInsn::with_output(
                    IrOp::Piece,
                    ptr16,
                    SmallVec::from_slice(&[ptr_hi, ptr_lo]),
                    addr,
                ),
                // Store(ptr16, Rr)
                IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[ptr16, src]), addr),
            ],
            len: 2,
        })
    }

    /// Lift PUSH Rr: decrement SP, store to stack.
    fn lift_push(&self, rr: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        let sp_vn = sp();
        let src = reg(rr);
        let new_sp = tmp(0, 2);

        Ok(LiftedInsn {
            ir_ops: vec![
                // Store(SP, Rr)
                IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[sp_vn, src]), addr),
                // SP = SP - 1
                IrInsn::with_output(
                    IrOp::IntSub,
                    new_sp,
                    SmallVec::from_slice(&[sp_vn, const_vn(1, 2)]),
                    addr,
                ),
                IrInsn::with_output(IrOp::Copy, sp_vn, SmallVec::from_slice(&[new_sp]), addr),
            ],
            len: 2,
        })
    }

    /// Lift POP Rd: increment SP, load from stack.
    fn lift_pop(&self, rd: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        let sp_vn = sp();
        let dst = reg(rd);
        let new_sp = tmp(0, 2);

        Ok(LiftedInsn {
            ir_ops: vec![
                // SP = SP + 1
                IrInsn::with_output(
                    IrOp::IntAdd,
                    new_sp,
                    SmallVec::from_slice(&[sp_vn, const_vn(1, 2)]),
                    addr,
                ),
                IrInsn::with_output(IrOp::Copy, sp_vn, SmallVec::from_slice(&[new_sp]), addr),
                // Rd = Load(SP)
                IrInsn::with_output(IrOp::Load, dst, SmallVec::from_slice(&[sp_vn]), addr),
            ],
            len: 2,
        })
    }

    /// Lift BRNE/BREQ conditional branch.
    /// `eq` = true means BREQ (branch if Z flag set), false means BRNE.
    fn lift_conditional_branch(
        &self,
        word: u16,
        addr: u64,
        eq: bool,
    ) -> Result<LiftedInsn, LiftError> {
        let offset = offset7(word);
        let target = (addr as i64 + 2 + (offset as i64) * 2) as u64;

        // Extract Z flag from SREG (bit 1)
        let sreg_vn = sreg();
        let z_bit = tmp(0, 1);
        let cond = tmp(1, 1);

        let mut ops = vec![
            // z_bit = SREG & 0x02 (Z flag is bit 1)
            IrInsn::with_output(
                IrOp::IntAnd,
                z_bit,
                SmallVec::from_slice(&[sreg_vn, const_vn(0x02, 1)]),
                addr,
            ),
        ];

        if eq {
            // BREQ: branch if Z==1 → z_bit != 0
            ops.push(IrInsn::with_output(
                IrOp::IntNotequal,
                cond,
                SmallVec::from_slice(&[z_bit, const_vn(0, 1)]),
                addr,
            ));
        } else {
            // BRNE: branch if Z==0 → z_bit == 0
            ops.push(IrInsn::with_output(
                IrOp::IntEqual,
                cond,
                SmallVec::from_slice(&[z_bit, const_vn(0, 1)]),
                addr,
            ));
        }

        ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            SmallVec::from_slice(&[ram_target(target), cond]),
            addr,
        ));

        Ok(LiftedInsn {
            ir_ops: ops,
            len: 2,
        })
    if raw & 0x40 != 0 {
        raw | !0x7F
    } else {
        raw
    }
}

// ---------------------------------------------------------------------------
// AvrLifter
// ---------------------------------------------------------------------------

/// AVR lifter implementing the [`Lifter`] trait.
pub struct AvrLifter {
    register_file: RegisterFile,
}

impl AvrLifter {
    /// Create a new AVR lifter.
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(NUM_GP_REGS + 2);
        // r0–r31
        for i in 0..NUM_GP_REGS {
            // Use static strings for register names
            let name: &'static str = match i {
                0 => "r0", 1 => "r1", 2 => "r2", 3 => "r3",
                4 => "r4", 5 => "r5", 6 => "r6", 7 => "r7",
                8 => "r8", 9 => "r9", 10 => "r10", 11 => "r11",
                12 => "r12", 13 => "r13", 14 => "r14", 15 => "r15",
                16 => "r16", 17 => "r17", 18 => "r18", 19 => "r19",
                20 => "r20", 21 => "r21", 22 => "r22", 23 => "r23",
                24 => "r24", 25 => "r25", 26 => "r26", 27 => "r27",
                28 => "r28", 29 => "r29", 30 => "r30", 31 => "r31",
                _ => unreachable!(),
            };
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg(i as u64, 1),
            });
        }
        // SREG
        regs.push(RegisterDef {
            name: "SREG",
            varnode: sreg(),
        });
        // SP (2 bytes)
        regs.push(RegisterDef {
            name: "SP",
            varnode: sp(),
        });

        Self {
            register_file: RegisterFile { registers: regs },
        }
    }

    /// Lift a single AVR instruction.
    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let word = decode_word(bytes)?;

        trace!(
            addr = %format!("{addr:#x}"),
            word = %format!("{word:#06x}"),
            "decoding AVR instruction"
        );

        // NOP: 0x0000
        if word == 0x0000 {
            return Ok(LiftedInsn {
                ir_ops: Vec::new(),
                len: 2,
            });
        }

        // -- ALU two-register instructions --
        // ADD Rd, Rr: 0000 11rd dddd rrrr
        if word & 0xFC00 == 0x0C00 {
            return self.lift_alu_rr(word, addr, IrOp::IntAdd);
        }
        // SUB Rd, Rr: 0001 10rd dddd rrrr
        if word & 0xFC00 == 0x1800 {
            return self.lift_alu_rr(word, addr, IrOp::IntSub);
        }
        // AND Rd, Rr: 0010 00rd dddd rrrr
        if word & 0xFC00 == 0x2000 {
            return self.lift_alu_rr(word, addr, IrOp::IntAnd);
        }
        // OR Rd, Rr: 0010 10rd dddd rrrr
        if word & 0xFC00 == 0x2800 {
            return self.lift_alu_rr(word, addr, IrOp::IntOr);
        }
        // EOR Rd, Rr: 0010 01rd dddd rrrr
        if word & 0xFC00 == 0x2400 {
            return self.lift_alu_rr(word, addr, IrOp::IntXor);
        }

        // MOV Rd, Rr: 0010 11rd dddd rrrr
        if word & 0xFC00 == 0x2C00 {
            let rd = rd5(word);
            let rr = rr5(word);
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    reg(rd),
                    SmallVec::from_slice(&[reg(rr)]),
                    addr,
                )],
                len: 2,
            });
        }

        // LDI Rd, K: 1110 KKKK dddd KKKK (Rd = r16..r31)
        if word & 0xF000 == 0xE000 {
            let rd = rd4_ldi(word);
            let k = k8_ldi(word);
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    reg(rd),
                    SmallVec::from_slice(&[const_vn(k as u64, 1)]),
                    addr,
                )],
                len: 2,
            });
        }

        // -- Load/Store with X/Y/Z --
        // LD Rd, X (unchanged): 1001 000d dddd 1100
        if word & 0xFE0F == 0x900C {
            let rd = rd5(word);
            return self.lift_load_indirect(rd, 26, addr);
        }
        // LD Rd, Y (unchanged): 1000 000d dddd 1000
        if word & 0xFE0F == 0x8008 {
            let rd = rd5(word);
            return self.lift_load_indirect(rd, 28, addr);
        }
        // LD Rd, Z (unchanged): 1000 000d dddd 0000
        if word & 0xFE0F == 0x8000 {
            let rd = rd5(word);
            return self.lift_load_indirect(rd, 30, addr);
        }

        // ST X, Rr (unchanged): 1001 001r rrrr 1100
        if word & 0xFE0F == 0x920C {
            let rr = rd5(word); // same bit position as Rd
            return self.lift_store_indirect(rr, 26, addr);
        }
        // ST Y, Rr (unchanged): 1000 001r rrrr 1000
        if word & 0xFE0F == 0x8208 {
            let rr = rd5(word);
            return self.lift_store_indirect(rr, 28, addr);
        }
        // ST Z, Rr (unchanged): 1000 001r rrrr 0000
        if word & 0xFE0F == 0x8200 {
            let rr = rd5(word);
            return self.lift_store_indirect(rr, 30, addr);
        }

        // -- PUSH / POP --
        // PUSH Rr: 1001 001r rrrr 1111
        if word & 0xFE0F == 0x920F {
            let rr = rd5(word);
            return self.lift_push(rr, addr);
        }
        // POP Rd: 1001 000d dddd 1111
        if word & 0xFE0F == 0x900F {
            let rd = rd5(word);
            return self.lift_pop(rd, addr);
        }

        // -- Branches --
        // RJMP: 1100 kkkk kkkk kkkk
        if word & 0xF000 == 0xC000 {
            let offset = offset12(word);
            // PC-relative: target = addr + 2 + offset*2 (word-addressed)
            let target = (addr as i64 + 2 + (offset as i64) * 2) as u64;
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[ram_target(target)]),
                    addr,
                )],
                len: 2,
            });
        }

        // RCALL: 1101 kkkk kkkk kkkk
        if word & 0xF000 == 0xD000 {
            let offset = offset12(word);
            let target = (addr as i64 + 2 + (offset as i64) * 2) as u64;
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[ram_target(target)]),
                    addr,
                )],
                len: 2,
            });
        }

        // BRNE: 1111 01kk kkkk k001
        if word & 0xFC07 == 0xF401 {
            return self.lift_conditional_branch(word, addr, false);
        }
        // BREQ: 1111 00kk kkkk k001
        if word & 0xFC07 == 0xF001 {
            return self.lift_conditional_branch(word, addr, true);
        }

        // RET: 1001 0101 0000 1000
        if word == 0x9508 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::new(),
                    addr,
                )],
                len: 2,
            });
        }
        // RETI: 1001 0101 0001 1000
        if word == 0x9518 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::new(),
                    addr,
                )],
                len: 2,
            });
        }

        // Unrecognized → Unimplemented
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::new(),
                addr,
            )],
            len: 2,
        })
    }

    /// Lift a two-register ALU op (ADD, SUB, AND, OR, EOR).
    fn lift_alu_rr(&self, word: u16, addr: u64, op: IrOp) -> Result<LiftedInsn, LiftError> {
        let rd = rd5(word);
        let rr = rr5(word);
        Ok(LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                reg(rd),
                SmallVec::from_slice(&[reg(rd), reg(rr)]),
                addr,
            )],
            len: 2,
        })
    }

    /// Lift LD Rd, [ptr_reg_lo:ptr_reg_lo+1] (X/Y/Z indirect load).
    fn lift_load_indirect(
        &self,
        rd: u8,
        ptr_reg_lo: u8,
        addr: u64,
    ) -> Result<LiftedInsn, LiftError> {
        // Build 16-bit pointer from register pair (little-endian: lo, hi)
        let ptr_lo = reg(ptr_reg_lo);
        let ptr_hi = reg(ptr_reg_lo + 1);
        let ptr16 = tmp(0, 2);
        let loaded = reg(rd);

        Ok(LiftedInsn {
            ir_ops: vec![
                // ptr16 = PIECE(hi, lo) → 2-byte value
                IrInsn::with_output(
                    IrOp::Piece,
                    ptr16,
                    SmallVec::from_slice(&[ptr_hi, ptr_lo]),
                    addr,
                ),
                // Rd = Load(ptr16)
                IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    SmallVec::from_slice(&[ptr16]),
                    addr,
                ),
            ],
            len: 2,
        })
    }

    /// Lift ST [ptr_reg_lo:ptr_reg_lo+1], Rr (X/Y/Z indirect store).
    fn lift_store_indirect(
        &self,
        rr: u8,
        ptr_reg_lo: u8,
        addr: u64,
    ) -> Result<LiftedInsn, LiftError> {
        let ptr_lo = reg(ptr_reg_lo);
        let ptr_hi = reg(ptr_reg_lo + 1);
        let ptr16 = tmp(0, 2);
        let src = reg(rr);

        Ok(LiftedInsn {
            ir_ops: vec![
                // ptr16 = PIECE(hi, lo)
                IrInsn::with_output(
                    IrOp::Piece,
                    ptr16,
                    SmallVec::from_slice(&[ptr_hi, ptr_lo]),
                    addr,
                ),
                // Store(ptr16, Rr)
                IrInsn::without_output(
                    IrOp::Store,
                    SmallVec::from_slice(&[ptr16, src]),
                    addr,
                ),
            ],
            len: 2,
        })
    }

    /// Lift PUSH Rr: decrement SP, store to stack.
    fn lift_push(&self, rr: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        let sp_vn = sp();
        let src = reg(rr);
        let new_sp = tmp(0, 2);

        Ok(LiftedInsn {
            ir_ops: vec![
                // Store(SP, Rr)
                IrInsn::without_output(
                    IrOp::Store,
                    SmallVec::from_slice(&[sp_vn, src]),
                    addr,
                ),
                // SP = SP - 1
                IrInsn::with_output(
                    IrOp::IntSub,
                    new_sp,
                    SmallVec::from_slice(&[sp_vn, const_vn(1, 2)]),
                    addr,
                ),
                IrInsn::with_output(
                    IrOp::Copy,
                    sp_vn,
                    SmallVec::from_slice(&[new_sp]),
                    addr,
                ),
            ],
            len: 2,
        })
    }

    /// Lift POP Rd: increment SP, load from stack.
    fn lift_pop(&self, rd: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        let sp_vn = sp();
        let dst = reg(rd);
        let new_sp = tmp(0, 2);

        Ok(LiftedInsn {
            ir_ops: vec![
                // SP = SP + 1
                IrInsn::with_output(
                    IrOp::IntAdd,
                    new_sp,
                    SmallVec::from_slice(&[sp_vn, const_vn(1, 2)]),
                    addr,
                ),
                IrInsn::with_output(
                    IrOp::Copy,
                    sp_vn,
                    SmallVec::from_slice(&[new_sp]),
                    addr,
                ),
                // Rd = Load(SP)
                IrInsn::with_output(
                    IrOp::Load,
                    dst,
                    SmallVec::from_slice(&[sp_vn]),
                    addr,
                ),
            ],
            len: 2,
        })
    }

    /// Lift BRNE/BREQ conditional branch.
    /// `eq` = true means BREQ (branch if Z flag set), false means BRNE.
    fn lift_conditional_branch(
        &self,
        word: u16,
        addr: u64,
        eq: bool,
    ) -> Result<LiftedInsn, LiftError> {
        let offset = offset7(word);
        let target = (addr as i64 + 2 + (offset as i64) * 2) as u64;

        // Extract Z flag from SREG (bit 1)
        let sreg_vn = sreg();
        let z_bit = tmp(0, 1);
        let cond = tmp(1, 1);

        let mut ops = vec![
            // z_bit = SREG & 0x02 (Z flag is bit 1)
            IrInsn::with_output(
                IrOp::IntAnd,
                z_bit,
                SmallVec::from_slice(&[sreg_vn, const_vn(0x02, 1)]),
                addr,
            ),
        ];

        if eq {
            // BREQ: branch if Z==1 → z_bit != 0
            ops.push(IrInsn::with_output(
                IrOp::IntNotequal,
                cond,
                SmallVec::from_slice(&[z_bit, const_vn(0, 1)]),
                addr,
            ));
        } else {
            // BRNE: branch if Z==0 → z_bit == 0
            ops.push(IrInsn::with_output(
                IrOp::IntEqual,
                cond,
                SmallVec::from_slice(&[z_bit, const_vn(0, 1)]),
                addr,
            ));
        }

        ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            SmallVec::from_slice(&[ram_target(target), cond]),
            addr,
        ));

        Ok(LiftedInsn { ir_ops: ops, len: 2 })
    }
}

impl Default for AvrLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for AvrLifter {
    fn arch(&self) -> ArchId {
        ArchId::Avr
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        self.lift_inner(bytes, addr)
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    /// Encode a 16-bit AVR instruction as little-endian bytes.
    fn encode(word: u16) -> [u8; 2] {
        word.to_le_bytes()
    }

    #[test]
    fn test_nop() {
        let lifter = AvrLifter::new();
        let bytes = encode(0x0000);
        let result = lifter.lift_insn(&bytes, 0x00).unwrap();
        assert_eq!(result.len, 2);
        assert!(result.ir_ops.is_empty(), "NOP should produce no IR ops");
    }

    #[test]
    fn test_add_rd_rr() {
        let lifter = AvrLifter::new();
        // ADD r1, r2: 0000 11rd dddd rrrr
        // rd=1 (00001), rr=2 (00010)
        // 0000 1100 0001 0010 = 0x0C12
        let bytes = encode(0x0C12);
        let result = lifter.lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(result.len, 2);
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output, Some(reg(1)));
        assert_eq!(result.ir_ops[0].inputs[0], reg(1));
        assert_eq!(result.ir_ops[0].inputs[1], reg(2));
    }

    #[test]
    fn test_sub_rd_rr() {
        let lifter = AvrLifter::new();
        // SUB r3, r4: 0001 10rd dddd rrrr
        // rd=3 (00011), rr=4 (00100)
        // 0001 1000 0011 0100 = 0x1834
        let bytes = encode(0x1834);
        let result = lifter.lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(result.ir_ops[0].output, Some(reg(3)));
        assert_eq!(result.ir_ops[0].inputs[1], reg(4));
    }

    #[test]
    fn test_ldi_rd_k() {
        let lifter = AvrLifter::new();
        // LDI r16, 0xAB: 1110 KKKK dddd KKKK
        // K=0xAB (1010_1011), d=r16 → dddd=0000
        // 1110 1010 0000 1011 = 0xEA0B
        let bytes = encode(0xEA0B);
        let result = lifter.lift_insn(&bytes, 0x200).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(reg(16)));
        assert_eq!(result.ir_ops[0].inputs[0], const_vn(0xAB, 1));
    }

    #[test]
    fn test_mov_rd_rr() {
        let lifter = AvrLifter::new();
        // MOV r5, r6: 0010 11rd dddd rrrr
        // rd=5 (00101), rr=6 (00110)
        // 0010 1100 0101 0110 = 0x2C56
        let bytes = encode(0x2C56);
        let result = lifter.lift_insn(&bytes, 0x300).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(reg(5)));
        assert_eq!(result.ir_ops[0].inputs[0], reg(6));
    }

    #[test]
    fn test_rjmp() {
        let lifter = AvrLifter::new();
        // RJMP +3: 1100 kkkk kkkk kkkk, k=3
        // 1100 0000 0000 0011 = 0xC003
        let bytes = encode(0xC003);
        let result = lifter.lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Branch);
        // target = 0x100 + 2 + 3*2 = 0x108
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x108));
    }

    #[test]
    fn test_rcall() {
        let lifter = AvrLifter::new();
        // RCALL +5: 1101 0000 0000 0101 = 0xD005
        let bytes = encode(0xD005);
        let result = lifter.lift_insn(&bytes, 0x200).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Call);
        // target = 0x200 + 2 + 5*2 = 0x20C
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x20C));
    }

    #[test]
    fn test_ret() {
        let lifter = AvrLifter::new();
        // RET: 0x9508
        let bytes = encode(0x9508);
        let result = lifter.lift_insn(&bytes, 0x400).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn test_brne() {
        let lifter = AvrLifter::new();
        // BRNE +2: 1111 01kk kkkk k001
        // k=2 → bits[9:3] = 0000010
        // 1111 0100 0001 0001 = 0xF411
        let bytes = encode(0xF411);
        let result = lifter.lift_insn(&bytes, 0x500).unwrap();
        // Should produce: IntAnd (extract Z), IntEqual (Z==0), Cbranch
        assert_eq!(result.ir_ops.len(), 3);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAnd);
        assert_eq!(result.ir_ops[1].op, IrOp::IntEqual);
        assert_eq!(result.ir_ops[2].op, IrOp::Cbranch);
        // target = 0x500 + 2 + 2*2 = 0x506
        assert_eq!(result.ir_ops[2].inputs[0], ram_target(0x506));
    }
}
