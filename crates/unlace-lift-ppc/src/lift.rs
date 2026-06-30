use capstone::arch::ppc::{PpcInsn, PpcOperand};
use capstone::prelude::*;
use capstone::{Capstone, Endian, Insn, InsnDetail};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops;
use crate::register_file::{
    PPC32_GPR_SIZE, PPC64_GPR_SIZE, cs_reg_to_varnode_with_size, ppc32_register_file,
    ppc64_register_file,
};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PpcMode {
    Ppc32,
    Ppc64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PpcEndian {
    Big,
    Little,
}

impl PpcMode {
    fn arch(self) -> ArchId {
        match self {
            Self::Ppc32 => ArchId::Ppc,
            Self::Ppc64 => ArchId::Ppc64,
        }
    }

    pub(crate) fn ptr_size(self) -> u8 {
        match self {
            Self::Ppc32 => PPC32_GPR_SIZE,
            Self::Ppc64 => PPC64_GPR_SIZE,
        }
    }

    fn capstone_mode(self) -> capstone::arch::ppc::ArchMode {
        match self {
            Self::Ppc32 => capstone::arch::ppc::ArchMode::Mode32,
            Self::Ppc64 => capstone::arch::ppc::ArchMode::Mode64,
        }
    }
}

impl PpcEndian {
    fn capstone_endian(self) -> Endian {
        match self {
            Self::Big => Endian::Big,
            Self::Little => Endian::Little,
        }
    }
}

pub struct PpcLifter {
    reg_file: RegisterFile,
    mode: PpcMode,
    endian: PpcEndian,
}

fn make_capstone(mode: PpcMode, endian: PpcEndian) -> Capstone {
    unlace_capstone::ensure_memory_callbacks();
    Capstone::new()
        .ppc()
        .mode(mode.capstone_mode())
        .endian(endian.capstone_endian())
        .detail(true)
        .build()
        .expect("failed to create PowerPC capstone engine")
}

impl PpcLifter {
    pub fn new() -> Self {
        Self::ppc32_be()
    }

    pub fn ppc32_be() -> Self {
        Self::with_mode_endian(PpcMode::Ppc32, PpcEndian::Big)
    }

    pub fn ppc32_le() -> Self {
        Self::with_mode_endian(PpcMode::Ppc32, PpcEndian::Little)
    }

    pub fn ppc64_be() -> Self {
        Self::with_mode_endian(PpcMode::Ppc64, PpcEndian::Big)
    }

    pub fn ppc64_le() -> Self {
        Self::with_mode_endian(PpcMode::Ppc64, PpcEndian::Little)
    }

    pub fn with_mode_endian(mode: PpcMode, endian: PpcEndian) -> Self {
        let reg_file = match mode {
            PpcMode::Ppc32 => ppc32_register_file(),
            PpcMode::Ppc64 => ppc64_register_file(),
        };
        Self {
            reg_file,
            mode,
            endian,
        }
    }

    pub fn mode(&self) -> PpcMode {
        self.mode
    }

    pub fn endian(&self) -> PpcEndian {
        self.endian
    }
}

impl Default for PpcLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for PpcLifter {
    fn arch(&self) -> ArchId {
        self.mode.arch()
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }

        let cs = make_capstone(self.mode, self.endian);

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

        let mut ctx = LiftCtx::new(addr, self.mode.ptr_size());
        trace_lift_lazy(addr, || {
            format!(
                "decode mode={:?} endian={:?} len={} bytes={} mnemonic={} operands={}",
                self.mode,
                self.endian,
                insn.len(),
                fmt_bytes(bytes.get(..insn.len()).unwrap_or(bytes)),
                insn.mnemonic().unwrap_or(""),
                insn.op_str().unwrap_or("")
            )
        });
        dispatch(&cs, &mut ctx, insn, &detail);

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
    pub ptr_size: u8,
    unique_counter: u64,
}

impl LiftCtx {
    fn new(addr: u64, ptr_size: u8) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            ptr_size,
            unique_counter: 0,
        }
    }

    pub fn alloc_unique(&mut self) -> u64 {
        let id = self.unique_counter;
        self.unique_counter += 1;
        trace_lift_lazy(self.addr, || format!("alloc unique u{id}"));
        id
    }

    pub fn emit(&mut self, insn: IrInsn) {
        trace_lift_lazy(self.addr, || format!("emit {insn}"));
        self.ops.push(insn);
    }

    pub fn emit_unimplemented(&mut self) {
        trace_lift(self.addr, "emit unimplemented");
        self.ops.push(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }

    pub fn emit_store(&mut self, mem_addr: Varnode, value: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, self.ptr_size);
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

pub(crate) fn operand_reg(ctx: &LiftCtx, op: &PpcOperand) -> Option<Varnode> {
    let mapped = match op {
        PpcOperand::Reg(id) => cs_reg_to_varnode_with_size(*id, ctx.ptr_size),
        _ => None,
    };
    trace_lift_lazy(ctx.addr, || format!("operand_reg op={op:?} -> {mapped:?}"));
    mapped
}

pub(crate) fn operand_imm(op: &PpcOperand) -> Option<i64> {
    match op {
        PpcOperand::Imm(v) => Some(*v),
        _ => None,
    }
}

pub(crate) fn operand_mem_addr(ctx: &mut LiftCtx, op: &PpcOperand) -> Option<Varnode> {
    let mapped = match op {
        PpcOperand::Mem(mem) => {
            let base = cs_reg_to_varnode_with_size(mem.base(), ctx.ptr_size);
            let disp = mem.disp();
            match (base, disp) {
                (Some(b), 0) => Some(b),
                (Some(b), d) => {
                    let disp_vn = Varnode::constant(d as i64 as u64, ctx.ptr_size);
                    let t = Varnode::unique(ctx.alloc_unique(), ctx.ptr_size);
                    ctx.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![b, disp_vn],
                        ctx.addr,
                    ));
                    Some(t)
                }
                (None, d) => Some(Varnode::constant(d as i64 as u64, ctx.ptr_size)),
            }
        }
        _ => None,
    };
    trace_lift_lazy(ctx.addr, || format!("operand_mem op={op:?} -> {mapped:?}"));
    mapped
}

