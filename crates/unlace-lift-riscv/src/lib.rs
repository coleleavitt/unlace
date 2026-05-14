//! RISC-V (RV32I/RV32E/RV64I/RV128I base) → IR lifter via capstone.
//!
//! Lifts the base integer instruction set across RISC-V widths. The current
//! IR register file remains 64-bit wide, so RV32 results are normalized into the
//! existing representation while RV64I instructions retain their native width.
//! x0 is hardwired to zero: reads produce `Varnode::constant(0, 8)`,
//! writes are silently dropped.

use capstone::arch::riscv::{RiscVInsn, RiscVOperand, RiscVReg};
use capstone::prelude::*;
use capstone::{Capstone, Instructions};

// RISC-V scalar crypto/Zk* callother tags. These let later analysis passes
// recognise crypto-centric idioms even when the bundled capstone build lacks
// first-class mnemonic coverage for the newer extension set.
const TAG_RISCV_SHA256SIG0: u64 = 0x520;
const TAG_RISCV_SHA256SIG1: u64 = 0x521;
const TAG_RISCV_SHA256SUM0: u64 = 0x522;
const TAG_RISCV_SHA256SUM1: u64 = 0x523;
const TAG_RISCV_SHA512SIG0: u64 = 0x524;
const TAG_RISCV_SHA512SIG1: u64 = 0x525;
const TAG_RISCV_SHA512SUM0: u64 = 0x526;
const TAG_RISCV_SHA512SUM1: u64 = 0x527;
const TAG_RISCV_AES32ESI: u64 = 0x530;
const TAG_RISCV_AES32ESMI: u64 = 0x531;
const TAG_RISCV_AES32DSI: u64 = 0x532;
const TAG_RISCV_AES32DSMI: u64 = 0x533;
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, SpaceId,
    Varnode,
};

mod rvc;
pub use rvc::{expand, is_compressed};

// ---------------------------------------------------------------------------
// Register file layout
// ---------------------------------------------------------------------------

const RV_REG_NAMES: [&str; 32] = [
    "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "x8", "x9", "x10", "x11", "x12", "x13", "x14",
    "x15", "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27",
    "x28", "x29", "x30", "x31",
];

const RVV_REG_NAMES: [&str; 32] = [
    "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13", "v14",
    "v15", "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27",
    "v28", "v29", "v30", "v31",
];

/// Offset of the pc register in the register file.
const PC_OFFSET: u64 = 256;

/// Offset of the RVV vector register bank (`v0`..`v31`).  RVV allows an
/// implementation-defined VLEN, so the lifter models each architectural vector
/// register as a conservative 128-byte register-space varnode.  LMUL groups are
/// represented by the first register plus an LMUL metadata operand in the RVV
/// callother rather than by fabricating variable-width register names.
const RVV_REG_OFFSET: u64 = 512;
const RVV_REG_SIZE: u8 = 128;
const RVV_REG_STRIDE: u64 = RVV_REG_SIZE as u64;

/// RVV CSRs/configuration registers modeled in the register file.
const VTYPE_OFFSET: u64 = 4608;
const VL_OFFSET: u64 = 4616;
const VSTART_OFFSET: u64 = 4624;
const VXRM_OFFSET: u64 = 4632;
const VXSAT_OFFSET: u64 = 4640;

