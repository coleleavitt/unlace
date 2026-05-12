//! RISC-V (RV64I) → IR lifter via capstone.
//!
//! Lifts the RV64I base integer instruction set. Registers x0-x31 plus pc.
//! x0 is hardwired to zero: reads produce `Varnode::constant(0, 8)`,
//! writes are silently dropped.

use capstone::arch::riscv::{RiscVInsn, RiscVOperand, RiscVReg};
use capstone::prelude::*;
use capstone::{Capstone, Instructions};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, SpaceId,
    Varnode,
};

mod rvc;
pub use rvc::{expand, is_compressed};

// ---------------------------------------------------------------------------
// RISC-V scalar crypto Callother tags (Zk*)
// ---------------------------------------------------------------------------

/// Constant tags for RISC-V scalar cryptography instructions emitted as
/// `Callother`. The first input of each intrinsic is one of these constants,
/// followed by the architectural source operands (and immediate/byte-select
/// constants where encoded by the instruction).
pub mod crypto_tag {
    // Keep this range separate from x86 AES-NI/SHA-NI (0x1E0..0x1EC) and
    // other architecture-specific pseudo-op blocks used by the C printer.
    pub const RV_AES32ESI: u64 = 0x260;
    pub const RV_AES32ESMI: u64 = 0x261;
    pub const RV_AES32DSI: u64 = 0x262;
    pub const RV_AES32DSMI: u64 = 0x263;
    pub const RV_AES64ES: u64 = 0x264;
    pub const RV_AES64ESM: u64 = 0x265;
    pub const RV_AES64DS: u64 = 0x266;
    pub const RV_AES64DSM: u64 = 0x267;
    pub const RV_AES64IM: u64 = 0x268;
    pub const RV_AES64KS1I: u64 = 0x269;
    pub const RV_AES64KS2: u64 = 0x26A;

    pub const RV_SHA256SUM0: u64 = 0x270;
    pub const RV_SHA256SUM1: u64 = 0x271;
    pub const RV_SHA256SIG0: u64 = 0x272;
    pub const RV_SHA256SIG1: u64 = 0x273;
    pub const RV_SHA512SUM0: u64 = 0x274;
    pub const RV_SHA512SUM1: u64 = 0x275;
    pub const RV_SHA512SIG0: u64 = 0x276;
    pub const RV_SHA512SIG1: u64 = 0x277;

    pub const RV_SM3P0: u64 = 0x278;
    pub const RV_SM3P1: u64 = 0x279;
    pub const RV_SM4ED: u64 = 0x27A;
    pub const RV_SM4KS: u64 = 0x27B;
}

// ---------------------------------------------------------------------------
// Register file layout
// ---------------------------------------------------------------------------

const RV_REG_NAMES: [&str; 32] = [
    "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "x8", "x9", "x10", "x11", "x12", "x13", "x14",
    "x15", "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27",
    "x28", "x29", "x30", "x31",
];

/// Offset of the pc register in the register file.
const PC_OFFSET: u64 = 256;

/// Convert a capstone `RegId` to a register-space `Varnode`.
/// Returns `None` for x0 (hardwired zero — callers should use `Varnode::constant(0, 8)`).
fn cs_reg_to_varnode(reg: RegId) -> Option<Varnode> {
    let id = reg.0 as u32;
    // capstone riscv_reg: RISCV_REG_X0 = 1, RISCV_REG_X1 = 2, …, RISCV_REG_X31 = 32
    if id == RiscVReg::RISCV_REG_X0 as u32 {
        return None; // x0 is hardwired zero
    }
    if id >= RiscVReg::RISCV_REG_X0 as u32 && id <= RiscVReg::RISCV_REG_X31 as u32 {
        let idx = id - RiscVReg::RISCV_REG_X0 as u32;
        return Some(Varnode::reg((idx as u64) * 8, 8));
    }
    None
}

/// Read a register operand: x0 produces constant zero, others produce register varnodes.
fn read_reg(reg: RegId) -> Varnode {
    cs_reg_to_varnode(reg).unwrap_or(Varnode::constant(0, 8))
}

// ---------------------------------------------------------------------------
// Lift context
// ---------------------------------------------------------------------------

struct LiftCtx {
    ops: Vec<IrInsn>,
    addr: u64,
    unique_counter: u64,
}

