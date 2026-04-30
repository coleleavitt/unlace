//! ARCv2 → IR lifter with custom decoder.
//!
//! Decodes a subset of the ARCv2 ISA (both 32-bit and 16-bit ARCompact
//! encodings) and lifts them to the unlace IR.  Unknown or unsupported
//! instructions emit [`IrOp::Unimplemented`].
//!
//! # Encoding overview
//!
//! ARCv2 instructions are stored in **middle-endian** byte order: each 16-bit
//! halfword is big-endian, but 32-bit instructions place the most-significant
//! halfword first.  The top 5 bits of the first halfword (bits [15:11])
//! determine the **major opcode**.
//!
//! - Major opcodes `0x00..=0x0B` → 32-bit instruction (two halfwords).
//! - Major opcodes `0x0C..=0x1F` → 16-bit instruction (one halfword).
//!
//! # Supported instructions
//!
//! ADD, SUB, AND, OR, XOR, ASL, ASR, LSR, MOV, CMP, J, JL, BR, B, LD, ST, NOP.

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

// ---------------------------------------------------------------------------
// Register file layout
// ---------------------------------------------------------------------------

const ARC_CORE_REG_NAMES: [&str; 64] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23",
    "r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31",
    "r32", "r33", "r34", "r35", "r36", "r37", "r38", "r39",
    "r40", "r41", "r42", "r43", "r44", "r45", "r46", "r47",
    "r48", "r49", "r50", "r51", "r52", "r53", "r54", "r55",
    "r56", "r57", "r58", "r59", "r60", "r61", "r62", "r63",
];

/// Well-known register indices.
const REG_SP: u8 = 28; // r28 = stack pointer
const REG_BLINK: u8 = 31; // r31 = return address

const UNIQUE_BASE: u64 = 0x1000;

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Build a register Varnode for core register `idx` (0..63).
#[inline]
fn reg(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * 8, 4)
}

/// Build a constant Varnode.
#[inline]
fn imm(val: u32) -> Varnode {
    Varnode::constant(val as u64, 4)
}

/// Build a unique temporary Varnode.
#[inline]
fn tmp(idx: u64) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, 4)
}

fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 4)
}

/// Sign-extend an `n`-bit value to i32.
fn sign_extend(val: u32, bits: u32) -> i32 {
    let shift = 32 - bits;
    ((val << shift) as i32) >> shift
}

/// Read the first 16-bit halfword (big-endian within the instruction stream).
#[inline]
fn read_hw0(bytes: &[u8]) -> u16 {
    u16::from_be_bytes([bytes[0], bytes[1]])
}

/// Read the second 16-bit halfword.
#[inline]
fn read_hw1(bytes: &[u8]) -> u16 {
    u16::from_be_bytes([bytes[2], bytes[3]])
}

/// Assemble a 32-bit instruction word from two middle-endian halfwords.
#[inline]
fn read_insn32(bytes: &[u8]) -> u32 {
    ((read_hw0(bytes) as u32) << 16) | (read_hw1(bytes) as u32)
}

/// Emit an Unimplemented IR instruction.
fn unimpl(addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            Vec::<Varnode>::new(),
            addr,
        )],
        len,
    }
}

// ---------------------------------------------------------------------------
// 32-bit instruction decoder
// ---------------------------------------------------------------------------

/// Decoded 32-bit ALU/branch operand mode.
#[derive(Debug, Clone, Copy)]
enum Operand {
    Reg(u8),
    Imm(u32),
}

/// Extract the 6-bit register field `C` from a 32-bit instruction.
/// Bits [5:0] of the low halfword for many formats.
fn extract_c_reg(w: u32) -> u8 {
    (w & 0x3F) as u8
}

/// Extract the 6-bit register field `B` (bits [14:12] | bits [26:24]).
fn extract_b_reg(w: u32) -> u8 {
    let hi = ((w >> 24) & 0x07) as u8;
    let lo = ((w >> 12) & 0x07) as u8;
    (hi << 3) | lo
}

/// Extract the 6-bit register field `A` (bits [5:0] in low half, shifted).
fn extract_a_reg(w: u32) -> u8 {
    ((w >> 6) & 0x3F) as u8
}

/// Extract sub-opcode bits [21:16] for major-04 ALU instructions.
fn extract_subop(w: u32) -> u8 {
    ((w >> 16) & 0x3F) as u8
}

/// Extract the F (flag-setting) bit — bit 15 in many 32-bit formats.
fn extract_f_bit(w: u32) -> bool {
    (w >> 15) & 1 != 0
}

