//! RISC-V (RV32I/RV32E/RV64I/RV128I base) → IR lifter via capstone.
//! RISC-V (RV64I) → IR lifter via capstone.
//! RISC-V (RV64I + RVV metadata) → IR lifter via capstone.
//! RISC-V (RV64I) → IR lifter via capstone.
//! RISC-V base-integer → IR lifter.
//!
//! Lifts the base integer instruction set across RISC-V widths. The current
//! IR register file remains 64-bit wide, so RV32 results are normalized into the
//! existing representation while RV64I instructions retain their native width.
//! x0 is hardwired to zero: reads produce `Varnode::constant(0, 8)`,
//! writes are silently dropped. The RVV v1.0 vector extension is represented
//! with vector register varnodes and Callother intrinsics so downstream passes
//! can preserve vector configuration, mask mode, and data-flow even though the
//! frozen IR has no scalable-vector primitive opcodes.
//! Lifts the RV64I base integer instruction set. Registers x0-x31 plus pc.
//! x0 is hardwired to zero: reads produce `Varnode::constant(0, 8)`,
//! writes are silently dropped.
//! Lifts the unprivileged base integer ISA for RV32I, RV32E, RV64I and RV128I.
//! The public [`RiscVLifter`] keeps the historical RV64 defaults; width-specific
//! constructors select XLEN/register-count semantics while sharing the same direct
//! decoder. x0 is hardwired to zero: reads produce a zero constant and writes are
//! silently dropped.

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
/// Floating-point register file.  Each architectural f-register is allocated
/// 16 bytes so RV{F,D,Q} values can share the same logical register slot.
const FPR_OFFSET: u64 = 264;
const FPR_STRIDE: u64 = 16;
/// Conservative vector register slots for RVV.  The lifter models vector
/// operations as architecture callothers over fixed-size summaries rather than
/// trying to encode dynamic VLEN/SEW/LMUL in the core IR.
const VEC_OFFSET: u64 = 1024;
const VEC_STRIDE: u64 = 16;
const FCSR_OFFSET: u64 = 2048;

const CALLOTHER_RISCV_MULH: u64 = 0x5256_0001;
const CALLOTHER_RISCV_MULHSU: u64 = 0x5256_0002;
const CALLOTHER_RISCV_MULHU: u64 = 0x5256_0003;
const CALLOTHER_RISCV_AMO_MIN: u64 = 0x5256_0100;
const CALLOTHER_RISCV_AMO_MAX: u64 = 0x5256_0101;
const CALLOTHER_RISCV_AMO_MINU: u64 = 0x5256_0102;
const CALLOTHER_RISCV_AMO_MAXU: u64 = 0x5256_0103;
const CALLOTHER_RISCV_FMIN: u64 = 0x5256_0200;
const CALLOTHER_RISCV_FMAX: u64 = 0x5256_0201;
const CALLOTHER_RISCV_FCLASS: u64 = 0x5256_0202;
const CALLOTHER_RISCV_VECTOR: u64 = 0x5256_0300;
const CALLOTHER_RISCV_VSET: u64 = 0x5256_0301;

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

const RVV_REG_NAMES: [&str; 32] = [
    "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8", "v9", "v10", "v11", "v12", "v13", "v14",
    "v15", "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27",
    "v28", "v29", "v30", "v31",
];

/// RVV registers are scalable architecturally. The IR currently requires a
/// concrete varnode size, so use one architectural vector slice (128 bits) as
/// a symbolic handle and carry exact SEW/LMUL/mask policy in Callother inputs.
const RVV_REG_OFFSET: u64 = 0x1000;
const RVV_REG_SIZE: u8 = 16;
const RVV_REG_STRIDE: u64 = RVV_REG_SIZE as u64;
const RVV_VL_OFFSET: u64 = 0x2000;
const RVV_VTYPE_OFFSET: u64 = 0x2008;
const RVV_VSTART_OFFSET: u64 = 0x2010;
const RVV_VXRM_OFFSET: u64 = 0x2018;
const RVV_VXSAT_OFFSET: u64 = 0x2020;

/// RVV Callother tag base (kept out of the ARM NEON/SVE ranges).
pub const CALLOTHER_RVV_VSETVLI: u64 = 0x500;
pub const CALLOTHER_RVV_VSETIVLI: u64 = 0x501;
pub const CALLOTHER_RVV_VSETVL: u64 = 0x502;
pub const CALLOTHER_RVV_OPIVV: u64 = 0x510;
pub const CALLOTHER_RVV_OPFVV: u64 = 0x511;
pub const CALLOTHER_RVV_OPMVV: u64 = 0x512;
pub const CALLOTHER_RVV_OPIVI: u64 = 0x513;
pub const CALLOTHER_RVV_OPIVX: u64 = 0x514;
pub const CALLOTHER_RVV_OPFVF: u64 = 0x515;
pub const CALLOTHER_RVV_OPMVX: u64 = 0x516;
pub const CALLOTHER_RVV_LOAD: u64 = 0x520;
pub const CALLOTHER_RVV_STORE: u64 = 0x521;

fn rvv_reg(index: u32) -> Varnode {
    Varnode::reg(
        RVV_REG_OFFSET + (index as u64) * RVV_REG_STRIDE,
        RVV_REG_SIZE,
    )
}

fn rvv_mask(vm: bool) -> Varnode {
    if vm {
        // RVV vm=1 means unmasked/all active. 0xff is the same sentinel used
        // by the ARM SVE lifter for an all-lanes predicate.
        Varnode::constant(0xff, 1)
    } else {
        rvv_reg(0)
    }
}

// RISC-V scalar bit-manipulation (Zb*) callother tags.  These occupy a
// RISC-V-local range that does not overlap the existing x86/AArch64 tables.
pub const CALLOTHER_RISCV_CTZ: u64 = 0x600;
pub const CALLOTHER_RISCV_ROL: u64 = 0x601;
pub const CALLOTHER_RISCV_ROR: u64 = 0x602;
pub const CALLOTHER_RISCV_MIN: u64 = 0x603;
pub const CALLOTHER_RISCV_MINU: u64 = 0x604;
pub const CALLOTHER_RISCV_MAX: u64 = 0x605;
pub const CALLOTHER_RISCV_MAXU: u64 = 0x606;
pub const CALLOTHER_RISCV_CLMUL: u64 = 0x607;
pub const CALLOTHER_RISCV_CLMULH: u64 = 0x608;
pub const CALLOTHER_RISCV_CLMULR: u64 = 0x609;
pub const CALLOTHER_RISCV_REV8: u64 = 0x60A;
pub const CALLOTHER_RISCV_ORC_B: u64 = 0x60B;
/// Offset of the pc register in the register file.
const PC_OFFSET: u64 = 256;
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RiscVBaseVariant {
    Rv32I,
    Rv32E,
    Rv64I,
    Rv128I,
}

impl RiscVBaseVariant {
    const fn xlen(self) -> u8 {
        match self {
            Self::Rv32I | Self::Rv32E => 4,
            Self::Rv64I => 8,
            Self::Rv128I => 16,
        }
    }

    const fn register_count(self) -> u32 {
        match self {
            Self::Rv32E => 16,
            Self::Rv32I | Self::Rv64I | Self::Rv128I => 32,
        }
    }

    const fn capstone_mode(self) -> arch::riscv::ArchMode {
        match self {
            Self::Rv32I | Self::Rv32E => arch::riscv::ArchMode::RiscV32,
            Self::Rv64I | Self::Rv128I => arch::riscv::ArchMode::RiscV64,
        }
    }
}

/// Convert a capstone `RegId` to a register-space `Varnode`.
/// Returns `None` for x0 (hardwired zero — callers should use `Varnode::constant(0, xlen)`).
fn cs_reg_to_varnode_width(reg: RegId, xlen: u8, reg_count: u32) -> Option<Varnode> {
    let id = reg.0 as u32;
    // capstone riscv_reg: RISCV_REG_X0 = 1, RISCV_REG_X1 = 2, …, RISCV_REG_X31 = 32
    if id == RiscVReg::RISCV_REG_X0 as u32 {
        return None; // x0 is hardwired zero
    }
    if id >= RiscVReg::RISCV_REG_X0 as u32 && id < RiscVReg::RISCV_REG_X0 as u32 + reg_count {
        let idx = id - RiscVReg::RISCV_REG_X0 as u32;
        return Some(Varnode::reg((idx as u64) * xlen as u64, xlen));
    }
    None
}

/// Read a register operand: x0 produces constant zero, others produce register varnodes.
fn read_reg_width(reg: RegId, xlen: u8, reg_count: u32) -> Varnode {
    cs_reg_to_varnode_width(reg, xlen, reg_count).unwrap_or(Varnode::constant(0, xlen))
}

#[allow(dead_code)]
fn cs_reg_to_varnode(reg: RegId) -> Option<Varnode> {
    cs_reg_to_varnode_width(reg, 8, 32)
}

#[allow(dead_code)]
fn read_reg(reg: RegId) -> Varnode {
    read_reg_width(reg, 8, 32)
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
    xlen: u8,
    reg_count: u32,
}

impl LiftCtx {
    fn with_variant(addr: u64, variant: RiscVBaseVariant) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            unique_counter: 0,
            xlen: variant.xlen(),
            reg_count: variant.register_count(),
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
    fn emit_callother(
        &mut self,
        code: u64,
        output: Option<Varnode>,
        mut inputs: smallvec::SmallVec<[Varnode; 4]>,
    ) {
        inputs.insert(0, Varnode::constant(code, 8));
        let inputs: smallvec::SmallVec<[Varnode; 3]> = inputs.into_iter().collect();
        if let Some(out) = output {
            self.emit(IrInsn::with_output(IrOp::Callother, out, inputs, self.addr));
        } else {
            self.emit(IrInsn::without_output(IrOp::Callother, inputs, self.addr));
        }
    }

    fn lift_load_to(&mut self, dst: Varnode, base: RegId, offset: i64) {
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
        self.emit(IrInsn::with_output(
            IrOp::Load,
            dst,
            smallvec![Varnode::constant(SpaceId::Ram as u64, 8), addr_vn],
            self.addr,
        ));
    }

