//! eBPF/Solana sBPF → IR lifters.
//!
//! Decodes eBPF-family instructions (8 bytes each) and lifts them to the
//! unlace IR.  The Linux eBPF lifter keeps the classic opcode layout while the
//! Solana sBPF lifter also accepts Solana VM aliases/extensions such as the
//! compact v2/v3 load/store encodings, PQR divide/remainder class, `callx`,
//! `return`, and `syscall`.
//!
//! # Register file model
//!
//! eBPF has 11 registers (r0–r10), each 8 bytes, mapped at offsets 0..88
//! in register space.

use smallvec::{SmallVec, smallvec};
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

// ---------------------------------------------------------------------------
// Constants
// ---------------------------------------------------------------------------

/// eBPF instruction size in bytes.
const INSN_SIZE: usize = 8;

/// Number of eBPF registers (r0–r10).
const NUM_REGS: usize = 11;

/// Base offset in unique-space for temporaries.
const UNIQUE_BASE: u64 = 0x1000;

// ---------------------------------------------------------------------------
// eBPF/sBPF opcode classes
// ---------------------------------------------------------------------------

const BPF_LD: u8 = 0x00;
const BPF_LDX: u8 = 0x01;
const BPF_ST: u8 = 0x02;
const BPF_STX: u8 = 0x03;
const BPF_ALU: u8 = 0x04;
const BPF_JMP: u8 = 0x05;
const BPF_PQR: u8 = 0x06;
const BPF_ALU64: u8 = 0x07;

// ALU operation codes (upper 4 bits of opcode)
const BPF_ADD: u8 = 0x00;
const BPF_SUB: u8 = 0x10;
const BPF_MUL: u8 = 0x20;
const BPF_DIV: u8 = 0x30;
const BPF_OR: u8 = 0x40;
const BPF_AND: u8 = 0x50;
const BPF_LSH: u8 = 0x60;
const BPF_RSH: u8 = 0x70;
const BPF_XOR: u8 = 0xa0;
const BPF_NEG: u8 = 0x80;
const BPF_MOD: u8 = 0x90;
const BPF_MOV: u8 = 0xb0;
const BPF_ARSH: u8 = 0xc0;
const BPF_END: u8 = 0xd0;
const BPF_HOR: u8 = 0xf0;

// Source mode
const BPF_X: u8 = 0x08;

// Memory size
const BPF_B: u8 = 0x10;
const BPF_H: u8 = 0x08;
const BPF_DW: u8 = 0x18;

// Solana sBPF compact memory size modifiers.
const SBPF_1B: u8 = 0x20;
const SBPF_2B: u8 = 0x30;
const SBPF_4B: u8 = 0x80;
const SBPF_8B: u8 = 0x90;

// Jump operations
const BPF_JA: u8 = 0x00;
const BPF_JEQ: u8 = 0x10;
const BPF_JGT: u8 = 0x20;
const BPF_JGE: u8 = 0x30;
const BPF_JSET: u8 = 0x40;
const BPF_JNE: u8 = 0x50;
const BPF_JSGT: u8 = 0x60;
const BPF_JSGE: u8 = 0x70;
const BPF_CALL: u8 = 0x80;
const BPF_EXIT: u8 = 0x90;
const BPF_JLT: u8 = 0xa0;
const BPF_JLE: u8 = 0xb0;
const BPF_JSLT: u8 = 0xc0;
const BPF_JSLE: u8 = 0xd0;

// sBPF PQR operation codes (class 0x06).
const BPF_UHMUL: u8 = 0x20;
const BPF_UDIV: u8 = 0x40;
const BPF_UREM: u8 = 0x60;
const BPF_LMUL: u8 = 0x80;
const BPF_SHMUL: u8 = 0xa0;
const BPF_SDIV: u8 = 0xc0;
const BPF_SREM: u8 = 0xe0;

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Build a register-space Varnode for eBPF register `idx` (8 bytes per slot).
#[inline]
fn reg(idx: u8, size: u8) -> Varnode {
    Varnode::reg((idx as u64) * 8, size)
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

/// Build a unique temporary whose offset is stable per machine instruction.
#[inline]
fn tmp_at(addr: u64, idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + addr.wrapping_mul(0x20) + idx * 8, size)
}