/// Decode major-04 (register-register ALU) instruction.
fn decode_major04(w: u32, addr: u64) -> LiftedInsn {
    let b = extract_b_reg(w);
    let subop = extract_subop(w);
    let _f = extract_f_bit(w);

    // Format bits [23:22] determine operand layout
    let fmt = (w >> 22) & 0x03;
    let (a_or_dest, src2) = match fmt {
        0b00 => {
            // Register-register: a = dest, c = src2
            let a = extract_a_reg(w);
            let c = extract_c_reg(w);
            (a, Operand::Reg(c))
        }
        0b01 => {
            // Register-immediate u6: a = dest, imm = bits[5:0]
            let a = extract_a_reg(w);
            let u6 = (w & 0x3F) as u32;
            (a, Operand::Imm(u6))
        }
        0b10 => {
            // Register-immediate s12: b = dest/src1, s12 in bits[5:0]|[11:6]
            let s12_lo = (w & 0x3F) as u32;
            let s12_hi = ((w >> 6) & 0x3F) as u32;
            let s12 = sign_extend((s12_hi << 6) | s12_lo, 12) as u32;
            (b, Operand::Imm(s12))
        }
        0b11 => {
            // Conditional register: a = dest, c = src2 (cond in bits)
            let a = extract_a_reg(w);
            let c = extract_c_reg(w);
            (a, Operand::Reg(c))
        }
        _ => unreachable!(),
    };

    let src1 = reg(b);
    let src2_vn = match src2 {
        Operand::Reg(r) => reg(r),
        Operand::Imm(v) => imm(v),
    };
    let dest = reg(a_or_dest);

    match subop {
        0x00 => lift_binop_sized(IrOp::IntAdd, dest, src1, src2_vn, addr, 4),    // ADD
        0x01 => lift_binop_sized(IrOp::IntAdd, dest, src1, src2_vn, addr, 4),    // ADC → ADD for MVP
        0x02 => lift_binop_sized(IrOp::IntSub, dest, src1, src2_vn, addr, 4),    // SUB
        0x04 => lift_binop_sized(IrOp::IntAnd, dest, src1, src2_vn, addr, 4),    // AND
        0x05 => lift_binop_sized(IrOp::IntOr, dest, src1, src2_vn, addr, 4),     // OR
        0x07 => lift_binop_sized(IrOp::IntXor, dest, src1, src2_vn, addr, 4),    // XOR
        0x08 => lift_binop_sized(IrOp::IntLeft, dest, src1, src2_vn, addr, 4),   // ASL
        0x09 => lift_binop_sized(IrOp::IntRight, dest, src1, src2_vn, addr, 4),  // LSR
        0x0A => lift_binop_sized(IrOp::IntSright, dest, src1, src2_vn, addr, 4), // ASR
        0x0B => {
            // CMP: src1 - src2, no writeback (sets flags only)
            // We model as INT_SUB to a temp + discard result
            let t = tmp(0);
            LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::IntSub,
                    t,
                    vec![src1, src2_vn],
                    addr,
                )],
                len: 4,
            }
        }
        0x0C => {
            // MOV: dest = src2 (b is ignored / 0)
            LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    dest,
                    vec![src2_vn],
                    addr,
                )],
                len: 4,
            }
        }
        _ => unimpl(addr, 4),
    }
}

/// Decode major-00 (branch: B/BL conditional) instruction.
fn decode_major00(w: u32, addr: u64) -> LiftedInsn {
    // B instruction: 32-bit unconditional/conditional branch
    // Offset in bits [20:6] | [0] | [5:1] ... complex encoding
    // Simplified: extract s21 offset
    let d = ((w >> 5) & 1) != 0; // delay slot bit
    let _ = d; // not modeled in MVP
    let s_bit = (w >> 31) & 1;
    let s9 = ((w >> 17) & 0x1FF) as u32;
    let s10 = ((w >> 6) & 0x3FF) as u32;
    let offset_raw = (s_bit << 20) | (s9 << 11) | (s10 << 1);
    let offset = sign_extend(offset_raw, 21);
    let target = (addr as i64 + offset as i64) as u64;

    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Branch,
            vec![ram_target(target)],
            addr,
        )],
        len: 4,
    }
}

