use iced_x86::{
    Decoder, DecoderOptions, Instruction, InstructionInfoFactory, Mnemonic, OpAccess, OpKind,
};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::apx;
use crate::ops::{
    amx, arithmetic, bitwise, control_flow, crypto, data_move, fpu, sse, stack, string_ops,
};
use crate::register_file::{iced_reg_to_varnode, x86_64_register_file, x86_reg_view};

pub struct X86Lifter {
    reg_file: RegisterFile,
    trace: bool,
}

impl X86Lifter {
    pub fn new() -> Self {
        Self::with_trace(false)
    }

    pub fn with_trace(trace: bool) -> Self {
        Self {
            reg_file: x86_64_register_file(),
            trace,
        }
    }
}

impl Default for X86Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for X86Lifter {
    fn arch(&self) -> ArchId {
        ArchId::X86_64
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }

        let mut apx_ctx = LiftCtx::new(addr, self.trace);
        if let Some(len) = apx::try_lift_apx(&mut apx_ctx, bytes) {
            if apx_ctx.trace {
                eprintln!(
                    "[unlace-lift-x86] {addr:#x}: APX custom lift len={len} ops={}",
                    apx_ctx.ops.len()
                );
            }
            return Ok(LiftedInsn {
                ir_ops: apx_ctx.ops,
                len,
            });
        }

        let mut decoder = Decoder::with_ip(64, bytes, addr, DecoderOptions::NONE);
        let insn = decoder.decode();

        if insn.is_invalid() {
            return Err(LiftError::Decode(format!(
                "invalid instruction at {addr:#x}"
            )));
        }

        let mut ctx = LiftCtx::new(addr, self.trace);
        ctx.trace_decoded(bytes, &insn);
        dispatch_mnemonic(&mut ctx, &insn);
        ctx.trace_summary();

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
    trace: bool,
}

