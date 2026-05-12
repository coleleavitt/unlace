use std::sync::Mutex;

use capstone::arch::ppc::{ArchMode, PpcInsn, PpcOperand};
use capstone::arch::{BuildsCapstone, BuildsCapstoneEndian};
use capstone::prelude::*;
use capstone::{Capstone, Endian, Insn, InsnDetail};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops;
use crate::register_file::{cs_reg_to_varnode, ppc32_register_file, ppc64_register_file};

struct SendCapstone(Capstone);
unsafe impl Send for SendCapstone {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PpcLiftMode {
    Ppc32,
    Ppc64,
}

pub struct PpcLifter {
    reg_file: RegisterFile,
    arch: ArchId,
    cs: Mutex<SendCapstone>,
}

fn make_capstone(mode: ArchMode, endian: Endian) -> Capstone {
    Capstone::new()
        .ppc()
        .mode(mode)
        .endian(endian)
        .detail(true)
        .build()
        .expect("failed to create PowerPC capstone engine")
}

impl PpcLifter {
    /// Legacy constructor kept for existing callers; defaults to 32-bit big-endian PowerPC.
    pub fn new() -> Self {
        Self::new_ppc32_be()
    }

    pub fn new_ppc32_be() -> Self {
        Self {
            reg_file: ppc32_register_file(),
            arch: ArchId::Ppc,
            cs: Mutex::new(SendCapstone(make_capstone(ArchMode::Mode32, Endian::Big))),
        }
    }

    pub fn new_ppc32_le() -> Self {
        Self {
            reg_file: ppc32_register_file(),
            arch: ArchId::Ppc,
            cs: Mutex::new(SendCapstone(make_capstone(
                ArchMode::Mode32,
                Endian::Little,
            ))),
        }
    }

    pub fn new_ppc64_be() -> Self {
        Self {
            reg_file: ppc64_register_file(),
            arch: ArchId::Ppc64,
            cs: Mutex::new(SendCapstone(make_capstone(ArchMode::Mode64, Endian::Big))),
        }
    }

    pub fn new_ppc64_le() -> Self {
        Self {
            reg_file: ppc64_register_file(),
            arch: ArchId::Ppc64,
            cs: Mutex::new(SendCapstone(make_capstone(
                ArchMode::Mode64,
                Endian::Little,
            ))),
        }
    }

    pub fn mode(&self) -> PpcLiftMode {
        match self.arch {
            ArchId::Ppc => PpcLiftMode::Ppc32,
            ArchId::Ppc64 => PpcLiftMode::Ppc64,
            _ => unreachable!("PpcLifter only exposes PPC/PPC64 architectures"),
        }
    }
}

impl Default for PpcLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for PpcLifter {
    fn arch(&self) -> ArchId {
        self.arch
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }

        let guard = self
            .cs
            .lock()
            .map_err(|e| LiftError::Decode(format!("lock poisoned: {e}")))?;
        let cs = &guard.0;

        let insns = cs
            .disasm_count(bytes, addr, 1)
            .map_err(|e| LiftError::Decode(format!("{e}")))?;

        let insn = insns
            .as_ref()
            .first()
            .ok_or_else(|| LiftError::Decode(format!("no instruction decoded at {addr:#x}")))?;

        let detail = cs
            .insn_detail(insn)
            .map_err(|e| LiftError::Decode(format!("{e}")))?;

        let mut ctx = LiftCtx::new(addr);
        dispatch(cs, &mut ctx, insn, &detail);

        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: insn.len(),
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }
}

pub struct LiftCtx {
    pub ops: Vec<IrInsn>,
    pub addr: u64,
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

    pub fn alloc_unique(&mut self) -> u64 {
        let id = self.unique_counter;
        self.unique_counter += 1;
        id
    }

    pub fn emit(&mut self, insn: IrInsn) {
        self.ops.push(insn);
    }

    pub fn emit_unimplemented(&mut self) {
        self.ops.push(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }

    pub fn emit_store(&mut self, mem_addr: Varnode, value: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, mem_addr, value],
            self.addr,
        ));
    }
}

fn ppc_operands(detail: &InsnDetail<'_>) -> Vec<PpcOperand> {
    detail
        .arch_detail()
        .ppc()
        .map(|d| d.operands().collect())
        .unwrap_or_default()
}

pub(crate) fn operand_reg(op: &PpcOperand) -> Option<Varnode> {
    match op {
        PpcOperand::Reg(id) => cs_reg_to_varnode(*id),
        _ => None,
    }
}

pub(crate) fn operand_imm(op: &PpcOperand) -> Option<i64> {
    match op {
        PpcOperand::Imm(v) => Some(*v),
        _ => None,
    }
}

pub(crate) fn operand_mem_addr(ctx: &mut LiftCtx, op: &PpcOperand) -> Option<Varnode> {
    match op {
        PpcOperand::Mem(mem) => {
            let base = cs_reg_to_varnode(mem.base());
            let disp = mem.disp();
            match (base, disp) {
                (Some(b), 0) => Some(b),
                (Some(b), d) => {
                    let disp_vn = Varnode::constant(d as i64 as u64, 8);
                    let t = Varnode::unique(ctx.alloc_unique(), 8);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![b, disp_vn],
                        ctx.addr,
                    ));
                    Some(t)
                }
                (None, d) => Some(Varnode::constant(d as i64 as u64, 8)),
            }
        }
        _ => None,
    }
}

fn insn_id(insn: &Insn<'_>) -> PpcInsn {
    PpcInsn::from(insn.id().0)
}