/// Decode major-01 (BL: branch-and-link) instruction.
fn decode_major01(w: u32, addr: u64) -> LiftedInsn {
    // BL: save return addr to BLINK (r31), then branch
    // Offset: 25-bit signed
    let s_bit = (w >> 31) & 1;
    let s12_hi = ((w >> 6) & 0x3FF) as u32;
    let s12_lo = ((w >> 17) & 0x1FF) as u32;
    let offset_raw = (s_bit << 24) | (s12_lo << 15) | (s12_hi << 2);
    // Sign-extend from 25 bits
    let offset = sign_extend(offset_raw, 25);
    let target = (addr as i64 + offset as i64) as u64;

    LiftedInsn {
        ir_ops: vec![
            // BLINK = addr + 4
            IrInsn::with_output(
                IrOp::Copy,
                reg(REG_BLINK),
                vec![imm((addr + 4) as u32)],
                addr,
            ),
            // Branch to target
            IrInsn::without_output(IrOp::Call, vec![ram_target(target)], addr),
        ],
        len: 4,
    }
}

/// Decode major-02 (LD: load from memory) instruction.
fn decode_major02(w: u32, addr: u64) -> LiftedInsn {
    // LD  dest, [base, offset]
    let b = extract_b_reg(w);
    let a = extract_a_reg(w);
    // Signed 9-bit offset in bits [15:9] | bits [26:24] (approx)
    let s9_lo = ((w >> 16) & 0xFF) as u32;
    let s9_hi = ((w >> 15) & 0x01) as u32;
    let s9 = sign_extend((s9_hi << 8) | s9_lo, 9) as u32;

    let base = reg(b);
    let offset = imm(s9);
    let dest = reg(a);
    let t = tmp(0);

    LiftedInsn {
        ir_ops: vec![
            // tmp = base + offset
            IrInsn::with_output(IrOp::IntAdd, t, vec![base, offset], addr),
            // dest = LOAD [tmp]
            IrInsn::with_output(IrOp::Load, dest, vec![Varnode::constant(0, 4), t], addr),
        ],
        len: 4,
    }
}

/// Decode major-03 (ST: store to memory) instruction.
fn decode_major03(w: u32, addr: u64) -> LiftedInsn {
    // ST src, [base, offset]
    let b = extract_b_reg(w);
    let c = extract_c_reg(w);
    let s9_lo = ((w >> 16) & 0xFF) as u32;
    let s9_hi = ((w >> 15) & 0x01) as u32;
    let s9 = sign_extend((s9_hi << 8) | s9_lo, 9) as u32;

    let base = reg(b);
    let offset = imm(s9);
    let src = reg(c);
    let t = tmp(0);

    LiftedInsn {
        ir_ops: vec![
            // tmp = base + offset
            IrInsn::with_output(IrOp::IntAdd, t, vec![base, offset], addr),
            // STORE src to [tmp]
            IrInsn::without_output(IrOp::Store, vec![Varnode::constant(0, 4), t, src], addr),
        ],
        len: 4,
    }
}

/// Decode major-05 (extension ALU ops / J / JL) instruction.
fn decode_major05(w: u32, addr: u64) -> LiftedInsn {
    let subop2 = (w >> 16) & 0x3F;
    let b = extract_b_reg(w);

    match subop2 {
        // J [c] or J [blink] — Jump register-indirect
        0x20 => {
            let c = extract_c_reg(w);
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branchind,
                    vec![reg(c)],
                    addr,
                )],
                len: 4,
            }
        }
        // JL [c] — Jump and link register-indirect
        0x22 => {
            let c = extract_c_reg(w);
            LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_BLINK),
                        vec![imm((addr + 4) as u32)],
                        addr,
                    ),
                    IrInsn::without_output(IrOp::Callind, vec![reg(c)], addr),
                ],
                len: 4,
            }
        }
        // J_S [blink] (return) — encoded under major 05 subop 0x21
        0x21 => {
            // J [BLINK] = return
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    vec![reg(REG_BLINK)],
                    addr,
                )],
                len: 4,
            }
        }
        _ => {
            // Some MOV/CMP extensions also live here
            // MOV with long immediate: b = dest, long-imm in second word
            // For MVP, treat as unimplemented
            let _ = b;
            unimpl(addr, 4)
        }
    }
}

/// Decode major-01 BR (branch on register compare) instruction.
/// Major opcode 0x08..=0x0B: conditional branch on compare.
fn decode_branch_on_compare(w: u32, addr: u64) -> LiftedInsn {
    // BR<cc> b, c/u6, s9 — compare two regs, branch if condition met
    // Simplified: extract offset, emit as conditional branch
    let b = extract_b_reg(w);
    let _n = (w >> 5) & 1; // nullify bit
    let s9_lo = ((w >> 17) & 0x7F) as u32;
    let s9_hi = ((w >> 15) & 0x01) as u32;
    let s9 = sign_extend((s9_hi << 8) | s9_lo, 9);
    let target = (addr as i64 + (s9 as i64) * 2) as u64;

    let c = extract_c_reg(w);
    let cond_tmp = tmp(0);

    // Emit: cond = CMP(b, c); CBRANCH target, cond
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(
                IrOp::IntEqual,
                cond_tmp,
                vec![reg(b), reg(c)],
                addr,
            ),
            IrInsn::without_output(
                IrOp::Cbranch,
                vec![ram_target(target), cond_tmp],
                addr,
            ),
        ],
        len: 4,
    }
}