impl LiftCtx {
    fn new(addr: u64) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            unique_counter: 0,
        }
    }

    fn alloc_unique(&mut self, size: u8) -> Varnode {
        let id = self.unique_counter;
        self.unique_counter += 1;
        Varnode::unique(id, size)
    }

    fn emit(&mut self, insn: IrInsn) {
        self.ops.push(insn);
    }

    fn emit_unimplemented(&mut self) {
        self.emit(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }

    /// Write `value` to `dst_reg`. If `dst_reg` is x0, the write is silently dropped.
    fn write_reg(&mut self, dst_reg: RegId, value: Varnode) {
        if let Some(dst) = cs_reg_to_varnode(dst_reg) {
            self.emit(IrInsn::with_output(
                IrOp::Copy,
                dst,
                smallvec![value],
                self.addr,
            ));
        }
        // x0 writes are no-ops
    }

    // -- Arithmetic helpers ------------------------------------------------

    fn lift_alu_rr(&mut self, op: IrOp, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = read_reg(rs1);
        let b = read_reg(rs2);
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(op, tmp, smallvec![a, b], self.addr));
        self.write_reg(rd, tmp);
    }

    fn lift_alu_ri(&mut self, op: IrOp, rd: RegId, rs1: RegId, imm: i64) {
        let a = read_reg(rs1);
        let b = Varnode::constant(imm as u64, 8);
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(op, tmp, smallvec![a, b], self.addr));
        self.write_reg(rd, tmp);
    }

    fn lift_alu_rr_w(&mut self, op: IrOp, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = read_reg(rs1);
        let b = read_reg(rs2);
        let a32 = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            a32,
            smallvec![a, Varnode::constant(0, 4)],
            self.addr,
        ));
        let b32 = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            b32,
            smallvec![b, Varnode::constant(0, 4)],
            self.addr,
        ));
        let res32 = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            op,
            res32,
            smallvec![a32, b32],
            self.addr,
        ));
        let ext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntSext,
            ext,
            smallvec![res32],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    fn lift_alu_ri_w(&mut self, op: IrOp, rd: RegId, rs1: RegId, imm: i64) {
        let a = read_reg(rs1);
        let a32 = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            a32,
            smallvec![a, Varnode::constant(0, 4)],
            self.addr,
        ));
        let b32 = Varnode::constant(imm as u64, 4);
        let res32 = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            op,
            res32,
            smallvec![a32, b32],
            self.addr,
        ));
        let ext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntSext,
            ext,
            smallvec![res32],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    // -- Comparison helpers (SLT/SLTU) ------------------------------------

    fn lift_slt(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = read_reg(rs1);
        let b = read_reg(rs2);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntSless,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_sltu(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = read_reg(rs1);
        let b = read_reg(rs2);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_slti(&mut self, rd: RegId, rs1: RegId, imm: i64) {
        let a = read_reg(rs1);
        let b = Varnode::constant(imm as u64, 8);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntSless,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_sltiu(&mut self, rd: RegId, rs1: RegId, imm: i64) {
        let a = read_reg(rs1);
        let b = Varnode::constant(imm as u64, 8);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    // -- RISC-V scalar crypto helpers ---------------------------------------

    fn lift_crypto_unary(&mut self, tag: u64, rd: RegId, rs1: RegId) {
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::Callother,
            tmp,
            smallvec![Varnode::constant(tag, 8), read_reg(rs1)],
            self.addr,
        ));
        self.write_reg(rd, tmp);
    }

    fn lift_crypto_binary(&mut self, tag: u64, rd: RegId, rs1: RegId, rs2: RegId) {
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::Callother,
            tmp,
            smallvec![Varnode::constant(tag, 8), read_reg(rs1), read_reg(rs2)],
            self.addr,
        ));
        self.write_reg(rd, tmp);
    }

    fn lift_crypto_binary_imm(&mut self, tag: u64, rd: RegId, rs1: RegId, rs2: RegId, imm: u8) {
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::Callother,
            tmp,
            smallvec![
                Varnode::constant(tag, 8),
                read_reg(rs1),
                read_reg(rs2),
                Varnode::constant(imm as u64, 1),
            ],
            self.addr,
        ));
        self.write_reg(rd, tmp);
    }

    fn lift_crypto_unary_imm(&mut self, tag: u64, rd: RegId, rs1: RegId, imm: u8) {
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::Callother,
            tmp,
            smallvec![
                Varnode::constant(tag, 8),
                read_reg(rs1),
                Varnode::constant(imm as u64, 1),
            ],
            self.addr,
        ));
        self.write_reg(rd, tmp);
    }

    // -- Branch helpers ---------------------------------------------------

    /// Conditional branch: `if (rs1 <cmp_op> rs2) goto target`
    fn lift_cbranch(&mut self, cmp_op: IrOp, rs1: RegId, rs2: RegId, target: u64) {
        let a = read_reg(rs1);
        let b = read_reg(rs2);
        let cond = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            cmp_op,
            cond,
            smallvec![a, b],
            self.addr,
        ));
        let target_vn = Varnode::constant(target, 8);
        self.emit(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target_vn, cond],
            self.addr,
        ));
    }

    // -- Load helpers -----------------------------------------------------

    fn lift_load(&mut self, rd: RegId, base: RegId, offset: i64, load_size: u8) {
        let base_vn = read_reg(base);
        let addr_vn = if offset != 0 {
            let off_vn = Varnode::constant(offset as u64, 8);
            let tmp = self.alloc_unique(8);
            self.emit(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![base_vn, off_vn],
                self.addr,
            ));
            tmp
        } else {
            base_vn
        };

        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let loaded = self.alloc_unique(load_size);
        self.emit(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram_space, addr_vn],
            self.addr,
        ));

        // Extend to 8 bytes (RV64I register width)
        let value = if load_size < 8 {
            // LW sign-extends to 64 bits; LD is already 8 bytes
            // LW is 4 bytes (sign-extend), LD is 8 bytes (no extend needed)
            // We use IntSext for signed loads (LW, LH, LB) by default
            let ext = self.alloc_unique(8);
            self.emit(IrInsn::with_output(
                IrOp::IntSext,
                ext,
                smallvec![loaded],
                self.addr,
            ));
            ext
        } else {
            loaded
        };

        self.write_reg(rd, value);
    }

    // -- Store helpers ----------------------------------------------------

    fn lift_store(&mut self, base: RegId, offset: i64, src: RegId, store_size: u8) {
        let base_vn = read_reg(base);
        let addr_vn = if offset != 0 {
            let off_vn = Varnode::constant(offset as u64, 8);
            let tmp = self.alloc_unique(8);
            self.emit(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![base_vn, off_vn],
                self.addr,
            ));
            tmp
        } else {
            base_vn
        };

        let src_vn = read_reg(src);
        // Truncate to store size if needed
        let value = if store_size < 8 {
            let trunc = self.alloc_unique(store_size);
            self.emit(IrInsn::with_output(
                IrOp::Subpiece,
                trunc,
                smallvec![src_vn, Varnode::constant(0, 4)],
                self.addr,
            ));
            trunc
        } else {
            src_vn
        };

        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, addr_vn, value],
            self.addr,
        ));
    }
}

// ---------------------------------------------------------------------------
// Operand extraction helpers
// ---------------------------------------------------------------------------

/// Extract (rd, rs1, rs2) from a 3-operand R-type instruction.
fn ops_rrr(operands: &[RiscVOperand]) -> Option<(RegId, RegId, RegId)> {
    if let [
        RiscVOperand::Reg(rd),
        RiscVOperand::Reg(rs1),
        RiscVOperand::Reg(rs2),
    ] = operands
    {
        Some((*rd, *rs1, *rs2))
    } else {
        None
    }
}

/// Extract (rd, rs1, imm) from a 3-operand I-type instruction.
fn ops_rri(operands: &[RiscVOperand]) -> Option<(RegId, RegId, i64)> {
    if let [
        RiscVOperand::Reg(rd),
        RiscVOperand::Reg(rs1),
        RiscVOperand::Imm(imm),
    ] = operands
    {
        Some((*rd, *rs1, *imm))
    } else {
        None
    }
}

/// Extract (rd, imm) from a 2-operand U-type instruction (LUI, AUIPC).
fn ops_ri(operands: &[RiscVOperand]) -> Option<(RegId, i64)> {
    if let [RiscVOperand::Reg(rd), RiscVOperand::Imm(imm)] = operands {
        Some((*rd, *imm))
    } else {
        None
    }
}

/// Extract (rs1, rs2, imm) from a B-type branch instruction.
/// capstone encodes branches as: rs1, rs2, imm (branch target offset already resolved).
fn ops_branch(operands: &[RiscVOperand]) -> Option<(RegId, RegId, i64)> {
    if let [
        RiscVOperand::Reg(rs1),
        RiscVOperand::Reg(rs2),
        RiscVOperand::Imm(target),
    ] = operands
    {
        Some((*rs1, *rs2, *target))
    } else {
        None
    }
}

fn branch_target(addr: u64, offset: i64) -> u64 {
    addr.wrapping_add(offset as u64)
}

/// Extract (rd, mem(base, offset)) from a load instruction.
fn ops_load(operands: &[RiscVOperand]) -> Option<(RegId, RegId, i64)> {
    match operands {
        [RiscVOperand::Reg(rd), RiscVOperand::Mem(mem)] => Some((*rd, mem.base(), mem.disp())),
        _ => None,
    }
}

/// Extract (src, mem(base, offset)) from a store instruction.
fn ops_store(operands: &[RiscVOperand]) -> Option<(RegId, RegId, i64)> {
    match operands {
        [RiscVOperand::Reg(src), RiscVOperand::Mem(mem)] => Some((*src, mem.base(), mem.disp())),
        _ => None,
    }
}

// ---------------------------------------------------------------------------
// Main lifter
// ---------------------------------------------------------------------------