fn dispatch(cs: &Capstone, ctx: &mut LiftCtx, insn: &Insn<'_>, detail: &InsnDetail<'_>) {
    let ops = ppc_operands(detail);
    let id = insn_id(insn);

    if let Some(mnemonic) = insn.mnemonic() {
        if ops::spe::classify_spe_mnemonic(mnemonic).is_some() {
            ops::spe::lift_spe(ctx, mnemonic, &ops);
            return;
        }
    }

    match id {
        // Arithmetic
        PpcInsn::PPC_INS_ADD => ops::arithmetic::lift_add(ctx, &ops),
        PpcInsn::PPC_INS_ADDI => ops::arithmetic::lift_addi(ctx, &ops),
        PpcInsn::PPC_INS_ADDIS => ops::arithmetic::lift_addis(ctx, &ops),
        PpcInsn::PPC_INS_SUBF => ops::arithmetic::lift_subf(ctx, &ops),
        PpcInsn::PPC_INS_SUB => ops::arithmetic::lift_sub(ctx, &ops),
        PpcInsn::PPC_INS_MULLW => ops::arithmetic::lift_mullw(ctx, &ops),
        PpcInsn::PPC_INS_MULLI => ops::arithmetic::lift_mulli(ctx, &ops),
        PpcInsn::PPC_INS_DIVW => ops::arithmetic::lift_divw(ctx, &ops),
        PpcInsn::PPC_INS_DIVWU => ops::arithmetic::lift_divwu(ctx, &ops),

        // Logical
        PpcInsn::PPC_INS_AND => ops::bitwise::lift_and(ctx, &ops),
        PpcInsn::PPC_INS_ANDI => ops::bitwise::lift_andi(ctx, &ops),
        PpcInsn::PPC_INS_OR => ops::bitwise::lift_or(ctx, &ops),
        PpcInsn::PPC_INS_ORI => ops::bitwise::lift_ori(ctx, &ops),
        PpcInsn::PPC_INS_XOR => ops::bitwise::lift_xor(ctx, &ops),
        PpcInsn::PPC_INS_XORI => ops::bitwise::lift_xori(ctx, &ops),

        // Shifts
        PpcInsn::PPC_INS_SLW => ops::bitwise::lift_slw(ctx, &ops),
        PpcInsn::PPC_INS_SRW => ops::bitwise::lift_srw(ctx, &ops),
        PpcInsn::PPC_INS_SRAW | PpcInsn::PPC_INS_SRAWI => {
            ops::bitwise::lift_sraw(ctx, &ops);
        }

        // Compare
        PpcInsn::PPC_INS_CMPW => ops::compare::lift_cmpw(ctx, &ops),
        PpcInsn::PPC_INS_CMPLW => ops::compare::lift_cmplw(ctx, &ops),

        // Branches
        PpcInsn::PPC_INS_B => ops::control_flow::lift_b(ctx, &ops),
        PpcInsn::PPC_INS_BL => ops::control_flow::lift_bl(ctx, &ops),
        PpcInsn::PPC_INS_BC
        | PpcInsn::PPC_INS_BEQ
        | PpcInsn::PPC_INS_BNE
        | PpcInsn::PPC_INS_BLT
        | PpcInsn::PPC_INS_BGT
        | PpcInsn::PPC_INS_BLE
        | PpcInsn::PPC_INS_BGE => ops::control_flow::lift_bc(ctx, cs, insn, detail),
        PpcInsn::PPC_INS_BCTR | PpcInsn::PPC_INS_BCCTR => {
            ops::control_flow::lift_bctr(ctx);
        }
        PpcInsn::PPC_INS_BLR | PpcInsn::PPC_INS_BCLR => {
            ops::control_flow::lift_blr(ctx);
        }

        // Loads
        PpcInsn::PPC_INS_LWZ => ops::data_move::lift_lwz(ctx, &ops),
        PpcInsn::PPC_INS_LD => ops::data_move::lift_ld(ctx, &ops),
        PpcInsn::PPC_INS_LBZ => ops::data_move::lift_lbz(ctx, &ops),
        PpcInsn::PPC_INS_LHZ => ops::data_move::lift_lhz(ctx, &ops),

        // Stores
        PpcInsn::PPC_INS_STW => ops::data_move::lift_stw(ctx, &ops),
        PpcInsn::PPC_INS_STD => ops::data_move::lift_std(ctx, &ops),
        PpcInsn::PPC_INS_STB => ops::data_move::lift_stb(ctx, &ops),
        PpcInsn::PPC_INS_STH => ops::data_move::lift_sth(ctx, &ops),

        // Load immediate
        PpcInsn::PPC_INS_LI => ops::data_move::lift_li(ctx, &ops),
        PpcInsn::PPC_INS_LIS => ops::data_move::lift_lis(ctx, &ops),

        PpcInsn::PPC_INS_MR => ops::data_move::lift_mr(ctx, &ops),

        // SPR moves
        PpcInsn::PPC_INS_MFSPR | PpcInsn::PPC_INS_MFLR | PpcInsn::PPC_INS_MFCTR => {
            ops::data_move::lift_mfspr(ctx, &ops);
        }
        PpcInsn::PPC_INS_MTSPR | PpcInsn::PPC_INS_MTLR | PpcInsn::PPC_INS_MTCTR => {
            ops::data_move::lift_mtspr(ctx, &ops);
        }

        // NOP
        PpcInsn::PPC_INS_NOP => ops::data_move::lift_nop(ctx),

        _ => ctx.emit_unimplemented(),
    }
}
