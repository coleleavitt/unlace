use std::sync::Mutex;

use capstone::arch::mips::{MipsInsn, MipsOperand};
use capstone::prelude::*;
use capstone::{Capstone, InsnId};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops::{arithmetic, bitwise, control_flow, data_move, dsp, memory, msa};
use crate::register_file::{
    ZERO, capstone_reg_to_offset, mips32_register_file, mips64_register_file,
};

// Capstone contains a raw `*mut c_void` handle to the C library.
// The capstone C library documents that each cs_handle is independent and
// may be used from any one thread at a time. Wrapping in Mutex<> ensures
// exclusive access, making Send+Sync safe.
struct SendCapstone(Capstone);
unsafe impl Send for SendCapstone {}

pub struct MipsLifter {
    arch: ArchId,
    word_size: u8,
    reg_file: RegisterFile,
    cs: Mutex<SendCapstone>,
}

fn make_capstone(arch: ArchId) -> Capstone {
    unlace_capstone::ensure_memory_callbacks();
    let mode = match arch {
        ArchId::Mips => capstone::arch::mips::ArchMode::Mips32,
        _ => capstone::arch::mips::ArchMode::Mips64,
    };
    Capstone::new()
        .mips()
        .mode(mode)
        .endian(capstone::Endian::Big)
        .detail(true)
        .build()
        .expect("capstone MIPS init should not fail")
}

impl MipsLifter {
    pub fn new() -> Self {
        Self::new_mips64()
    }

    pub fn new_mips32() -> Self {
        Self {
            arch: ArchId::Mips,
            word_size: 4,
            reg_file: mips32_register_file(),
            cs: Mutex::new(SendCapstone(make_capstone(ArchId::Mips))),
        }
    }

    pub fn new_mips64() -> Self {
        Self {
            arch: ArchId::Mips64,
            word_size: 8,
            reg_file: mips64_register_file(),
            cs: Mutex::new(SendCapstone(make_capstone(ArchId::Mips64))),
        }
    }
}

impl Default for MipsLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for MipsLifter {
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
            .map_err(|e| LiftError::Decode(format!("capstone: {e}")))?;

        let insn = insns
            .iter()
            .next()
            .ok_or_else(|| LiftError::Decode(format!("no instruction at {addr:#x}")))?;

        let detail = cs
            .insn_detail(insn)
            .map_err(|e| LiftError::Decode(format!("no detail: {e}")))?;

        let arch_detail = detail.arch_detail();
        let mips_detail = arch_detail
            .mips()
            .ok_or_else(|| LiftError::Decode("not MIPS detail".into()))?;

        let operands: Vec<MipsOperand> = mips_detail.operands().collect();

        let mnemonic = insn.mnemonic().unwrap_or("");

        let mut ctx = LiftCtx::new_with_word_size(addr, self.word_size);
        // MSA (MIPS SIMD Architecture) vector ops have no clean scalar IR
        // mapping; route them to tagged Callother intrinsics before the scalar
        // dispatcher. lift_if_msa only fires for instructions whose operands use
        // the 128-bit $w0..$w31 vector registers (or MSA-only opcodes), so it
        // does not shadow the scalar AND/OR/XOR/shift handlers.
        if !msa::lift_if_msa(&mut ctx, insn.id().0, &operands, mnemonic) {
            dispatch_insn(&mut ctx, insn.id(), &operands);
        }

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
    word_size: u8,
    unique_counter: u64,
}

impl LiftCtx {
    #[cfg(test)]
    fn new(addr: u64) -> Self {
        Self::new_with_word_size(addr, 8)
    }

    fn new_with_word_size(addr: u64, word_size: u8) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            word_size,
            unique_counter: 0,
        }
    }

    pub fn alloc_word(&mut self) -> Varnode {
        self.alloc_unique(self.word_size)
    }

    pub fn word_size(&self) -> u8 {
        self.word_size
    }

    pub fn word_const(&self, value: u64) -> Varnode {
        Varnode::constant(value, self.word_size)
    }

    pub fn reg_at(&self, offset: u64) -> Varnode {
        Varnode::reg(offset, self.word_size)
    }

    pub fn alloc_unique(&mut self, size: u8) -> Varnode {
        let id = self.unique_counter;
        self.unique_counter += 1;
        Varnode::unique(id, size)
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

    pub fn emit_load(&mut self, dst: Varnode, addr_vn: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::with_output(
            IrOp::Load,
            dst,
            smallvec![ram_space, addr_vn],
            self.addr,
        ));
    }

    pub fn emit_store(&mut self, addr_vn: Varnode, value: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, addr_vn, value],
            self.addr,
        ));
    }

    pub fn read_reg(&self, reg_id: RegId) -> Option<Varnode> {
        let offset = capstone_reg_to_offset(reg_id)?;
        if offset == ZERO {
            Some(self.word_const(0))
        } else {
            Some(self.reg_at(offset))
        }
    }

    pub fn write_reg(&self, reg_id: RegId) -> Option<Varnode> {
        let offset = capstone_reg_to_offset(reg_id)?;
        if offset == ZERO {
            return None;
        }
        Some(self.reg_at(offset))
    }

    pub fn read_operand(&self, op: &MipsOperand) -> Option<Varnode> {
        match op {
            MipsOperand::Reg(reg) => self.read_reg(*reg),
            MipsOperand::Imm(imm) => Some(self.word_const(*imm as u64)),
            _ => None,
        }
    }

    pub fn mem_addr(&mut self, op: &MipsOperand) -> Option<Varnode> {
        match op {
            MipsOperand::Mem(mem) => {
                let base = self.read_reg(mem.base())?;
                let disp = mem.disp();
                if disp == 0 {
                    Some(base)
                } else {
                    let disp_vn = self.word_const(disp as u64);
                    let t = self.alloc_word();
                    self.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![base, disp_vn],
                        self.addr,
                    ));
                    Some(t)
                }
            }
            _ => None,
        }
    }

    pub fn write_to_reg(&mut self, dst: Varnode, value: Varnode) {
        self.emit(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![value],
            self.addr,
        ));
    }

    #[cfg(test)]
    pub fn ir_ops(&self) -> &[IrInsn] {
        &self.ops
    }
}