pub struct RiscVLifter {
    register_file: RegisterFile,
    cs: Capstone,
}

impl RiscVLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(33);
        for (i, name) in RV_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg((i as u64) * 8, 8),
            });
        }
        regs.push(RegisterDef {
            name: "pc",
            varnode: Varnode::reg(PC_OFFSET, 8),
        });

        let cs = Capstone::new()
            .riscv()
            .mode(arch::riscv::ArchMode::RiscV64)
            .detail(true)
            .build()
            .expect("failed to create capstone RISC-V engine");

        Self {
            register_file: RegisterFile { registers: regs },
            cs,
        }
    }
}

impl Default for RiscVLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for RiscVLifter {
    fn arch(&self) -> ArchId {
        ArchId::RiscV64
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }

        // RVC dispatch: peek byte 0; if compressed, expand to a 32-bit word and
        // route through the existing decoder, but report len=2 so the basic-block
        // walker advances PC correctly.
        if is_compressed(bytes[0]) {
            let half = u16::from_le_bytes([bytes[0], bytes[1]]);
            if let Some(word) = expand(half) {
                let buf = word.to_le_bytes();
                if let Some(mut lifted) = lift_rv64i_direct(&buf, addr) {
                    lifted.len = 2;
                    return Ok(lifted);
                }
            }
        }

        if let Some(lifted) = lift_rv64i_direct(bytes, addr) {
            return Ok(lifted);
        }

        let insns: Instructions<'_> = self
            .cs
            .disasm_count(bytes, addr, 1)
            .map_err(|e| LiftError::Decode(format!("capstone: {e}")))?;

        let insn = insns
            .as_ref()
            .first()
            .ok_or_else(|| LiftError::Decode(format!("no instruction decoded at {addr:#x}")))?;

        let detail = self
            .cs
            .insn_detail(insn)
            .map_err(|e| LiftError::Decode(format!("capstone detail: {e}")))?;

        let arch_detail = detail.arch_detail();
        let rv_detail = if let capstone::arch::ArchDetail::RiscVDetail(d) = arch_detail {
            d
        } else {
            return Err(LiftError::Decode("not RISC-V detail".into()));
        };

        let operands: Vec<RiscVOperand> = rv_detail.operands().collect();
        let insn_id = insn.id().0;
        let insn_len = insn.len();
        let mnemonic = insn.mnemonic().unwrap_or("");