fn insn_id(insn: &Insn<'_>) -> PpcInsn {
    PpcInsn::from(insn.id().0)
}

fn dispatch(cs: &Capstone, ctx: &mut LiftCtx, insn: &Insn<'_>, detail: &InsnDetail<'_>) {
    let ops = ppc_operands(detail);
    let id = insn_id(insn);
    trace_lift_lazy(ctx.addr, || {
        format!(
            "dispatch id={id:?} mnemonic={} op_str={} detail_ops={ops:?}",
            insn.mnemonic().unwrap_or(""),
            insn.op_str().unwrap_or("")
        )
    });

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

        // System call (`sc`, primary opcode 17, e.g. 0x44000002)
        PpcInsn::PPC_INS_SC => ops::control_flow::lift_sc(ctx),

        // Loads
        PpcInsn::PPC_INS_LWZ | PpcInsn::PPC_INS_LWZX => ops::data_move::lift_lwz(ctx, &ops),
        PpcInsn::PPC_INS_LD | PpcInsn::PPC_INS_LDX => ops::data_move::lift_ld(ctx, &ops),
        PpcInsn::PPC_INS_LWA | PpcInsn::PPC_INS_LWAX => ops::data_move::lift_lwa(ctx, &ops),
        PpcInsn::PPC_INS_LBZ => ops::data_move::lift_lbz(ctx, &ops),
        PpcInsn::PPC_INS_LHZ => ops::data_move::lift_lhz(ctx, &ops),

        // Stores
        PpcInsn::PPC_INS_STW => ops::data_move::lift_stw(ctx, &ops),
        PpcInsn::PPC_INS_STD | PpcInsn::PPC_INS_STDX => ops::data_move::lift_std(ctx, &ops),
        PpcInsn::PPC_INS_STB => ops::data_move::lift_stb(ctx, &ops),
        PpcInsn::PPC_INS_STH => ops::data_move::lift_sth(ctx, &ops),

        // Load immediate
        PpcInsn::PPC_INS_LI => ops::data_move::lift_li(ctx, &ops),
        PpcInsn::PPC_INS_LIS => ops::data_move::lift_lis(ctx, &ops),

        PpcInsn::PPC_INS_MR => ops::data_move::lift_mr(ctx, &ops),
        PpcInsn::PPC_INS_EXTSB => ops::data_move::lift_exts(ctx, &ops, 1),
        PpcInsn::PPC_INS_EXTSH => ops::data_move::lift_exts(ctx, &ops, 2),
        PpcInsn::PPC_INS_EXTSW => ops::data_move::lift_exts(ctx, &ops, 4),

        // SPR moves
        PpcInsn::PPC_INS_MFSPR | PpcInsn::PPC_INS_MFLR | PpcInsn::PPC_INS_MFCTR => {
            ops::data_move::lift_mfspr(ctx, &ops);
        }
        PpcInsn::PPC_INS_MTSPR | PpcInsn::PPC_INS_MTLR | PpcInsn::PPC_INS_MTCTR => {
            ops::data_move::lift_mtspr(ctx, &ops);
        }

        // NOP
        PpcInsn::PPC_INS_NOP => ops::data_move::lift_nop(ctx),

        _ => {
            // SPE / e500 mnemonics (`ev*`) aren't surfaced as distinct
            // PpcInsn variants by Capstone; dispatch by mnemonic string.
            let mnemonic = insn.mnemonic().unwrap_or("");
            if ops::spe::classify_spe_mnemonic(mnemonic).is_some() {
                ops::spe::lift_spe(ctx, mnemonic, &ops);
            } else {
                ctx.emit_unimplemented();
            }
        }
    }
}

pub(crate) fn trace_lift(addr: u64, message: &str) {
    if !lift_trace_enabled() || !lift_trace_filter_matches(addr, message) {
        return;
    }
    eprintln!("[unlace ppc-lift] {addr:#x}: {message}");
}

pub(crate) fn trace_lift_lazy(addr: u64, make_message: impl FnOnce() -> String) {
    if !lift_trace_enabled() {
        return;
    }
    let message = make_message();
    if !lift_trace_filter_matches(addr, &message) {
        return;
    }
    eprintln!("[unlace ppc-lift] {addr:#x}: {message}");
}

fn lift_trace_enabled() -> bool {
    env_flag_enabled("UNLACE_PPC_LIFT_TRACE")
        || env_flag_enabled("UNLACE_LIFT_TRACE")
        || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn lift_trace_filter_matches(addr: u64, message: &str) -> bool {
    let Some(filter) = std::env::var("UNLACE_PPC_LIFT_TRACE_FILTER")
        .ok()
        .or_else(|| std::env::var("UNLACE_LIFT_TRACE_FILTER").ok())
        .or_else(|| std::env::var("UNLACE_TRACE_FILTER").ok())
    else {
        return true;
    };
    let needle = filter.trim();
    needle.is_empty()
        || message.contains(needle)
        || format!("{addr:#x}").contains(needle)
        || format!("{addr:x}").contains(needle)
}

fn env_flag_enabled(name: &str) -> bool {
    std::env::var_os(name).is_some()
}

fn fmt_bytes(bytes: &[u8]) -> String {
    bytes
        .iter()
        .map(|b| format!("{b:02x}"))
        .collect::<Vec<_>>()
        .join(" ")
}