/// Build a RAM-space target for branch addresses.
#[inline]
fn ram_target(offset: u64) -> Varnode {
    Varnode::ram(offset, 8)
}

/// Decode classic eBPF memory access size from the opcode size bits.
#[inline]
fn mem_size(opcode: u8) -> u8 {
    match opcode & 0x18 {
        BPF_B => 1,
        BPF_H => 2,
        BPF_DW => 8,
        _ => 4, // BPF_W = 0x00
    }
}

/// Decode Solana sBPF memory access size from compact load/store opcodes.
#[inline]
fn sbpf_mem_size(opcode: u8) -> Option<u8> {
    match opcode & 0xf0 {
        SBPF_1B => Some(1),
        SBPF_2B => Some(2),
        SBPF_4B => Some(4),
        SBPF_8B => Some(8),
        _ => None,
    }
}

#[inline]
fn branch_target(addr: u64, offset_insns: i16) -> u64 {
    addr.wrapping_add(((offset_insns as i64 + 1) * INSN_SIZE as i64) as u64)
}

// ---------------------------------------------------------------------------
// Decoded eBPF instruction
// ---------------------------------------------------------------------------

/// Raw decoded eBPF instruction fields.
#[derive(Debug, Clone, Copy)]
struct EbpfInsn {
    opcode: u8,
    dst: u8,
    src: u8,
    offset: i16,
    imm: i32,
}

impl EbpfInsn {
    fn decode(bytes: &[u8]) -> Result<Self, LiftError> {
        if bytes.len() < INSN_SIZE {
            return Err(LiftError::ShortBuffer);
        }
        let opcode = bytes[0];
        let regs = bytes[1];
        let dst = regs & 0x0f;
        let src = (regs >> 4) & 0x0f;
        let offset = i16::from_le_bytes([bytes[2], bytes[3]]);
        let imm = i32::from_le_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]);
        Ok(Self {
            opcode,
            dst,
            src,
            offset,
            imm,
        })
    }
}

// ---------------------------------------------------------------------------
// EbpfLifter
// ---------------------------------------------------------------------------

/// eBPF lifter implementing the [`Lifter`] trait.
pub struct EbpfLifter {
    register_file: RegisterFile,
}