/// RISC-V lifter callother identifiers for RVV instructions.
///
/// The first callother input is always one of these constants.  RVV operations
/// also include policy/mask/configuration metadata so downstream passes can
/// distinguish masked vs unmasked execution, tail/mask policy, SEW, LMUL and
/// vector length configuration even when the bundled Capstone does not decode
/// RVV instructions.
pub const CALLOTHER_RVV_VSETVLI: u64 = 0x5256_5601;
pub const CALLOTHER_RVV_VSETIVLI: u64 = 0x5256_5602;
pub const CALLOTHER_RVV_VSETVL: u64 = 0x5256_5603;
pub const CALLOTHER_RVV_LOAD: u64 = 0x5256_5610;
pub const CALLOTHER_RVV_STORE: u64 = 0x5256_5611;
pub const CALLOTHER_RVV_OPIVV: u64 = 0x5256_5620;
pub const CALLOTHER_RVV_OPFVV: u64 = 0x5256_5621;
pub const CALLOTHER_RVV_OPMVV: u64 = 0x5256_5622;
pub const CALLOTHER_RVV_OPIVI: u64 = 0x5256_5623;
pub const CALLOTHER_RVV_OPIVX: u64 = 0x5256_5624;
pub const CALLOTHER_RVV_OPFVF: u64 = 0x5256_5625;
pub const CALLOTHER_RVV_OPMVX: u64 = 0x5256_5626;
pub const CALLOTHER_RVV_MASK_OP: u64 = 0x5256_5630;

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

#[inline]
fn rvv_reg(index: u32) -> Varnode {
    Varnode::reg(
        RVV_REG_OFFSET + (index as u64) * RVV_REG_STRIDE,
        RVV_REG_SIZE,
    )
}

#[inline]
fn rvv_mask_reg(index: u32) -> Varnode {
    // Mask registers alias vector registers in RVV, but consumers need to know
    // only the mask-producing/consuming mode.  We therefore reuse the vector
    // varnode and put mask semantics in the callother identifier/metadata.
    rvv_reg(index)
}