        let mut ctx = LiftCtx::new(addr);
        dispatch_insn(&mut ctx, insn_id, &operands, addr, mnemonic);

        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: insn_len,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

// SAFETY: Capstone is thread-safe for disassembly (each call is self-contained).
unsafe impl Send for RiscVLifter {}
unsafe impl Sync for RiscVLifter {}

fn rv_reg(index: u32) -> RegId {
    RegId(RiscVReg::RISCV_REG_X0 as u16 + index as u16)
}

fn sign_extend(value: u32, bits: u8) -> i64 {
    let shift = 64 - bits;
    ((value as i64) << shift) >> shift
}

fn decode_rv_crypto_op_imm(funct12: u32) -> Option<u64> {
    Some(match funct12 {
        0x100 => crypto_tag::RV_SHA256SUM0,
        0x101 => crypto_tag::RV_SHA256SUM1,
        0x102 => crypto_tag::RV_SHA256SIG0,
        0x103 => crypto_tag::RV_SHA256SIG1,
        0x104 => crypto_tag::RV_SHA512SUM0,
        0x105 => crypto_tag::RV_SHA512SUM1,
        0x106 => crypto_tag::RV_SHA512SIG0,
        0x107 => crypto_tag::RV_SHA512SIG1,
        0x108 => crypto_tag::RV_SM3P0,
        0x109 => crypto_tag::RV_SM3P1,
        0x300 => crypto_tag::RV_AES64IM,
        _ => return None,
    })
}

fn decode_rv_crypto_op(funct7: u32, bs: u8) -> Option<u64> {
    let funct5 = funct7 & 0x1f;
    Some(match (funct5, bs) {
        // RV32 scalar AES/SM4 encode the byte select in instruction bits 31..30;
        // the fixed opcode field is therefore only bits 29..25 (funct5).
        (0x11, 0..=3) => crypto_tag::RV_AES32ESI,
        (0x13, 0..=3) => crypto_tag::RV_AES32ESMI,
        (0x15, 0..=3) => crypto_tag::RV_AES32DSI,
        (0x17, 0..=3) => crypto_tag::RV_AES32DSMI,
        (0x18, 0..=3) => crypto_tag::RV_SM4ED,
        (0x1A, 0..=3) => crypto_tag::RV_SM4KS,

        // RV64 scalar AES encodings use the same opcode/funct3 space but require
        // bits 31..30 to be zero except for aes64ks2 (funct7=0x7f, bs=3).
        (0x19, 0) => crypto_tag::RV_AES64ES,
        (0x1B, 0) => crypto_tag::RV_AES64ESM,
        (0x1D, 0) => crypto_tag::RV_AES64DS,
        (0x1F, 0) => crypto_tag::RV_AES64DSM,
        (0x1F, 3) if funct7 == 0x7F => crypto_tag::RV_AES64KS2,
        _ => return None,
    })
}

fn lift_rv64i_direct(bytes: &[u8], addr: u64) -> Option<LiftedInsn> {
    let half = u16::from_le_bytes([bytes[0], bytes[1]]);
    if half == 0x8082 {
        let mut ctx = LiftCtx::new(addr);
        ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![], ctx.addr));
        return Some(LiftedInsn {
            ir_ops: ctx.ops,
            len: 2,
        });
    }
    if half & 0b11 != 0b11 || bytes.len() < 4 {
        return None;
    }

    let word = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
    let opcode = word & 0x7f;
    let rd = (word >> 7) & 0x1f;
    let funct3 = (word >> 12) & 0x7;
    let rs1 = (word >> 15) & 0x1f;
    let rs2 = (word >> 20) & 0x1f;
    let funct7 = (word >> 25) & 0x7f;
    let mut ctx = LiftCtx::new(addr);

    match opcode {
        0x13 => {
            if funct3 == 0x1 {
                let funct12 = word >> 20;
                if let Some(tag) = decode_rv_crypto_op_imm(funct12) {
                    ctx.lift_crypto_unary(tag, rv_reg(rd), rv_reg(rs1));
                } else if (funct12 & 0xFE0) == 0x300 && ((funct12 >> 4) & 0x1) == 1 {
                    // aes64ks1i encodes its round number in bits 23..20.
                    ctx.lift_crypto_unary_imm(
                        crypto_tag::RV_AES64KS1I,
                        rv_reg(rd),
                        rv_reg(rs1),
                        (funct12 & 0xF) as u8,
                    );
                } else {
                    return None;
                }
            } else {
                let imm = sign_extend(word >> 20, 12);
                match funct3 {
                    0x0 if rd == 0 && rs1 == 0 && imm == 0 => {}
                    0x0 => ctx.lift_alu_ri(IrOp::IntAdd, rv_reg(rd), rv_reg(rs1), imm),
                    0x2 => ctx.lift_slti(rv_reg(rd), rv_reg(rs1), imm),
                    0x3 => ctx.lift_sltiu(rv_reg(rd), rv_reg(rs1), imm),
                    0x4 => ctx.lift_alu_ri(IrOp::IntXor, rv_reg(rd), rv_reg(rs1), imm),
                    0x6 => ctx.lift_alu_ri(IrOp::IntOr, rv_reg(rd), rv_reg(rs1), imm),
                    0x7 => ctx.lift_alu_ri(IrOp::IntAnd, rv_reg(rd), rv_reg(rs1), imm),
                    0x1 => ctx.lift_alu_ri(IrOp::IntLeft, rv_reg(rd), rv_reg(rs1), rs2 as i64),
                    0x5 if funct7 == 0x00 => {
                        ctx.lift_alu_ri(IrOp::IntRight, rv_reg(rd), rv_reg(rs1), rs2 as i64)
                    }
                    0x5 if funct7 == 0x20 => {
                        ctx.lift_alu_ri(IrOp::IntSright, rv_reg(rd), rv_reg(rs1), rs2 as i64)
                    }
                    _ => return None,
                }
            }
        }
        0x33 => {
            if funct3 == 0x0 {
                let bs = (word >> 30) as u8;
                if let Some(tag) = decode_rv_crypto_op(funct7, bs) {
                    match tag {
                        crypto_tag::RV_AES32ESI
                        | crypto_tag::RV_AES32ESMI
                        | crypto_tag::RV_AES32DSI
                        | crypto_tag::RV_AES32DSMI
                        | crypto_tag::RV_SM4ED
                        | crypto_tag::RV_SM4KS => ctx.lift_crypto_binary_imm(
                            tag,
                            rv_reg(rd),
                            rv_reg(rs1),
                            rv_reg(rs2),
                            bs,
                        ),
                        _ => ctx.lift_crypto_binary(tag, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
                    }
                    return Some(LiftedInsn {
                        ir_ops: ctx.ops,
                        len: 4,
                    });
                }
            }
            let op = match (funct7, funct3) {
                (0x00, 0x2) => {
                    ctx.lift_slt(rv_reg(rd), rv_reg(rs1), rv_reg(rs2));
                    return Some(LiftedInsn {
                        ir_ops: ctx.ops,
                        len: 4,
                    });
                }
                (0x00, 0x3) => {
                    ctx.lift_sltu(rv_reg(rd), rv_reg(rs1), rv_reg(rs2));
                    return Some(LiftedInsn {
                        ir_ops: ctx.ops,
                        len: 4,
                    });
                }
                (0x00, 0x0) => IrOp::IntAdd,
                (0x20, 0x0) => IrOp::IntSub,
                (0x00, 0x1) => IrOp::IntLeft,
                (0x00, 0x4) => IrOp::IntXor,
                (0x00, 0x5) => IrOp::IntRight,
                (0x20, 0x5) => IrOp::IntSright,
                (0x00, 0x6) => IrOp::IntOr,
                (0x00, 0x7) => IrOp::IntAnd,
                _ => return None,
            };
            ctx.lift_alu_rr(op, rv_reg(rd), rv_reg(rs1), rv_reg(rs2));
        }
        0x03 => {
            let imm = sign_extend(word >> 20, 12);
            let size = match funct3 {
                0x0 | 0x4 => 1,
                0x1 | 0x5 => 2,
                0x2 | 0x6 => 4,
                0x3 => 8,
                _ => return None,
            };
            ctx.lift_load(rv_reg(rd), rv_reg(rs1), imm, size);
        }
        0x23 => {
            let imm = ((word >> 7) & 0x1f) | (((word >> 25) & 0x7f) << 5);
            let imm = sign_extend(imm, 12);
            let size = match funct3 {
                0x0 => 1,
                0x1 => 2,
                0x2 => 4,
                0x3 => 8,
                _ => return None,
            };
            ctx.lift_store(rv_reg(rs1), imm, rv_reg(rs2), size);
        }
        0x63 => {
            let imm = (((word >> 31) & 0x1) << 12)
                | (((word >> 7) & 0x1) << 11)
                | (((word >> 25) & 0x3f) << 5)
                | (((word >> 8) & 0xf) << 1);
            let target = addr.wrapping_add(sign_extend(imm, 13) as u64);
            match funct3 {
                0x0 => ctx.lift_cbranch(IrOp::IntEqual, rv_reg(rs1), rv_reg(rs2), target),
                0x1 => ctx.lift_cbranch(IrOp::IntNotequal, rv_reg(rs1), rv_reg(rs2), target),
                0x4 => ctx.lift_cbranch(IrOp::IntSless, rv_reg(rs1), rv_reg(rs2), target),
                0x6 => ctx.lift_cbranch(IrOp::IntLess, rv_reg(rs1), rv_reg(rs2), target),
                0x5 | 0x7 => {
                    let cmp_op = if funct3 == 0x5 {
                        IrOp::IntSless
                    } else {
                        IrOp::IntLess
                    };
                    let cmp = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        cmp_op,
                        cmp,
                        smallvec![read_reg(rv_reg(rs1)), read_reg(rv_reg(rs2))],
                        addr,
                    ));
                    let neg = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        IrOp::BoolNegate,
                        neg,
                        smallvec![cmp],
                        addr,
                    ));
                    ctx.emit(IrInsn::without_output(
                        IrOp::Cbranch,
                        smallvec![Varnode::constant(target, 8), neg],
                        addr,
                    ));
                }
                _ => return None,
            }
        }
        0x67 if rd == 0 && rs1 == 1 && sign_extend(word >> 20, 12) == 0 => {
            ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![], ctx.addr));
        }
        _ => return None,
    }

    Some(LiftedInsn {
        ir_ops: ctx.ops,
        len: 4,
    })
}

// ---------------------------------------------------------------------------
// Instruction dispatch
// ---------------------------------------------------------------------------