impl LiftCtx {
    fn new(addr: u64, force_trace: bool) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            unique_counter: 0,
            trace: force_trace || lift_trace_enabled(),
        }
    }

    pub fn alloc_unique(&mut self) -> u64 {
        let id = self.unique_counter;
        self.unique_counter += 1;
        self.trace(format_args!("alloc unique[{id}]"));
        id
    }

    pub fn emit(&mut self, insn: IrInsn) {
        self.trace(format_args!("emit {insn:?}"));
        self.ops.push(insn);
    }

    pub fn emit_unimplemented(&mut self) {
        self.trace("emit UNIMPLEMENTED");
        self.emit(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }

    pub fn emit_store(&mut self, mem_addr: Varnode, value: Varnode) {
        self.trace(format_args!("store addr={mem_addr:?} value={value:?}"));
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, mem_addr, value],
            self.addr,
        ));
    }

    pub fn write_operand_insn(
        &mut self,
        insn: &Instruction,
        idx: u32,
        dst: Varnode,
        value: Varnode,
    ) {
        self.trace(format_args!(
            "write operand idx={idx} kind={:?} dst={dst:?} value={value:?}",
            insn.op_kind(idx)
        ));
        if insn.op_kind(idx) == OpKind::Memory {
            self.emit_store(dst, value);
        } else if insn.op_kind(idx) == OpKind::Register {
            if self.write_register(insn.op_register(idx), value).is_none() {
                self.emit_unimplemented();
            }
        } else {
            self.emit(IrInsn::with_output(
                IrOp::Copy,
                dst,
                smallvec![value],
                self.addr,
            ));
        }
    }

    pub fn operand_read(&mut self, insn: &Instruction, idx: u32) -> Option<Varnode> {
        let kind = insn.op_kind(idx);
        self.trace(format_args!("read operand idx={idx} kind={kind:?}"));
        match kind {
            OpKind::Register => self.read_register(insn.op_register(idx)),
            OpKind::Immediate8 => Some(Varnode::constant(insn.immediate8() as u64, 1)),
            OpKind::Immediate8_2nd => Some(Varnode::constant(insn.immediate8_2nd() as u64, 1)),
            OpKind::Immediate16 => Some(Varnode::constant(insn.immediate16() as u64, 2)),
            OpKind::Immediate32 => {
                let op_size = operand_size(insn, idx);
                Some(Varnode::constant(
                    insn.immediate32() as i32 as i64 as u64,
                    op_size,
                ))
            }
            OpKind::Immediate64 => Some(Varnode::constant(insn.immediate64(), 8)),
            OpKind::Immediate8to16 => Some(Varnode::constant(insn.immediate8to16() as u64, 2)),
            OpKind::Immediate8to32 => {
                let op_size = operand_size(insn, idx);
                Some(Varnode::constant(
                    insn.immediate8to32() as i64 as u64,
                    op_size,
                ))
            }
            OpKind::Immediate8to64 => Some(Varnode::constant(insn.immediate8to64() as u64, 8)),
            OpKind::Immediate32to64 => Some(Varnode::constant(insn.immediate32to64() as u64, 8)),
            OpKind::Memory => {
                let mem_size = insn.memory_size().size() as u8;
                let addr_vn = self.compute_memory_address(insn)?;
                let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
                let loaded = Varnode::unique(self.alloc_unique(), mem_size);
                self.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    self.addr,
                ));
                Some(loaded)
            }
            OpKind::NearBranch16 | OpKind::NearBranch32 | OpKind::NearBranch64 => {
                Some(Varnode::constant(insn.near_branch_target(), 8))
            }
            _ => None,
        }
    }

    pub fn operand_write(&mut self, insn: &Instruction, idx: u32) -> Option<Varnode> {
        let kind = insn.op_kind(idx);
        self.trace(format_args!("write operand idx={idx} kind={kind:?}"));
        match kind {
            OpKind::Register => {
                let reg = insn.op_register(idx);
                Some(x86_reg_view(reg)?.varnode())
            }
            OpKind::Memory => self.compute_memory_address(insn),
            _ => None,
        }
    }

    pub fn memory_address(&mut self, insn: &Instruction) -> Option<Varnode> {
        self.compute_memory_address(insn)
    }

    pub fn read_register(&mut self, reg: iced_x86::Register) -> Option<Varnode> {
        let view = x86_reg_view(reg)?;
        self.trace(format_args!(
            "read register {reg:?} -> view={:?} full={:?}",
            view.varnode(),
            view.full_varnode()
        ));
        if view.is_gpr && !view.is_full_width() {
            let out = Varnode::unique(self.alloc_unique(), view.size);
            self.emit(IrInsn::with_output(
                IrOp::Subpiece,
                out,
                smallvec![
                    view.full_varnode(),
                    Varnode::constant(view.byte_offset as u64, 1)
                ],
                self.addr,
            ));
            Some(out)
        } else {
            Some(view.varnode())
        }
    }

    pub fn write_register(&mut self, reg: iced_x86::Register, value: Varnode) -> Option<()> {
        let view = x86_reg_view(reg)?;
        self.trace(format_args!(
            "write register {reg:?} value={value:?} view={:?} full={:?}",
            view.varnode(),
            view.full_varnode()
        ));
        if !view.is_gpr || view.is_full_width() {
            let value = self.resize_value(value, view.size);
            self.emit(IrInsn::with_output(
                IrOp::Copy,
                view.varnode(),
                smallvec![value],
                self.addr,
            ));
            return Some(());
        }

        if view.zero_extends_on_write() {
            let value = self.resize_value(value, view.size);
            self.emit(IrInsn::with_output(
                IrOp::IntZext,
                view.full_varnode(),
                smallvec![value],
                self.addr,
            ));
            return Some(());
        }

        let value = self.resize_value(value, view.size);
        let wide = self.resize_value(value, view.full_size);
        let parent = view.full_varnode();
        let clear_mask = !register_field_mask(view.byte_offset, view.size);
        let cleared = Varnode::unique(self.alloc_unique(), view.full_size);
        self.emit(IrInsn::with_output(
            IrOp::IntAnd,
            cleared,
            smallvec![parent, Varnode::constant(clear_mask, view.full_size)],
            self.addr,
        ));

        let shifted = if view.byte_offset == 0 {
            wide
        } else {
            let shifted = Varnode::unique(self.alloc_unique(), view.full_size);
            self.emit(IrInsn::with_output(
                IrOp::IntLeft,
                shifted,
                smallvec![wide, Varnode::constant((view.byte_offset as u64) * 8, 1)],
                self.addr,
            ));
            shifted
        };

        self.emit(IrInsn::with_output(
            IrOp::IntOr,
            parent,
            smallvec![cleared, shifted],
            self.addr,
        ));
        Some(())
    }

    pub fn zero_extending_vector_write(
        &self,
        insn: &Instruction,
        idx: u32,
    ) -> Option<iced_x86::Register> {
        if insn.op_kind(idx) != OpKind::Register {
            return None;
        }
        let reg = insn.op_register(idx);
        let view = x86_reg_view(reg)?;
        if !view.is_vector || view.is_full_width() {
            return None;
        }

        let mut factory = InstructionInfoFactory::new();
        let info = factory.info(insn);
        let writes_full_parent = info.used_registers().iter().any(|used| {
            register_access_writes(used.access())
                && x86_reg_view(used.register()).is_some_and(|used_view| {
                    used_view.is_vector
                        && used_view.is_full_width()
                        && used_view.full_offset == view.full_offset
                })
        });
        writes_full_parent.then_some(reg)
    }

    pub fn prepare_zero_extending_vector_output(
        &mut self,
        insn: &Instruction,
        idx: u32,
        dst: Varnode,
    ) -> (Varnode, Option<iced_x86::Register>) {
        match self.zero_extending_vector_write(insn, idx) {
            Some(reg) => (Varnode::unique(self.alloc_unique(), dst.size), Some(reg)),
            None => (dst, None),
        }
    }

    pub fn finish_zero_extending_vector_output(
        &mut self,
        reg: Option<iced_x86::Register>,
        value: Varnode,
    ) {
        let Some(reg) = reg else {
            return;
        };
        let Some(view) = x86_reg_view(reg) else {
            self.emit_unimplemented();
            return;
        };
        let value = self.resize_value(value, view.size);
        self.emit(IrInsn::with_output(
            IrOp::IntZext,
            view.full_varnode(),
            smallvec![value],
            self.addr,
        ));
    }

    pub fn register_write_needs_fixup(&self, reg: iced_x86::Register) -> bool {
        x86_reg_view(reg).is_some_and(|view| view.is_gpr && !view.is_full_width())
    }

    pub fn resize_value(&mut self, value: Varnode, size: u8) -> Varnode {
        if value.size == size {
            return value;
        }
        self.trace(format_args!("resize {value:?} -> {size} bytes"));
        if value.space == SpaceId::Const {
            return Varnode::constant(mask_value_to_size(value.offset, size), size);
        }

        let out = Varnode::unique(self.alloc_unique(), size);
        if value.size < size {
            self.emit(IrInsn::with_output(
                IrOp::IntZext,
                out,
                smallvec![value],
                self.addr,
            ));
        } else {
            self.emit(IrInsn::with_output(
                IrOp::Subpiece,
                out,
                smallvec![value, Varnode::constant(0, 1)],
                self.addr,
            ));
        }
        out
    }

    fn compute_memory_address(&mut self, insn: &Instruction) -> Option<Varnode> {
        let mut addr = None;
        self.trace(format_args!(
            "compute memory base={:?} index={:?} scale={} disp={:#x}",
            insn.memory_base(),
            insn.memory_index(),
            insn.memory_index_scale(),
            insn.memory_displacement64()
        ));

        let base_reg = insn.memory_base();
        if base_reg != iced_x86::Register::None {
            addr = Some(self.read_register(base_reg)?);
        }

        let index_reg = insn.memory_index();
        if index_reg != iced_x86::Register::None {
            let idx_vn = self.read_register(index_reg)?;
            let size = idx_vn.size;

            let scale = insn.memory_index_scale();
            let scaled = if scale > 1 {
                let scale_vn = Varnode::constant(scale as u64, size);
                let t = Varnode::unique(self.alloc_unique(), size);
                self.emit(IrInsn::with_output(
                    IrOp::IntMult,
                    t,
                    smallvec![idx_vn, scale_vn],
                    self.addr,
                ));
                t
            } else {
                idx_vn
            };

            addr = Some(match addr {
                Some(base) => {
                    let t = Varnode::unique(self.alloc_unique(), base.size);
                    self.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![base, scaled],
                        self.addr,
                    ));
                    t
                }
                None => scaled,
            });
        }

        let disp = insn.memory_displacement64();
        if disp != 0 {
            let addr_size = addr.map_or(8u8, |a| a.size);
            let disp_vn = Varnode::constant(disp, addr_size);
            addr = Some(match addr {
                Some(base) => {
                    let t = Varnode::unique(self.alloc_unique(), addr_size);
                    self.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![base, disp_vn],
                        self.addr,
                    ));
                    t
                }
                None => disp_vn,
            });
        }

        // RIP-relative addressing
        if insn.memory_base() == iced_x86::Register::RIP {
            // iced already resolves RIP-relative to absolute in memory_displacement64
            // when using Decoder::with_ip, so the base+disp is already correct
        }

        if addr.is_none() {
            addr = Some(Varnode::constant(0, 8));
        }

        addr
    }

    fn trace_decoded(&self, bytes: &[u8], insn: &Instruction) {
        if !self.trace {
            return;
        }
        let len = insn.len().min(bytes.len());
        eprintln!(
            "[unlace-lift-x86] {:#x}: decode {:?} code={:?} len={} bytes={:02x?}",
            self.addr,
            insn.mnemonic(),
            insn.code(),
            len,
            &bytes[..len]
        );
    }

    fn trace_summary(&self) {
        self.trace(format_args!("lift summary ops={}", self.ops.len()));
    }

    pub fn trace(&self, message: impl std::fmt::Display) {
        if self.trace {
            eprintln!("[unlace-lift-x86] {:#x}: {message}", self.addr);
        }
    }
}