#[inline]
fn rvv_config_inputs() -> [Varnode; 3] {
    [
        Varnode::reg(VTYPE_OFFSET, 8),
        Varnode::reg(VL_OFFSET, 8),
        Varnode::reg(VSTART_OFFSET, 8),
    ]
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

    fn emit_crypto_callother(&mut self, tag: u64, rd: RegId, lhs: Varnode, rhs: Varnode) {
        let tmp = self.alloc_unique(lhs.size.max(rhs.size));
        self.emit(IrInsn::with_output(
            IrOp::Callother,
            tmp,
            smallvec![Varnode::constant(tag, 8), lhs, rhs],
            self.addr,
        ));
        self.write_reg(rd, tmp);
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

        // Extend to 8 bytes (current register-file width)
        let value = if load_size < 8 {
            // Narrow signed integer loads are sign-extended into the register file.
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

fn bits(value: u32, lo: u8, width: u8) -> u32 {
    (value >> lo) & ((1u32 << width) - 1)
}

fn decode_crypto_r_type(word: u32) -> Option<(u8, RegId, RegId, RegId, u8)> {
    if bits(word, 0, 7) != 0x33 {
        return None;
    }
    let rd = RegId(bits(word, 7, 5) as u16);
    let funct3 = bits(word, 12, 3) as u8;
    let rs1 = RegId(bits(word, 15, 5) as u16);
    let rs2 = RegId(bits(word, 20, 5) as u16);
    let funct7 = bits(word, 25, 7) as u8;
    Some((funct7, rd, rs1, rs2, funct3))
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
        let mut regs = Vec::with_capacity(70);
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

        // RVV architectural vector registers.  The fixed 128-byte model is an
        // IR storage convention; exact SEW/LMUL/VL semantics are carried by the
        // RVV callother metadata emitted for each instruction.
        for (i, name) in RVV_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: rvv_reg(i as u32),
            });
        }
        regs.extend([
            RegisterDef {
                name: "vtype",
                varnode: Varnode::reg(VTYPE_OFFSET, 8),
            },
            RegisterDef {
                name: "vl",
                varnode: Varnode::reg(VL_OFFSET, 8),
            },
            RegisterDef {
                name: "vstart",
                varnode: Varnode::reg(VSTART_OFFSET, 8),
            },
            RegisterDef {
                name: "vxrm",
                varnode: Varnode::reg(VXRM_OFFSET, 8),
            },
            RegisterDef {
                name: "vxsat",
                varnode: Varnode::reg(VXSAT_OFFSET, 8),
            },
        ]);

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

        if let Some(lifted) = lift_rvv_direct(bytes, addr) {
            return Ok(lifted);
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

#[inline]
fn rvv_const(value: u64) -> Varnode {
    Varnode::constant(value, 8)
}

fn emit_rvv_callother(
    ctx: &mut LiftCtx,
    tag: u64,
    output: Option<Varnode>,
    mut inputs: Vec<Varnode>,
) {
    let mut all = smallvec![rvv_const(tag)];
    all.extend(inputs.drain(..));
    match output {
        Some(out) => ctx.emit(IrInsn::with_output(IrOp::Callother, out, all, ctx.addr)),
        None => ctx.emit(IrInsn::without_output(IrOp::Callother, all, ctx.addr)),
    }
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
enum RvvMajor {
    Opivv = 0,
    Opfvv = 1,
    Opmvv = 2,
    Opivi = 3,
    Opivx = 4,
    Opfvf = 5,
    Opmvx = 6,
}

impl RvvMajor {
    fn from_funct3(funct3: u32) -> Option<Self> {
        match funct3 {
            0b000 => Some(Self::Opivv),
            0b001 => Some(Self::Opfvv),
            0b010 => Some(Self::Opmvv),
            0b011 => Some(Self::Opivi),
            0b100 => Some(Self::Opivx),
            0b101 => Some(Self::Opfvf),
            0b110 => Some(Self::Opmvx),
            _ => None,
        }
    }

    fn tag(self) -> u64 {
        match self {
            Self::Opivv => CALLOTHER_RVV_OPIVV,
            Self::Opfvv => CALLOTHER_RVV_OPFVV,
            Self::Opmvv => CALLOTHER_RVV_OPMVV,
            Self::Opivi => CALLOTHER_RVV_OPIVI,
            Self::Opivx => CALLOTHER_RVV_OPIVX,
            Self::Opfvf => CALLOTHER_RVV_OPFVF,
            Self::Opmvx => CALLOTHER_RVV_OPMVX,
        }
    }

    fn is_scalar_or_imm(self) -> bool {
        matches!(self, Self::Opivi | Self::Opivx | Self::Opfvf | Self::Opmvx)
    }
}

fn lift_rvv_direct(bytes: &[u8], addr: u64) -> Option<LiftedInsn> {
    if bytes.len() < 4 {
        return None;
    }

    let word = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
    let opcode = word & 0x7f;
    let rd = (word >> 7) & 0x1f;
    let funct3 = (word >> 12) & 0x7;
    let rs1 = (word >> 15) & 0x1f;
    let rs2 = (word >> 20) & 0x1f;
    let vm = (word >> 25) & 0x1;
    let funct6 = (word >> 26) & 0x3f;
    let mut ctx = LiftCtx::new(addr);

    match opcode {
        // vsetvli rd, rs1, vtypei
        0x57 if funct3 == 0b111 && ((word >> 31) & 1) == 0 => {
            let vtypei = (word >> 20) & 0x7ff;
            let avl = read_reg(rv_reg(rs1));
            let vl = Varnode::reg(VL_OFFSET, 8);
            emit_rvv_callother(
                &mut ctx,
                CALLOTHER_RVV_VSETVLI,
                Some(vl),
                vec![avl, rvv_const(vtypei as u64)],
            );
            ctx.write_reg(rv_reg(rd), vl);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                Varnode::reg(VTYPE_OFFSET, 8),
                smallvec![rvv_const(vtypei as u64)],
                addr,
            ));
        }
        // vsetivli rd, uimm, vtypei
        0x57 if funct3 == 0b111 && ((word >> 30) & 0x3) == 0b11 => {
            let uimm = rs1;
            let vtypei = (word >> 20) & 0x3ff;
            let vl = Varnode::reg(VL_OFFSET, 8);
            emit_rvv_callother(
                &mut ctx,
                CALLOTHER_RVV_VSETIVLI,
                Some(vl),
                vec![rvv_const(uimm as u64), rvv_const(vtypei as u64)],
            );
            ctx.write_reg(rv_reg(rd), vl);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                Varnode::reg(VTYPE_OFFSET, 8),
                smallvec![rvv_const(vtypei as u64)],
                addr,
            ));
        }
        // vsetvl rd, rs1, rs2
        0x57 if funct3 == 0b111 && funct6 == 0b100000 => {
            let avl = read_reg(rv_reg(rs1));
            let vtype_src = read_reg(rv_reg(rs2));
            let vl = Varnode::reg(VL_OFFSET, 8);
            emit_rvv_callother(
                &mut ctx,
                CALLOTHER_RVV_VSETVL,
                Some(vl),
                vec![avl, vtype_src],
            );
            ctx.write_reg(rv_reg(rd), vl);
            ctx.emit(IrInsn::with_output(
                IrOp::Copy,
                Varnode::reg(VTYPE_OFFSET, 8),
                smallvec![vtype_src],
                addr,
            ));
        }
        // Unit-stride vector loads: vle{8,16,32,64}.v vd, (rs1), vm
        0x07 if matches!(funct3, 0b000 | 0b101 | 0b110 | 0b111) && ((word >> 28) & 0xf) == 0 => {
            let width = match funct3 {
                0b000 => 1,
                0b101 => 2,
                0b110 => 4,
                0b111 => 8,
                _ => unreachable!(),
            };
            let mut inputs = vec![
                read_reg(rv_reg(rs1)),
                rvv_const(width),
                rvv_const(vm as u64),
            ];
            inputs.extend(rvv_config_inputs());
            emit_rvv_callother(&mut ctx, CALLOTHER_RVV_LOAD, Some(rvv_reg(rd)), inputs);
        }
        // Unit-stride vector stores: vse{8,16,32,64}.v vs3, (rs1), vm
        0x27 if matches!(funct3, 0b000 | 0b101 | 0b110 | 0b111) && ((word >> 28) & 0xf) == 0 => {
            let width = match funct3 {
                0b000 => 1,
                0b101 => 2,
                0b110 => 4,
                0b111 => 8,
                _ => unreachable!(),
            };
            let mut inputs = vec![
                rvv_reg(rs2),
                read_reg(rv_reg(rs1)),
                rvv_const(width),
                rvv_const(vm as u64),
            ];
            inputs.extend(rvv_config_inputs());
            emit_rvv_callother(&mut ctx, CALLOTHER_RVV_STORE, None, inputs);
        }
        // Vector arithmetic/logical/move/mask operations.  The exact funct6 is
        // preserved as metadata, giving downstream passes full opcode-mode
        // visibility while avoiding dependence on Capstone's RVV tables.
        0x57 => {
            let major = RvvMajor::from_funct3(funct3)?;
            let is_mask_op = matches!(major, RvvMajor::Opmvv | RvvMajor::Opmvx);
            let tag = if is_mask_op {
                CALLOTHER_RVV_MASK_OP
            } else {
                major.tag()
            };
            let mut inputs = vec![rvv_reg(rs2)];
            if major.is_scalar_or_imm() {
                if matches!(major, RvvMajor::Opivi) {
                    inputs.push(rvv_const(sign_extend(rs1, 5) as u64));
                } else {
                    inputs.push(read_reg(rv_reg(rs1)));
                }
            } else {
                inputs.push(rvv_reg(rs1));
            }
            inputs.extend([
                rvv_const(funct6 as u64),
                rvv_const(vm as u64),
                rvv_const(major as u64),
            ]);
            inputs.extend(rvv_config_inputs());
            let out = if is_mask_op {
                rvv_mask_reg(rd)
            } else {
                rvv_reg(rd)
            };
            emit_rvv_callother(&mut ctx, tag, Some(out), inputs);
        }
        _ => return None,
    }

    Some(LiftedInsn {
        ir_ops: ctx.ops,
        len: 4,
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
    if let Some(lifted) = lift_riscv_crypto_direct(word, addr) {
        return Some(lifted);
    }
    let opcode = word & 0x7f;
    let rd = (word >> 7) & 0x1f;
    let funct3 = (word >> 12) & 0x7;
    let rs1 = (word >> 15) & 0x1f;
    let rs2 = (word >> 20) & 0x1f;
    let funct7 = (word >> 25) & 0x7f;
    let mut ctx = LiftCtx::new(addr);

    match opcode {
        0x13 => {
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
        0x33 => {
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

fn lift_riscv_crypto_direct(word: u32, addr: u64) -> Option<LiftedInsn> {
    let (funct7, rd, rs1, rs2, funct3) = decode_crypto_r_type(word)?;
    let mut ctx = LiftCtx::new(addr);
    match (funct7, funct3) {
        (0b1100111, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA256SIG0, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b1101001, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA256SIG1, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0001000, 0b010) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA256SUM0, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0001000, 0b100) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA256SUM1, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0000101, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA512SIG0, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0000101, 0b001) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA512SIG1, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0000100, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA512SUM0, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0000100, 0b001) => {
            ctx.emit_crypto_callother(TAG_RISCV_SHA512SUM1, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0010010, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_AES32ESI, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0010011, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_AES32ESMI, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0010101, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_AES32DSI, rd, read_reg(rs1), read_reg(rs2))
        }
        (0b0010111, 0b000) => {
            ctx.emit_crypto_callother(TAG_RISCV_AES32DSMI, rd, read_reg(rs1), read_reg(rs2))
        }
        _ => return None,
    }

    Some(LiftedInsn {
        ir_ops: ctx.ops,
        len: 4,
    })
}

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

        // -- Loads: LB/LH/LW/LD + unsigned variants --
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

        // -- Privileged/Hypervisor system instructions --
        x if x == RISCV_INS_SRET as u32 => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(2, 4)], // supervisor return
                addr,
            ));
        }
        x if x == RISCV_INS_WFI as u32 => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(3, 4)], // wait-for-interrupt hint
                addr,
            ));
        }
        x if x == RISCV_INS_SFENCE_VMA as u32 => {
            ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(4, 4)], // supervisor TLB fence
                addr,
            ));
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
        x if x == RISCV_INS_DIVUW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntDiv, rd, rs1, rs2);
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
        x if x == RISCV_INS_REMUW as u32 => {
            if let Some((rd, rs1, rs2)) = ops_rrr(operands) {
                ctx.lift_alu_rr_w(IrOp::IntRem, rd, rs1, rs2);
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


/// RISC-V ISA extension flags detected from ELF attributes or instruction patterns.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct RiscvExtensions {
    /// M: Integer multiply/divide.
    pub m: bool,
    /// A: Atomic instructions.
    pub a: bool,
    /// F: Single-precision floating point.
    pub f: bool,
    /// D: Double-precision floating point.
    pub d: bool,
    /// C: Compressed (16-bit) instructions.
    pub c: bool,
    /// V: Vector extension.
    pub v: bool,
    /// Zba: Address generation bit-manipulation.
    pub zba: bool,
    /// Zbb: Basic bit-manipulation.
    pub zbb: bool,
    /// Zbc: Carry-less multiplication.
    pub zbc: bool,
    /// Zbs: Single-bit operations.
    pub zbs: bool,
    /// Zbkb/Zbkc/Zbkx: Crypto bit-manipulation.
    pub zbk: bool,
    /// Zk*: Scalar crypto.
    pub zk: bool,
    /// H: Hypervisor extension.
    pub h: bool,
}

impl RiscvExtensions {
    /// Parse a RISC-V ISA string (e.g. "rv64imafdc_zba_zbb").
    pub fn from_isa_string(s: &str) -> Self {
        let lower = s.to_ascii_lowercase();
        let mut ext = Self::default();
        // Base extensions in the ISA string
        if lower.contains('m') { ext.m = true; }
        if lower.contains('a') { ext.a = true; }
        if lower.contains('f') { ext.f = true; }
        if lower.contains('d') { ext.d = true; }
        if lower.contains('c') { ext.c = true; }
        if lower.chars().enumerate().any(|(i, c)| c == 'v' && i > 3) { ext.v = true; }
        // Named extensions after underscore
        if lower.contains("zba") { ext.zba = true; }
        if lower.contains("zbb") { ext.zbb = true; }
        if lower.contains("zbc") { ext.zbc = true; }
        if lower.contains("zbs") { ext.zbs = true; }
        if lower.contains("zbk") { ext.zbk = true; }
        if lower.contains("zk") { ext.zk = true; }
        if lower.contains("_h") || lower.ends_with('h') { ext.h = true; }
        ext
    }
}

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
        assert_eq!(rf.registers.len(), 70);
        assert_eq!(rf.registers[0].name, "x0");
        assert_eq!(rf.registers[31].name, "x31");
        assert_eq!(rf.registers[32].name, "pc");
        assert_eq!(rf.registers[33].name, "v0");
        assert_eq!(rf.registers[64].name, "v31");
        assert_eq!(rf.registers[65].name, "vtype");
        assert_eq!(rf.registers[66].name, "vl");
        assert_eq!(rf.registers[67].name, "vstart");
        assert_eq!(rf.registers[68].name, "vxrm");
        assert_eq!(rf.registers[69].name, "vxsat");
    }

    #[test]
    fn test_short_buffer() {
        let result = lifter().lift_insn(&[0x00], 0x1000);
        assert!(result.is_err());
    }

    fn rvv_tag(result: &LiftedInsn) -> Option<u64> {
        result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .and_then(|i| i.inputs.first())
            .map(|v| v.offset)
    }

    #[test]
    fn test_rvv_vsetvli() {
        // vsetvli x1, x2, e32,m1,ta,ma (vtypei carries SEW/LMUL/tail/mask policy)
        let vtypei = 0b1101_0000u32;
        let word = (vtypei << 20) | (2 << 15) | (0b111 << 12) | (1 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should lift vsetvli without capstone RVV support");
        assert_eq!(result.len, 4);
        assert_eq!(rvv_tag(&result), Some(CALLOTHER_RVV_VSETVLI));
        assert!(
            result.ir_ops.iter().any(|i| {
                i.op == IrOp::Callother && i.output == Some(Varnode::reg(VL_OFFSET, 8))
            })
        );
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)) })
        );
    }

    #[test]
    fn test_rvv_vsetivli() {
        // vsetivli x3, 7, e8,mf2,tu,mu
        let vtypei = 0b0000_0101u32;
        let word = (0b11 << 30) | (vtypei << 20) | (7 << 15) | (0b111 << 12) | (3 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should lift vsetivli");
        assert_eq!(rvv_tag(&result), Some(CALLOTHER_RVV_VSETIVLI));
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert!(call.inputs.contains(&Varnode::constant(7, 8)));
    }

    #[test]
    fn test_rvv_vsetvl() {
        // vsetvl x1, x2, x3
        let word: u32 = (0b100000 << 26) | (3 << 20) | (2 << 15) | (0b111 << 12) | (1 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should lift vsetvl");
        assert_eq!(rvv_tag(&result), Some(CALLOTHER_RVV_VSETVL));
    }

    #[test]
    fn test_rvv_vector_add_masked() {
        // vadd.vv v1, v2, v3, v0.t (vm=0, funct6=0)
        let word: u32 = (0 << 25) | (3 << 20) | (2 << 15) | (0b000 << 12) | (1 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should lift vector op");
        assert_eq!(rvv_tag(&result), Some(CALLOTHER_RVV_OPIVV));
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(call.output, Some(rvv_reg(1)));
        assert!(call.inputs.contains(&rvv_reg(2)));
        assert!(call.inputs.contains(&rvv_reg(3)));
        assert!(call.inputs.contains(&Varnode::reg(VTYPE_OFFSET, 8)));
        assert!(call.inputs.contains(&Varnode::reg(VL_OFFSET, 8)));
    }

    #[test]
    fn test_rvv_mask_register_op() {
        // vmand.mm v1, v2, v3 (OPMVV mode); result is a mask/vector-register alias.
        let word: u32 =
            (0b011001 << 26) | (1 << 25) | (3 << 20) | (2 << 15) | (0b010 << 12) | (1 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should lift mask op");
        assert_eq!(rvv_tag(&result), Some(CALLOTHER_RVV_MASK_OP));
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(call.output, Some(rvv_mask_reg(1)));
    }

    #[test]
    fn test_rvv_load_store_unit_stride() {
        // vle8.v v1, (x2), vm=1 and vse16.v v3, (x4), vm=0
        let load: u32 = (1 << 25) | (2 << 15) | (0b000 << 12) | (1 << 7) | 0x07;
        let load_result = lifter()
            .lift_insn(&load.to_le_bytes(), 0x1000)
            .expect("should lift vector load");
        assert_eq!(rvv_tag(&load_result), Some(CALLOTHER_RVV_LOAD));
        assert_eq!(
            load_result
                .ir_ops
                .iter()
                .find(|i| i.op == IrOp::Callother)
                .unwrap()
                .output,
            Some(rvv_reg(1))
        );

        let store: u32 = (0 << 25) | (3 << 20) | (4 << 15) | (0b101 << 12) | (0 << 7) | 0x27;
        let store_result = lifter()
            .lift_insn(&store.to_le_bytes(), 0x1000)
            .expect("should lift vector store");
        assert_eq!(rvv_tag(&store_result), Some(CALLOTHER_RVV_STORE));
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

    #[test]
    fn test_divuw() {
        // divuw x1, x2, x3 -> funct7=0000001 funct3=101 opcode=0111011
        let bytes = 0x023150BBu32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode DIVUW");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntDiv));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_remuw() {
        // remuw x1, x2, x3 -> funct7=0000001 funct3=111 opcode=0111011
        let bytes = 0x023170BBu32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode REMUW");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRem));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
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

    // -- SRET ------------------------------------------------------------
    // sret  → 0x10200073
    #[test]
    fn test_sret() {
        let bytes = 0x10200073u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SRET");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
    }

    // -- WFI -------------------------------------------------------------
    // wfi  → 0x10500073
    #[test]
    fn test_wfi() {
        let bytes = 0x10500073u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode WFI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
    }

    // -- SFENCE.VMA ------------------------------------------------------
    // sfence.vma x0, x0  → 0x12000073
    #[test]
    fn test_sfence_vma() {
        let bytes = 0x12000073u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode SFENCE.VMA");
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

    #[test]
    fn test_sha256sig0_crypto_tag() {
        let bytes = 0xce1100b3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode sha256sig0");
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("callother present");
        assert_eq!(call.inputs[0], Varnode::constant(TAG_RISCV_SHA256SIG0, 8));
        assert_eq!(result.ir_ops.len(), 1);
    }

    #[test]
    fn test_sha512sum1_crypto_tag() {
        let bytes = 0x092100b3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode sha512sum1");
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("callother present");
        assert_eq!(call.inputs[0], Varnode::constant(TAG_RISCV_SHA512SUM0, 8));
    }

    #[test]
    fn test_aes32esmi_crypto_tag() {
        let bytes = 0x260100b3u32.to_le_bytes();
        let result = lifter()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode aes32esmi");
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("callother present");
        assert_eq!(call.inputs[0], Varnode::constant(TAG_RISCV_AES32ESMI, 8));
    }
}

#[cfg(test)]
mod ext_tests {
    use super::RiscvExtensions;

    #[test]
    fn parse_rv64gc() {
        let ext = RiscvExtensions::from_isa_string("rv64imafdc");
        assert!(ext.m);
        assert!(ext.a);
        assert!(ext.f);
        assert!(ext.d);
        assert!(ext.c);
        assert!(!ext.v);
    }

    #[test]
    fn parse_with_bitmanip() {
        let ext = RiscvExtensions::from_isa_string("rv64imafdc_zba_zbb_zbs");
        assert!(ext.zba);
        assert!(ext.zbb);
        assert!(ext.zbs);
        assert!(!ext.zbc);
    }

    #[test]
    fn parse_vector() {
        let ext = RiscvExtensions::from_isa_string("rv64imafdcv");
        assert!(ext.v);
    }
}