fn dispatch_insn(
    ctx: &mut LiftCtx,
    insn_id: u32,
    operands: &[RiscVOperand],
    addr: u64,
    mnemonic: &str,
) {
    use RiscVInsn::*;

    // Capstone exposes many RISC-V pseudo-instructions (li, mv, ret) with ids
    // that are not stable across bindings. Prefer the mnemonic for common
    // instructions so fixture code is not mis-lifted as an unrelated branch.
    match mnemonic {
        "ret" if operands.is_empty() => {
            ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![], ctx.addr));
            return;
        }
        "li" => {
            if let [RiscVOperand::Reg(rd), RiscVOperand::Imm(imm)] = operands {
                ctx.write_reg(*rd, Varnode::constant(*imm as u64, 8));
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "mv" => {
            if let [RiscVOperand::Reg(rd), RiscVOperand::Reg(rs)] = operands {
                ctx.write_reg(*rd, read_reg(*rs));
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "addi" => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntAdd, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "and" => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntAnd, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "or" => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntOr, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "xor" => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntXor, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "beq" => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                ctx.lift_cbranch(IrOp::IntEqual, rs1, rs2, branch_target(addr, target));
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "bne" => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                ctx.lift_cbranch(IrOp::IntNotequal, rs1, rs2, branch_target(addr, target));
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        _ => {}
    }

    let id = insn_id;

    match id {
        // -- R-type ALU: ADD, SUB, AND, OR, XOR, SLL, SRL, SRA --
        x if x == RISCV_INS_ADD as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntAdd, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SUB as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntSub, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_AND as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntAnd, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_OR as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntOr, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_XOR as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntXor, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLL as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntLeft, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRL as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntRight, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRA as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntSright, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- I-type ALU: ADDI (+ pseudo: NOP, MV, LI), ANDI, ORI, XORI, SLLI, SRLI, SRAI --
        x if x == RISCV_INS_ADDI as u32 => {
            match operands {
                // nop: 0 operands
                [] => { /* NOP — no IR ops needed */ }
                // mv rd, rs: 2 register operands (addi rd, rs, 0)
                [RiscVOperand::Reg(rd), RiscVOperand::Reg(rs)] => {
                    let src = read_reg(*rs);
                    ctx.write_reg(*rd, src);
                }
                // addi/li rd, rs, imm: 3 operands
                [
                    RiscVOperand::Reg(rd),
                    RiscVOperand::Reg(rs1),
                    RiscVOperand::Imm(imm),
                ] => {
                    ctx.lift_alu_ri(IrOp::IntAdd, *rd, *rs1, *imm);
                }
                _ => ctx.emit_unimplemented(),
            }
        }
        x if x == RISCV_INS_ANDI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntAnd, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_ORI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntOr, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_XORI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntXor, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLLI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntLeft, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRLI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntRight, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRAI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri(IrOp::IntSright, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- RV64I W-variants: operate on lower 32 bits, sign-extend to 64 --
        x if x == RISCV_INS_ADDW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntAdd, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SUBW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntSub, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_ADDIW as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri_w(IrOp::IntAdd, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLLW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntLeft, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRLW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntRight, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRAW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntSright, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLLIW as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri_w(IrOp::IntLeft, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRLIW as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri_w(IrOp::IntRight, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SRAIW as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_alu_ri_w(IrOp::IntSright, rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- Comparisons: SLT, SLTU, SLTI, SLTIU --
        x if x == RISCV_INS_SLT as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_slt(rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLTU as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_sltu(rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLTI as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_slti(rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SLTIU as u32 => {
            if let Some((rd, rs1, imm)) = ops_rri(operands) {
                ctx.lift_sltiu(rd, rs1, imm);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- Branches: BEQ, BNE, BLT, BGE, BLTU, BGEU --
        x if x == RISCV_INS_BEQ as u32 => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                ctx.lift_cbranch(IrOp::IntEqual, rs1, rs2, branch_target(addr, target));
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_BNE as u32 => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                ctx.lift_cbranch(IrOp::IntNotequal, rs1, rs2, branch_target(addr, target));
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_BLT as u32 => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                ctx.lift_cbranch(IrOp::IntSless, rs1, rs2, branch_target(addr, target));
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_BGE as u32 => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                // BGE rs1, rs2 ⟹ NOT (rs1 < rs2)
                let a = read_reg(rs1);
                let b = read_reg(rs2);
                let cmp = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSless,
                    cmp,
                    smallvec![a, b],
                    addr,
                ));
                let neg = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::BoolNegate,
                    neg,
                    smallvec![cmp],
                    addr,
                ));
                let target_vn = Varnode::constant(branch_target(addr, target), 8);
                ctx.emit(IrInsn::without_output(
                    IrOp::Cbranch,
                    smallvec![target_vn, neg],
                    addr,
                ));
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_BLTU as u32 => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                ctx.lift_cbranch(IrOp::IntLess, rs1, rs2, branch_target(addr, target));
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_BGEU as u32 => {
            if let Some((rs1, rs2, target)) = ops_branch(operands) {
                // BGEU rs1, rs2 ⟹ NOT (rs1 <u rs2)
                let a = read_reg(rs1);
                let b = read_reg(rs2);
                let cmp = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntLess,
                    cmp,
                    smallvec![a, b],
                    addr,
                ));
                let neg = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::BoolNegate,
                    neg,
                    smallvec![cmp],
                    addr,
                ));
                let target_vn = Varnode::constant(branch_target(addr, target), 8);
                ctx.emit(IrInsn::without_output(
                    IrOp::Cbranch,
                    smallvec![target_vn, neg],
                    addr,
                ));
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- JAL (+ pseudo: J, JAL with implicit ra) --
        x if x == RISCV_INS_JAL as u32 => {
            match operands {
                // jal rd, target (explicit rd)
                [RiscVOperand::Reg(rd), RiscVOperand::Imm(target)] => {
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), 8);
                    ctx.write_reg(*rd, ret_addr);
                    let target_vn = Varnode::constant(branch_target(addr, *target), 8);
                    ctx.emit(IrInsn::without_output(
                        IrOp::Branch,
                        smallvec![target_vn],
                        addr,
                    ));
                }
                // jal target (capstone pseudo: implicit rd=ra)
                [RiscVOperand::Imm(target)] => {
                    // rd=ra(x1) is implicit
                    let ra = RegId(RiscVReg::RISCV_REG_X1 as u16);
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), 8);
                    ctx.write_reg(ra, ret_addr);
                    let target_vn = Varnode::constant(branch_target(addr, *target), 8);
                    ctx.emit(IrInsn::without_output(
                        IrOp::Branch,
                        smallvec![target_vn],
                        addr,
                    ));
                }
                _ => ctx.emit_unimplemented(),
            }
        }

        // -- JALR (+ pseudo: RET, JR, JALR with implicit rd) --
        x if x == RISCV_INS_JALR as u32 => {
            match operands {
                // ret: 0 operands (jalr x0, 0(x1))
                [] => {
                    let ra_vn = read_reg(RegId(RiscVReg::RISCV_REG_X1 as u16));
                    ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![ra_vn], addr));
                }
                // jr rs or jalr rs: 1 register operand
                // "jr" → rd=x0 (branch), "jalr" → rd=ra (call)
                [RiscVOperand::Reg(rs)] => {
                    let target = read_reg(*rs);
                    let mask = Varnode::constant(!1u64, 8);
                    let aligned = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAnd,
                        aligned,
                        smallvec![target, mask],
                        addr,
                    ));
                    if mnemonic == "jr" {
                        ctx.emit(IrInsn::without_output(
                            IrOp::Branchind,
                            smallvec![aligned],
                            addr,
                        ));
                    } else {
                        // jalr rs → implicit rd=ra
                        let ra = RegId(RiscVReg::RISCV_REG_X1 as u16);
                        let ret_addr = Varnode::constant(addr.wrapping_add(4), 8);
                        ctx.write_reg(ra, ret_addr);
                        ctx.emit(IrInsn::without_output(
                            IrOp::Callind,
                            smallvec![aligned],
                            addr,
                        ));
                    }
                }
                // jalr rd, rs, imm: 3 operands (full form)
                [
                    RiscVOperand::Reg(rd),
                    RiscVOperand::Reg(rs1),
                    RiscVOperand::Imm(imm),
                ] => {
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), 8);
                    ctx.write_reg(*rd, ret_addr);

                    let base = read_reg(*rs1);
                    let target_vn = if *imm != 0 {
                        let off = Varnode::constant(*imm as u64, 8);
                        let tmp = ctx.alloc_unique(8);
                        ctx.emit(IrInsn::with_output(
                            IrOp::IntAdd,
                            tmp,
                            smallvec![base, off],
                            addr,
                        ));
                        tmp
                    } else {
                        base
                    };

                    let mask = Varnode::constant(!1u64, 8);
                    let aligned = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAnd,
                        aligned,
                        smallvec![target_vn, mask],
                        addr,
                    ));

                    let is_ret = rd.0 as u32 == RiscVReg::RISCV_REG_X0 as u32
                        && rs1.0 as u32 == RiscVReg::RISCV_REG_X1 as u32
                        && *imm == 0;

                    if is_ret {
                        ctx.emit(IrInsn::without_output(
                            IrOp::Return,
                            smallvec![aligned],
                            addr,
                        ));
                    } else {
                        let is_call = rd.0 as u32 != RiscVReg::RISCV_REG_X0 as u32;
                        if is_call {
                            ctx.emit(IrInsn::without_output(
                                IrOp::Callind,
                                smallvec![aligned],
                                addr,
                            ));
                        } else {
                            ctx.emit(IrInsn::without_output(
                                IrOp::Branchind,
                                smallvec![aligned],
                                addr,
                            ));
                        }
                    }
                }
                // jalr rd, mem(base, offset)
                [RiscVOperand::Reg(rd), RiscVOperand::Mem(mem)] => {
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), 8);
                    ctx.write_reg(*rd, ret_addr);

                    let base = read_reg(mem.base());
                    let target_vn = if mem.disp() != 0 {
                        let off = Varnode::constant(mem.disp() as u64, 8);
                        let tmp = ctx.alloc_unique(8);
                        ctx.emit(IrInsn::with_output(
                            IrOp::IntAdd,
                            tmp,
                            smallvec![base, off],
                            addr,
                        ));
                        tmp
                    } else {
                        base
                    };

                    let mask = Varnode::constant(!1u64, 8);
                    let aligned = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAnd,
                        aligned,
                        smallvec![target_vn, mask],
                        addr,
                    ));

                    let is_ret = rd.0 as u32 == RiscVReg::RISCV_REG_X0 as u32
                        && mem.base().0 as u32 == RiscVReg::RISCV_REG_X1 as u32
                        && mem.disp() == 0;

                    if is_ret {
                        ctx.emit(IrInsn::without_output(
                            IrOp::Return,
                            smallvec![aligned],
                            addr,
                        ));
                    } else {
                        let is_call = rd.0 as u32 != RiscVReg::RISCV_REG_X0 as u32;
                        if is_call {
                            ctx.emit(IrInsn::without_output(
                                IrOp::Callind,
                                smallvec![aligned],
                                addr,
                            ));
                        } else {
                            ctx.emit(IrInsn::without_output(
                                IrOp::Branchind,
                                smallvec![aligned],
                                addr,
                            ));
                        }
                    }
                }
                _ => ctx.emit_unimplemented(),
            }
        }

        // -- Loads: LW (4, sign-ext), LD (8) --
        x if x == RISCV_INS_LW as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                ctx.lift_load(rd, base, offset, 4);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_LD as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                ctx.lift_load(rd, base, offset, 8);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_LB as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                ctx.lift_load(rd, base, offset, 1);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_LH as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                ctx.lift_load(rd, base, offset, 2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_LBU as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                // LBU: zero-extend
                let base_vn = read_reg(base);
                let addr_vn = if offset != 0 {
                    let off_vn = Varnode::constant(offset as u64, 8);
                    let tmp = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        tmp,
                        smallvec![base_vn, off_vn],
                        ctx.addr,
                    ));
                    tmp
                } else {
                    base_vn
                };
                let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
                let loaded = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    ctx.addr,
                ));
                let ext = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    ext,
                    smallvec![loaded],
                    ctx.addr,
                ));
                ctx.write_reg(rd, ext);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_LHU as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                let base_vn = read_reg(base);
                let addr_vn = if offset != 0 {
                    let off_vn = Varnode::constant(offset as u64, 8);
                    let tmp = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        tmp,
                        smallvec![base_vn, off_vn],
                        ctx.addr,
                    ));
                    tmp
                } else {
                    base_vn
                };
                let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
                let loaded = ctx.alloc_unique(2);
                ctx.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    ctx.addr,
                ));
                let ext = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    ext,
                    smallvec![loaded],
                    ctx.addr,
                ));
                ctx.write_reg(rd, ext);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_LWU as u32 => {
            if let Some((rd, base, offset)) = ops_load(operands) {
                let base_vn = read_reg(base);
                let addr_vn = if offset != 0 {
                    let off_vn = Varnode::constant(offset as u64, 8);
                    let tmp = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        tmp,
                        smallvec![base_vn, off_vn],
                        ctx.addr,
                    ));
                    tmp
                } else {
                    base_vn
                };
                let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
                let loaded = ctx.alloc_unique(4);
                ctx.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    ctx.addr,
                ));
                let ext = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntZext,
                    ext,
                    smallvec![loaded],
                    ctx.addr,
                ));
                ctx.write_reg(rd, ext);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- Stores: SW (4), SD (8), SB (1), SH (2) --
        x if x == RISCV_INS_SW as u32 => {
            if let Some((src, base, offset)) = ops_store(operands) {
                ctx.lift_store(base, offset, src, 4);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SD as u32 => {
            if let Some((src, base, offset)) = ops_store(operands) {
                ctx.lift_store(base, offset, src, 8);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SB as u32 => {
            if let Some((src, base, offset)) = ops_store(operands) {
                ctx.lift_store(base, offset, src, 1);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_SH as u32 => {
            if let Some((src, base, offset)) = ops_store(operands) {
                ctx.lift_store(base, offset, src, 2);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- LUI: rd = imm << 12 --
        x if x == RISCV_INS_LUI as u32 => {
            if let Some((rd, imm)) = ops_ri(operands) {
                // capstone already shifts the immediate for LUI
                let val = Varnode::constant(imm as u64, 8);
                ctx.write_reg(rd, val);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- AUIPC: rd = pc + (imm << 12) --
        x if x == RISCV_INS_AUIPC as u32 => {
            if let Some((rd, imm)) = ops_ri(operands) {
                // capstone already shifts the immediate
                let pc_val = Varnode::constant(addr, 8);
                let imm_vn = Varnode::constant(imm as u64, 8);
                let result = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAdd,
                    result,
                    smallvec![pc_val, imm_vn],
                    addr,
                ));
                ctx.write_reg(rd, result);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- ECALL / EBREAK --
        x if x == RISCV_INS_ECALL as u32 => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(0, 4)], // syscall identifier
                addr,
            ));
        }
        x if x == RISCV_INS_EBREAK as u32 => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(1, 4)], // debugger trap
                addr,
            ));
        }

        // -- M extension: MUL, DIV, DIVU, REM, REMU, MULW, DIVW, REMW --
        x if x == RISCV_INS_MUL as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntMult, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_MULW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntMult, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_DIV as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntSdiv, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_DIVU as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntDiv, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_DIVW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntSdiv, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_REM as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntSrem, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_REMU as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr(IrOp::IntRem, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }
        x if x == RISCV_INS_REMW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntSrem, rd, rs1, rs2);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- Fallback: unimplemented --
        _ => {
            ctx.emit_unimplemented();
        }
    }
}