// ---------------------------------------------------------------------------
// 16-bit (ARCompact) instruction decoder
// ---------------------------------------------------------------------------

/// Decode a 16-bit ARCompact instruction.
fn decode_16bit(hw: u16, addr: u64) -> LiftedInsn {
    let major = (hw >> 11) & 0x1F;

    match major {
        // Major 0x0C: LD_S — 16-bit load
        0x0C => {
            let c = ((hw >> 8) & 0x07) as u8;
            let b = ((hw >> 5) & 0x07) as u8;
            let u5 = ((hw & 0x1F) as u32) << 2; // word-aligned offset
            let t = tmp(0);
            LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(IrOp::IntAdd, t, vec![reg(b), imm(u5)], addr),
                    IrInsn::with_output(
                        IrOp::Load,
                        reg(c),
                        vec![Varnode::constant(0, 4), t],
                        addr,
                    ),
                ],
                len: 2,
            }
        }
        // Major 0x0D: ADD_S a, b, c
        0x0D => {
            let c = ((hw >> 8) & 0x07) as u8;
            let b = ((hw >> 5) & 0x07) as u8;
            let a = (hw & 0x07) as u8;
            // sub-op in bits [10:8] — for simplicity, treat all as ADD
            // (real ISA splits ADD/SUB/ASL here based on bits)
            let sub = (hw >> 3) & 0x03;
            let op = match sub {
                0 => IrOp::IntAdd,
                1 => IrOp::IntSub,
                _ => IrOp::IntAdd,
            };
            lift_binop_sized(op, reg(a), reg(b), reg(c), addr, 2)
        }
        // Major 0x0E: MOV_S / CMP_S / ADD_S (register move 16-bit)
        0x0E => {
            let sub = (hw >> 8) & 0x07;
            let b = ((hw >> 5) & 0x07) as u8;
            match sub {
                0x00 => {
                    // ADD_S b, b, h (h = [4:0])
                    let h = (hw & 0x1F) as u8;
                    lift_binop_sized(IrOp::IntAdd, reg(b), reg(b), reg(h), addr, 2)
                }
                0x01 => {
                    // MOV_S b, h
                    let h = (hw & 0x1F) as u8;
                    LiftedInsn {
                        ir_ops: vec![IrInsn::with_output(
                            IrOp::Copy,
                            reg(b),
                            vec![reg(h)],
                            addr,
                        )],
                        len: 2,
                    }
                }
                0x02 => {
                    // CMP_S b, h
                    let h = (hw & 0x1F) as u8;
                    let t = tmp(0);
                    LiftedInsn {
                        ir_ops: vec![IrInsn::with_output(
                            IrOp::IntSub,
                            t,
                            vec![reg(b), reg(h)],
                            addr,
                        )],
                        len: 2,
                    }
                }
                _ => unimpl(addr, 2),
            }
        }
        // Major 0x0F: general 16-bit ops
        0x0F => decode_16bit_major0f(hw, addr),
        // Major 0x18: ST_S — 16-bit store
        0x18 => {
            let c = ((hw >> 8) & 0x07) as u8;
            let b = ((hw >> 5) & 0x07) as u8;
            let u5 = ((hw & 0x1F) as u32) << 2;
            let t = tmp(0);
            LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(IrOp::IntAdd, t, vec![reg(b), imm(u5)], addr),
                    IrInsn::without_output(
                        IrOp::Store,
                        vec![Varnode::constant(0, 4), t, reg(c)],
                        addr,
                    ),
                ],
                len: 2,
            }
        }
        // Major 0x19: LD_S from SP-relative
        0x19 => {
            let b = ((hw >> 8) & 0x07) as u8;
            let u7 = ((hw & 0x7F) as u32) << 2;
            let t = tmp(0);
            LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(IrOp::IntAdd, t, vec![reg(REG_SP), imm(u7)], addr),
                    IrInsn::with_output(
                        IrOp::Load,
                        reg(b),
                        vec![Varnode::constant(0, 4), t],
                        addr,
                    ),
                ],
                len: 2,
            }
        }
        // Major 0x1C: ADD_S b, b, u7 — add immediate
        0x1C => {
            let b = ((hw >> 8) & 0x07) as u8;
            let u7 = (hw & 0x7F) as u32;
            lift_binop_sized(IrOp::IntAdd, reg(b), reg(b), imm(u7), addr, 2)
        }
        // Major 0x1D: MOV_S b, u8
        0x1D => {
            let b = ((hw >> 8) & 0x07) as u8;
            let u8val = (hw & 0xFF) as u32;
            LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    reg(b),
                    vec![imm(u8val)],
                    addr,
                )],
                len: 2,
            }
        }
        // Major 0x1E: B_S — 16-bit branch
        0x1E => {
            let s10 = sign_extend((hw & 0x1FF) as u32, 9);
            let target = (addr as i64 + (s10 as i64) * 2) as u64;
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branch,
                    vec![ram_target(target)],
                    addr,
                )],
                len: 2,
            }
        }
        // Major 0x1F: BL_S — 16-bit branch and link
        0x1F => {
            let s11 = sign_extend(((hw & 0x7FF) as u32) << 1, 12);
            let target = (addr as i64 + s11 as i64) as u64;
            LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_BLINK),
                        vec![imm((addr + 2) as u32)],
                        addr,
                    ),
                    IrInsn::without_output(IrOp::Call, vec![ram_target(target)], addr),
                ],
                len: 2,
            }
        }
        _ => unimpl(addr, 2),
    }
}