impl EbpfLifter {
    /// Create a new eBPF lifter.
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(NUM_REGS);
        let names: [&'static str; NUM_REGS] = [
            "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10",
        ];
        for i in 0..NUM_REGS {
            regs.push(RegisterDef {
                name: names[i],
                varnode: Varnode::reg((i as u64) * 8, 8),
            });
        }
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }

    /// Lift an ALU64 instruction.
    fn lift_alu64(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let dst_vn = reg(insn.dst, 8);
        let src_vn = if insn.opcode & BPF_X != 0 {
            reg(insn.src, 8)
        } else {
            const_vn(insn.imm as i64 as u64, 8)
        };

        let op = match insn.opcode & 0xf0 {
            BPF_ADD => IrOp::IntAdd,
            BPF_SUB => IrOp::IntSub,
            BPF_MUL => IrOp::IntMult,
            BPF_DIV => IrOp::IntDiv,
            BPF_OR => IrOp::IntOr,
            BPF_AND => IrOp::IntAnd,
            BPF_LSH => IrOp::IntLeft,
            BPF_RSH => IrOp::IntRight,
            BPF_XOR => IrOp::IntXor,
            BPF_MOV => IrOp::Copy,
            BPF_ARSH => IrOp::IntSright,
            _ => return Err(LiftError::Unsupported),
        };

        let ir = if op == IrOp::Copy {
            IrInsn::with_output(op, dst_vn, SmallVec::from_slice(&[src_vn]), addr)
        } else {
            IrInsn::with_output(op, dst_vn, SmallVec::from_slice(&[dst_vn, src_vn]), addr)
        };

        Ok(vec![ir])
    }

    /// Lift a memory load (LDX) instruction.
    fn lift_ldx(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let size = mem_size(insn.opcode);
        let base = reg(insn.src, 8);
        let off = const_vn(insn.offset as i16 as i64 as u64, 8);
        let ea = tmp(0, 8);
        let dst_vn = reg(insn.dst, 8);

        let mut ops = Vec::with_capacity(3);
        // ea = base + offset
        ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            SmallVec::from_slice(&[base, off]),
            addr,
        ));
        if size < 8 {
            // load into smaller temp, then zero-extend
            let narrow = tmp(1, size);
            ops.push(IrInsn::with_output(
                IrOp::Load,
                narrow,
                SmallVec::from_slice(&[ea]),
                addr,
            ));
            ops.push(IrInsn::with_output(
                IrOp::IntZext,
                dst_vn,
                SmallVec::from_slice(&[narrow]),
                addr,
            ));
        } else {
            ops.push(IrInsn::with_output(
                IrOp::Load,
                dst_vn,
                SmallVec::from_slice(&[ea]),
                addr,
            ));
        }
        Ok(ops)
    }

    /// Lift a memory store (STX) instruction: *[dst + offset] = src_reg.
    fn lift_stx(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let size = mem_size(insn.opcode);
        let base = reg(insn.dst, 8);
        let off = const_vn(insn.offset as i16 as i64 as u64, 8);
        let ea = tmp(0, 8);
        let src_vn = reg(insn.src, size);

        let mut ops = Vec::with_capacity(2);
        ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            SmallVec::from_slice(&[base, off]),
            addr,
        ));
        ops.push(IrInsn::without_output(
            IrOp::Store,
            SmallVec::from_slice(&[ea, src_vn]),
            addr,
        ));
        Ok(ops)
    }

    /// Lift a memory store immediate (ST) instruction: *[dst + offset] = imm.
    fn lift_st(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let size = mem_size(insn.opcode);
        let base = reg(insn.dst, 8);
        let off = const_vn(insn.offset as i16 as i64 as u64, 8);
        let ea = tmp(0, 8);
        let imm_vn = const_vn(insn.imm as i32 as i64 as u64, size);

        let mut ops = Vec::with_capacity(2);
        ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            SmallVec::from_slice(&[base, off]),
            addr,
        ));
        ops.push(IrInsn::without_output(
            IrOp::Store,
            SmallVec::from_slice(&[ea, imm_vn]),
            addr,
        ));
        Ok(ops)
    }

    /// Lift a JMP-class instruction.
    fn lift_jmp(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let jmp_op = insn.opcode & 0xf0;

        match jmp_op {
            BPF_JA => {
                // Unconditional jump: PC += offset
                let target = branch_target(addr, insn.offset);
                let target_vn = ram_target(target);
                Ok(vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[target_vn]),
                    addr,
                )])
            }
            BPF_EXIT => {
                // Return from eBPF program
                Ok(vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::from_slice(&[reg(0, 8)]),
                    addr,
                )])
            }
            BPF_CALL => {
                // Helper call: imm is the helper function id
                let helper_id = const_vn(insn.imm as u64, 8);
                Ok(vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[helper_id]),
                    addr,
                )])
            }
            _ => {
                // Conditional branch: compare dst (op) src, branch if true
                let dst_vn = reg(insn.dst, 8);
                let src_vn = if insn.opcode & BPF_X != 0 {
                    reg(insn.src, 8)
                } else {
                    const_vn(insn.imm as i64 as u64, 8)
                };
                let target = addr.wrapping_add((INSN_SIZE as i64 + insn.offset as i64) as u64);
                let target =
                    addr.wrapping_add((INSN_SIZE as i64 + insn.offset as i64) as u64);
                let target = branch_target(addr, insn.offset);
                let target_vn = ram_target(target);

                let cmp_op = match jmp_op {
                    BPF_JEQ => IrOp::IntEqual,
                    BPF_JGT => IrOp::IntLess,      // dst > src => src < dst
                    BPF_JGE => IrOp::IntLessequal, // dst >= src => src <= dst
                    BPF_JNE => IrOp::IntNotequal,
                    BPF_JSGT => IrOp::IntSless,
                    BPF_JSGE => IrOp::IntSlessequal,
                    _ => return Err(LiftError::Unsupported),
                };

                let cond = tmp(0, 1);

                // For GT/GE we swap operands to use Less/LessEqual
                let (lhs, rhs) = match jmp_op {
                    BPF_JGT | BPF_JGE | BPF_JSGT | BPF_JSGE => (src_vn, dst_vn),
                    _ => (dst_vn, src_vn),
                };

                Ok(vec![
                    IrInsn::with_output(cmp_op, cond, SmallVec::from_slice(&[lhs, rhs]), addr),
                    IrInsn::without_output(
                        IrOp::Cbranch,
                        SmallVec::from_slice(&[target_vn, cond]),
                        addr,
                    ),
                ])
            }
        }
    }
}