fn lift_trace_enabled() -> bool {
    std::env::var_os("UNLACE_LIFT_TRACE").is_some()
}

fn register_access_writes(access: OpAccess) -> bool {
    matches!(
        access,
        OpAccess::Write | OpAccess::CondWrite | OpAccess::ReadWrite | OpAccess::ReadCondWrite
    )
}

fn register_field_mask(byte_offset: u8, size: u8) -> u64 {
    let shift = (byte_offset as u32) * 8;
    let bits = (size as u32) * 8;
    if bits >= 64 {
        u64::MAX
    } else {
        ((1u64 << bits) - 1) << shift
    }
}

fn mask_value_to_size(value: u64, size: u8) -> u64 {
    let bits = (size as u32) * 8;
    if bits >= 64 {
        value
    } else {
        value & ((1u64 << bits) - 1)
    }
}

fn operand_size(insn: &Instruction, _idx: u32) -> u8 {
    match insn.memory_size().size() {
        0 => {
            // Non-memory operand: infer from first register operand or default to 4
            for i in 0..insn.op_count() {
                if insn.op_kind(i) == OpKind::Register
                    && let Some((_, size)) = iced_reg_to_varnode(insn.op_register(i))
                {
                    return size;
                }
            }
            4
        }
        s => s as u8,
    }
}

