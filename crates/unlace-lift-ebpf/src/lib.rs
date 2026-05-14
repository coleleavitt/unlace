//! eBPF → IR lifter.
//!
//! Decodes eBPF instructions (8 bytes each) and lifts them to the unlace IR.
//! Supports ALU64, memory (LDX/STX/ST), and jump/branch instructions.
//!
//! # Register file model
//!
//! eBPF has 11 registers (r0–r10), each 8 bytes, mapped at offsets 0..88
//! in register space.

use smallvec::SmallVec;
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
// eBPF opcode classes
// ---------------------------------------------------------------------------

const BPF_LDX: u8 = 0x01;
const BPF_ST: u8 = 0x02;
const BPF_STX: u8 = 0x03;
const BPF_ALU: u8 = 0x04;
const BPF_JMP: u8 = 0x05;
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
const BPF_MOV: u8 = 0xb0;
const BPF_ARSH: u8 = 0xc0;

// Source mode
const BPF_X: u8 = 0x08;

// Memory size
const BPF_B: u8 = 0x10;
const BPF_H: u8 = 0x08;
const BPF_DW: u8 = 0x18;

// Jump operations
const BPF_JA: u8 = 0x00;
const BPF_JEQ: u8 = 0x10;
const BPF_JGT: u8 = 0x20;
const BPF_JGE: u8 = 0x30;
const BPF_JNE: u8 = 0x50;
const BPF_JSGT: u8 = 0x60;
const BPF_JSGE: u8 = 0x70;
const BPF_CALL: u8 = 0x80;
const BPF_EXIT: u8 = 0x90;

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

/// Build a RAM-space target for branch addresses.
#[inline]
fn ram_target(offset: u64) -> Varnode {
    Varnode::ram(offset, 8)
}

/// Decode memory access size from the opcode size bits.
#[inline]
fn mem_size(opcode: u8) -> u8 {
    match opcode & 0x18 {
        BPF_B => 1,
        BPF_H => 2,
        BPF_DW => 8,
        _ => 4, // BPF_W = 0x00
    }
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
                let target = addr.wrapping_add((INSN_SIZE as i64 + insn.offset as i64) as u64);
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
                let target =
                    addr.wrapping_add((INSN_SIZE as i64 + insn.offset as i64) as u64);
                let target_vn = ram_target(target);

                let cmp_op = match jmp_op {
                    BPF_JEQ => IrOp::IntEqual,
                    BPF_JGT => IrOp::IntLess, // dst > src => src < dst
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
                    IrInsn::with_output(
                        cmp_op,
                        cond,
                        SmallVec::from_slice(&[lhs, rhs]),
                        addr,
                    ),
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
        // Target should be 0x700 + 8 + 3 = 0x70b
        let target_vn = ram_target(0x700 + 8 + 3);
        assert_eq!(result.ir_ops[1].inputs[0], target_vn);
    }
}