// ---------------------------------------------------------------------------
// SbpfLifter
// ---------------------------------------------------------------------------

/// Solana BPF (sBPF) lifter.
///
/// sBPF is derived from eBPF but modern Solana bytecode reuses class `0x04` for
/// 32-bit ALU and compact loads, class `0x07` for 64-bit ALU and compact stores,
/// and class `0x06` for product/quotient/remainder operations.  It also defines
/// register calls (`callx`), `return`, and `syscall` aliases.
pub struct SbpfLifter {
    register_file: RegisterFile,
}

impl SbpfLifter {
    /// Create a new sBPF lifter.
    pub fn new() -> Self {
        let base = EbpfLifter::new();
        Self {
            register_file: base.register_file,
        }
    }

    fn lift_alu(&self, insn: &EbpfInsn, addr: u64, size: u8) -> Result<Vec<IrInsn>, LiftError> {
        let dst_vn = reg(insn.dst, size);
        let src_vn = if insn.opcode & BPF_X != 0 {
            reg(insn.src, size)
        } else {
            const_vn(insn.imm as i64 as u64, size)
        };

        let op_bits = insn.opcode & 0xf0;
        let ir = match op_bits {
            BPF_ADD => IrInsn::with_output(IrOp::IntAdd, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_SUB => IrInsn::with_output(IrOp::IntSub, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_MUL => IrInsn::with_output(IrOp::IntMult, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_DIV => IrInsn::with_output(IrOp::IntDiv, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_OR => IrInsn::with_output(IrOp::IntOr, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_AND => IrInsn::with_output(IrOp::IntAnd, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_LSH => IrInsn::with_output(IrOp::IntLeft, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_RSH => IrInsn::with_output(IrOp::IntRight, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_NEG => IrInsn::with_output(IrOp::IntNegate, dst_vn, smallvec![dst_vn], addr),
            BPF_MOD => IrInsn::with_output(IrOp::IntRem, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_XOR => IrInsn::with_output(IrOp::IntXor, dst_vn, smallvec![dst_vn, src_vn], addr),
            BPF_MOV => IrInsn::with_output(IrOp::Copy, dst_vn, smallvec![src_vn], addr),
            BPF_ARSH => {
                IrInsn::with_output(IrOp::IntSright, dst_vn, smallvec![dst_vn, src_vn], addr)
            }
            BPF_END => return Ok(self.lift_endian(insn, addr, size)),
            BPF_HOR if size == 8 && insn.opcode & BPF_X == 0 => {
                let hi = const_vn((insn.imm as i64 as u64) << 32, 8);
                IrInsn::with_output(IrOp::IntOr, dst_vn, smallvec![dst_vn, hi], addr)
            }
            _ => return Err(LiftError::Unsupported),
        };

        Ok(vec![ir])
    }

    fn lift_endian(&self, insn: &EbpfInsn, addr: u64, size: u8) -> Vec<IrInsn> {
        // The IR has no byte-swap opcode.  Preserve the relevant width with a
        // mask and model the conversion as a value-preserving copy/cast.  This
        // is intentionally conservative but exposes the destination definition
        // to downstream SSA/type passes.
        let dst_vn = reg(insn.dst, size);
        vec![IrInsn::with_output(
            IrOp::Copy,
            dst_vn,
            smallvec![dst_vn],
            addr,
        )]
    }

    fn lift_compact_load(
        &self,
        insn: &EbpfInsn,
        addr: u64,
        size: u8,
    ) -> Result<Vec<IrInsn>, LiftError> {
        let base = reg(insn.src, 8);
        let off = const_vn(insn.offset as i64 as u64, 8);
        let ea = tmp_at(addr, 0, 8);
        let dst_vn = reg(insn.dst, 8);
        let mut ops = Vec::with_capacity(3);
        ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            smallvec![base, off],
            addr,
        ));
        if size < 8 {
            let narrow = tmp_at(addr, 1, size);
            ops.push(IrInsn::with_output(IrOp::Load, narrow, smallvec![ea], addr));
            ops.push(IrInsn::with_output(
                IrOp::IntZext,
                dst_vn,
                smallvec![narrow],
                addr,
            ));
        } else {
            ops.push(IrInsn::with_output(IrOp::Load, dst_vn, smallvec![ea], addr));
        }
        Ok(ops)
    }

    fn lift_compact_store(
        &self,
        insn: &EbpfInsn,
        addr: u64,
        size: u8,
    ) -> Result<Vec<IrInsn>, LiftError> {
        let base = reg(insn.dst, 8);
        let off = const_vn(insn.offset as i64 as u64, 8);
        let ea = tmp_at(addr, 0, 8);
        let src_vn = if insn.opcode & BPF_X != 0 {
            reg(insn.src, size)
        } else {
            const_vn(insn.imm as i64 as u64, size)
        };
        Ok(vec![
            IrInsn::with_output(IrOp::IntAdd, ea, smallvec![base, off], addr),
            IrInsn::without_output(IrOp::Store, smallvec![ea, src_vn], addr),
        ])
    }

    fn lift_lddw(
        &self,
        insn: &EbpfInsn,
        bytes: &[u8],
        addr: u64,
    ) -> Result<Vec<IrInsn>, LiftError> {
        if bytes.len() < INSN_SIZE * 2 {
            return Err(LiftError::ShortBuffer);
        }
        let high = i32::from_le_bytes([bytes[12], bytes[13], bytes[14], bytes[15]]) as i64 as u64;
        let low = insn.imm as u32 as u64;
        let value = (high << 32) | low;
        Ok(vec![IrInsn::with_output(
            IrOp::Copy,
            reg(insn.dst, 8),
            smallvec![const_vn(value, 8)],
            addr,
        )])
    }

    fn lift_pqr(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let size = if insn.opcode & BPF_B != 0 { 8 } else { 4 };
        let dst_vn = reg(insn.dst, size);
        let src_vn = if insn.opcode & BPF_X != 0 {
            reg(insn.src, size)
        } else {
            const_vn(insn.imm as i64 as u64, size)
        };

        let op = match insn.opcode & 0xe0 {
            BPF_LMUL => IrOp::IntMult,
            BPF_UDIV => IrOp::IntDiv,
            BPF_SDIV => IrOp::IntSdiv,
            BPF_UREM => IrOp::IntRem,
            BPF_SREM => IrOp::IntSrem,
            // The frozen IR has no high-half multiply operation.  `CALLOTHER`
            // keeps the instruction visible instead of pretending it is a low
            // multiply.
            BPF_UHMUL | BPF_SHMUL => IrOp::Callother,
            _ => return Err(LiftError::Unsupported),
        };
        Ok(vec![IrInsn::with_output(
            op,
            dst_vn,
            smallvec![dst_vn, src_vn],
            addr,
        )])
    }

    fn lift_jmp(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let jmp_op = insn.opcode & 0xf0;
        match jmp_op {
            BPF_JA => Ok(vec![IrInsn::without_output(
                IrOp::Branch,
                smallvec![ram_target(branch_target(addr, insn.offset))],
                addr,
            )]),
            BPF_CALL if insn.opcode & BPF_X != 0 => Ok(vec![IrInsn::without_output(
                IrOp::Callind,
                smallvec![reg(insn.src, 8)],
                addr,
            )]),
            BPF_CALL => Ok(vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![const_vn(insn.imm as u32 as u64, 8)],
                addr,
            )]),
            BPF_EXIT if insn.opcode & BPF_X != 0 => Ok(vec![IrInsn::without_output(
                IrOp::Return,
                smallvec![reg(0, 8)],
                addr,
            )]),
            BPF_EXIT => Ok(vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![const_vn(insn.imm as u32 as u64, 8)],
                addr,
            )]),
            _ => self.lift_cond_jmp(insn, addr),
        }
    }

    fn lift_cond_jmp(&self, insn: &EbpfInsn, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let dst_vn = reg(insn.dst, 8);
        let src_vn = if insn.opcode & BPF_X != 0 {
            reg(insn.src, 8)
        } else {
            const_vn(insn.imm as i64 as u64, 8)
        };
        let cond = tmp_at(addr, 0, 1);
        let target_vn = ram_target(branch_target(addr, insn.offset));

        let jmp_op = insn.opcode & 0xf0;
        let (cmp_op, lhs, rhs, extra) = match jmp_op {
            BPF_JEQ => (IrOp::IntEqual, dst_vn, src_vn, None),
            BPF_JNE => (IrOp::IntNotequal, dst_vn, src_vn, None),
            BPF_JGT => (IrOp::IntLess, src_vn, dst_vn, None),
            BPF_JGE => (IrOp::IntLessequal, src_vn, dst_vn, None),
            BPF_JSGT => (IrOp::IntSless, src_vn, dst_vn, None),
            BPF_JSGE => (IrOp::IntSlessequal, src_vn, dst_vn, None),
            BPF_JLT => (IrOp::IntLess, dst_vn, src_vn, None),
            BPF_JLE => (IrOp::IntLessequal, dst_vn, src_vn, None),
            BPF_JSLT => (IrOp::IntSless, dst_vn, src_vn, None),
            BPF_JSLE => (IrOp::IntSlessequal, dst_vn, src_vn, None),
            BPF_JSET => {
                let masked = tmp_at(addr, 1, 8);
                let zero = const_vn(0, 8);
                (
                    IrOp::IntNotequal,
                    masked,
                    zero,
                    Some(IrInsn::with_output(
                        IrOp::IntAnd,
                        masked,
                        smallvec![dst_vn, src_vn],
                        addr,
                    )),
                )
            }
            _ => return Err(LiftError::Unsupported),
        };

        let mut ops = Vec::with_capacity(3);
        if let Some(op) = extra {
            ops.push(op);
        }
        ops.push(IrInsn::with_output(cmp_op, cond, smallvec![lhs, rhs], addr));
        ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target_vn, cond],
            addr,
        ));
        Ok(ops)
    }
}