fn dispatch_mnemonic(ctx: &mut LiftCtx, insn: &Instruction) {
    // REP-prefixed string operations get first priority since iced-x86 decodes
    // them as plain MOVSB/STOSB/CMPSB mnemonics with the rep flag set.
    if string_ops::try_lift_rep_string(ctx, insn) {
        return;
    }

    use Mnemonic as M;

    match insn.mnemonic() {
        M::Mov | M::Movzx | M::Movsx | M::Movsxd => {
            data_move::lift_mov(ctx, insn);
        }

        M::Cmove
        | M::Cmovne
        | M::Cmovb
        | M::Cmovae
        | M::Cmova
        | M::Cmovbe
        | M::Cmovl
        | M::Cmovge
        | M::Cmovg
        | M::Cmovle
        | M::Cmovs
        | M::Cmovns => {
            data_move::lift_cmov(ctx, insn);
        }

        M::Lea => data_move::lift_lea(ctx, insn),
        M::Nop | M::Endbr32 | M::Endbr64 => data_move::lift_nop(ctx, insn),
        M::Xchg => data_move::lift_xchg(ctx, insn),

        M::Add => arithmetic::lift_add(ctx, insn),
        M::Sub => arithmetic::lift_sub(ctx, insn),
        M::Adc => arithmetic::lift_adc(ctx, insn),
        M::Sbb => arithmetic::lift_sbb(ctx, insn),
        M::Cmp => arithmetic::lift_cmp(ctx, insn),
        M::Test => arithmetic::lift_test(ctx, insn),
        M::Imul => arithmetic::lift_imul(ctx, insn),
        M::Mul => arithmetic::lift_mul(ctx, insn),
        M::Div => arithmetic::lift_div(ctx, insn),
        M::Idiv => arithmetic::lift_idiv(ctx, insn),
        M::Neg => arithmetic::lift_neg(ctx, insn),
        M::Inc => arithmetic::lift_inc(ctx, insn),
        M::Dec => arithmetic::lift_dec(ctx, insn),
        M::Cbw => arithmetic::lift_cbw(ctx, insn),
        M::Cwde => arithmetic::lift_cwde(ctx, insn),
        M::Cdqe => arithmetic::lift_cdqe(ctx, insn),
        M::Cdq => arithmetic::lift_cdq(ctx, insn),
        M::Cqo => arithmetic::lift_cqo(ctx, insn),
        M::Cmpxchg => arithmetic::lift_cmpxchg(ctx, insn),
        M::Xadd => arithmetic::lift_xadd(ctx, insn),
        M::Bswap => data_move::lift_bswap(ctx, insn),
        M::Movbe => data_move::lift_movbe(ctx, insn),

        M::And => bitwise::lift_and(ctx, insn),
        M::Or => bitwise::lift_or(ctx, insn),
        M::Xor => bitwise::lift_xor(ctx, insn),
        M::Not => bitwise::lift_not(ctx, insn),
        M::Shl => bitwise::lift_shl(ctx, insn),
        M::Shr => bitwise::lift_shr(ctx, insn),
        M::Sar => bitwise::lift_sar(ctx, insn),
        M::Rol => bitwise::lift_rol(ctx, insn),
        M::Ror => bitwise::lift_ror(ctx, insn),
        M::Rcr => bitwise::lift_bit_modify_callother(ctx, insn, bitwise::bit_tag::RCR),
        M::Bt => bitwise::lift_bt(ctx, insn),
        M::Bts => bitwise::lift_bit_modify_callother(ctx, insn, bitwise::bit_tag::BTS),
        M::Btr => bitwise::lift_bit_modify_callother(ctx, insn, bitwise::bit_tag::BTR),
        M::Btc => bitwise::lift_bit_modify_callother(ctx, insn, bitwise::bit_tag::BTC),
        M::Bsf => bitwise::lift_bsf(ctx, insn),
        M::Bsr => bitwise::lift_bsr(ctx, insn),
        M::Tzcnt => bitwise::lift_tzcnt(ctx, insn),
        M::Lzcnt => bitwise::lift_lzcnt(ctx, insn),
        M::Popcnt => bitwise::lift_popcnt(ctx, insn),

        M::Int3 | M::Hlt | M::Ud2 => bitwise::lift_trap(ctx, insn),
        M::Int | M::Int1 | M::Into => bitwise::lift_interrupt(ctx, insn),
        M::Syscall | M::Sysenter => bitwise::lift_syscall(ctx, insn),
        M::Cpuid => bitwise::lift_cpuid(ctx, insn),
        M::Cld => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::CLD),
        M::Std => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::STD),
        M::Pause => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::PAUSE),
        M::Rdtsc => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::RDTSC),
        M::Rdtscp => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::RDTSCP),
        M::Xgetbv => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::XGETBV),
        M::In => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::IN),
        M::Pushf | M::Pushfd | M::Pushfq => {
            bitwise::lift_tag_callother(ctx, bitwise::bit_tag::PUSHF)
        }
        M::Popf | M::Popfd | M::Popfq => bitwise::lift_tag_callother(ctx, bitwise::bit_tag::POPF),
        M::Lfence | M::Mfence | M::Sfence => bitwise::lift_fence(ctx, insn),

        M::Jmp => control_flow::lift_jmp(ctx, insn),

        M::Je
        | M::Jne
        | M::Jb
        | M::Jae
        | M::Ja
        | M::Jbe
        | M::Jl
        | M::Jge
        | M::Jg
        | M::Jle
        | M::Js
        | M::Jns
        | M::Jo
        | M::Jno
        | M::Jp
        | M::Jnp => {
            control_flow::lift_jcc(ctx, insn);
        }

        M::Call => control_flow::lift_call(ctx, insn),
        M::Ret => control_flow::lift_ret(ctx, insn),
        M::Loopne => control_flow::lift_loopne(ctx, insn),

        M::Sete
        | M::Setne
        | M::Setb
        | M::Setae
        | M::Seta
        | M::Setbe
        | M::Setl
        | M::Setge
        | M::Setg
        | M::Setle
        | M::Sets
        | M::Setns
        | M::Seto
        | M::Setno
        | M::Setp
        | M::Setnp => {
            data_move::lift_setcc(ctx, insn);
        }

        M::Push => stack::lift_push(ctx, insn),
        M::Pop => stack::lift_pop(ctx, insn),
        M::Leave => stack::lift_leave(ctx, insn),

        M::Movdqa => sse::lift_sse_mov(ctx, insn, sse::tag::MOVDQA),
        M::Movdqu => sse::lift_sse_mov(ctx, insn, sse::tag::MOVDQU),
        M::Movaps => sse::lift_sse_mov(ctx, insn, sse::tag::MOVAPS),
        M::Movups => sse::lift_sse_mov(ctx, insn, sse::tag::MOVUPS),
        M::Movsd => sse::lift_sse_mov_scalar(ctx, insn, sse::tag::MOVSD),
        M::Movss => sse::lift_sse_mov_scalar(ctx, insn, sse::tag::MOVSS),
        M::Movd => sse::lift_vector_generic(ctx, insn, sse::tag::MOVD),
        M::Movq => sse::lift_vector_generic(ctx, insn, sse::tag::MOVQ),
        M::Vmovdqa | M::Vmovdqa32 | M::Vmovdqa64 => {
            sse::lift_vector_generic(ctx, insn, sse::tag::VMOVDQA)
        }
        M::Vmovdqu => sse::lift_vector_generic(ctx, insn, sse::tag::VMOVDQU),
        M::Vmovdqu64 => sse::lift_vector_generic(ctx, insn, sse::tag::VMOVDQU64),
        M::Vmovntdq => sse::lift_vector_generic(ctx, insn, sse::tag::VMOVNTDQ),
        M::Kmovb => sse::lift_vector_generic(ctx, insn, sse::tag::KMOVB),
        M::Kmovq => sse::lift_vector_generic(ctx, insn, sse::tag::KMOVQ),
        M::Kmovw => sse::lift_vector_generic(ctx, insn, sse::tag::KMOVW),

        M::Paddb => sse::lift_sse_binop(ctx, insn, sse::tag::PADDB),
        M::Paddw => sse::lift_sse_binop(ctx, insn, sse::tag::PADDW),
        M::Paddd => sse::lift_sse_binop(ctx, insn, sse::tag::PADDD),
        M::Paddq => sse::lift_sse_binop(ctx, insn, sse::tag::PADDQ),

        M::Psubb => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBB),
        M::Psubw => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBW),
        M::Psubd => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBD),
        M::Psubq => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBQ),

        M::Pand => sse::lift_sse_binop(ctx, insn, sse::tag::PAND),
        M::Por => sse::lift_sse_binop(ctx, insn, sse::tag::POR),
        M::Pxor => sse::lift_sse_xor(ctx, insn, sse::tag::PXOR),
        M::Xorps => sse::lift_sse_xor(ctx, insn, sse::tag::XORPS),
        M::Psrlq => sse::lift_sse_binop(ctx, insn, sse::tag::PSRLQ),

        M::Pmulld => sse::lift_sse_binop(ctx, insn, sse::tag::PMULLD),
        M::Pmuludq => sse::lift_sse_binop(ctx, insn, sse::tag::PMULUDQ),

        M::Pcmpeqb => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQB),
        M::Pcmpeqw => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQW),
        M::Pcmpeqd => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQD),

        M::Addps => sse::lift_sse_binop(ctx, insn, sse::tag::ADDPS),
        M::Subps => sse::lift_sse_binop(ctx, insn, sse::tag::SUBPS),
        M::Mulps => sse::lift_sse_binop(ctx, insn, sse::tag::MULPS),
        M::Divps => sse::lift_sse_binop(ctx, insn, sse::tag::DIVPS),
        M::Minps => sse::lift_sse_binop(ctx, insn, sse::tag::MINPS),
        M::Minsd => sse::lift_vector_generic(ctx, insn, sse::tag::MINSD),
        M::Maxps => sse::lift_sse_binop(ctx, insn, sse::tag::MAXPS),
        M::Sqrtps => sse::lift_sse_unop(ctx, insn, sse::tag::SQRTPS),

        M::Pshufd => sse::lift_sse_shuffle_imm(ctx, insn, sse::tag::PSHUFD),
        M::Pshufhw => sse::lift_vector_generic(ctx, insn, sse::tag::PSHUFHW),
        M::Pshuflw => sse::lift_vector_generic(ctx, insn, sse::tag::PSHUFLW),
        M::Pshufb => sse::lift_sse_binop(ctx, insn, sse::tag::PSHUFB),
        M::Punpcklbw => sse::lift_sse_binop(ctx, insn, sse::tag::PUNPCKLBW),
        M::Punpckldq => sse::lift_sse_binop(ctx, insn, sse::tag::PUNPCKLDQ),
        M::Pslld => sse::lift_sse_binop(ctx, insn, sse::tag::PSLLD),
        M::Psrld => sse::lift_sse_binop(ctx, insn, sse::tag::PSRLD),
        M::Psrldq => sse::lift_sse_binop(ctx, insn, sse::tag::PSRLDQ),

        // SSSE3 packed integer ops (t174).
        M::Phaddw => sse::lift_sse_binop(ctx, insn, sse::tag::PHADDW),
        M::Phaddd => sse::lift_sse_binop(ctx, insn, sse::tag::PHADDD),
        M::Phsubw => sse::lift_sse_binop(ctx, insn, sse::tag::PHSUBW),
        M::Phsubd => sse::lift_sse_binop(ctx, insn, sse::tag::PHSUBD),
        M::Palignr => sse::lift_sse_blend(ctx, insn, sse::tag::PALIGNR),
        M::Pmaddubsw => sse::lift_sse_binop(ctx, insn, sse::tag::PMADDUBSW),
        M::Psignb => sse::lift_sse_binop(ctx, insn, sse::tag::PSIGNB),
        M::Psignw => sse::lift_sse_binop(ctx, insn, sse::tag::PSIGNW),
        M::Psignd => sse::lift_sse_binop(ctx, insn, sse::tag::PSIGND),

        M::Pmovmskb => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVMSKB),
        M::Vpmovmskb => sse::lift_vector_generic(ctx, insn, sse::tag::VPMOVMSKB),

        M::Packsswb => sse::lift_sse_binop(ctx, insn, sse::tag::PACKSSWB),
        M::Packuswb => sse::lift_sse_binop(ctx, insn, sse::tag::PACKUSWB),

        M::Blendps => sse::lift_sse_blend(ctx, insn, sse::tag::BLENDPS),
        M::Pblendvb => sse::lift_sse_blend(ctx, insn, sse::tag::PBLENDVB),

        // ── SSE4.1 / SSE4.2 packed ops (t185) ───────────────────
        M::Pcmpeqq => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQQ),

        M::Pmovzxbw => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXBW),
        M::Pmovzxbd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXBD),
        M::Pmovzxbq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXBQ),
        M::Pmovzxwd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXWD),
        M::Pmovzxwq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXWQ),
        M::Pmovzxdq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXDQ),

        M::Pmovsxbw => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXBW),
        M::Pmovsxbd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXBD),
        M::Pmovsxbq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXBQ),
        M::Pmovsxwd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXWD),
        M::Pmovsxwq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXWQ),
        M::Pmovsxdq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXDQ),

        M::Pmuldq => sse::lift_sse_binop(ctx, insn, sse::tag::PMULDQ),

        M::Pminsd => sse::lift_sse_binop(ctx, insn, sse::tag::PMINSD),
        M::Pminud => sse::lift_sse_binop(ctx, insn, sse::tag::PMINUD),
        M::Pmaxsd => sse::lift_sse_binop(ctx, insn, sse::tag::PMAXSD),
        M::Pmaxud => sse::lift_sse_binop(ctx, insn, sse::tag::PMAXUD),

        // PINSR* is a 3-operand RMW: dst (xmm) is read + written.
        M::Pinsrb => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRB),
        M::Pinsrw => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRW),
        M::Pinsrd => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRD),
        M::Pinsrq => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRQ),

        // PEXTR* writes a small GP/mem operand; dedicated helper.
        M::Pextrb => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRB),
        M::Pextrw => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRW),
        M::Pextrd => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRD),
        M::Pextrq => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRQ),

        // PCMPESTRI/PCMPISTRI set ECX/flags implicitly. iced exposes a
        // 64-bit variant `Pcmpestri64` for REX.W; both map to the same
        // string-compare semantics.
        M::Pcmpestri | M::Pcmpestri64 => {
            sse::lift_sse_string_compare(ctx, insn, sse::tag::PCMPESTRI)
        }
        M::Pcmpistri => sse::lift_sse_string_compare(ctx, insn, sse::tag::PCMPISTRI),

        // ── AVX/AVX2 packed integer ops (t192) ──────────────────
        //
        // VEX-encoded 3-operand layout (dst, src1, src2). VPBLENDD
        // additionally consumes a 4th imm8 mask operand. The shared
        // `lift_avx_binop` helper differs from `lift_sse_binop` in
        // that op0 is treated as write-only — non-destructive AVX
        // doesn't read the destination.
        M::Vpaddd => sse::lift_avx_binop(ctx, insn, sse::tag::VPADDD),
        M::Vpsubd => sse::lift_avx_binop(ctx, insn, sse::tag::VPSUBD),
        M::Vpmulld => sse::lift_avx_binop(ctx, insn, sse::tag::VPMULLD),
        M::Vpshufb => sse::lift_avx_binop(ctx, insn, sse::tag::VPSHUFB),
        M::Vpermd => sse::lift_avx_binop(ctx, insn, sse::tag::VPERMD),
        M::Vpand => sse::lift_avx_binop(ctx, insn, sse::tag::VPAND),
        M::Vpandq => sse::lift_vector_generic(ctx, insn, sse::tag::VPANDQ),
        M::Vpor => sse::lift_avx_binop(ctx, insn, sse::tag::VPOR),
        M::Vporq => sse::lift_vector_generic(ctx, insn, sse::tag::VPORQ),
        M::Vpxor => sse::lift_avx_binop(ctx, insn, sse::tag::VPXOR),
        M::Vpblendd => sse::lift_avx_blend(ctx, insn, sse::tag::VPBLENDD),
        M::Vpermb => sse::lift_vector_generic(ctx, insn, sse::tag::VPERMB),
        M::Vpermi2b => sse::lift_vector_generic(ctx, insn, sse::tag::VPERMI2B),
        M::Vpbroadcastb => sse::lift_vector_generic(ctx, insn, sse::tag::VPBROADCASTB),
        M::Vpcmpeqb => sse::lift_vector_generic(ctx, insn, sse::tag::VPCMPEQB),
        M::Vpcmpuq => sse::lift_vector_generic(ctx, insn, sse::tag::VPCMPUQ),
        M::Vpcompressq => sse::lift_vector_generic(ctx, insn, sse::tag::VPCOMPRESSQ),
        M::Vpopcntb => sse::lift_vector_generic(ctx, insn, sse::tag::VPOPCNTB),
        M::Vptest => sse::lift_vector_generic(ctx, insn, sse::tag::VPTEST),
        M::Vgf2p8affineqb => sse::lift_vector_generic(ctx, insn, sse::tag::VGF2P8AFFINEQB),
        M::Vzeroupper => sse::lift_tag_only(ctx, sse::tag::VZEROUPPER),
        M::Prefetchnta => sse::lift_tag_only(ctx, sse::tag::PREFETCH),
        M::Prefetcht0 => sse::lift_tag_only(ctx, sse::tag::PREFETCHT0),

        // ── AVX-512 EVEX 64-bit-lane packed ops (t205) ──────────
        //
        // The same iced mnemonic `Vpaddq`/`Vpsubq` covers both the
        // 256-bit VEX form (ymm dst) and the 512-bit EVEX form (zmm
        // dst). We only emit the EVEX tags here; the 256-bit AVX2
        // form is handled by a sibling task. `Vpmullq` is AVX-512
        // exclusive so it always takes the 512-bit tag.
        M::Vpaddq if sse::is_zmm_dst(insn) => sse::lift_avx_binop(ctx, insn, sse::tag::VPADDQ_512),
        M::Vpsubq if sse::is_zmm_dst(insn) => sse::lift_avx_binop(ctx, insn, sse::tag::VPSUBQ_512),
        M::Vpmullq => sse::lift_avx_binop(ctx, insn, sse::tag::VPMULLQ_512),

        // ── AES-NI (t309) ───────────────────────────────────────
        M::Aesenc => crypto::lift_aes_binop(ctx, insn, crypto::tag::AESENC),
        M::Aesenclast => crypto::lift_aes_binop(ctx, insn, crypto::tag::AESENCLAST),
        M::Aesdec => crypto::lift_aes_binop(ctx, insn, crypto::tag::AESDEC),
        M::Aesdeclast => crypto::lift_aes_binop(ctx, insn, crypto::tag::AESDECLAST),
        M::Aeskeygenassist => crypto::lift_aes_imm(ctx, insn, crypto::tag::AESKEYGENASSIST),

        // ── SHA-NI (t310) ───────────────────────────────────────
        M::Sha1rnds4 => crypto::lift_aes_imm(ctx, insn, crypto::tag::SHA1RNDS4),
        M::Sha1nexte => crypto::lift_sha_binop(ctx, insn, crypto::tag::SHA1NEXTE),
        M::Sha256rnds2 => crypto::lift_sha_binop(ctx, insn, crypto::tag::SHA256RNDS2),
        M::Sha256msg1 => crypto::lift_sha_binop(ctx, insn, crypto::tag::SHA256MSG1),
        M::Sha256msg2 => crypto::lift_sha_binop(ctx, insn, crypto::tag::SHA256MSG2),

        // ── Intel AMX tile ops (t309) ──────────────────────────
        M::Tileloadd => amx::lift_tile_loadd(ctx, insn, amx::tag::TILELOADD),
        M::Tileloaddt1 => amx::lift_tile_loadd(ctx, insn, amx::tag::TILELOADDT1),
        M::Tilestored => amx::lift_tile_stored(ctx, insn),
        M::Tilerelease => amx::lift_tile_release(ctx, insn),
        M::Tdpbssd => amx::lift_tdpb(ctx, insn, amx::tag::TDPBSSD),
        M::Tdpbsud => amx::lift_tdpb(ctx, insn, amx::tag::TDPBSUD),
        M::Tdpbusd => amx::lift_tdpb(ctx, insn, amx::tag::TDPBUSD),
        M::Tdpbuud => amx::lift_tdpb(ctx, insn, amx::tag::TDPBUUD),
        M::Tdpbf16ps => amx::lift_tdpb(ctx, insn, amx::tag::TDPBF16PS),

        // ── SSE/SSE2 scalar float arithmetic → proper FloatOps ──
        M::Addsd => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatAdd, 8),
        M::Subsd => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatSub, 8),
        M::Mulsd => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatMult, 8),
        M::Divsd => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatDiv, 8),
        M::Addss => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatAdd, 4),
        M::Subss => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatSub, 4),
        M::Mulss => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatMult, 4),
        M::Divss => fpu::lift_sse_scalar_binop(ctx, insn, IrOp::FloatDiv, 4),
        M::Sqrtsd => fpu::lift_sse_scalar_unop(ctx, insn, IrOp::FloatSqrt, 8),
        M::Sqrtss => fpu::lift_sse_scalar_unop(ctx, insn, IrOp::FloatSqrt, 4),
        // SSE scalar float conversions
        M::Cvtsi2sd => fpu::lift_int_to_float(ctx, insn, 8),
        M::Cvtsi2ss => fpu::lift_int_to_float(ctx, insn, 4),
        M::Cvtsd2ss => sse::lift_vector_generic(ctx, insn, sse::tag::CVTSD2SS),
        M::Cvtss2sd => sse::lift_vector_generic(ctx, insn, sse::tag::CVTSS2SD),
        M::Cvttsd2si => fpu::lift_float_to_int(ctx, insn),
        M::Cvttss2si => fpu::lift_float_to_int(ctx, insn),
        // SSE scalar float comparisons
        M::Ucomisd | M::Comisd => fpu::lift_sse_scalar_compare(ctx, insn, 8),
        M::Ucomiss | M::Comiss => fpu::lift_sse_scalar_compare(ctx, insn, 4),

        M::Fld => fpu::lift_fld(ctx, insn),
        M::Fst => fpu::lift_fst(ctx, insn),
        M::Fstp => fpu::lift_fstp(ctx, insn),

        M::Fadd => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FADD, false),
        M::Faddp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FADDP, false),
        M::Fsub => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUB, false),
        M::Fsubp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUBP, false),
        M::Fsubr => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUB, true),
        M::Fsubrp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUBRP, true),

        M::Fmul => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FMUL, false),
        M::Fmulp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FMULP, false),
        M::Fdiv => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIV, false),
        M::Fdivp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIVP, false),
        M::Fdivr => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIV, true),
        M::Fdivrp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIVRP, true),

        M::Fcom => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOM),
        M::Fcomi => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOM),
        M::Fcomp => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOMP),
        M::Fcompp => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOMPP),
        M::Fcomip => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOMP),
        M::Fucom => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOM),
        M::Fucomp => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOMP),
        M::Fucompp => fpu::lift_fcom(ctx, insn, fpu::fpu_tag::FCOMPP),
        M::Fxch => fpu::lift_fxch(ctx, insn),

        _ => ctx.emit_unimplemented(),
    }
}