/// Decode 16-bit major-0x0F sub-group (shifts, NOP, J_S, etc).
fn decode_16bit_major0f(hw: u16, addr: u64) -> LiftedInsn {
    let sub5 = (hw >> 5) & 0x1F;
    let b = (hw & 0x07) as u8;
    let c = ((hw >> 8) & 0x07) as u8;

    match sub5 {
        0x00 => {
            // J_S [b] — register indirect jump
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branchind,
                    vec![reg(b)],
                    addr,
                )],
                len: 2,
            }
        }
        0x01 => {
            // J_S.D [b] — jump with delay slot (model as plain jump for MVP)
            LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branchind,
                    vec![reg(b)],
                    addr,
                )],
                len: 2,
            }
        }
        0x02 => {
            // JL_S [b] — jump and link
            LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_BLINK),
                        vec![imm((addr + 2) as u32)],
                        addr,
                    ),
                    IrInsn::without_output(IrOp::Callind, vec![reg(b)], addr),
                ],
                len: 2,
            }
        }
        0x07 if b == 0 && c == 0 => {
            // NOP_S (all zeros in b/c)
            // Emit as a Copy of zero to a discarded temp (semantically a no-op)
            LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    tmp(0),
                    vec![imm(0)],
                    addr,
                )],
                len: 2,
            }
        }
        // ASL_S b, b, c
        0x0B => lift_binop_sized(IrOp::IntLeft, reg(b), reg(b), reg(c), addr, 2),
        // LSR_S b, b, c
        0x0C => lift_binop_sized(IrOp::IntRight, reg(b), reg(b), reg(c), addr, 2),
        // ASR_S b, b, c
        0x0D => lift_binop_sized(IrOp::IntSright, reg(b), reg(b), reg(c), addr, 2),
        // AND_S b, b, c
        0x04 => lift_binop_sized(IrOp::IntAnd, reg(b), reg(b), reg(c), addr, 2),
        // OR_S b, b, c
        0x05 => lift_binop_sized(IrOp::IntOr, reg(b), reg(b), reg(c), addr, 2),
        // XOR_S b, b, c
        0x07 => lift_binop_sized(IrOp::IntXor, reg(b), reg(b), reg(c), addr, 2),
        _ => unimpl(addr, 2),
    }
}

// ---------------------------------------------------------------------------
// Lift helpers
// ---------------------------------------------------------------------------

fn lift_binop_sized(
    op: IrOp,
    dest: Varnode,
    src1: Varnode,
    src2: Varnode,
    addr: u64,
    len: usize,
) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(op, dest, vec![src1, src2], addr)],
        len,
    }
}

// ---------------------------------------------------------------------------
// Lifter
// ---------------------------------------------------------------------------

pub struct ArcLifter {
    register_file: RegisterFile,
}