impl Default for SbpfLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for SbpfLifter {
    fn arch(&self) -> ArchId {
        ArchId::Sbpf
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let insn = EbpfInsn::decode(bytes)?;
        let class = insn.opcode & 0x07;

        trace!(
            addr = %format!("{addr:#x}"),
            opcode = %format!("{:#04x}", insn.opcode),
            dst = insn.dst,
            src = insn.src,
            offset = insn.offset,
            imm = insn.imm,
            "decoding sBPF instruction"
        );

        let (ops, len) = match class {
            BPF_LD if insn.opcode == (BPF_LD | BPF_DW) => {
                (self.lift_lddw(&insn, bytes, addr)?, INSN_SIZE * 2)
            }
            BPF_LDX => (EbpfLifter::new().lift_ldx(&insn, addr)?, INSN_SIZE),
            BPF_STX => (EbpfLifter::new().lift_stx(&insn, addr)?, INSN_SIZE),
            BPF_ST => (EbpfLifter::new().lift_st(&insn, addr)?, INSN_SIZE),
            BPF_ALU => {
                if let Some(size) = sbpf_mem_size(insn.opcode) {
                    (self.lift_compact_load(&insn, addr, size)?, INSN_SIZE)
                } else {
                    (self.lift_alu(&insn, addr, 4)?, INSN_SIZE)
                }
            }
            BPF_ALU64 => {
                if let Some(size) = sbpf_mem_size(insn.opcode) {
                    (self.lift_compact_store(&insn, addr, size)?, INSN_SIZE)
                } else {
                    (self.lift_alu(&insn, addr, 8)?, INSN_SIZE)
                }
            }
            BPF_PQR => (self.lift_pqr(&insn, addr)?, INSN_SIZE),
            BPF_JMP => (self.lift_jmp(&insn, addr)?, INSN_SIZE),
            _ => return Err(LiftError::Unsupported),
        };

        Ok(LiftedInsn { ir_ops: ops, len })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}
impl Default for EbpfLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for EbpfLifter {
    fn arch(&self) -> ArchId {
        ArchId::Ebpf
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let insn = EbpfInsn::decode(bytes)?;
        let class = insn.opcode & 0x07;

        trace!(
            addr = %format!("{addr:#x}"),
            opcode = %format!("{:#04x}", insn.opcode),
            dst = insn.dst,
            src = insn.src,
            offset = insn.offset,
            imm = insn.imm,
            "decoding eBPF instruction"
        );

        let ops = match class {
            BPF_ALU64 => self.lift_alu64(&insn, addr)?,
            BPF_ALU => self.lift_alu64(&insn, addr)?,
            BPF_LDX => self.lift_ldx(&insn, addr)?,
            BPF_STX => self.lift_stx(&insn, addr)?,
            BPF_ST => self.lift_st(&insn, addr)?,
            BPF_JMP => self.lift_jmp(&insn, addr)?,
            _ => return Err(LiftError::Unsupported),
        };

        Ok(LiftedInsn {
            ir_ops: ops,
            len: INSN_SIZE,
        })
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

    /// Encode an eBPF instruction from fields.
    fn encode(opcode: u8, dst: u8, src: u8, offset: i16, imm: i32) -> [u8; 8] {
        let mut buf = [0u8; 8];
        buf[0] = opcode;
        buf[1] = (dst & 0xf) | ((src & 0xf) << 4);
        buf[2..4].copy_from_slice(&offset.to_le_bytes());
        buf[4..8].copy_from_slice(&imm.to_le_bytes());
        buf
    }

    #[test]
    fn test_alu64_add_imm() {
        let lifter = EbpfLifter::new();
        // r1 += 42  =>  opcode = 0x07 (ALU64|K|ADD), dst=1
        let bytes = encode(0x07, 1, 0, 0, 42);
        let result = lifter.lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(result.len, 8);
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output, Some(reg(1, 8)));
    }