// ===========================================================================
// Tests
// ===========================================================================

#[cfg(test)]
mod tests {
    use super::*;

    fn lifter() -> RiscVLifter {
        RiscVLifter::new()
    }

    // -- Infrastructure tests ---------------------------------------------

    #[test]
    fn test_arch() {
        assert_eq!(lifter().arch(), ArchId::RiscV64);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 33);
        assert_eq!(rf.registers[0].name, "x0");
        assert_eq!(rf.registers[31].name, "x31");
        assert_eq!(rf.registers[32].name, "pc");
    }

    #[test]
    fn test_short_buffer() {
        let result = lifter().lift_insn(&[0x00], 0x1000);
        assert!(result.is_err());
    }

    // -- ADD rd, rs1, rs2 -------------------------------------------------
    // add x1, x2, x3  → 0x003100B3
    #[test]
    fn test_add() {
        let bytes = 0x003100B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode ADD");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        // Should write to x1 (register offset 8)
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)) })
        );
    }

    // -- ADDI rd, rs1, imm -----------------------------------------------
    // addi x1, x2, 3  → 0x00310093
    #[test]
    fn test_addi() {
        let bytes = 0x00310093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode ADDI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    // -- SUB rd, rs1, rs2 ------------------------------------------------
    // sub x1, x2, x3  → 0x403100B3
    #[test]
    fn test_sub() {
        let bytes = 0x403100B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SUB");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    // -- AND rd, rs1, rs2 ------------------------------------------------
    // and x1, x2, x3  → 0x003170B3
    #[test]
    fn test_and() {
        let bytes = 0x003170B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode AND");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    // -- ANDI rd, rs1, imm -----------------------------------------------
    // andi x1, x2, 7  → 0x00717093
    #[test]
    fn test_andi() {
        let bytes = 0x00717093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode ANDI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    // -- OR rd, rs1, rs2 -------------------------------------------------
    // or x1, x2, x3  → 0x003160B3
    #[test]
    fn test_or() {
        let bytes = 0x003160B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode OR");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    // -- ORI rd, rs1, imm ------------------------------------------------
    // ori x1, x2, 7  → 0x00716093
    #[test]
    fn test_ori() {
        let bytes = 0x00716093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode ORI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    // -- XOR rd, rs1, rs2 ------------------------------------------------
    // xor x1, x2, x3  → 0x003140B3
    #[test]
    fn test_xor() {
        let bytes = 0x003140B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode XOR");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    // -- XORI rd, rs1, imm -----------------------------------------------
    // xori x1, x2, 7  → 0x00714093
    #[test]
    fn test_xori() {
        let bytes = 0x00714093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode XORI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    // -- SLL rd, rs1, rs2 ------------------------------------------------
    // sll x1, x2, x3  → 0x003110B3
    #[test]
    fn test_sll() {
        let bytes = 0x003110B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SLL");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
    }

    // -- SRL rd, rs1, rs2 ------------------------------------------------
    // srl x1, x2, x3  → 0x003150B3
    #[test]
    fn test_srl() {
        let bytes = 0x003150B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SRL");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
    }

    // -- SRA rd, rs1, rs2 ------------------------------------------------
    // sra x1, x2, x3  → 0x403150B3
    #[test]
    fn test_sra() {
        let bytes = 0x403150B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SRA");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    // -- SLT rd, rs1, rs2 ------------------------------------------------
    // slt x1, x2, x3  → 0x003120B3
    #[test]
    fn test_slt() {
        let bytes = 0x003120B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SLT");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSless));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    // -- SLTU rd, rs1, rs2 -----------------------------------------------
    // sltu x1, x2, x3  → 0x003130B3
    #[test]
    fn test_sltu() {
        let bytes = 0x003130B3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SLTU");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    // -- BEQ rs1, rs2, offset --------------------------------------------
    // beq x1, x2, +8  → 0x00208463
    #[test]
    fn test_beq() {
        let bytes = 0x00208463u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode BEQ");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    // -- BNE rs1, rs2, offset --------------------------------------------
    // bne x1, x2, +8  → 0x00209463
    #[test]
    fn test_bne() {
        let bytes = 0x00209463u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode BNE");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntNotequal));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    // -- BLT rs1, rs2, offset --------------------------------------------
    // blt x1, x2, +8  → 0x0020C463
    #[test]
    fn test_blt() {
        let bytes = 0x0020C463u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode BLT");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSless));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    // -- BGE rs1, rs2, offset --------------------------------------------
    // bge x1, x2, +8  → 0x0020D463
    #[test]
    fn test_bge() {
        let bytes = 0x0020D463u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode BGE");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSless));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    // -- JAL rd, offset --------------------------------------------------
    // jal x1, +8 → 0x008000EF (capstone pseudo: jal 8, implicit rd=ra)
    #[test]
    fn test_jal() {
        let bytes = 0x008000EFu32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode JAL");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branch));
        // Saves return address in x1 (ra, offset=8)
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)) })
        );
    }

    // jalr x1, 0(x2) → 0x000100E7 (capstone pseudo: jalr sp, implicit rd=ra)
    #[test]
    fn test_jalr_call() {
        let bytes = 0x000100E7u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode JALR");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callind));
    }

    // ret = jalr x0, 0(x1) → 0x00008067
    #[test]
    fn test_jalr_ret() {
        let bytes = 0x00008067u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode RET");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Return));
    }

    // -- LW rd, offset(rs1) ----------------------------------------------
    // lw x1, 0(x2)  → 0x00012083
    #[test]
    fn test_lw() {
        let bytes = 0x00012083u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode LW");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        // LW sign-extends 4->8
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    // -- LD rd, offset(rs1) ----------------------------------------------
    // ld x1, 0(x2)  → 0x00013083
    #[test]
    fn test_ld() {
        let bytes = 0x00013083u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode LD");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        // LD loads 8 bytes, no extension needed
        assert!(
            !result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSext || i.op == IrOp::IntZext)
        );
    }

    // -- SW rs2, offset(rs1) ---------------------------------------------
    // sw x1, 0(x2)  → 0x00112023
    #[test]
    fn test_sw() {
        let bytes = 0x00112023u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SW");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
        // SW truncates to 4 bytes
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Subpiece));
    }

    // -- SD rs2, offset(rs1) ---------------------------------------------
    // sd x1, 0(x2)  → 0x00113023
    #[test]
    fn test_sd() {
        let bytes = 0x00113023u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SD");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
        // SD stores 8 bytes, no truncation
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Subpiece));
    }

    // -- LUI rd, imm ----------------------------------------------------
    // lui x1, 0x12345  → 0x123450B7
    #[test]
    fn test_lui() {
        let bytes = 0x123450B7u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode LUI");
        assert_eq!(result.len, 4);
        // LUI writes immediate to rd
        assert!(result.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)) // x1
        }));
    }

    // -- AUIPC rd, imm --------------------------------------------------
    // auipc x1, 0x12345  → 0x12345097
    #[test]
    fn test_auipc() {
        let bytes = 0x12345097u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode AUIPC");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        // Should write to x1
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)) })
        );
    }

    // -- ECALL -----------------------------------------------------------
    // ecall  → 0x00000073
    #[test]
    fn test_ecall() {
        let bytes = 0x00000073u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode ECALL");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
    }

    // -- EBREAK ----------------------------------------------------------
    // ebreak  → 0x00100073
    #[test]
    fn test_ebreak() {
        let bytes = 0x00100073u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode EBREAK");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
    }

    // -- x0 hardwired zero -----------------------------------------------
    // add x0, x1, x2 → result discarded (x0 write is no-op)
    #[test]
    fn test_x0_write_is_noop() {
        // add x0, x1, x2  → 0x00208033
        let bytes = 0x00208033u32.to_le_bytes();
        let result = lifter().lift_insn(&bytes, 0x1000).expect("should decode");
        assert_eq!(result.len, 4);
        // Should have IntAdd but no Copy to x0 (offset 0)
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(
            !result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(Varnode::reg(0, 8)) })
        );
    }

    // -- x0 read produces constant zero ----------------------------------
    // add x1, x0, x2 → x1 = 0 + x2 = x2
    #[test]
    fn test_x0_read_is_zero() {
        // add x1, x0, x2  → 0x002000B3
        let bytes = 0x002000B3u32.to_le_bytes();
        let result = lifter().lift_insn(&bytes, 0x1000).expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        // One of the inputs should be constant 0
        let add_insn = result.ir_ops.iter().find(|i| i.op == IrOp::IntAdd).unwrap();
        assert!(
            add_insn
                .inputs
                .iter()
                .any(|v| *v == Varnode::constant(0, 8))
        );
    }

    // -- Unknown instruction produces Unimplemented ----------------------
    #[test]
    fn test_unknown_insn() {
        // FENCE instruction (not in our dispatch table)
        // fence  → 0x0ff0000f
        let bytes = 0x0ff0000fu32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should not panic");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    // -- Load with nonzero offset ----------------------------------------
    #[test]
    fn test_lw_with_offset() {
        // lw x1, 16(x2)  → 0x01012083
        let bytes = 0x01012083u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode LW");
        assert_eq!(result.len, 4);
        // Should have address computation (IntAdd for offset)
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }

    // -- Store with nonzero offset ----------------------------------------
    #[test]
    fn test_sw_with_offset() {
        // sw x1, 16(x2) → 0x00112823
        let bytes = 0x00112823u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SW");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    // -- SLLI, SRLI, SRAI -----------------------------------------------
    // slli x1, x2, 4  → 0x00411093
    #[test]
    fn test_slli() {
        let bytes = 0x00411093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SLLI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
    }

    // srli x1, x2, 4  → 0x00415093
    #[test]
    fn test_srli() {
        let bytes = 0x00415093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SRLI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
    }

    // srai x1, x2, 4  → 0x40415093
    #[test]
    fn test_srai() {
        let bytes = 0x40415093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SRAI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    // -- SLTI, SLTIU ----------------------------------------------------
    // slti x1, x2, 5  → 0x00512093
    #[test]
    fn test_slti() {
        let bytes = 0x00512093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SLTI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSless));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    // sltiu x1, x2, 5  → 0x00513093
    #[test]
    fn test_sltiu() {
        let bytes = 0x00513093u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SLTIU");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    fn assert_crypto_callother(word: u32, tag: u64, extra_const: Option<u64>) {
        let bytes = word.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode RISC-V scalar crypto instruction");
        assert_eq!(result.len, 4);
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("should emit Callother");
        assert_eq!(call.inputs.first(), Some(&Varnode::constant(tag, 8)));
        if let Some(value) = extra_const {
            assert!(call.inputs.contains(&Varnode::constant(value, 1)));
        }
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)))
        );
    }

    #[test]
    fn test_riscv_crypto_aes64_rounds() {
        assert_crypto_callother(0x323100B3, crypto_tag::RV_AES64ES, None);
        assert_crypto_callother(0x363100B3, crypto_tag::RV_AES64ESM, None);
        assert_crypto_callother(0x3A3100B3, crypto_tag::RV_AES64DS, None);
        assert_crypto_callother(0x3E3100B3, crypto_tag::RV_AES64DSM, None);
        assert_crypto_callother(0xFE3100B3, crypto_tag::RV_AES64KS2, None);
    }

    #[test]
    fn test_riscv_crypto_aes64_immediates() {
        assert_crypto_callother(0x30011093, crypto_tag::RV_AES64IM, None);
        assert_crypto_callother(0x31511093, crypto_tag::RV_AES64KS1I, Some(5));
    }

    #[test]
    fn test_riscv_crypto_aes32_and_sm4_byte_select() {
        assert_crypto_callother(0xA23100B3, crypto_tag::RV_AES32ESI, Some(2));
        assert_crypto_callother(0xE63100B3, crypto_tag::RV_AES32ESMI, Some(3));
        assert_crypto_callother(0x2A3100B3, crypto_tag::RV_AES32DSI, Some(0));
        assert_crypto_callother(0x6E3100B3, crypto_tag::RV_AES32DSMI, Some(1));
        assert_crypto_callother(0xB03100B3, crypto_tag::RV_SM4ED, Some(2));
        assert_crypto_callother(0x743100B3, crypto_tag::RV_SM4KS, Some(1));
    }

    #[test]
    fn test_riscv_crypto_sha_and_sm3_unary() {
        assert_crypto_callother(0x10011093, crypto_tag::RV_SHA256SUM0, None);
        assert_crypto_callother(0x10111093, crypto_tag::RV_SHA256SUM1, None);
        assert_crypto_callother(0x10211093, crypto_tag::RV_SHA256SIG0, None);
        assert_crypto_callother(0x10311093, crypto_tag::RV_SHA256SIG1, None);
        assert_crypto_callother(0x10411093, crypto_tag::RV_SHA512SUM0, None);
        assert_crypto_callother(0x10511093, crypto_tag::RV_SHA512SUM1, None);
        assert_crypto_callother(0x10611093, crypto_tag::RV_SHA512SIG0, None);
        assert_crypto_callother(0x10711093, crypto_tag::RV_SHA512SIG1, None);
        assert_crypto_callother(0x10811093, crypto_tag::RV_SM3P0, None);
        assert_crypto_callother(0x10911093, crypto_tag::RV_SM3P1, None);
    }

    // NOP (addi x0, x0, 0) → 0x00000013 (capstone pseudo: nop, 0 ops)
    #[test]
    fn test_nop() {
        let bytes = 0x00000013u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode NOP");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.is_empty());
    }
}