impl ArcLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(68);
        for (i, name) in ARC_CORE_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg((i as u64) * 8, 4),
            });
        }
        regs.push(RegisterDef { name: "STATUS32", varnode: Varnode::reg(512, 4) });
        regs.push(RegisterDef { name: "BTA", varnode: Varnode::reg(520, 4) });
        regs.push(RegisterDef { name: "LP_START", varnode: Varnode::reg(528, 4) });
        regs.push(RegisterDef { name: "LP_END", varnode: Varnode::reg(536, 4) });
        Self { register_file: RegisterFile { registers: regs } }
    }

    /// Decode and lift a single ARCv2 instruction.
    fn decode(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }

        let hw0 = read_hw0(bytes);
        let major = (hw0 >> 11) & 0x1F;

        // Major opcodes 0x00..=0x0B are 32-bit instructions
        if major <= 0x0B {
            if bytes.len() < 4 {
                return Err(LiftError::ShortBuffer);
            }
            let w = read_insn32(bytes);
            let lifted = match major {
                0x00 => decode_major00(w, addr),
                0x01 => decode_major01(w, addr),
                0x02 => decode_major02(w, addr),
                0x03 => decode_major03(w, addr),
                0x04 => decode_major04(w, addr),
                0x05 => decode_major05(w, addr),
                0x08..=0x0B => decode_branch_on_compare(w, addr),
                _ => unimpl(addr, 4),
            };
            Ok(lifted)
        } else {
            // 16-bit instruction
            Ok(decode_16bit(hw0, addr))
        }
    }
}