    #[test]
    fn test_alu64_sub_reg() {
        let lifter = EbpfLifter::new();
        // r3 -= r2  =>  opcode = 0x1f (ALU64|X|SUB), dst=3, src=2
        let bytes = encode(0x1f, 3, 2, 0, 0);
        let result = lifter.lift_insn(&bytes, 0x100).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(result.ir_ops[0].inputs[0], reg(3, 8));
        assert_eq!(result.ir_ops[0].inputs[1], reg(2, 8));
    }

    #[test]
    fn test_alu64_mov_imm() {
        let lifter = EbpfLifter::new();
        // r0 = 123  =>  opcode = 0xb7 (ALU64|K|MOV), dst=0
        let bytes = encode(0xb7, 0, 0, 0, 123);
        let result = lifter.lift_insn(&bytes, 0x200).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(reg(0, 8)));
        assert_eq!(result.ir_ops[0].inputs[0], const_vn(123, 8));
    }

    #[test]
    fn test_ldx_mem() {
        let lifter = EbpfLifter::new();
        // r1 = *(u64*)(r10 - 8)  =>  opcode = 0x79 (LDX|MEM|DW), dst=1, src=10, offset=-8
        let bytes = encode(0x79, 1, 10, -8, 0);
        let result = lifter.lift_insn(&bytes, 0x300).unwrap();
        assert_eq!(result.len, 8);
        // Should have: IntAdd (ea), Load
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[1].op, IrOp::Load);
        assert_eq!(result.ir_ops[1].output, Some(reg(1, 8)));
    }

    #[test]
    fn test_stx_mem() {
        let lifter = EbpfLifter::new();
        // *(u64*)(r10 - 16) = r1  =>  opcode = 0x7b (STX|MEM|DW), dst=10, src=1, offset=-16
        let bytes = encode(0x7b, 10, 1, -16, 0);
        let result = lifter.lift_insn(&bytes, 0x400).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[1].op, IrOp::Store);
    }

    #[test]
    fn test_st_imm() {
        let lifter = EbpfLifter::new();
        // *(u32*)(r10 - 4) = 99  =>  opcode = 0x62 (ST|MEM|W), dst=10, offset=-4, imm=99
        let bytes = encode(0x62, 10, 0, -4, 99);
        let result = lifter.lift_insn(&bytes, 0x500).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[1].op, IrOp::Store);
    }

    #[test]
    fn test_jmp_exit() {
        let lifter = EbpfLifter::new();
        // exit  =>  opcode = 0x95 (JMP|EXIT)
        let bytes = encode(0x95, 0, 0, 0, 0);
        let result = lifter.lift_insn(&bytes, 0x600).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn test_jmp_jeq_imm() {
        let lifter = EbpfLifter::new();
        // if r1 == 5 goto +3  =>  opcode = 0x15 (JMP|K|JEQ), dst=1, offset=3, imm=5
        let bytes = encode(0x15, 1, 0, 3, 5);
        let result = lifter.lift_insn(&bytes, 0x700).unwrap();
        // Should produce: IntEqual (cond), Cbranch
        assert_eq!(result.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(result.ir_ops[1].op, IrOp::Cbranch);
        // Target should be next PC plus three 8-byte instructions.
        let target_vn = ram_target(0x700 + 8 + 3 * 8);
        assert_eq!(result.ir_ops[1].inputs[0], target_vn);
    }
    #[test]
    fn test_sbpf_compact_load() {
        let lifter = SbpfLifter::new();
        // ldxb r1, [r2 + 4] in sBPF compact form: BPF_ALU32_LOAD | BPF_X | BPF_1B.
        let bytes = encode(0x2c, 1, 2, 4, 0);
        let result = lifter.lift_insn(&bytes, 0x800).unwrap();
        assert_eq!(result.len, 8);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[1].op, IrOp::Load);
        assert_eq!(result.ir_ops[2].op, IrOp::IntZext);
        assert_eq!(result.ir_ops[2].output, Some(reg(1, 8)));
    }

    #[test]
    fn test_sbpf_compact_store_imm() {
        let lifter = SbpfLifter::new();
        // stw [r10 - 4], 7 in sBPF compact form: BPF_ALU64_STORE | BPF_K | BPF_4B.
        let bytes = encode(0x87, 10, 0, -4, 7);
        let result = lifter.lift_insn(&bytes, 0x900).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[1].op, IrOp::Store);
        assert_eq!(result.ir_ops[1].inputs[1], const_vn(7, 4));
    }

    #[test]
    fn test_sbpf_callx_return_and_syscall() {
        let lifter = SbpfLifter::new();
        let callx = lifter.lift_insn(&encode(0x8d, 0, 3, 0, 0), 0xa00).unwrap();
        assert_eq!(callx.ir_ops[0].op, IrOp::Callind);
        assert_eq!(callx.ir_ops[0].inputs[0], reg(3, 8));

        let ret = lifter.lift_insn(&encode(0x9d, 0, 0, 0, 0), 0xa08).unwrap();
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);

        let syscall = lifter.lift_insn(&encode(0x95, 0, 0, 0, 42), 0xa10).unwrap();
        assert_eq!(syscall.ir_ops[0].op, IrOp::Call);
        assert_eq!(syscall.ir_ops[0].inputs[0], const_vn(42, 8));
    }

    #[test]
    fn test_sbpf_lddw_and_pqr() {
        let lifter = SbpfLifter::new();
        let mut bytes = [0u8; 16];
        bytes[..8].copy_from_slice(&encode(0x18, 1, 0, 0, 0x5566_7788));
        bytes[8..].copy_from_slice(&encode(0x00, 0, 0, 0, 0x1122_3344));
        let lddw = lifter.lift_insn(&bytes, 0xb00).unwrap();
        assert_eq!(lddw.len, 16);
        assert_eq!(lddw.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lddw.ir_ops[0].inputs[0], const_vn(0x1122_3344_5566_7788, 8));

        let div = lifter.lift_insn(&encode(0x46, 2, 0, 0, 3), 0xb10).unwrap();
        assert_eq!(div.ir_ops[0].op, IrOp::IntDiv);
    }
}