fn dispatch_insn(ctx: &mut LiftCtx, id: InsnId, ops: &[MipsOperand]) {
    use MipsInsn::*;
    let insn_id = id.0;

    match insn_id {
        x if x == MIPS_INS_NOP as u32 => data_move::lift_nop(ctx),
        x if x == MIPS_INS_MOVE as u32 => data_move::lift_move(ctx, ops),
        x if x == MIPS_INS_LUI as u32 => data_move::lift_lui(ctx, ops),
        x if x == MIPS_INS_LI as u32 => data_move::lift_li(ctx, ops),
        x if x == MIPS_INS_MFHI as u32 => data_move::lift_mfhi(ctx, ops),
        x if x == MIPS_INS_MFLO as u32 => data_move::lift_mflo(ctx, ops),

        x if x == MIPS_INS_ADD as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_ADDU as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_ADDI as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_ADDIU as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_DADD as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_DADDU as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_DADDI as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_DADDIU as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_SUB as u32 => arithmetic::lift_sub(ctx, ops),
        x if x == MIPS_INS_SUBU as u32 => arithmetic::lift_sub(ctx, ops),
        x if x == MIPS_INS_DSUBU as u32 => arithmetic::lift_sub(ctx, ops),
        x if x == MIPS_INS_MULT as u32 => arithmetic::lift_mult(ctx, ops),
        x if x == MIPS_INS_MULTU as u32 => arithmetic::lift_mult(ctx, ops),
        x if x == MIPS_INS_MUL as u32 => arithmetic::lift_mul(ctx, ops),
        x if x == MIPS_INS_MADD as u32 => arithmetic::lift_madd(ctx, ops),
        x if x == MIPS_INS_MADDU as u32 => arithmetic::lift_madd(ctx, ops),
        x if x == MIPS_INS_MSUB as u32 => arithmetic::lift_msub(ctx, ops),
        x if x == MIPS_INS_MSUBU as u32 => arithmetic::lift_msub(ctx, ops),
        x if x == MIPS_INS_DIV as u32 => arithmetic::lift_div(ctx, ops),
        x if x == MIPS_INS_DIVU as u32 => arithmetic::lift_div(ctx, ops),
        x if x == MIPS_INS_SLT as u32 => arithmetic::lift_slt(ctx, ops),
        x if x == MIPS_INS_SLTU as u32 => arithmetic::lift_sltu(ctx, ops),
        x if x == MIPS_INS_SLTI as u32 => arithmetic::lift_slt(ctx, ops),
        x if x == MIPS_INS_SLTIU as u32 => arithmetic::lift_sltu(ctx, ops),
        x if x == MIPS_INS_NEGU as u32 => arithmetic::lift_negu(ctx, ops),

        x if x == MIPS_INS_AND as u32 => bitwise::lift_and(ctx, ops),
        x if x == MIPS_INS_ANDI as u32 => bitwise::lift_andi(ctx, ops),
        x if x == MIPS_INS_OR as u32 => bitwise::lift_or(ctx, ops),
        x if x == MIPS_INS_ORI as u32 => bitwise::lift_ori(ctx, ops),
        x if x == MIPS_INS_XOR as u32 => bitwise::lift_xor(ctx, ops),
        x if x == MIPS_INS_XORI as u32 => bitwise::lift_xori(ctx, ops),
        x if x == MIPS_INS_NOR as u32 => bitwise::lift_nor(ctx, ops),
        x if x == MIPS_INS_SLL as u32 => bitwise::lift_sll(ctx, ops),
        x if x == MIPS_INS_SRL as u32 => bitwise::lift_srl(ctx, ops),
        x if x == MIPS_INS_SRA as u32 => bitwise::lift_sra(ctx, ops),
        x if x == MIPS_INS_SLLV as u32 => bitwise::lift_sllv(ctx, ops),
        x if x == MIPS_INS_SRLV as u32 => bitwise::lift_srlv(ctx, ops),
        x if x == MIPS_INS_SRAV as u32 => bitwise::lift_srav(ctx, ops),
        x if x == MIPS_INS_DSLL as u32 => bitwise::lift_sll(ctx, ops),
        x if x == MIPS_INS_DSRL as u32 => bitwise::lift_srl(ctx, ops),
        x if x == MIPS_INS_DSRA as u32 => bitwise::lift_sra(ctx, ops),
        x if x == MIPS_INS_ADDQ as u32 => dsp::lift_addq(ctx, ops),
        x if x == MIPS_INS_ADDQ_S as u32 => dsp::lift_addq_s(ctx, ops),
        x if x == MIPS_INS_ADDQH as u32 => dsp::lift_addqh(ctx, ops),
        x if x == MIPS_INS_ADDQH_R as u32 => dsp::lift_addqh_r(ctx, ops),
        x if x == MIPS_INS_SUBQ as u32 => dsp::lift_subq(ctx, ops),
        x if x == MIPS_INS_SUBQ_S as u32 => dsp::lift_subq_s(ctx, ops),
        x if x == MIPS_INS_SUBQH as u32 => dsp::lift_subqh(ctx, ops),
        x if x == MIPS_INS_SUBQH_R as u32 => dsp::lift_subqh_r(ctx, ops),
        x if x == MIPS_INS_APPEND as u32 => dsp::lift_append(ctx, ops),
        x if x == MIPS_INS_BALIGN as u32 => dsp::lift_balign(ctx, ops),
        x if x == MIPS_INS_PREPEND as u32 => dsp::lift_prepend(ctx, ops),
        x if x == MIPS_INS_PACKRL as u32 => dsp::lift_packrl(ctx, ops),
        x if x == MIPS_INS_PICK as u32 => dsp::lift_pick(ctx, ops),
        x if x == MIPS_INS_PRECEQ as u32 => dsp::lift_preceq(ctx, ops),
        x if x == MIPS_INS_PRECEQU as u32 => dsp::lift_precequ(ctx, ops),
        x if x == MIPS_INS_PRECEU as u32 => dsp::lift_preceu(ctx, ops),
        x if x == MIPS_INS_PRECRQ as u32 => dsp::lift_precrq(ctx, ops),
        x if x == MIPS_INS_PRECRQU_S as u32 => dsp::lift_precrqu_s(ctx, ops),
        x if x == MIPS_INS_PRECRQ_RS as u32 => dsp::lift_precrq_rs(ctx, ops),
        x if x == MIPS_INS_PRECR as u32 => dsp::lift_precr(ctx, ops),
        x if x == MIPS_INS_PRECR_SRA as u32 => dsp::lift_precr_sra(ctx, ops),
        x if x == MIPS_INS_PRECR_SRA_R as u32 => dsp::lift_precr_sra_r(ctx, ops),
        x if x == MIPS_INS_REPL as u32 => dsp::lift_repl(ctx, ops),
        x if x == MIPS_INS_REPLV as u32 => dsp::lift_replv(ctx, ops),
        x if x == MIPS_INS_CMP as u32 => dsp::lift_cmp(ctx, ops),
        x if x == MIPS_INS_DPA as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQ_S as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQ_SA as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQX_S as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQX_SA as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAU as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAX as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPS as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQ_S as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQ_SA as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQX_S as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQX_SA as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSU as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSX as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_MULQ_RS as u32 => dsp::lift_mulq(ctx, ops),
        x if x == MIPS_INS_MULQ_S as u32 => dsp::lift_mulq(ctx, ops),
        x if x == MIPS_INS_SHILO as u32 => dsp::lift_shilo(ctx, ops),
        x if x == MIPS_INS_SHILOV as u32 => dsp::lift_shilov(ctx, ops),
        x if x == MIPS_INS_SHLL as u32 => dsp::lift_shll(ctx, ops),
        x if x == MIPS_INS_SHLL_S as u32 => dsp::lift_shll_s(ctx, ops),
        x if x == MIPS_INS_SHRA as u32 => dsp::lift_shra(ctx, ops),
        x if x == MIPS_INS_SHRA_R as u32 => dsp::lift_shra_r(ctx, ops),
        x if x == MIPS_INS_SHRL as u32 => dsp::lift_shrl(ctx, ops),
        x if x == MIPS_INS_SHLLV as u32 => dsp::lift_shllv(ctx, ops),
        x if x == MIPS_INS_SHLLV_S as u32 => dsp::lift_shllv_s(ctx, ops),
        x if x == MIPS_INS_SHRAV as u32 => dsp::lift_shrav(ctx, ops),
        x if x == MIPS_INS_SHRAV_R as u32 => dsp::lift_shrav_r(ctx, ops),
        x if x == MIPS_INS_SHRLV as u32 => dsp::lift_shrlv(ctx, ops),
        x if x == MIPS_INS_EXTP as u32 => dsp::lift_extp(ctx, ops),
        x if x == MIPS_INS_EXTPV as u32 => dsp::lift_extpv(ctx, ops),
        x if x == MIPS_INS_EXTPDP as u32 => dsp::lift_extpdp(ctx, ops),
        x if x == MIPS_INS_EXTPDPV as u32 => dsp::lift_extpdpv(ctx, ops),
        x if x == MIPS_INS_INSV as u32 => dsp::lift_insv(ctx, ops),
        x if x == MIPS_INS_RDDSP as u32 => dsp::lift_rddsp(ctx, ops),
        x if x == MIPS_INS_WRDSP as u32 => dsp::lift_wrdsp(ctx, ops),

        x if x == MIPS_INS_BEQ as u32 => control_flow::lift_beq(ctx, ops),
        x if x == MIPS_INS_BNE as u32 => control_flow::lift_bne(ctx, ops),
        x if x == MIPS_INS_BEQZ as u32 => control_flow::lift_beqz(ctx, ops),
        x if x == MIPS_INS_BNEZ as u32 => control_flow::lift_bnez(ctx, ops),
        x if x == MIPS_INS_BGEZ as u32 => control_flow::lift_bgez(ctx, ops),
        x if x == MIPS_INS_BLTZ as u32 => control_flow::lift_bltz(ctx, ops),
        x if x == MIPS_INS_BGTZ as u32 => control_flow::lift_bgtz(ctx, ops),
        x if x == MIPS_INS_BLEZ as u32 => control_flow::lift_blez(ctx, ops),
        x if x == MIPS_INS_BGEZAL as u32 => control_flow::lift_bgezal(ctx, ops),
        x if x == MIPS_INS_BLTZAL as u32 => control_flow::lift_bltzal(ctx, ops),
        x if x == MIPS_INS_B as u32 => control_flow::lift_b(ctx, ops),
        x if x == MIPS_INS_BAL as u32 => control_flow::lift_bal(ctx, ops),
        x if x == MIPS_INS_J as u32 => control_flow::lift_j(ctx, ops),
        x if x == MIPS_INS_JAL as u32 => control_flow::lift_jal(ctx, ops),
        x if x == MIPS_INS_JR as u32 => control_flow::lift_jr(ctx, ops),
        x if x == MIPS_INS_JALR as u32 => control_flow::lift_jalr(ctx, ops),

        x if x == MIPS_INS_LW as u32 => memory::lift_load(ctx, ops, 4),
        x if x == MIPS_INS_LD as u32 => memory::lift_load(ctx, ops, 8),
        x if x == MIPS_INS_LH as u32 => memory::lift_load(ctx, ops, 2),
        x if x == MIPS_INS_LHU as u32 => memory::lift_load(ctx, ops, 2),
        x if x == MIPS_INS_LB as u32 => memory::lift_load(ctx, ops, 1),
        x if x == MIPS_INS_LBU as u32 => memory::lift_load(ctx, ops, 1),
        x if x == MIPS_INS_SW as u32 => memory::lift_store(ctx, ops, 4),
        x if x == MIPS_INS_SD as u32 => memory::lift_store(ctx, ops, 8),
        x if x == MIPS_INS_SH as u32 => memory::lift_store(ctx, ops, 2),
        x if x == MIPS_INS_SB as u32 => memory::lift_store(ctx, ops, 1),
        x if x == MIPS_INS_SC as u32 => memory::lift_store_conditional(ctx, ops, 4),
        x if x == MIPS_INS_SCD as u32 => memory::lift_store_conditional(ctx, ops, 8),
        x if x == MIPS_INS_PREF as u32 => memory::lift_prefetch(ctx),
        x if x == MIPS_INS_SYNC as u32 => memory::lift_barrier(ctx),
        x if x == MIPS_INS_LWM32 as u32 => memory::lift_multi_load(ctx, ops),
        x if x == MIPS_INS_LWM16 as u32 => memory::lift_multi_load(ctx, ops),
        x if x == MIPS_INS_SWM32 as u32 => memory::lift_multi_store(ctx, ops),
        x if x == MIPS_INS_SWM16 as u32 => memory::lift_multi_store(ctx, ops),

        _ => ctx.emit_unimplemented(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    fn lifter() -> MipsLifter {
        MipsLifter::new()
    }

    fn lifter32() -> MipsLifter {
        MipsLifter::new_mips32()
    }

    #[test]
    fn test_arch_is_mips64() {
        assert_eq!(lifter().arch(), ArchId::Mips64);
    }

    #[test]
    fn test_arch_is_mips32() {
        assert_eq!(lifter32().arch(), ArchId::Mips);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 78);
        assert_eq!(rf.registers[0].name, "$zero");
        assert_eq!(rf.registers[31].name, "$ra");
        assert_eq!(rf.registers[32].name, "HI");
        assert_eq!(rf.registers[33].name, "LO");
        assert_eq!(rf.registers[34].name, "PC");
        assert_eq!(rf.registers[35].name, "DSPCARRY");
        assert_eq!(rf.registers[36].name, "DSPCCOND");
        assert_eq!(rf.registers[37].name, "DSPOUTFLAG");
        assert_eq!(rf.registers[38].name, "DSPPOS");
        assert_eq!(rf.registers[39].name, "DSPSCOUNT");
        assert_eq!(rf.registers[40].name, "AC0");
        assert_eq!(rf.registers[43].name, "AC3");
    }

    #[test]
    fn test_mips32_register_file_widths() {
        let l = lifter32();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 78);
        assert_eq!(rf.registers[0].name, "$zero");
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[31].name, "$ra");
        assert_eq!(rf.registers[31].varnode.size, 4);
    }

    #[test]
    fn test_mips32_addiu_immediate() {
        let l = lifter32();
        let result = l
            .lift_insn(&[0x24, 0x02, 0x00, 0x2A], 0x1000)
            .expect("should decode MIPS32 ADDIU");
        assert_eq!(result.len, 4);
        let add = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::IntAdd)
            .expect("MIPS32 ADDIU should produce IntAdd");
        assert_eq!(add.output.expect("ADDIU output").size, 4);
        assert!(
            add.inputs.iter().all(|input| input.size == 4),
            "MIPS32 ADDIU operands must be 4-byte values: {:?}",
            result.ir_ops
        );
    }

    #[test]
    fn test_mips32_andi_immediate_widths() {
        let l = lifter32();
        let result = l
            .lift_insn(&[0x30, 0x42, 0x00, 0xff], 0x1000)
            .expect("should decode MIPS32 ANDI");
        let and = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::IntAnd)
            .expect("MIPS32 ANDI should produce IntAnd");
        assert_eq!(and.output.expect("ANDI output").size, 4);
        assert!(
            and.inputs.iter().all(|input| input.size == 4),
            "MIPS32 ANDI operands must be 4-byte values: {:?}",
            result.ir_ops
        );
    }

    #[test]
    fn test_mips32_lw_keeps_word_width() {
        let l = lifter32();
        let result = l
            .lift_insn(&[0x8F, 0xA2, 0x00, 0x00], 0x1000)
            .expect("should decode MIPS32 LW");
        assert!(result.ir_ops.iter().any(|op| op.op == IrOp::Load));
        assert!(
            !result
                .ir_ops
                .iter()
                .any(|op| op.op == IrOp::IntZext && op.output.is_some_and(|out| out.size == 8)),
            "MIPS32 LW must not zero-extend to 8 bytes: {:?}",
            result.ir_ops
        );
    }

    #[test]
    fn test_mips32_jal_return_address_width() {
        let l = lifter32();
        let result = l
            .lift_insn(&[0x0C, 0x10, 0x00, 0x40], 0x1000)
            .expect("should decode MIPS32 JAL");
        let ra_copy = result
            .ir_ops
            .iter()
            .find(|op| {
                op.op == IrOp::Copy
                    && op.output.is_some_and(|out| {
                        out.space == SpaceId::Register && out.offset == crate::register_file::RA
                    })
            })
            .expect("JAL should write return address to RA");
        let output = ra_copy.output.expect("RA output");
        assert_eq!(output.size, 4);
        assert_eq!(ra_copy.inputs[0].size, 4);
    }

    #[test]
    fn test_mips32_mul_word_widths() {
        let l = lifter32();
        let result = l
            .lift_insn(&[0x70, 0x85, 0x10, 0x02], 0x1000)
            .expect("should decode MIPS32 MUL");
        let mult = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::IntMult)
            .expect("MIPS32 MUL should produce IntMult");
        assert_eq!(mult.output.expect("MUL output").size, 4);
        let copy = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::Copy)
            .expect("MUL should copy into destination register");
        assert_eq!(copy.output.expect("MUL destination").size, 4);
        assert_eq!(copy.inputs[0].size, 4);
    }

    #[test]
    fn test_mips64_div_hi_lo_word_widths() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x00, 0x1A], 0x1000)
            .expect("should decode MIPS64 DIV");
        for offset in [crate::register_file::LO, crate::register_file::HI] {
            let copy = result
                .ir_ops
                .iter()
                .find(|op| {
                    op.op == IrOp::Copy
                        && op.output.is_some_and(|out| {
                            out.space == SpaceId::Register && out.offset == offset
                        })
                })
                .expect("DIV should copy quotient/remainder into HI/LO");
            assert_eq!(copy.output.expect("HI/LO output").size, 8);
            assert_eq!(copy.inputs[0].size, 8);
        }
    }

    #[test]
    fn test_mips32_madd_lo_copy_widths() {
        let l = lifter32();
        let result = l
            .lift_insn(&[0x70, 0x85, 0x00, 0x00], 0x1000)
            .expect("should decode MIPS32 MADD");
        let lo_copy = result
            .ir_ops
            .iter()
            .rev()
            .find(|op| {
                op.op == IrOp::Copy
                    && op.output.is_some_and(|out| {
                        out.space == SpaceId::Register && out.offset == crate::register_file::LO
                    })
            })
            .expect("MADD should copy into LO");
        assert_eq!(lo_copy.output.expect("LO output").size, 4);
        assert_eq!(lo_copy.inputs[0].size, 4);
    }

    #[test]
    fn test_short_buffer() {
        let l = lifter();
        assert!(matches!(
            l.lift_insn(&[0x00, 0x00], 0x1000),
            Err(LiftError::ShortBuffer)
        ));
    }

    // NOP: sll $zero, $zero, 0 = 0x00000000 (big-endian)
    #[test]
    fn test_nop() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x00, 0x00, 0x00], 0x1000)
            .expect("should decode NOP");
        assert_eq!(result.len, 4);
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
    }

    // ADDIU $v0, $zero, 42 = 0x2402002A (big-endian)
    // opcode=001001 rs=00000($zero) rt=00010($v0) imm=0x002A
    #[test]
    fn test_addiu_immediate() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x24, 0x02, 0x00, 0x2A], 0x1000)
            .expect("should decode ADDIU");
        assert_eq!(result.len, 4);
        let has_add = result.ir_ops.iter().any(|op| op.op == IrOp::IntAdd);
        assert!(has_add, "ADDIU should produce IntAdd: {:?}", result.ir_ops);
    }

    // ADDU $v0, $a0, $a1 = 0x00852021 (big-endian)
    // opcode=000000 rs=00100($a0) rt=00101($a1) rd=00010($v0) shamt=00000 funct=100001
    #[test]
    fn test_addu() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x20, 0x21], 0x1000)
            .expect("should decode ADDU");
        assert_eq!(result.len, 4);
        let has_add = result.ir_ops.iter().any(|op| op.op == IrOp::IntAdd);
        assert!(has_add, "ADDU should produce IntAdd: {:?}", result.ir_ops);
    }

    // LW $v0, 0($sp) = 0x8FA20000 (big-endian)
    // opcode=100011 base=11101($sp) rt=00010($v0) offset=0
    #[test]
    fn test_lw() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x8F, 0xA2, 0x00, 0x00], 0x1000)
            .expect("should decode LW");
        assert_eq!(result.len, 4);
        let has_load = result.ir_ops.iter().any(|op| op.op == IrOp::Load);
        assert!(has_load, "LW should produce Load: {:?}", result.ir_ops);
    }

    // SW $v0, 0($sp) = 0xAFA20000 (big-endian)
    // opcode=101011 base=11101($sp) rt=00010($v0) offset=0
    #[test]
    fn test_sw() {
        let l = lifter();
        let result = l
            .lift_insn(&[0xAF, 0xA2, 0x00, 0x00], 0x1000)
            .expect("should decode SW");
        assert_eq!(result.len, 4);
        let has_store = result.ir_ops.iter().any(|op| op.op == IrOp::Store);
        assert!(has_store, "SW should produce Store: {:?}", result.ir_ops);
    }

    // BEQ $v0, $zero, +8 = 0x10400002 (big-endian)
    // opcode=000100 rs=00010($v0) rt=00000($zero) offset=0x0002
    #[test]
    fn test_beq() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x10, 0x40, 0x00, 0x02], 0x1000)
            .expect("should decode BEQ");
        assert_eq!(result.len, 4);
        let has_cbranch = result.ir_ops.iter().any(|op| op.op == IrOp::Cbranch);
        assert!(
            has_cbranch,
            "BEQ should produce Cbranch: {:?}",
            result.ir_ops
        );
    }

    // J 0x00400100 = 0x08100040 (big-endian)
    // opcode=000010 target=0x00100040 (shifted left by 2 = 0x00400100)
    #[test]
    fn test_j() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x08, 0x10, 0x00, 0x40], 0x1000)
            .expect("should decode J");
        assert_eq!(result.len, 4);
        let has_branch = result.ir_ops.iter().any(|op| op.op == IrOp::Branch);
        assert!(has_branch, "J should produce Branch: {:?}", result.ir_ops);
    }

    // JAL 0x00400100 = 0x0C100040 (big-endian)
    #[test]
    fn test_jal() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x0C, 0x10, 0x00, 0x40], 0x1000)
            .expect("should decode JAL");
        assert_eq!(result.len, 4);
        let has_call = result.ir_ops.iter().any(|op| op.op == IrOp::Call);
        assert!(has_call, "JAL should produce Call: {:?}", result.ir_ops);
    }

    // JR $ra = 0x03E00008 (big-endian)
    // opcode=000000 rs=11111($ra) funct=001000
    #[test]
    fn test_jr_ra() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x03, 0xE0, 0x00, 0x08], 0x1000)
            .expect("should decode JR");
        assert_eq!(result.len, 4);
        let has_return = result.ir_ops.iter().any(|op| op.op == IrOp::Return);
        assert!(
            has_return,
            "JR $ra should produce Return: {:?}",
            result.ir_ops
        );
    }

    // LUI $at, 0x0040 = 0x3C010040 (big-endian)
    // opcode=001111 rs=00000 rt=00001($at) imm=0x0040
    #[test]
    fn test_lui() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x3C, 0x01, 0x00, 0x40], 0x1000)
            .expect("should decode LUI");
        assert_eq!(result.len, 4);
        let has_left = result.ir_ops.iter().any(|op| op.op == IrOp::IntLeft);
        assert!(
            has_left,
            "LUI should produce IntLeft (shift left 16): {:?}",
            result.ir_ops
        );
    }

    // AND $v0, $a0, $a1 = 0x00852024 (big-endian)
    #[test]
    fn test_and() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x20, 0x24], 0x1000)
            .expect("should decode AND");
        assert_eq!(result.len, 4);
        let has_and = result.ir_ops.iter().any(|op| op.op == IrOp::IntAnd);
        assert!(has_and, "AND should produce IntAnd: {:?}", result.ir_ops);
    }

    // SLL $v0, $v0, 2 = 0x00021080 (big-endian)
    // opcode=000000 rs=00000 rt=00010($v0) rd=00010($v0) shamt=00010 funct=000000
    #[test]
    fn test_sll() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x02, 0x10, 0x80], 0x1000)
            .expect("should decode SLL");
        assert_eq!(result.len, 4);
        let has_left = result.ir_ops.iter().any(|op| op.op == IrOp::IntLeft);
        assert!(has_left, "SLL should produce IntLeft: {:?}", result.ir_ops);
    }

    // SLT $v0, $a0, $a1 = 0x0085102A (big-endian)
    #[test]
    fn test_slt() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x10, 0x2A], 0x1000)
            .expect("should decode SLT");
        assert_eq!(result.len, 4);
        let has_sless = result.ir_ops.iter().any(|op| op.op == IrOp::IntSless);
        assert!(
            has_sless,
            "SLT should produce IntSless: {:?}",
            result.ir_ops
        );
    }

    // MULT $a0, $a1 = 0x00850018 (big-endian)
    // opcode=000000 rs=00100($a0) rt=00101($a1) rd=00000 shamt=00000 funct=011000
    #[test]
    fn test_mult() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x00, 0x18], 0x1000)
            .expect("should decode MULT");
        assert_eq!(result.len, 4);
        let has_mult = result.ir_ops.iter().any(|op| op.op == IrOp::IntMult);
        assert!(has_mult, "MULT should produce IntMult: {:?}", result.ir_ops);
    }

    // $zero writes are suppressed (write to $zero is no-op)
    #[test]
    fn test_zero_hardwired() {
        let l = lifter();
        // ADDIU $zero, $zero, 5 = 0x24000005
        let result = l
            .lift_insn(&[0x24, 0x00, 0x00, 0x05], 0x1000)
            .expect("should decode");
        // Should NOT have a Copy to $zero register
        for op in &result.ir_ops {
            if op.op == IrOp::Copy
                && let Some(output) = &op.output
            {
                assert!(
                    !(output.space == SpaceId::Register && output.offset == 0),
                    "should not write to $zero register"
                );
            }
        }
    }

    #[test]
    fn test_addq_updates_dsp_outflag() {
        let mut ctx = LiftCtx::new(0x1000);
        let ops = [
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_2 as u16,
            )),
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_4 as u16,
            )),
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_5 as u16,
            )),
        ];
        crate::ops::dsp::lift_addq(&mut ctx, &ops);
        assert!(ctx.ir_ops().iter().any(|op| op.op == IrOp::IntAdd));
        assert!(
            ctx.ir_ops()
                .iter()
                .any(|op| op.output == Some(Varnode::reg(crate::register_file::DSPOUTFLAG, 4)))
        );
    }

    #[test]
    fn test_mips32_addq_word_widths() {
        let mut ctx = LiftCtx::new_with_word_size(0x1000, 4);
        let ops = [
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_2 as u16,
            )),
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_4 as u16,
            )),
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_5 as u16,
            )),
        ];
        crate::ops::dsp::lift_addq(&mut ctx, &ops);
        let gpr_copy = ctx
            .ir_ops()
            .iter()
            .find(|op| {
                op.op == IrOp::Copy
                    && op.output.is_some_and(|out| {
                        out.space == SpaceId::Register && out.offset == crate::register_file::V0
                    })
            })
            .expect("ADDQ should copy into destination GPR");
        assert_eq!(gpr_copy.output.expect("ADDQ output").size, 4);
        assert_eq!(gpr_copy.inputs[0].size, 4);
        assert!(
            ctx.ir_ops()
                .iter()
                .any(|op| op.output == Some(Varnode::reg(crate::register_file::DSPOUTFLAG, 4)))
        );
    }

    #[test]
    fn test_rddsp_lowers_to_callother() {
        let mut ctx = LiftCtx::new(0x1000);
        let ops = [
            MipsOperand::Reg(capstone::RegId(
                capstone::arch::mips::MipsReg::MIPS_REG_2 as u16,
            )),
            MipsOperand::Imm(0x1f),
        ];
        crate::ops::dsp::lift_rddsp(&mut ctx, &ops);
        assert!(ctx.ir_ops().iter().any(|op| op.op == IrOp::Callother));
    }

    // Unknown instruction falls back to Unimplemented
    #[test]
    fn test_unknown_insn() {
        let l = lifter();
        // Try a less common instruction that we don't handle
        // BREAK = 0x0000000D
        let result = l.lift_insn(&[0x00, 0x00, 0x00, 0x0D], 0x1000);
        match result {
            Ok(lifted) => {
                assert!(lifted.ir_ops.iter().any(|op| op.op == IrOp::Unimplemented));
            }
            Err(_) => {} // decode failure is also acceptable
        }
    }

    // MSA (MIPS SIMD Architecture) vector ops are lifted to tagged CALLOTHER
    // intrinsics. Operands are the 128-bit $w0..$w31 vector registers.
    // All encodings below were verified against capstone's MIPS64 (MSA) decoder.

    // ADDV.B $w0, $w0, $w0 = 0x7800000E (big-endian)
    // MSA major opcode 011110, 3R format, df=00 (byte), minor 001110.
    #[test]
    fn test_msa_addv_b_is_callother() {
        use crate::ops::msa::CALLOTHER_MSA_ADDV;
        let l = lifter();
        let result = l
            .lift_insn(&[0x78, 0x00, 0x00, 0x0E], 0x1000)
            .expect("should decode ADDV.B");
        assert_eq!(result.len, 4);
        assert!(
            !result.ir_ops.iter().any(|op| op.op == IrOp::Unimplemented),
            "ADDV.B must not be Unimplemented: {:?}",
            result.ir_ops
        );
        let callother = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::Callother)
            .expect("ADDV.B should emit Callother");
        assert_eq!(
            callother.inputs.first().map(|vn| vn.offset),
            Some(CALLOTHER_MSA_ADDV),
            "ADDV.B should carry the MSA ADDV tag: {:?}",
            callother
        );
    }

    // XOR.V $w0, $w0, $w0 = 0x7860001E (big-endian)
    // MSA major opcode 011110, VEC format, operation 00011, minor 011110.
    #[test]
    fn test_msa_xor_v_is_callother() {
        use crate::ops::msa::CALLOTHER_MSA_BITWISE;
        let l = lifter();
        let result = l
            .lift_insn(&[0x78, 0x60, 0x00, 0x1E], 0x1000)
            .expect("should decode XOR.V");
        assert_eq!(result.len, 4);
        assert!(
            !result.ir_ops.iter().any(|op| op.op == IrOp::Unimplemented),
            "XOR.V must not be Unimplemented: {:?}",
            result.ir_ops
        );
        let callother = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::Callother)
            .expect("XOR.V should emit Callother");
        assert_eq!(
            callother.inputs.first().map(|vn| vn.offset),
            Some(CALLOTHER_MSA_BITWISE),
            "XOR.V should carry the MSA BITWISE tag: {:?}",
            callother
        );
    }

    // ILVR.B $w0, $w0, $w0 = 0x7A800014 (big-endian)
    // MSA major opcode 011110, 3R format, operation 101, minor 010100.
    #[test]
    fn test_msa_ilvr_b_is_callother() {
        use crate::ops::msa::CALLOTHER_MSA_PACK;
        let l = lifter();
        let result = l
            .lift_insn(&[0x7A, 0x80, 0x00, 0x14], 0x1000)
            .expect("should decode ILVR.B");
        assert_eq!(result.len, 4);
        assert!(
            !result.ir_ops.iter().any(|op| op.op == IrOp::Unimplemented),
            "ILVR.B must not be Unimplemented: {:?}",
            result.ir_ops
        );
        let callother = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::Callother)
            .expect("ILVR.B should emit Callother");
        assert_eq!(
            callother.inputs.first().map(|vn| vn.offset),
            Some(CALLOTHER_MSA_PACK),
            "ILVR.B should carry the MSA PACK tag: {:?}",
            callother
        );
    }

    // Vector operands are modelled as the 128-bit $w registers, so the
    // Callother output lands in the MSA register space, not a GPR.
    #[test]
    fn test_msa_operands_use_w_registers() {
        use crate::register_file::MSA_W0;
        let l = lifter();
        // SUBV.B $w0, $w0, $w0 = 0x7880000E
        let result = l
            .lift_insn(&[0x78, 0x80, 0x00, 0x0E], 0x1000)
            .expect("should decode SUBV.B");
        let callother = result
            .ir_ops
            .iter()
            .find(|op| op.op == IrOp::Callother)
            .expect("SUBV.B should emit Callother");
        let dst = callother.output.as_ref().expect("SUBV.B has a vector dst");
        assert_eq!(
            dst.offset, MSA_W0,
            "dst should be $w0 in MSA register space"
        );
        assert_eq!(dst.size, 16, "MSA vector register is 128-bit (16 bytes)");
    }
}