impl Default for ArcLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for ArcLifter {
    fn arch(&self) -> ArchId {
        ArchId::Arc
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        self.decode(bytes, addr)
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

    fn lifter() -> ArcLifter {
        ArcLifter::new()
    }

    // -- Register file tests --

    #[test]
    fn register_file_layout() {
        let l = lifter();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 68);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[63].name, "r63");
        assert_eq!(rf.registers[64].name, "STATUS32");
        assert_eq!(rf.registers[65].name, "BTA");
        assert_eq!(rf.registers[66].name, "LP_START");
        assert_eq!(rf.registers[67].name, "LP_END");
    }

    #[test]
    fn arch_is_arc() {
        assert_eq!(lifter().arch(), ArchId::Arc);
    }

    // -- Helper tests --

    #[test]
    fn sign_extend_positive() {
        assert_eq!(sign_extend(0x1FF, 10), 0x1FF);
    }

    #[test]
    fn sign_extend_negative() {
        // 10-bit value 0x200 = -512
        assert_eq!(sign_extend(0x200, 10), -512);
    }

    // -- Short buffer --

    #[test]
    fn short_buffer_0_bytes() {
        let r = lifter().lift_insn(&[], 0);
        assert!(matches!(r, Err(LiftError::ShortBuffer)));
    }

    #[test]
    fn short_buffer_1_byte() {
        let r = lifter().lift_insn(&[0x00], 0);
        assert!(matches!(r, Err(LiftError::ShortBuffer)));
    }

    #[test]
    fn short_buffer_32bit_only_2_bytes() {
        // Major opcode 0x00 (top 5 bits = 00000) → 32-bit, but only 2 bytes
        let r = lifter().lift_insn(&[0x00, 0x00], 0);
        assert!(matches!(r, Err(LiftError::ShortBuffer)));
    }

    // -- 32-bit instruction format detection --

    #[test]
    fn unknown_32bit_is_unimplemented() {
        // Major opcode 0x06 (not handled) → unimplemented
        // Top 5 bits = 00110 → 0x06, byte = 0b0011_0xxx = 0x30
        let bytes = [0x30, 0x00, 0x00, 0x00];
        let r = lifter().lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }

    // -- 16-bit instruction format detection --

    #[test]
    fn unknown_16bit_is_unimplemented() {
        // Major opcode 0x10 (not specifically handled)
        // Top 5 bits = 10000 → 0x10, byte = 0b1000_0xxx = 0x80
        let bytes = [0x80, 0x00];
        let r = lifter().lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }

    // -- 32-bit ALU: major 0x04 --

    /// Encode a major-04 register-register ALU instruction.
    /// Format 00: a = op(b, c)
    fn encode_major04_rr(subop: u8, a: u8, b: u8, c: u8) -> [u8; 4] {
        // major = 0x04 in bits [15:11] of hw0
        // hw0: [15:11]=major, bits[10:8]=B[5:3], bits[7:0]=part of encoding
        // Full 32-bit word layout (simplified for test):
        //   bits [31:27] = major (0x04)
        //   bits [26:24] = B[5:3]
        //   bits [23:22] = fmt (0b00 = reg-reg)
        //   bits [21:16] = subop
        //   bits [15]    = F flag (0)
        //   bits [14:12] = B[2:0]
        //   bits [11:6]  = A
        //   bits [5:0]   = C
        let b_hi = (b >> 3) & 0x07;
        let b_lo = b & 0x07;
        let w: u32 = (0x04 << 27)
            | ((b_hi as u32) << 24)
            | (0b00 << 22) // fmt = reg-reg
            | ((subop as u32) << 16)
            | ((b_lo as u32) << 12)
            | ((a as u32) << 6)
            | (c as u32);
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        [h0[0], h0[1], h1[0], h1[1]]
    }

    #[test]
    fn add_reg_reg() {
        // ADD r3, r1, r2: subop=0x00, a=3, b=1, c=2
        let bytes = encode_major04_rr(0x00, 3, 1, 2);
        let r = lifter().lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops.len(), 1);
        let insn = &r.ir_ops[0];
        assert_eq!(insn.op, IrOp::IntAdd);
        assert_eq!(insn.output, Some(reg(3)));
        assert_eq!(insn.inputs[0], reg(1));
        assert_eq!(insn.inputs[1], reg(2));
    }

    #[test]
    fn sub_reg_reg() {
        let bytes = encode_major04_rr(0x02, 5, 3, 4);
        let r = lifter().lift_insn(&bytes, 0x2000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(r.ir_ops[0].output, Some(reg(5)));
    }

    #[test]
    fn and_reg_reg() {
        let bytes = encode_major04_rr(0x04, 2, 1, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    #[test]
    fn or_reg_reg() {
        let bytes = encode_major04_rr(0x05, 2, 1, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntOr);
    }

    #[test]
    fn xor_reg_reg() {
        let bytes = encode_major04_rr(0x07, 2, 1, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntXor);
    }

    #[test]
    fn asl_reg_reg() {
        let bytes = encode_major04_rr(0x08, 2, 1, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntLeft);
    }

    #[test]
    fn lsr_reg_reg() {
        let bytes = encode_major04_rr(0x09, 2, 1, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntRight);
    }

    #[test]
    fn asr_reg_reg() {
        let bytes = encode_major04_rr(0x0A, 2, 1, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSright);
    }

    #[test]
    fn cmp_reg_reg() {
        let bytes = encode_major04_rr(0x0B, 0, 3, 4);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        // CMP writes to a temp, not a core register
        let out = r.ir_ops[0].output.unwrap();
        assert_eq!(out.space, unlace_ir::SpaceId::Unique);
    }

    #[test]
    fn mov_reg_reg() {
        // MOV r5, r7: subop=0x0C
        let bytes = encode_major04_rr(0x0C, 5, 0, 7);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(reg(5)));
        assert_eq!(r.ir_ops[0].inputs[0], reg(7));
    }

    #[test]
    fn unknown_major04_subop() {
        let bytes = encode_major04_rr(0x3F, 0, 0, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }

    // -- 32-bit Load/Store (major 0x02, 0x03) --

    #[test]
    fn load_32bit_emits_add_then_load() {
        // Major 0x02 → LD instruction; just check structure
        let w: u32 = (0x02 << 27) | (0x01 << 24); // b=1 (partial)
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0x3000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[1].op, IrOp::Load);
    }

    #[test]
    fn store_32bit_emits_add_then_store() {
        let w: u32 = (0x03 << 27) | (0x01 << 24);
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0x3000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[1].op, IrOp::Store);
    }

    // -- 32-bit Branch (major 0x00) --

    #[test]
    fn branch_32bit() {
        let w: u32 = 0x00 << 27; // major 0x00, offset bits = 0 → branch to self
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0x4000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
    }

    // -- 32-bit BL (major 0x01) --

    #[test]
    fn bl_32bit_saves_blink_and_calls() {
        let w: u32 = 0x01 << 27;
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0x5000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy); // save return addr
        assert_eq!(r.ir_ops[0].output, Some(reg(REG_BLINK)));
        assert_eq!(r.ir_ops[1].op, IrOp::Call);
    }

    // -- 32-bit J/JL (major 0x05) --

    #[test]
    fn jump_indirect_major05() {
        // J [r5]: major=0x05, subop2=0x20, c=5
        let w: u32 = (0x05 << 27) | (0x20 << 16) | 5;
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branchind);
        assert_eq!(r.ir_ops[0].inputs[0], reg(5));
    }

    #[test]
    fn jl_indirect_major05() {
        let w: u32 = (0x05 << 27) | (0x22 << 16) | 3;
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy); // save blink
        assert_eq!(r.ir_ops[1].op, IrOp::Callind);
    }

    #[test]
    fn return_major05() {
        let w: u32 = (0x05 << 27) | (0x21 << 16);
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    // -- 32-bit conditional branch (major 0x08..=0x0B) --

    #[test]
    fn branch_on_compare() {
        let w: u32 = (0x08 << 27) | (0x01 << 24) | 2; // b=1, c=2
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(r.ir_ops[1].op, IrOp::Cbranch);
    }

    // -- 16-bit NOP --

    #[test]
    fn nop_16bit() {
        // NOP_S: major=0x0F, sub5=0x07, b=0, c=0
        // hw = (0x0F << 11) | (0x00 << 8) | (0x07 << 5) | 0x00
        let hw: u16 = (0x0F << 11) | (0x07 << 5);
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
    }

    // -- 16-bit MOV_S --

    #[test]
    fn mov_s_u8() {
        // MOV_S r3, 0x42: major=0x1D, b=3, u8=0x42
        let hw: u16 = (0x1D << 11) | (3 << 8) | 0x42;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(reg(3)));
        assert_eq!(r.ir_ops[0].inputs[0], imm(0x42));
    }

    // -- 16-bit ADD_S with immediate --

    #[test]
    fn add_s_u7() {
        // ADD_S r2, r2, 10: major=0x1C, b=2, u7=10
        let hw: u16 = (0x1C << 11) | (2 << 8) | 10;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].inputs[1], imm(10));
    }

    // -- 16-bit B_S (branch) --

    #[test]
    fn branch_s_16bit() {
        // B_S with offset 0: major=0x1E, s9=0
        let hw: u16 = 0x1E << 11;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0x2000).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
    }

    // -- 16-bit BL_S (call) --

    #[test]
    fn bl_s_16bit() {
        let hw: u16 = 0x1F << 11;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0x3000).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy); // save blink
        assert_eq!(r.ir_ops[1].op, IrOp::Call);
    }

    // -- 16-bit LD_S --

    #[test]
    fn ld_s_16bit() {
        // LD_S r1, [r2, 0]: major=0x0C, c=1, b=2, u5=0
        let hw: u16 = (0x0C << 11) | (1 << 8) | (2 << 5) | 0;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd); // address calc
        assert_eq!(r.ir_ops[1].op, IrOp::Load);
    }

    // -- 16-bit ST_S --

    #[test]
    fn st_s_16bit() {
        // ST_S r1, [r2, 0]: major=0x18
        let hw: u16 = (0x18 << 11) | (1 << 8) | (2 << 5) | 0;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[1].op, IrOp::Store);
    }

    // -- 16-bit SP-relative load --

    #[test]
    fn ld_s_sp_relative() {
        // major=0x19, b=0, u7=4 → offset = 4<<2 = 16
        let hw: u16 = (0x19 << 11) | (0 << 8) | 4;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].inputs[0], reg(REG_SP)); // SP-based
        assert_eq!(r.ir_ops[1].op, IrOp::Load);
    }

    // -- 16-bit J_S indirect --

    #[test]
    fn j_s_indirect() {
        // J_S [r3]: major=0x0F, sub5=0x00, b=3
        let hw: u16 = (0x0F << 11) | (0x00 << 5) | 3;
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Branchind);
        assert_eq!(r.ir_ops[0].inputs[0], reg(3));
    }

    // -- Instruction length detection --

    #[test]
    fn format_detection_32bit() {
        // Any major <= 0x0B is 32-bit; test with major=0x04 (ALU)
        let bytes = encode_major04_rr(0x00, 0, 0, 0);
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 4);
    }

    #[test]
    fn format_detection_16bit() {
        // Any major >= 0x0C is 16-bit
        let hw: u16 = 0x1D << 11; // MOV_S
        let bytes = hw.to_be_bytes();
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.len, 2);
    }

    // -- Major-04 with immediate (format 01) --

    #[test]
    fn add_reg_imm_u6() {
        // ADD r5, r1, 7: major=0x04, fmt=01, subop=0x00, a=5, b=1, u6=7
        let b: u8 = 1;
        let b_hi = (b >> 3) & 0x07;
        let b_lo = b & 0x07;
        let w: u32 = (0x04 << 27)
            | ((b_hi as u32) << 24)
            | (0b01 << 22)
            | (0x00 << 16) // ADD
            | ((b_lo as u32) << 12)
            | (5 << 6) // a=5
            | 7; // u6 imm
        let hw0 = (w >> 16) as u16;
        let hw1 = (w & 0xFFFF) as u16;
        let h0 = hw0.to_be_bytes();
        let h1 = hw1.to_be_bytes();
        let bytes = [h0[0], h0[1], h1[0], h1[1]];
        let r = lifter().lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(reg(5)));
        assert_eq!(r.ir_ops[0].inputs[0], reg(1));
        assert_eq!(r.ir_ops[0].inputs[1], imm(7));
    }
}