    fn lift_store_value(&mut self, base: RegId, offset: i64, value: Varnode) {
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
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::constant(SpaceId::Ram as u64, 8), addr_vn, value],
            self.addr,
        ));
    }

    fn lift_fp_rr(&mut self, op: IrOp, rd: u32, rs1: u32, rs2: u32, size: u8) {
        let out = fp_reg(rd, size);
        self.emit(IrInsn::with_output(
            op,
            out,
            smallvec![fp_reg(rs1, size), fp_reg(rs2, size)],
            self.addr,
        ));
    }

    fn lift_fp_unary(&mut self, op: IrOp, rd: u32, rs1: u32, size: u8) {
        self.emit(IrInsn::with_output(
            op,
            fp_reg(rd, size),
            smallvec![fp_reg(rs1, size)],
            self.addr,
        ));
    fn emit_callother(&mut self, output: Varnode, tag: u64, args: &[Varnode]) {
        let mut inputs = smallvec![Varnode::constant(tag, 8)];
        inputs.extend_from_slice(args);
        self.emit(IrInsn::with_output(
            IrOp::Callother,
            output,
            inputs,
            self.addr,
        ));
    }

    fn lift_unary_to_reg(&mut self, op: IrOp, rd: RegId, rs1: RegId) {
        let src = read_reg(rs1);
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(op, tmp, smallvec![src], self.addr));
        self.write_reg(rd, tmp);
    }

    fn lift_unary_callother(&mut self, tag: u64, rd: RegId, rs1: RegId) {
        let src = read_reg(rs1);
        let tmp = self.alloc_unique(8);
        self.emit_callother(tmp, tag, &[src]);
        self.write_reg(rd, tmp);
    }

    fn lift_binary_callother(&mut self, tag: u64, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = read_reg(rs1);
        let b = read_reg(rs2);
        let tmp = self.alloc_unique(8);
        self.emit_callother(tmp, tag, &[a, b]);
        self.write_reg(rd, tmp);
    }

    fn lift_callother_ri(&mut self, tag: u64, rd: RegId, rs1: RegId, imm: u64) {
        let a = read_reg(rs1);
        let tmp = self.alloc_unique(8);
        self.emit_callother(tmp, tag, &[a, Varnode::constant(imm, 8)]);
        self.write_reg(rd, tmp);
    }

    fn lift_not(&mut self, value: Varnode) -> Varnode {
        let tmp = self.alloc_unique(value.size);
        self.emit(IrInsn::with_output(
            IrOp::IntXor,
            tmp,
            smallvec![value, Varnode::constant(u64::MAX, value.size)],
            self.addr,
        ));
        tmp
    }

    fn lift_andn(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let not_rs2 = self.lift_not(read_reg(rs2));
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAnd,
            tmp,
            smallvec![read_reg(rs1), not_rs2],
            self.addr,
        ));
        self.write_reg(rd, tmp);
    }

    fn lift_orn(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let not_rs2 = self.lift_not(read_reg(rs2));
        let tmp = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntOr,
            tmp,
            smallvec![read_reg(rs1), not_rs2],
            self.addr,
        ));
        self.write_reg(rd, tmp);
    }

    fn lift_xnor(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let xor = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntXor,
            xor,
            smallvec![read_reg(rs1), read_reg(rs2)],
            self.addr,
        ));
        let not_xor = self.lift_not(xor);
        self.write_reg(rd, not_xor);
    }

    fn lift_shift_add(&mut self, rd: RegId, rs1: RegId, rs2: RegId, amount: u64, word: bool) {
        let base = if word {
            let lo = self.alloc_unique(4);
            self.emit(IrInsn::with_output(
                IrOp::Subpiece,
                lo,
                smallvec![read_reg(rs1), Varnode::constant(0, 4)],
                self.addr,
            ));
            let zext = self.alloc_unique(8);
            self.emit(IrInsn::with_output(
                IrOp::IntZext,
                zext,
                smallvec![lo],
                self.addr,
            ));
            zext
        } else {
            read_reg(rs1)
        };
        let shifted = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntLeft,
            shifted,
            smallvec![base, Varnode::constant(amount, 8)],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAdd,
            result,
            smallvec![shifted, read_reg(rs2)],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_add_uw(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let lo = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            lo,
            smallvec![read_reg(rs1), Varnode::constant(0, 4)],
            self.addr,
        ));
        let zext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            zext,
            smallvec![lo],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAdd,
            result,
            smallvec![zext, read_reg(rs2)],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_slli_uw(&mut self, rd: RegId, rs1: RegId, shamt: u64) {
        let lo = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            lo,
            smallvec![read_reg(rs1), Varnode::constant(0, 4)],
            self.addr,
        ));
        let zext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            zext,
            smallvec![lo],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntLeft,
            result,
            smallvec![zext, Varnode::constant(shamt, 8)],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_sext_from_bytes(&mut self, rd: RegId, rs1: RegId, bytes: u8) {
        let part = self.alloc_unique(bytes);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            part,
            smallvec![read_reg(rs1), Varnode::constant(0, 4)],
            self.addr,
        ));
        let ext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntSext,
            ext,
            smallvec![part],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    fn lift_zext_from_bytes(&mut self, rd: RegId, rs1: RegId, bytes: u8) {
        let part = self.alloc_unique(bytes);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            part,
            smallvec![read_reg(rs1), Varnode::constant(0, 4)],
            self.addr,
        ));
        let ext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            ext,
            smallvec![part],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    fn lift_bitmanip_mask(&mut self, shamt: Varnode) -> Varnode {
        let masked = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAnd,
            masked,
            smallvec![shamt, Varnode::constant(63, 8)],
            self.addr,
        ));
        let mask = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntLeft,
            mask,
            smallvec![Varnode::constant(1, 8), masked],
            self.addr,
        ));
        mask
    }

    fn lift_bset(&mut self, rd: RegId, rs1: RegId, shamt: Varnode) {
        let mask = self.lift_bitmanip_mask(shamt);
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntOr,
            result,
            smallvec![read_reg(rs1), mask],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_bclr(&mut self, rd: RegId, rs1: RegId, shamt: Varnode) {
        let mask = self.lift_bitmanip_mask(shamt);
        let not_mask = self.lift_not(mask);
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAnd,
            result,
            smallvec![read_reg(rs1), not_mask],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_binv(&mut self, rd: RegId, rs1: RegId, shamt: Varnode) {
        let mask = self.lift_bitmanip_mask(shamt);
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntXor,
            result,
            smallvec![read_reg(rs1), mask],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_bext(&mut self, rd: RegId, rs1: RegId, shamt: Varnode) {
        let masked = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAnd,
            masked,
            smallvec![shamt, Varnode::constant(63, 8)],
            self.addr,
        ));
        let shifted = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![read_reg(rs1), masked],
            self.addr,
        ));
        let result = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntAnd,
            result,
            smallvec![shifted, Varnode::constant(1, 8)],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_word_unary_to_reg(&mut self, op: IrOp, rd: RegId, rs1: RegId) {
        let lo = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            lo,
            smallvec![read_reg(rs1), Varnode::constant(0, 4)],
            self.addr,
        ));
        let result32 = self.alloc_unique(4);
        self.emit(IrInsn::with_output(op, result32, smallvec![lo], self.addr));
        let ext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntSext,
            ext,
            smallvec![result32],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    fn lift_word_callother(&mut self, tag: u64, rd: RegId, rs1: RegId) {
        let lo = self.alloc_unique(4);
        self.emit(IrInsn::with_output(
            IrOp::Subpiece,
            lo,
            smallvec![read_reg(rs1), Varnode::constant(0, 4)],
            self.addr,
        ));
        let result32 = self.alloc_unique(4);
        self.emit_callother(result32, tag, &[lo]);
        let ext = self.alloc_unique(8);
        self.emit(IrInsn::with_output(
            IrOp::IntSext,
            ext,
            smallvec![result32],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    /// Write `value` to `dst_reg`. If `dst_reg` is x0, the write is silently dropped.
    fn read_reg(&self, reg: RegId) -> Varnode {
        read_reg_width(reg, self.xlen, self.reg_count)
    }

    fn write_reg(&mut self, dst_reg: RegId, value: Varnode) {
        if let Some(dst) = cs_reg_to_varnode_width(dst_reg, self.xlen, self.reg_count) {
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
        let a = self.read_reg(rs1);
        let b = self.read_reg(rs2);
        let tmp = self.alloc_unique(self.xlen);
        self.emit(IrInsn::with_output(op, tmp, smallvec![a, b], self.addr));
        self.write_reg(rd, tmp);
    }

    fn lift_alu_ri(&mut self, op: IrOp, rd: RegId, rs1: RegId, imm: i64) {
        let a = self.read_reg(rs1);
        let b = Varnode::constant(imm as u64, self.xlen);
        let tmp = self.alloc_unique(self.xlen);
        self.emit(IrInsn::with_output(op, tmp, smallvec![a, b], self.addr));
        self.write_reg(rd, tmp);
    }

    fn lift_alu_rr_w(&mut self, op: IrOp, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = self.read_reg(rs1);
        let b = self.read_reg(rs2);
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
        let ext = self.alloc_unique(self.xlen);
        self.emit(IrInsn::with_output(
            IrOp::IntSext,
            ext,
            smallvec![res32],
            self.addr,
        ));
        self.write_reg(rd, ext);
    }

    fn lift_alu_ri_w(&mut self, op: IrOp, rd: RegId, rs1: RegId, imm: i64) {
        let a = self.read_reg(rs1);
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
        let ext = self.alloc_unique(self.xlen);
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
        let a = self.read_reg(rs1);
        let b = self.read_reg(rs2);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntSless,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(self.xlen);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_sltu(&mut self, rd: RegId, rs1: RegId, rs2: RegId) {
        let a = self.read_reg(rs1);
        let b = self.read_reg(rs2);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(self.xlen);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_slti(&mut self, rd: RegId, rs1: RegId, imm: i64) {
        let a = self.read_reg(rs1);
        let b = Varnode::constant(imm as u64, self.xlen);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntSless,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(self.xlen);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            result,
            smallvec![cmp],
            self.addr,
        ));
        self.write_reg(rd, result);
    }

    fn lift_sltiu(&mut self, rd: RegId, rs1: RegId, imm: i64) {
        let a = self.read_reg(rs1);
        let b = Varnode::constant(imm as u64, self.xlen);
        let cmp = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![a, b],
            self.addr,
        ));
        let result = self.alloc_unique(self.xlen);
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
        let a = self.read_reg(rs1);
        let b = self.read_reg(rs2);
        let cond = self.alloc_unique(1);
        self.emit(IrInsn::with_output(
            cmp_op,
            cond,
            smallvec![a, b],
            self.addr,
        ));
        let target_vn = Varnode::constant(target, self.xlen);
        self.emit(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target_vn, cond],
            self.addr,
        ));
    }

    // -- Load helpers -----------------------------------------------------

    fn lift_load(&mut self, rd: RegId, base: RegId, offset: i64, load_size: u8) {
        let base_vn = self.read_reg(base);
        let addr_vn = if offset != 0 {
            let off_vn = Varnode::constant(offset as u64, self.xlen);
            let tmp = self.alloc_unique(self.xlen);
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

        let ram_space = Varnode::constant(SpaceId::Ram as u64, self.xlen);
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
            // LW sign-extends to 64 bits; LD is already 8 bytes
            // LW is 4 bytes (sign-extend), LD is 8 bytes (no extend needed)
            // We use IntSext for signed loads (LW, LH, LB) by default
            let ext = self.alloc_unique(8);
            // LW sign-extends to 64 bits; LD is already 8 bytes
            // LW is 4 bytes (sign-extend), LD is 8 bytes (no extend needed)
            // We use IntSext for signed loads (LW, LH, LB) by default
            let ext = self.alloc_unique(self.xlen);
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
        let base_vn = self.read_reg(base);
        let addr_vn = if offset != 0 {
            let off_vn = Varnode::constant(offset as u64, self.xlen);
            let tmp = self.alloc_unique(self.xlen);
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

        let src_vn = self.read_reg(src);
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

        let ram_space = Varnode::constant(SpaceId::Ram as u64, self.xlen);
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
    variant: RiscVBaseVariant,
}

impl RiscVLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(70);
        let mut regs = Vec::with_capacity(33);
        let mut regs = Vec::with_capacity(99);
        for (i, name) in RV_REG_NAMES.iter().enumerate() {
        let mut regs = Vec::with_capacity(33);
        for (i, name) in RV_REG_NAMES.iter().enumerate() {
        Self::with_variant(RiscVBaseVariant::Rv64I)
    }

    pub fn rv32i() -> Self {
        Self::with_variant(RiscVBaseVariant::Rv32I)
    }

    pub fn rv32e() -> Self {
        Self::with_variant(RiscVBaseVariant::Rv32E)
    }

    pub fn rv64i() -> Self {
        Self::with_variant(RiscVBaseVariant::Rv64I)
    }

    pub fn rv128i() -> Self {
        Self::with_variant(RiscVBaseVariant::Rv128I)
    }

    pub fn variant(&self) -> RiscVBaseVariant {
        self.variant
    }

    pub fn xlen(&self) -> u8 {
        self.variant.xlen()
    }

    pub fn with_variant(variant: RiscVBaseVariant) -> Self {
        let xlen = variant.xlen();
        let reg_count = variant.register_count();
        let mut regs = Vec::with_capacity(reg_count as usize + 1);
        for (i, name) in RV_REG_NAMES.iter().take(reg_count as usize).enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg((i as u64) * xlen as u64, xlen),
            });
        }
        regs.push(RegisterDef {
            name: "pc",
            varnode: Varnode::reg(reg_count as u64 * xlen as u64, xlen),
        });
        for i in 0..32 {
            let name: &'static str = Box::leak(format!("f{i}").into_boxed_str());
            regs.push(RegisterDef {
                name,
                varnode: fp_reg(i, 16),
            });
        }
        for i in 0..32 {
            let name: &'static str = Box::leak(format!("v{i}").into_boxed_str());
            regs.push(RegisterDef {
                name,
                varnode: vec_reg(i),
            });
        }
        regs.push(RegisterDef {
            name: "fcsr",
            varnode: Varnode::reg(FCSR_OFFSET, 4),
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
        for (i, name) in RVV_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: rvv_reg(i as u32),
            });
        }
        regs.extend_from_slice(&[
            RegisterDef {
                name: "vl",
                varnode: Varnode::reg(RVV_VL_OFFSET, 8),
            },
            RegisterDef {
                name: "vtype",
                varnode: Varnode::reg(RVV_VTYPE_OFFSET, 8),
            },
            RegisterDef {
                name: "vstart",
                varnode: Varnode::reg(RVV_VSTART_OFFSET, 8),
            },
            RegisterDef {
                name: "vxrm",
                varnode: Varnode::reg(RVV_VXRM_OFFSET, 1),
            },
            RegisterDef {
                name: "vxsat",
                varnode: Varnode::reg(RVV_VXSAT_OFFSET, 1),
            },
        ]);

        let cs = Capstone::new()
            .riscv()
            .mode(variant.capstone_mode())
            .detail(true)
            .build()
            .expect("failed to create capstone RISC-V engine");

        Self {
            register_file: RegisterFile { registers: regs },
            cs,
            variant,
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
                if let Some(mut lifted) = lift_rv_base_direct(&buf, addr, self.variant) {
                    lifted.len = 2;
                    return Ok(lifted);
                }
            }
        }

        if let Some(lifted) = lift_rvv_direct(bytes, addr) {
            return Ok(lifted);
        }

        if let Some(lifted) = lift_rv64i_direct(bytes, addr) {
        if let Some(lifted) = lift_rv64i_direct(bytes, addr) {
        if let Some(lifted) = lift_rv_base_direct(bytes, addr, self.variant) {
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

        let mut ctx = LiftCtx::with_variant(addr, self.variant);
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

fn fp_reg(index: u32, size: u8) -> Varnode {
    Varnode::reg(FPR_OFFSET + (index as u64) * FPR_STRIDE, size)
}

fn vec_reg(index: u32) -> Varnode {
    Varnode::reg(VEC_OFFSET + (index as u64) * VEC_STRIDE, 16)
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
fn fp_size_from_fmt(fmt: u32) -> Option<u8> {
    match fmt {
        0b00 => Some(4),  // S
        0b01 => Some(8),  // D
        0b11 => Some(16), // Q
        _ => None,
    }
}

fn lift_riscv_extended_direct(word: u32, addr: u64, ctx: &mut LiftCtx) -> Option<()> {
    let opcode = word & 0x7f;
    let rd = (word >> 7) & 0x1f;
    let funct3 = (word >> 12) & 0x7;
    let rs1 = (word >> 15) & 0x1f;
    let rs2 = (word >> 20) & 0x1f;
    let rs3 = (word >> 27) & 0x1f;
    let funct7 = (word >> 25) & 0x7f;
    match opcode {
        // RV64M, including high-half products and unsigned W division/remainder.
        0x33 if funct7 == 0x01 => match funct3 {
            0x0 => ctx.lift_alu_rr(IrOp::IntMult, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x1 => ctx.emit_callother(
                CALLOTHER_RISCV_MULH,
                cs_reg_to_varnode(rv_reg(rd)),
                smallvec![read_reg(rv_reg(rs1)), read_reg(rv_reg(rs2))],
            ),
            0x2 => ctx.emit_callother(
                CALLOTHER_RISCV_MULHSU,
                cs_reg_to_varnode(rv_reg(rd)),
                smallvec![read_reg(rv_reg(rs1)), read_reg(rv_reg(rs2))],
            ),
            0x3 => ctx.emit_callother(
                CALLOTHER_RISCV_MULHU,
                cs_reg_to_varnode(rv_reg(rd)),
                smallvec![read_reg(rv_reg(rs1)), read_reg(rv_reg(rs2))],
            ),
            0x4 => ctx.lift_alu_rr(IrOp::IntSdiv, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x5 => ctx.lift_alu_rr(IrOp::IntDiv, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x6 => ctx.lift_alu_rr(IrOp::IntSrem, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x7 => ctx.lift_alu_rr(IrOp::IntRem, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            _ => return None,
        },
        0x3b if funct7 == 0x01 => match funct3 {
            0x0 => ctx.lift_alu_rr_w(IrOp::IntMult, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x4 => ctx.lift_alu_rr_w(IrOp::IntSdiv, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x5 => ctx.lift_alu_rr_w(IrOp::IntDiv, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x6 => ctx.lift_alu_rr_w(IrOp::IntSrem, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            0x7 => ctx.lift_alu_rr_w(IrOp::IntRem, rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            _ => return None,
        },
        // RVF/RVD/RVQ loads and stores.
        0x07 => {
            let imm = sign_extend(word >> 20, 12);
            let size = match funct3 {
                0x2 => 4,
                0x3 => 8,
                0x4 => 16,
                _ => return None,
            };
            ctx.lift_load_to(fp_reg(rd, size), rv_reg(rs1), imm);
        }
        0x27 => {
            let imm = ((word >> 7) & 0x1f) | (((word >> 25) & 0x7f) << 5);
            let imm = sign_extend(imm, 12);
            let size = match funct3 {
                0x2 => 4,
                0x3 => 8,
                0x4 => 16,
                _ => return None,
            };
            ctx.lift_store_value(rv_reg(rs1), imm, fp_reg(rs2, size));
        }
        // Fused multiply-add/subtract family.  IR has no FMA op, so emit the canonical two-op form.
        0x43 | 0x47 | 0x4b | 0x4f => {
            let size = fp_size_from_fmt(funct3)?;
            let mul = ctx.alloc_unique(size);
            ctx.emit(IrInsn::with_output(
                IrOp::FloatMult,
                mul,
                smallvec![fp_reg(rs1, size), fp_reg(rs2, size)],
                addr,
            ));
            let addend = fp_reg(rs3, size);
            let final_op = if opcode == 0x47 || opcode == 0x4f {
                IrOp::FloatSub
            } else {
                IrOp::FloatAdd
            };
            let out = fp_reg(rd, size);
            if opcode == 0x4b || opcode == 0x4f {
                let neg = ctx.alloc_unique(size);
                ctx.emit(IrInsn::with_output(
                    IrOp::FloatNeg,
                    neg,
                    smallvec![mul],
                    addr,
                ));
                ctx.emit(IrInsn::with_output(
                    final_op,
                    out,
                    smallvec![neg, addend],
                    addr,
                ));
            } else {
                ctx.emit(IrInsn::with_output(
                    final_op,
                    out,
                    smallvec![mul, addend],
                    addr,
                ));
            }
        }
        0x53 => {
            let fmt = (funct7 >> 2) & 0x3;
            let size = fp_size_from_fmt(fmt).unwrap_or(8);
            match (funct7 >> 2, funct7 & 0x3) {
                (0b00000, fmt) => {
                    ctx.lift_fp_rr(IrOp::FloatAdd, rd, rs1, rs2, fp_size_from_fmt(fmt)?)
                }
                (0b00001, fmt) => {
                    ctx.lift_fp_rr(IrOp::FloatSub, rd, rs1, rs2, fp_size_from_fmt(fmt)?)
                }
                (0b00010, fmt) => {
                    ctx.lift_fp_rr(IrOp::FloatMult, rd, rs1, rs2, fp_size_from_fmt(fmt)?)
                }
                (0b00011, fmt) => {
                    ctx.lift_fp_rr(IrOp::FloatDiv, rd, rs1, rs2, fp_size_from_fmt(fmt)?)
                }
                (0b01011, fmt) => {
                    ctx.lift_fp_unary(IrOp::FloatSqrt, rd, rs1, fp_size_from_fmt(fmt)?)
                }
                (0b10100, fmt) => {
                    let size = fp_size_from_fmt(fmt)?;
                    let op = match funct3 {
                        0x0 => IrOp::FloatLessequal,
                        0x1 => IrOp::FloatLess,
                        0x2 => IrOp::FloatEqual,
                        _ => return None,
                    };
                    let cmp = ctx.alloc_unique(1);
                    ctx.emit(IrInsn::with_output(
                        op,
                        cmp,
                        smallvec![fp_reg(rs1, size), fp_reg(rs2, size)],
                        addr,
                    ));
                    let ext = ctx.alloc_unique(8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntZext,
                        ext,
                        smallvec![cmp],
                        addr,
                    ));
                    ctx.write_reg(rv_reg(rd), ext);
                }
                _ => match funct7 {
                    0b0000000 | 0b0000001 | 0b0000011 => {
                        ctx.lift_fp_rr(IrOp::FloatAdd, rd, rs1, rs2, size)
                    }
                    0b0000100 | 0b0000101 | 0b0000111 => {
                        ctx.lift_fp_rr(IrOp::FloatSub, rd, rs1, rs2, size)
                    }
                    0b0001000 | 0b0001001 | 0b0001011 => {
                        ctx.lift_fp_rr(IrOp::FloatMult, rd, rs1, rs2, size)
                    }
                    0b0001100 | 0b0001101 | 0b0001111 => {
                        ctx.lift_fp_rr(IrOp::FloatDiv, rd, rs1, rs2, size)
                    }
                    0b0101100 | 0b0101101 | 0b0101111 => {
                        ctx.lift_fp_unary(IrOp::FloatSqrt, rd, rs1, size)
                    }
                    0b0010000 | 0b0010001 | 0b0010011 => match funct3 {
                        0x0 => ctx.emit(IrInsn::with_output(
                            IrOp::Copy,
                            fp_reg(rd, size),
                            smallvec![fp_reg(rs1, size)],
                            addr,
                        )),
                        0x1 => ctx.lift_fp_unary(IrOp::FloatNeg, rd, rs1, size),
                        0x2 => ctx.lift_fp_unary(IrOp::FloatAbs, rd, rs1, size),
                        _ => return None,
                    },
                    0b0010100 | 0b0010101 | 0b0010111 => {
                        let code = if funct3 == 0 {
                            CALLOTHER_RISCV_FMIN
                        } else {
                            CALLOTHER_RISCV_FMAX
                        };
                        ctx.emit_callother(
                            code,
                            Some(fp_reg(rd, size)),
                            smallvec![fp_reg(rs1, size), fp_reg(rs2, size)],
                        );
                    }
                    0b1010000 | 0b1010001 | 0b1010011 => {
                        let op = match funct3 {
                            0x0 => IrOp::FloatLessequal,
                            0x1 => IrOp::FloatLess,
                            0x2 => IrOp::FloatEqual,
                            _ => return None,
                        };
                        let cmp = ctx.alloc_unique(1);
                        ctx.emit(IrInsn::with_output(
                            op,
                            cmp,
                            smallvec![fp_reg(rs1, size), fp_reg(rs2, size)],
                            addr,
                        ));
                        let ext = ctx.alloc_unique(8);
                        ctx.emit(IrInsn::with_output(
                            IrOp::IntZext,
                            ext,
                            smallvec![cmp],
                            addr,
                        ));
                        ctx.write_reg(rv_reg(rd), ext);
                    }
                    0b0100000 | 0b0100001 | 0b0100011 => {
                        let dst_size = fp_size_from_fmt(rs2 & 0x3).unwrap_or(size);
                        ctx.emit(IrInsn::with_output(
                            IrOp::FloatFloat2float,
                            fp_reg(rd, dst_size),
                            smallvec![fp_reg(rs1, size)],
                            addr,
                        ));
                    }
                    0b1100000 | 0b1100001 | 0b1100011 => {
                        let out_size = if rs2 & 0b10 != 0 { 8 } else { 4 };
                        let tmp = ctx.alloc_unique(out_size);
                        ctx.emit(IrInsn::with_output(
                            IrOp::FloatFloat2int,
                            tmp,
                            smallvec![fp_reg(rs1, size)],
                            addr,
                        ));
                        let val = if out_size < 8 {
                            let ext = ctx.alloc_unique(8);
                            ctx.emit(IrInsn::with_output(
                                IrOp::IntSext,
                                ext,
                                smallvec![tmp],
                                addr,
                            ));
                            ext
                        } else {
                            tmp
                        };
                        ctx.write_reg(rv_reg(rd), val);
                    }
                    0b1101000 | 0b1101001 | 0b1101011 => {
                        ctx.emit(IrInsn::with_output(
                            IrOp::FloatInt2float,
                            fp_reg(rd, size),
                            smallvec![read_reg(rv_reg(rs1))],
                            addr,
                        ));
                    }
                    0b1110000 | 0b1110001 | 0b1110011 => match funct3 {
                        0x0 => ctx.write_reg(rv_reg(rd), fp_reg(rs1, 8)),
                        0x1 => ctx.emit_callother(
                            CALLOTHER_RISCV_FCLASS,
                            cs_reg_to_varnode(rv_reg(rd)),
                            smallvec![fp_reg(rs1, size)],
                        ),
                        _ => return None,
                    },
                    0b1111000 | 0b1111001 | 0b1111011 => ctx.emit(IrInsn::with_output(
                        IrOp::Copy,
                        fp_reg(rd, size),
                        smallvec![read_reg(rv_reg(rs1))],
                        addr,
                    )),
                    _ => return None,
                },
            }
        }
        // Atomic extension: model LR/SC and AMOs as load/store pairs plus callothers where plain IR has no min/max high-level op.
        0x2f if funct3 == 0x2 || funct3 == 0x3 => {
            let size = if funct3 == 0x2 { 4 } else { 8 };
            let funct5 = (word >> 27) & 0x1f;
            let addr_v = read_reg(rv_reg(rs1));
            let old = ctx.alloc_unique(size);
            ctx.emit(IrInsn::with_output(
                IrOp::Load,
                old,
                smallvec![Varnode::constant(SpaceId::Ram as u64, 8), addr_v],
                addr,
            ));
            let old64 = if size < 8 {
                let ext = ctx.alloc_unique(8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntSext,
                    ext,
                    smallvec![old],
                    addr,
                ));
                ext
            } else {
                old
            };
            ctx.write_reg(rv_reg(rd), old64);
            match funct5 {
                0b00010 => {} // LR
                0b00011 => {
                    // SC: store rs2 and report success (0)
                    let val = if size < 8 {
                        let trunc = ctx.alloc_unique(size);
                        ctx.emit(IrInsn::with_output(
                            IrOp::Subpiece,
                            trunc,
                            smallvec![read_reg(rv_reg(rs2)), Varnode::constant(0, 4)],
                            addr,
                        ));
                        trunc
                    } else {
                        read_reg(rv_reg(rs2))
                    };
                    ctx.emit(IrInsn::without_output(
                        IrOp::Store,
                        smallvec![
                            Varnode::constant(SpaceId::Ram as u64, 8),
                            read_reg(rv_reg(rs1)),
                            val
                        ],
                        addr,
                    ));
                    ctx.write_reg(rv_reg(rd), Varnode::constant(0, 8));
                }
                0b00001 => ctx.emit(IrInsn::without_output(
                    IrOp::Store,
                    smallvec![
                        Varnode::constant(SpaceId::Ram as u64, 8),
                        read_reg(rv_reg(rs1)),
                        read_reg(rv_reg(rs2))
                    ],
                    addr,
                )),
                0b00000 | 0b00100 | 0b01100 | 0b01000 => {
                    let op = match funct5 {
                        0b00000 => IrOp::IntAdd,
                        0b00100 => IrOp::IntXor,
                        0b01100 => IrOp::IntAnd,
                        0b01000 => IrOp::IntOr,
                        _ => unreachable!(),
                    };
                    let next = ctx.alloc_unique(size);
                    ctx.emit(IrInsn::with_output(
                        op,
                        next,
                        smallvec![old, read_reg(rv_reg(rs2))],
                        addr,
                    ));
                    ctx.emit(IrInsn::without_output(
                        IrOp::Store,
                        smallvec![
                            Varnode::constant(SpaceId::Ram as u64, 8),
                            read_reg(rv_reg(rs1)),
                            next
                        ],
                        addr,
                    ));
                }
                0b10000 | 0b10100 | 0b11000 | 0b11100 => {
                    let code = match funct5 {
                        0b10000 => CALLOTHER_RISCV_AMO_MIN,
                        0b10100 => CALLOTHER_RISCV_AMO_MAX,
                        0b11000 => CALLOTHER_RISCV_AMO_MINU,
                        _ => CALLOTHER_RISCV_AMO_MAXU,
                    };
                    let next = ctx.alloc_unique(size);
                    ctx.emit_callother(code, Some(next), smallvec![old, read_reg(rv_reg(rs2))]);
                    ctx.emit(IrInsn::without_output(
                        IrOp::Store,
                        smallvec![
                            Varnode::constant(SpaceId::Ram as u64, 8),
                            read_reg(rv_reg(rs1)),
                            next
                        ],
                        addr,
                    ));
                }
                _ => return None,
            }
        }
        // RVV is highly parametric. Keep decoding complete enough for control-flow/lift progress by emitting typed vector summaries.
        0x57 => {
            if funct3 == 0x7 {
                ctx.emit_callother(
                    CALLOTHER_RISCV_VSET,
                    cs_reg_to_varnode(rv_reg(rd)),
                    smallvec![
                        read_reg(rv_reg(rs1)),
                        Varnode::constant(rs2 as u64, 8),
                        Varnode::constant(word as u64, 8)
                    ],
                );
            } else {
                ctx.emit_callother(
                    CALLOTHER_RISCV_VECTOR | ((funct3 as u64) << 8),
                    Some(vec_reg(rd)),
                    smallvec![
                        vec_reg(rs1),
                        vec_reg(rs2),
                        Varnode::constant(word as u64, 8)
                    ],
                );
            }
        }
        _ => return None,
    }
    Some(())
fn rvv_emit_callother(
    ctx: &mut LiftCtx,
    tag: u64,
    output: Option<Varnode>,
    inputs: smallvec::SmallVec<[Varnode; 3]>,
) {
    let mut all = smallvec![Varnode::constant(tag, 8)];
    all.extend(inputs);
    match output {
        Some(out) => ctx.emit(IrInsn::with_output(IrOp::Callother, out, all, ctx.addr)),
        None => ctx.emit(IrInsn::without_output(IrOp::Callother, all, ctx.addr)),
    }
}

/// Direct RVV v1.0 decoder.
///
/// Capstone versions currently vendored by this workspace do not expose RVV
/// instruction ids/registers, so vector instructions are decoded from the
/// architectural 32-bit encodings. The emitted Callother shapes are stable:
///
/// * VSETVLI: `Callother(tag, avl, vtypei) -> vl`, then `COPY vtypei -> vtype`
/// * VSETIVLI: same, but `avl` is the uimm AVL field
/// * VSETVL: `Callother(tag, avl, rs2_vtype) -> vl`, then `COPY rs2 -> vtype`
/// * Vector ALU/mask: `Callother(tag, funct6, mask, vtype, vl, vs2, src) -> vd`
/// * Vector loads: `Callother(tag, width, mop, nf, mask, base, stride_or_index) -> vd`
/// * Vector stores: `Callother(tag, width, mop, nf, mask, base, stride_or_index, vs3)`
fn lift_rvv_direct(bytes: &[u8], addr: u64) -> Option<LiftedInsn> {
    if bytes.len() < 4 {
        return None;
    }

    let word = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
    let opcode = word & 0x7f;
    let vd = (word >> 7) & 0x1f;
    let funct3 = (word >> 12) & 0x7;
    let rs1 = (word >> 15) & 0x1f;
    let vs2 = (word >> 20) & 0x1f;
    let vm = ((word >> 25) & 1) != 0;
    let funct6 = (word >> 26) & 0x3f;
    let mut ctx = LiftCtx::new(addr);

    match opcode {
        // OP-V: vector configuration, integer/vector, floating/vector, and
        // mask instruction forms. funct3 selects the RVV operand form.
        0x57 => {
            if funct3 == 0x7 {
                let rd = rv_reg(vd);
                let avl = read_reg(rv_reg(rs1));

                // vsetvl: bit pattern 1000000 in bits 31:25 with rs2 holding
                // the new vtype. vsetvli/vsetivli otherwise carry immediate
                // vtype encodings; bit 31 distinguishes the immediate-AVL form.
                if ((word >> 25) & 0x7f) == 0b1000000 {
                    let vtype_src = read_reg(rv_reg(vs2));
                    rvv_emit_callother(
                        &mut ctx,
                        CALLOTHER_RVV_VSETVL,
                        Some(Varnode::reg(RVV_VL_OFFSET, 8)),
                        smallvec![avl, vtype_src],
                    );
                    ctx.write_reg(rd, Varnode::reg(RVV_VL_OFFSET, 8));
                    ctx.emit(IrInsn::with_output(
                        IrOp::Copy,
                        Varnode::reg(RVV_VTYPE_OFFSET, 8),
                        smallvec![vtype_src],
                        addr,
                    ));
                } else if (word & 0x8000_0000) != 0 {
                    let avl_imm = Varnode::constant(rs1 as u64, 8);
                    let vtypei = Varnode::constant(((word >> 20) & 0x3ff) as u64, 8);
                    rvv_emit_callother(
                        &mut ctx,
                        CALLOTHER_RVV_VSETIVLI,
                        Some(Varnode::reg(RVV_VL_OFFSET, 8)),
                        smallvec![avl_imm, vtypei],
                    );
                    ctx.write_reg(rd, Varnode::reg(RVV_VL_OFFSET, 8));
                    ctx.emit(IrInsn::with_output(
                        IrOp::Copy,
                        Varnode::reg(RVV_VTYPE_OFFSET, 8),
                        smallvec![vtypei],
                        addr,
                    ));
                } else {
                    let vtypei = Varnode::constant(((word >> 20) & 0x7ff) as u64, 8);
                    rvv_emit_callother(
                        &mut ctx,
                        CALLOTHER_RVV_VSETVLI,
                        Some(Varnode::reg(RVV_VL_OFFSET, 8)),
                        smallvec![avl, vtypei],
                    );
                    ctx.write_reg(rd, Varnode::reg(RVV_VL_OFFSET, 8));
                    ctx.emit(IrInsn::with_output(
                        IrOp::Copy,
                        Varnode::reg(RVV_VTYPE_OFFSET, 8),
                        smallvec![vtypei],
                        addr,
                    ));
                }
            } else {
                let tag = match funct3 {
                    0x0 => CALLOTHER_RVV_OPIVV,
                    0x1 => CALLOTHER_RVV_OPFVV,
                    0x2 => CALLOTHER_RVV_OPMVV,
                    0x3 => CALLOTHER_RVV_OPIVI,
                    0x4 => CALLOTHER_RVV_OPIVX,
                    0x5 => CALLOTHER_RVV_OPFVF,
                    0x6 => CALLOTHER_RVV_OPMVX,
                    _ => return None,
                };
                let src = match funct3 {
                    // Vector-vector and mask-vector forms.
                    0x0 | 0x1 | 0x2 => rvv_reg(rs1),
                    // Vector-immediate form uses a signed 5-bit immediate in
                    // the rs1 field.
                    0x3 => Varnode::constant(sign_extend(rs1, 5) as u64, 8),
                    // Vector-scalar forms read x/f scalar registers. Capstone
                    // lacks RVV F registers here; use integer scalar register
                    // varnodes as stable data-flow anchors for both x/f forms.
                    0x4 | 0x5 | 0x6 => read_reg(rv_reg(rs1)),
                    _ => return None,
                };
                rvv_emit_callother(
                    &mut ctx,
                    tag,
                    Some(rvv_reg(vd)),
                    smallvec![
                        Varnode::constant(funct6 as u64, 1),
                        rvv_mask(vm),
                        Varnode::reg(RVV_VTYPE_OFFSET, 8),
                        Varnode::reg(RVV_VL_OFFSET, 8),
                        rvv_reg(vs2),
                        src,
                    ],
                );
            }
        }
        // Vector loads share the LOAD-FP major opcode. Decode every OP-V load
        // shape so unit-stride, strided, indexed, fault-only-first, segment,
        // and masked/unmasked modes are preserved.
        0x07 => {
            let width = funct3;
            let lumop = (word >> 20) & 0x1f;
            let mop = (word >> 26) & 0x3;
            let mew = (word >> 28) & 0x1;
            let nf = (word >> 29) & 0x7;
            let aux = if mop == 0 {
                Varnode::constant(lumop as u64, 1)
            } else {
                rvv_reg(vs2)
            };
            rvv_emit_callother(
                &mut ctx,
                CALLOTHER_RVV_LOAD,
                Some(rvv_reg(vd)),
                smallvec![
                    Varnode::constant(width as u64 | ((mew as u64) << 3), 1),
                    Varnode::constant(mop as u64, 1),
                    Varnode::constant(nf as u64 + 1, 1),
                    rvv_mask(vm),
                    read_reg(rv_reg(rs1)),
                    aux,
                ],
            );
        }
        // Vector stores share the STORE-FP major opcode. Preserve the full
        // addressing/mask/segment mode and the source vector group.
        0x27 => {
            let width = funct3;
            let sumop = (word >> 20) & 0x1f;
            let mop = (word >> 26) & 0x3;
            let mew = (word >> 28) & 0x1;
            let nf = (word >> 29) & 0x7;
            let aux = if mop == 0 {
                Varnode::constant(sumop as u64, 1)
            } else {
                rvv_reg(vs2)
            };
            rvv_emit_callother(
                &mut ctx,
                CALLOTHER_RVV_STORE,
                None,
                smallvec![
                    Varnode::constant(width as u64 | ((mew as u64) << 3), 1),
                    Varnode::constant(mop as u64, 1),
                    Varnode::constant(nf as u64 + 1, 1),
                    rvv_mask(vm),
                    read_reg(rv_reg(rs1)),
                    aux,
                    rvv_reg(vd),
                ],
            );
        }
        _ => return None,
    }

    Some(LiftedInsn {
        ir_ops: ctx.ops,
        len: 4,
    })
fn decode_riscv_zb_direct(
    ctx: &mut LiftCtx,
    opcode: u32,
    rd: u32,
    funct3: u32,
    rs1: u32,
    rs2: u32,
    funct7: u32,
    word: u32,
) -> bool {
    match opcode {
        0x33 => match (funct7, funct3) {
            // Zba: shifted-add and unsigned-word add forms.
            (0x10, 0x2) => ctx.lift_shift_add(rv_reg(rd), rv_reg(rs1), rv_reg(rs2), 1, false), // sh1add
            (0x10, 0x4) => ctx.lift_shift_add(rv_reg(rd), rv_reg(rs1), rv_reg(rs2), 2, false), // sh2add
            (0x10, 0x6) => ctx.lift_shift_add(rv_reg(rd), rv_reg(rs1), rv_reg(rs2), 3, false), // sh3add
            (0x04, 0x0) => ctx.lift_add_uw(rv_reg(rd), rv_reg(rs1), rv_reg(rs2)), // add.uw
            (0x10, 0x3) => ctx.lift_shift_add(rv_reg(rd), rv_reg(rs1), rv_reg(rs2), 1, true), // sh1add.uw
            (0x10, 0x5) => ctx.lift_shift_add(rv_reg(rd), rv_reg(rs1), rv_reg(rs2), 2, true), // sh2add.uw
            (0x10, 0x7) => ctx.lift_shift_add(rv_reg(rd), rv_reg(rs1), rv_reg(rs2), 3, true), // sh3add.uw

            // Zbb logic and rotate/min-max operations.
            (0x20, 0x7) => ctx.lift_andn(rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            (0x20, 0x6) => ctx.lift_orn(rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            (0x20, 0x4) => ctx.lift_xnor(rv_reg(rd), rv_reg(rs1), rv_reg(rs2)),
            (0x04, 0x4) if rs2 == 0 => ctx.lift_zext_from_bytes(rv_reg(rd), rv_reg(rs1), 2), // zext.h
            (0x30, 0x1) => {
                ctx.lift_binary_callother(CALLOTHER_RISCV_ROL, rv_reg(rd), rv_reg(rs1), rv_reg(rs2))
            }
            (0x30, 0x5) => {
                ctx.lift_binary_callother(CALLOTHER_RISCV_ROR, rv_reg(rd), rv_reg(rs1), rv_reg(rs2))
            }
            (0x05, 0x4) => {
                ctx.lift_binary_callother(CALLOTHER_RISCV_MIN, rv_reg(rd), rv_reg(rs1), rv_reg(rs2))
            }
            (0x05, 0x5) => ctx.lift_binary_callother(
                CALLOTHER_RISCV_MINU,
                rv_reg(rd),
                rv_reg(rs1),
                rv_reg(rs2),
            ),
            (0x05, 0x6) => {
                ctx.lift_binary_callother(CALLOTHER_RISCV_MAX, rv_reg(rd), rv_reg(rs1), rv_reg(rs2))
            }
            (0x05, 0x7) => ctx.lift_binary_callother(
                CALLOTHER_RISCV_MAXU,
                rv_reg(rd),
                rv_reg(rs1),
                rv_reg(rs2),
            ),

            // Zbc carry-less multiply operations.
            (0x05, 0x1) => ctx.lift_binary_callother(
                CALLOTHER_RISCV_CLMUL,
                rv_reg(rd),
                rv_reg(rs1),
                rv_reg(rs2),
            ),
            (0x05, 0x3) => ctx.lift_binary_callother(
                CALLOTHER_RISCV_CLMULH,
                rv_reg(rd),
                rv_reg(rs1),
                rv_reg(rs2),
            ),
            (0x05, 0x2) => ctx.lift_binary_callother(
                CALLOTHER_RISCV_CLMULR,
                rv_reg(rd),
                rv_reg(rs1),
                rv_reg(rs2),
            ),

            // Zbs single-bit register forms.
            (0x14, 0x1) => ctx.lift_bset(rv_reg(rd), rv_reg(rs1), read_reg(rv_reg(rs2))),
            (0x24, 0x1) => ctx.lift_bclr(rv_reg(rd), rv_reg(rs1), read_reg(rv_reg(rs2))),
            (0x34, 0x1) => ctx.lift_binv(rv_reg(rd), rv_reg(rs1), read_reg(rv_reg(rs2))),
            (0x24, 0x5) => ctx.lift_bext(rv_reg(rd), rv_reg(rs1), read_reg(rv_reg(rs2))),
            _ => return false,
        },
        0x13 => {
            let shamt = (word >> 20) & 0x3f;
            let funct6 = (word >> 26) & 0x3f;
            match funct3 {
                0x1 => match funct6 {
                    0x09 => {
                        ctx.lift_bset(rv_reg(rd), rv_reg(rs1), Varnode::constant(shamt as u64, 8))
                    } // bseti
                    0x11 => {
                        ctx.lift_bclr(rv_reg(rd), rv_reg(rs1), Varnode::constant(shamt as u64, 8))
                    } // bclri
                    0x19 => {
                        ctx.lift_binv(rv_reg(rd), rv_reg(rs1), Varnode::constant(shamt as u64, 8))
                    } // binvi
                    _ => return false,
                },
                0x5 => match (funct7, rs2) {
                    (0x30, 0x00) => ctx.lift_unary_to_reg(IrOp::Lzcount, rv_reg(rd), rv_reg(rs1)),
                    (0x30, 0x01) => {
                        ctx.lift_unary_callother(CALLOTHER_RISCV_CTZ, rv_reg(rd), rv_reg(rs1))
                    }
                    (0x30, 0x02) => ctx.lift_unary_to_reg(IrOp::Popcount, rv_reg(rd), rv_reg(rs1)),
                    (0x30, 0x04) => ctx.lift_sext_from_bytes(rv_reg(rd), rv_reg(rs1), 1),
                    (0x30, 0x05) => ctx.lift_sext_from_bytes(rv_reg(rd), rv_reg(rs1), 2),
                    (0x34, 0x07) => {
                        ctx.lift_callother_ri(CALLOTHER_RISCV_ORC_B, rv_reg(rd), rv_reg(rs1), 0)
                    }
                    (0x34, 0x18) => {
                        ctx.lift_callother_ri(CALLOTHER_RISCV_REV8, rv_reg(rd), rv_reg(rs1), 0)
                    }
                    _ => match funct6 {
                        0x18 => ctx.lift_callother_ri(
                            CALLOTHER_RISCV_ROR,
                            rv_reg(rd),
                            rv_reg(rs1),
                            shamt as u64,
                        ), // rori
                        0x12 => ctx.lift_bext(
                            rv_reg(rd),
                            rv_reg(rs1),
                            Varnode::constant(shamt as u64, 8),
                        ), // bexti
                        _ => return false,
                    },
                },
                _ => return false,
            }
        }
        0x1b => {
            let shamt = (word >> 20) & 0x1f;
            let funct7 = (word >> 25) & 0x7f;
            match (funct7, funct3, rs2) {
                (0x04, 0x1, _) => ctx.lift_slli_uw(rv_reg(rd), rv_reg(rs1), shamt as u64),
                (0x30, 0x1, _) => ctx.lift_callother_ri(
                    CALLOTHER_RISCV_ROR,
                    rv_reg(rd),
                    rv_reg(rs1),
                    shamt as u64,
                ), // roriw
                (0x30, 0x5, 0x00) => {
                    ctx.lift_word_unary_to_reg(IrOp::Lzcount, rv_reg(rd), rv_reg(rs1))
                }
                (0x30, 0x5, 0x01) => {
                    ctx.lift_word_callother(CALLOTHER_RISCV_CTZ, rv_reg(rd), rv_reg(rs1))
                }
                (0x30, 0x5, 0x02) => {
                    ctx.lift_word_unary_to_reg(IrOp::Popcount, rv_reg(rd), rv_reg(rs1))
                }
                _ => return false,
            }
        }
        0x3b => match (funct7, funct3) {
            (0x04, 0x0) => ctx.lift_add_uw(rv_reg(rd), rv_reg(rs1), rv_reg(rs2)), // add.uw (some assemblers accept OP-32 aliases)
            (0x30, 0x1) => {
                ctx.lift_binary_callother(CALLOTHER_RISCV_ROL, rv_reg(rd), rv_reg(rs1), rv_reg(rs2))
            } // rolw
            (0x30, 0x5) => {
                ctx.lift_binary_callother(CALLOTHER_RISCV_ROR, rv_reg(rd), rv_reg(rs1), rv_reg(rs2))
            } // rorw
            _ => return false,
        },
        _ => return false,
    }
    true
}

fn lift_rv64i_direct(bytes: &[u8], addr: u64) -> Option<LiftedInsn> {
fn lift_rv64i_direct(bytes: &[u8], addr: u64) -> Option<LiftedInsn> {
fn lift_rv_base_direct(bytes: &[u8], addr: u64, variant: RiscVBaseVariant) -> Option<LiftedInsn> {
    let half = u16::from_le_bytes([bytes[0], bytes[1]]);
    if half == 0x8082 {
        let mut ctx = LiftCtx::with_variant(addr, variant);
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
    let mut ctx = LiftCtx::with_variant(addr, variant);
    let xlen = variant.xlen();
    let reg_count = variant.register_count();

    if rd >= reg_count
        || rs1 >= reg_count
        || (rs2 >= reg_count && opcode != 0x37 && opcode != 0x17 && opcode != 0x6f)
    {
        ctx.emit_unimplemented();
        return Some(LiftedInsn {
            ir_ops: ctx.ops,
            len: 4,
        });
    }

    // Extension encodings overlap the base OP/OP-32 opcode space (notably M's
    // funct7=1), so try the non-base decoder before the RV64I match below.
    if matches!(
        opcode,
        0x07 | 0x27 | 0x2f | 0x43 | 0x47 | 0x4b | 0x4f | 0x53 | 0x57
    ) || ((opcode == 0x33 || opcode == 0x3b) && funct7 == 0x01)
    {
        if lift_riscv_extended_direct(word, addr, &mut ctx).is_some() {
            return Some(LiftedInsn {
                ir_ops: ctx.ops,
                len: 4,
            });
        }
    if decode_riscv_zb_direct(&mut ctx, opcode, rd, funct3, rs1, rs2, funct7, word) {
        return Some(LiftedInsn {
            ir_ops: ctx.ops,
            len: 4,
        });
    }

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
        0x1b if xlen >= 8 => {
            let imm = sign_extend(word >> 20, 12);
            match funct3 {
                0x0 => ctx.lift_alu_ri_w(IrOp::IntAdd, rv_reg(rd), rv_reg(rs1), imm),
                0x1 => ctx.lift_alu_ri_w(IrOp::IntLeft, rv_reg(rd), rv_reg(rs1), rs2 as i64),
                0x5 if funct7 == 0x00 => {
                    ctx.lift_alu_ri_w(IrOp::IntRight, rv_reg(rd), rv_reg(rs1), rs2 as i64)
                }
                0x5 if funct7 == 0x20 => {
                    ctx.lift_alu_ri_w(IrOp::IntSright, rv_reg(rd), rv_reg(rs1), rs2 as i64)
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
        0x3b if xlen >= 8 => {
            let op = match (funct7, funct3) {
                (0x00, 0x0) => IrOp::IntAdd,
                (0x20, 0x0) => IrOp::IntSub,
                (0x00, 0x1) => IrOp::IntLeft,
                (0x00, 0x5) => IrOp::IntRight,
                (0x20, 0x5) => IrOp::IntSright,
                _ => return None,
            };
            ctx.lift_alu_rr_w(op, rv_reg(rd), rv_reg(rs1), rv_reg(rs2));
        }
        0x03 => {
            let imm = sign_extend(word >> 20, 12);
            let size = match funct3 {
                0x0 | 0x4 => 1,
                0x1 | 0x5 => 2,
                0x2 | 0x6 => 4,
                0x3 if xlen >= 8 => 8,
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
                0x3 if xlen >= 8 => 8,
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
                        smallvec![ctx.read_reg(rv_reg(rs1)), ctx.read_reg(rv_reg(rs2))],
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
                        smallvec![Varnode::constant(target, ctx.xlen), neg],
                        addr,
                    ));
                }
                _ => return None,
            }
        }
        0x37 => {
            let imm = sign_extend(word & 0xfffff000, 32) as u64;
            ctx.write_reg(rv_reg(rd), Varnode::constant(imm, ctx.xlen));
        }
        _ => {
            lift_riscv_extended_direct(word, addr, &mut ctx)?;
        }
        _ => return None,
        0x17 => {
            let imm = sign_extend(word & 0xfffff000, 32) as u64;
            let tmp = ctx.alloc_unique(ctx.xlen);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![
                    Varnode::constant(addr, ctx.xlen),
                    Varnode::constant(imm, ctx.xlen)
                ],
                addr,
            ));
            ctx.write_reg(rv_reg(rd), tmp);
        }
        0x6f => {
            let imm = (((word >> 31) & 0x1) << 20)
                | (((word >> 12) & 0xff) << 12)
                | (((word >> 20) & 0x1) << 11)
                | (((word >> 21) & 0x3ff) << 1);
            let target = addr.wrapping_add(sign_extend(imm, 21) as u64);
            ctx.write_reg(
                rv_reg(rd),
                Varnode::constant(addr.wrapping_add(4), ctx.xlen),
            );
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![Varnode::constant(target, ctx.xlen)],
                addr,
            ));
        }
        0x67 => {
            let imm = sign_extend(word >> 20, 12);
            if rd == 0 && rs1 == 1 && imm == 0 {
                ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![], ctx.addr));
            } else {
                let base = ctx.read_reg(rv_reg(rs1));
                let target = if imm != 0 {
                    let tmp = ctx.alloc_unique(ctx.xlen);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        tmp,
                        smallvec![base, Varnode::constant(imm as u64, ctx.xlen)],
                        addr,
                    ));
                    tmp
                } else {
                    base
                };
                let aligned = ctx.alloc_unique(ctx.xlen);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntAnd,
                    aligned,
                    smallvec![target, Varnode::constant(!1u64, ctx.xlen)],
                    addr,
                ));
                ctx.write_reg(
                    rv_reg(rd),
                    Varnode::constant(addr.wrapping_add(4), ctx.xlen),
                );
                if rd == 0 {
                    ctx.emit(IrInsn::without_output(
                        IrOp::Branchind,
                        smallvec![aligned],
                        addr,
                    ));
                } else {
                    ctx.emit(IrInsn::without_output(
                        IrOp::Callind,
                        smallvec![aligned],
                        addr,
                    ));
                }
            }
        }
        0x0f => {
            // FENCE/FENCE.I are ordering constraints for execution; they do not change architectural state in this IR.
        }
        0x73 => match word {
            0x0000_0073 => ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(0, 4)],
                addr,
            )),
            0x0010_0073 => ctx.emit(IrInsn::without_output(
                IrOp::Callother,
                smallvec![Varnode::constant(1, 4)],
                addr,
            )),
            _ => return None,
        },
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
        (0b1100111, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_SHA256SIG0, rd, read_reg(rs1), read_reg(rs2)),
        (0b1101001, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_SHA256SIG1, rd, read_reg(rs1), read_reg(rs2)),
        (0b0001000, 0b010) => ctx.emit_crypto_callother(TAG_RISCV_SHA256SUM0, rd, read_reg(rs1), read_reg(rs2)),
        (0b0001000, 0b100) => ctx.emit_crypto_callother(TAG_RISCV_SHA256SUM1, rd, read_reg(rs1), read_reg(rs2)),
        (0b0000101, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_SHA512SIG0, rd, read_reg(rs1), read_reg(rs2)),
        (0b0000101, 0b001) => ctx.emit_crypto_callother(TAG_RISCV_SHA512SIG1, rd, read_reg(rs1), read_reg(rs2)),
        (0b0000100, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_SHA512SUM0, rd, read_reg(rs1), read_reg(rs2)),
        (0b0000100, 0b001) => ctx.emit_crypto_callother(TAG_RISCV_SHA512SUM1, rd, read_reg(rs1), read_reg(rs2)),
        (0b0010010, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_AES32ESI, rd, read_reg(rs1), read_reg(rs2)),
        (0b0010011, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_AES32ESMI, rd, read_reg(rs1), read_reg(rs2)),
        (0b0010101, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_AES32DSI, rd, read_reg(rs1), read_reg(rs2)),
        (0b0010111, 0b000) => ctx.emit_crypto_callother(TAG_RISCV_AES32DSMI, rd, read_reg(rs1), read_reg(rs2)),
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
                ctx.write_reg(*rd, Varnode::constant(*imm as u64, ctx.xlen));
            } else {
                ctx.emit_unimplemented();
            }
            return;
        }
        "mv" => {
            if let [RiscVOperand::Reg(rd), RiscVOperand::Reg(rs)] = operands {
                ctx.write_reg(*rd, ctx.read_reg(*rs));
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
                    let src = ctx.read_reg(*rs);
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
                let a = ctx.read_reg(rs1);
                let b = ctx.read_reg(rs2);
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
                let target_vn = Varnode::constant(branch_target(addr, target), ctx.xlen);
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
                let a = ctx.read_reg(rs1);
                let b = ctx.read_reg(rs2);
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
                let target_vn = Varnode::constant(branch_target(addr, target), ctx.xlen);
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
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), ctx.xlen);
                    ctx.write_reg(*rd, ret_addr);
                    let target_vn = Varnode::constant(branch_target(addr, *target), ctx.xlen);
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
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), ctx.xlen);
                    ctx.write_reg(ra, ret_addr);
                    let target_vn = Varnode::constant(branch_target(addr, *target), ctx.xlen);
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
                    let ra_vn = ctx.read_reg(RegId(RiscVReg::RISCV_REG_X1 as u16));
                    ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![ra_vn], addr));
                }
                // jr rs or jalr rs: 1 register operand
                // "jr" → rd=x0 (branch), "jalr" → rd=ra (call)
                [RiscVOperand::Reg(rs)] => {
                    let target = ctx.read_reg(*rs);
                    let mask = Varnode::constant(!1u64, ctx.xlen);
                    let aligned = ctx.alloc_unique(ctx.xlen);
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
                        let ret_addr = Varnode::constant(addr.wrapping_add(4), ctx.xlen);
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
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), ctx.xlen);
                    ctx.write_reg(*rd, ret_addr);

                    let base = ctx.read_reg(*rs1);
                    let target_vn = if *imm != 0 {
                        let off = Varnode::constant(*imm as u64, ctx.xlen);
                        let tmp = ctx.alloc_unique(ctx.xlen);
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

                    let mask = Varnode::constant(!1u64, ctx.xlen);
                    let aligned = ctx.alloc_unique(ctx.xlen);
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
                    let ret_addr = Varnode::constant(addr.wrapping_add(4), ctx.xlen);
                    ctx.write_reg(*rd, ret_addr);

                    let base = ctx.read_reg(mem.base());
                    let target_vn = if mem.disp() != 0 {
                        let off = Varnode::constant(mem.disp() as u64, ctx.xlen);
                        let tmp = ctx.alloc_unique(ctx.xlen);
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

                    let mask = Varnode::constant(!1u64, ctx.xlen);
                    let aligned = ctx.alloc_unique(ctx.xlen);
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
                let base_vn = ctx.read_reg(base);
                let addr_vn = if offset != 0 {
                    let off_vn = Varnode::constant(offset as u64, ctx.xlen);
                    let tmp = ctx.alloc_unique(ctx.xlen);
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
                let ram_space = Varnode::constant(SpaceId::Ram as u64, ctx.xlen);
                let loaded = ctx.alloc_unique(1);
                ctx.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    ctx.addr,
                ));
                let ext = ctx.alloc_unique(ctx.xlen);
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
                let base_vn = ctx.read_reg(base);
                let addr_vn = if offset != 0 {
                    let off_vn = Varnode::constant(offset as u64, ctx.xlen);
                    let tmp = ctx.alloc_unique(ctx.xlen);
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
                let ram_space = Varnode::constant(SpaceId::Ram as u64, ctx.xlen);
                let loaded = ctx.alloc_unique(2);
                ctx.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    ctx.addr,
                ));
                let ext = ctx.alloc_unique(ctx.xlen);
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
                let base_vn = ctx.read_reg(base);
                let addr_vn = if offset != 0 {
                    let off_vn = Varnode::constant(offset as u64, ctx.xlen);
                    let tmp = ctx.alloc_unique(ctx.xlen);
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
                let ram_space = Varnode::constant(SpaceId::Ram as u64, ctx.xlen);
                let loaded = ctx.alloc_unique(4);
                ctx.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    ctx.addr,
                ));
                let ext = ctx.alloc_unique(ctx.xlen);
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
                let val = Varnode::constant(imm as u64, ctx.xlen);
                ctx.write_reg(rd, val);
            } else {
                ctx.emit_unimplemented();
            }
        }

        // -- AUIPC: rd = pc + (imm << 12) --
        x if x == RISCV_INS_AUIPC as u32 => {
            if let Some((rd, imm)) = ops_ri(operands) {
                // capstone already shifts the immediate
                let pc_val = Varnode::constant(addr, ctx.xlen);
                let imm_vn = Varnode::constant(imm as u64, ctx.xlen);
                let result = ctx.alloc_unique(ctx.xlen);
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
        assert_eq!(rf.registers.len(), 33);
        assert_eq!(rf.registers.len(), 98);
        assert_eq!(rf.registers.len(), 33);
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
        assert_eq!(rf.registers[33].name, "f0");
        assert_eq!(rf.registers[65].name, "v0");
        assert_eq!(rf.registers[97].name, "fcsr");
        assert_eq!(rf.registers[65].name, "vl");
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
        // Privileged/system return instruction (not in the unprivileged base lifter).
        // mret  → 0x30200073
        let bytes = 0x30200073u32.to_le_bytes();
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

    #[test]
    fn test_m_extension_high_and_unsigned_w() {
        // mulhu x1, x2, x3: opcode OP, funct7=1, funct3=3.
        let mulhu = 0x023130b3u32.to_le_bytes();
        let result = lifter().lift_insn(&mulhu, 0x1000).expect("mulhu");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));

        // divuw x1, x2, x3: OP-32, funct7=1, funct3=5.
        let divuw = 0x023150bbu32.to_le_bytes();
        let result = lifter().lift_insn(&divuw, 0x1000).expect("divuw");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntDiv));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_atomic_extension_lr_sc_amo() {
        // lr.w x1, (x2)
        let lr_w = 0x100120afu32.to_le_bytes();
        let result = lifter().lift_insn(&lr_w, 0x1000).expect("lr.w");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));

        // amoor.d x1, x3, (x2)
        let amoor_d = 0x403130afu32.to_le_bytes();
        let result = lifter().lift_insn(&amoor_d, 0x1000).expect("amoor.d");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_float_double_quad_load_arithmetic_compare() {
        // flw f1, 0(x2)
        let flw = 0x00012087u32.to_le_bytes();
        let result = lifter().lift_insn(&flw, 0x1000).expect("flw");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Load && i.output == Some(fp_reg(1, 4)))
        );

        // fadd.d f1, f2, f3
        let fadd_d = 0x023100d3u32.to_le_bytes();
        let result = lifter().lift_insn(&fadd_d, 0x1000).expect("fadd.d");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::FloatAdd && i.output == Some(fp_reg(1, 8)))
        );

        // fsqrt.q f1, f2
        let fsqrt_q = 0x5e0170d3u32.to_le_bytes();
        let result = lifter().lift_insn(&fsqrt_q, 0x1000).expect("fsqrt.q");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::FloatSqrt && i.output == Some(fp_reg(1, 16)))
        );

        // fle.s x1, f2, f3
        let fle_s = 0xa03100d3u32.to_le_bytes();
        let result = lifter().lift_insn(&fle_s, 0x1000).expect("fle.s");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::FloatLessequal));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    #[test]
    fn test_vector_extension_summary() {
        // vadd.vv v1, v2, v3 (OP-V, funct6=0, vm=1, funct3=000)
        let vadd_vv = 0x023100d7u32.to_le_bytes();
        let result = lifter().lift_insn(&vadd_vv, 0x1000).expect("vadd.vv");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Callother && i.output == Some(vec_reg(1)))
        );
    }

    // NOP (addi x0, x0, 0) → 0x00000013 (capstone pseudo: nop, 0 ops)

    // -- RISC-V Zb* bitmanip extensions -----------------------------------
    #[test]
    fn test_zbb_andn_orn_xnor() {
        let cases = [
            (0x403170B3u32, IrOp::IntAnd), // andn x1, x2, x3
            (0x403160B3u32, IrOp::IntOr),  // orn  x1, x2, x3
            (0x403140B3u32, IrOp::IntXor), // xnor emits xor then not
        ];
        for (word, op) in cases {
            let result = lifter()
                .lift_insn(&word.to_le_bytes(), 0x1000)
                .expect("decode Zbb logic");
            assert_eq!(result.len, 4);
            assert!(result.ir_ops.iter().any(|i| i.op == op));
            assert!(
                result
                    .ir_ops
                    .iter()
                    .any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 8)))
            );
        }
    }

    #[test]
    fn test_zbb_count_and_sign_extend() {
        let clz = lifter()
            .lift_insn(&0x60015093u32.to_le_bytes(), 0x1000)
            .expect("clz");
        assert!(clz.ir_ops.iter().any(|i| i.op == IrOp::Lzcount));

        let ctz = lifter()
            .lift_insn(&0x60115093u32.to_le_bytes(), 0x1000)
            .expect("ctz");
        assert!(
            ctz.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0] == Varnode::constant(CALLOTHER_RISCV_CTZ, 8))
        );

        let cpop = lifter()
            .lift_insn(&0x60215093u32.to_le_bytes(), 0x1000)
            .expect("cpop");
        assert!(cpop.ir_ops.iter().any(|i| i.op == IrOp::Popcount));

        let sext_b = lifter()
            .lift_insn(&0x60415093u32.to_le_bytes(), 0x1000)
            .expect("sext.b");
        assert!(
            sext_b
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Subpiece && i.output.map(|v| v.size) == Some(1))
        );
        assert!(sext_b.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_zbb_rotate_and_rev8_tags() {
        let rol = lifter()
            .lift_insn(&0x603110B3u32.to_le_bytes(), 0x1000)
            .expect("rol");
        assert!(
            rol.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0] == Varnode::constant(CALLOTHER_RISCV_ROL, 8))
        );

        let ror = lifter()
            .lift_insn(&0x603150B3u32.to_le_bytes(), 0x1000)
            .expect("ror");
        assert!(
            ror.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0] == Varnode::constant(CALLOTHER_RISCV_ROR, 8))
        );

        let rev8 = lifter()
            .lift_insn(&0x69815093u32.to_le_bytes(), 0x1000)
            .expect("rev8");
        assert!(rev8.ir_ops.iter().any(|i| i.op == IrOp::Callother
            && i.inputs[0] == Varnode::constant(CALLOTHER_RISCV_REV8, 8)));
    }

    #[test]
    fn test_zba_shift_add_and_word_extend() {
        let sh1add = lifter()
            .lift_insn(&0x203120B3u32.to_le_bytes(), 0x1000)
            .expect("sh1add");
        assert!(sh1add.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
        assert!(sh1add.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));

        let zext_h = lifter()
            .lift_insn(&0x080140B3u32.to_le_bytes(), 0x1000)
            .expect("zext.h");
        assert!(
            zext_h
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Subpiece && i.output.map(|v| v.size) == Some(2))
        );
        assert!(zext_h.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    #[test]
    fn test_zbs_single_bit_ops() {
        let bset = lifter()
            .lift_insn(&0x283110B3u32.to_le_bytes(), 0x1000)
            .expect("bset");
        assert!(bset.ir_ops.iter().any(|i| i.op == IrOp::IntOr));

        let bclr = lifter()
            .lift_insn(&0x483110B3u32.to_le_bytes(), 0x1000)
            .expect("bclr");
        assert!(bclr.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));

        let binv = lifter()
            .lift_insn(&0x683110B3u32.to_le_bytes(), 0x1000)
            .expect("binv");
        assert!(binv.ir_ops.iter().any(|i| i.op == IrOp::IntXor));

        let bext = lifter()
            .lift_insn(&0x483150B3u32.to_le_bytes(), 0x1000)
            .expect("bext");
        assert!(bext.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
        assert!(bext.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_zbc_and_minmax_callothers() {
        let clmul = lifter()
            .lift_insn(&0x0A3110B3u32.to_le_bytes(), 0x1000)
            .expect("clmul");
        assert!(clmul.ir_ops.iter().any(|i| i.op == IrOp::Callother
            && i.inputs[0] == Varnode::constant(CALLOTHER_RISCV_CLMUL, 8)));

        let min = lifter()
            .lift_insn(&0x0A3140B3u32.to_le_bytes(), 0x1000)
            .expect("min");
        assert!(
            min.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0] == Varnode::constant(CALLOTHER_RISCV_MIN, 8))
        );
    }

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

// t328 — RISC-V Zb* bit-manipulation extension callother and direct lift tags.
// Zbb (basic bit-manipulation)
const TAG_RISCV_CLZ: u64 = 0x540;
const TAG_RISCV_CTZ: u64 = 0x541;
const TAG_RISCV_CPOP: u64 = 0x542;
const TAG_RISCV_ANDN: u64 = 0x543;
const TAG_RISCV_ORN: u64 = 0x544;
const TAG_RISCV_XNOR: u64 = 0x545;
const TAG_RISCV_MAX: u64 = 0x546;
const TAG_RISCV_MAXU: u64 = 0x547;
const TAG_RISCV_MIN: u64 = 0x548;
const TAG_RISCV_MINU: u64 = 0x549;
const TAG_RISCV_SEXTB: u64 = 0x54A;
const TAG_RISCV_SEXTH: u64 = 0x54B;
const TAG_RISCV_ZEXTH: u64 = 0x54C;
const TAG_RISCV_REV8: u64 = 0x54D;
const TAG_RISCV_ORC_B: u64 = 0x54E;
const TAG_RISCV_ROL: u64 = 0x54F;
const TAG_RISCV_ROR: u64 = 0x550;
const TAG_RISCV_RORI: u64 = 0x551;
// Zba (address generation)
const TAG_RISCV_SH1ADD: u64 = 0x560;
const TAG_RISCV_SH2ADD: u64 = 0x561;
const TAG_RISCV_SH3ADD: u64 = 0x562;
// Zbs (single-bit)
const TAG_RISCV_BCLR: u64 = 0x570;
const TAG_RISCV_BCLRI: u64 = 0x571;
const TAG_RISCV_BEXT: u64 = 0x572;
const TAG_RISCV_BEXTI: u64 = 0x573;
const TAG_RISCV_BINV: u64 = 0x574;
const TAG_RISCV_BINVI: u64 = 0x575;
const TAG_RISCV_BSET: u64 = 0x576;
const TAG_RISCV_BSETI: u64 = 0x577;

#[cfg(test)]
mod zb_tests {
    use super::*;

    #[test]
    fn test_zb_tags_no_collision() {
        let tags = [
            TAG_RISCV_CLZ, TAG_RISCV_CTZ, TAG_RISCV_CPOP,
            TAG_RISCV_ANDN, TAG_RISCV_ORN, TAG_RISCV_XNOR,
            TAG_RISCV_ROL, TAG_RISCV_ROR, TAG_RISCV_SH1ADD,
            TAG_RISCV_SH2ADD, TAG_RISCV_SH3ADD,
            TAG_RISCV_BCLR, TAG_RISCV_BEXT, TAG_RISCV_BINV, TAG_RISCV_BSET,
        ];
        for (i, a) in tags.iter().enumerate() {
            for b in tags.iter().skip(i + 1) {
                assert_ne!(a, b, "tag collision detected");
            }
        }
    }

    #[test]
    fn test_zb_tags_dont_collide_with_crypto() {
        // Ensure no overlap with Zk* tags (0x520..0x533)
        assert!(TAG_RISCV_CLZ > TAG_RISCV_AES32DSMI);
    fn test_rvv_vsetvli_updates_vl_and_vtype_t324() {
        // vsetvli x5, x6, e32,m1,ta,ma-ish immediate (opcode 0x57/funct3=111).
        let word = (0x10u32 << 20) | (6 << 15) | (0x7 << 12) | (5 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should decode RVV vsetvli");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| {
            i.op == IrOp::Callother
                && i.output == Some(Varnode::reg(RVV_VL_OFFSET, 8))
                && i.inputs[0].offset == CALLOTHER_RVV_VSETVLI
        }));
        assert!(result.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy && i.output == Some(Varnode::reg(RVV_VTYPE_OFFSET, 8))
        }));
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(Varnode::reg(5 * 8, 8)) })
        );
    }

    #[test]
    fn test_rvv_masked_vector_add_tracks_v0_mask_t324() {
        // vadd.vv v1, v2, v3, v0.t: funct6=0, vm=0, vs2=2, vs1=3, vd=1.
        let word: u32 = (2 << 20) | (3 << 15) | (1 << 7) | 0x57;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should decode RVV OPIVV");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == CALLOTHER_RVV_OPIVV)
            .expect("expected RVV OPIVV Callother");
        assert_eq!(co.output, Some(rvv_reg(1)));
        assert_eq!(co.inputs[2], rvv_reg(0), "vm=0 must carry v0 mask");
        assert_eq!(co.inputs[5], rvv_reg(2));
        assert_eq!(co.inputs[6], rvv_reg(3));
    }

    #[test]
    fn test_rvv_unmasked_vector_load_uses_all_lanes_sentinel_t324() {
        // vle32.v v4, (x5), vm=1: opcode 0x07, width=110, lumop=0, mop=00.
        let word: u32 = (1 << 25) | (5 << 15) | (0x6 << 12) | (4 << 7) | 0x07;
        let result = lifter()
            .lift_insn(&word.to_le_bytes(), 0x1000)
            .expect("should decode RVV vector load");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == CALLOTHER_RVV_LOAD)
            .expect("expected RVV load Callother");
        assert_eq!(co.output, Some(rvv_reg(4)));
        assert_eq!(co.inputs[4], Varnode::constant(0xff, 1));
        assert_eq!(co.inputs[5], Varnode::reg(5 * 8, 8));
    // -- t321: RV32I/RV32E/RV64I/RV128I base-variant coverage ---------------
    #[test]
    fn test_rv32i_register_file_and_width() {
        let l = RiscVLifter::rv32i();
        assert_eq!(l.variant(), RiscVBaseVariant::Rv32I);
        assert_eq!(l.xlen(), 4);
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 33);
        assert_eq!(rf.registers[1].varnode, Varnode::reg(4, 4));
        assert_eq!(rf.registers[32].name, "pc");
        assert_eq!(rf.registers[32].varnode, Varnode::reg(128, 4));
    }

    #[test]
    fn test_rv32e_register_file_and_invalid_high_register() {
        let l = RiscVLifter::rv32e();
        assert_eq!(l.variant(), RiscVBaseVariant::Rv32E);
        assert_eq!(l.xlen(), 4);
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 17);
        assert_eq!(rf.registers[15].name, "x15");
        assert_eq!(rf.registers[16].name, "pc");
        assert_eq!(rf.registers[16].varnode, Varnode::reg(64, 4));

        // add x16, x1, x2 is outside RV32E's x0-x15 register file. The direct
        // decoder rejects it and the RV32 capstone fallback emits UNIMPLEMENTED
        // rather than fabricating an x16 write.
        let bytes = 0x00208833u32.to_le_bytes();
        let result = l
            .lift_insn(&bytes, 0x1000)
            .expect("decode high-register ADD");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            !result
                .ir_ops
                .iter()
                .any(|i| i.output == Some(Varnode::reg(64, 4)))
        );
    }

    #[test]
    fn test_rv32i_add_uses_32_bit_registers() {
        let bytes = 0x003100B3u32.to_le_bytes();
        let result = RiscVLifter::rv32i()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode RV32I ADD");
        assert_eq!(result.len, 4);
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(4, 4)))
        );
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.output.map(|v| v.size) == Some(4))
        );
    }

    #[test]
    fn test_rv32i_rejects_rv64_load_double() {
        let bytes = 0x00013083u32.to_le_bytes();
        let result = RiscVLifter::rv32i().lift_insn(&bytes, 0x1000);
        assert!(result.is_err(), "RV32I must not lift RV64-only LD");
    }

    #[test]
    fn test_rv64i_word_variants_sign_extend_to_xlen() {
        // addw x1, x2, x3 → 0x003100BB
        let bytes = 0x003100BBu32.to_le_bytes();
        let result = RiscVLifter::rv64i()
            .lift_insn(&bytes, 0x1000)
            .expect("should decode ADDW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSext && i.output.map(|v| v.size) == Some(8))
        );
    }

    #[test]
    fn test_rv128i_registers_and_base_add_width() {
        let l = RiscVLifter::rv128i();
        assert_eq!(l.variant(), RiscVBaseVariant::Rv128I);
        assert_eq!(l.xlen(), 16);
        assert_eq!(
            l.register_file().registers[32].varnode,
            Varnode::reg(512, 16)
        );

        let bytes = 0x003100B3u32.to_le_bytes();
        let result = l
            .lift_insn(&bytes, 0x1000)
            .expect("should decode RV128I ADD");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(16, 16)))
        );
    }
}
