//! Real IR interpreter — evaluates `IrInsn` against `MachineState`.
//!
//! Single-step engine. `step(insn)` reads inputs, executes the opcode,
//! writes the output. Handles all 84 IrOp variants from the v1.0 IR
//! spec (`unlace_ir::IrOp`).
//!
//! Varnodes are resolved by space:
//! - [`SpaceId::Const`]   → use `offset` as the literal value
//! - [`SpaceId::Register`] → name-resolved via `reg_alias::offset_to_name`
//! - [`SpaceId::Unique`]   → keyed by `(offset, size)` in `unique_slots`
//! - [`SpaceId::Stack`]    → mapped at rsp+offset in [`MemoryMap`]
//! - [`SpaceId::Ram`]      → direct memory access at `offset`

use std::collections::BTreeMap;

use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::memory::MemoryMap;
use crate::regs::EmuRegs;
use crate::syscalls;

/// What happened after a single step.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum StepOutcome {
    Continue,
    /// Static branch — caller should jump to this address.
    Jump(u64),
    /// Conditional branch — caller should jump to `target` iff `taken`.
    ConditionalJump {
        target: u64,
        taken: bool,
    },
    /// Indirect branch — caller should jump to this register value.
    IndirectJump(u64),
    /// Function call — push return address, jump.
    Call(u64),
    /// Return from function — pop return address.
    Return,
    Halt,
    Faulted(String),
    SyscallExit(i32),
}

/// In-memory machine state for the emulator.
#[derive(Clone, Debug, Default)]
pub struct Interpreter {
    pub regs: EmuRegs,
    pub memory: MemoryMap,
    pub instruction_count: u64,
    pub syscall_trace: Vec<syscalls::SyscallTrace>,
    /// Lifter-private temporaries (SpaceId::Unique). Keyed by (offset, size).
    pub unique_slots: BTreeMap<(u64, u8), u64>,
    /// Stack-frame slots (SpaceId::Stack). Used only when the lifter emits
    /// stack-space varnodes directly (rare; most lifters use Register+offset
    /// arithmetic that lands in Ram via Load/Store).
    pub stack_slots: BTreeMap<(i64, u8), u64>,
}

impl Interpreter {
    pub fn new() -> Self {
        Self::default()
    }

    /// Step the no-op counter. Preserved for callers that don't have an
    /// `IrInsn` to evaluate.
    pub fn step_noop(&mut self) -> StepOutcome {
        self.instruction_count += 1;
        StepOutcome::Continue
    }

    /// Execute a single IR instruction. Returns what happened next.
    pub fn step(&mut self, insn: &IrInsn) -> StepOutcome {
        self.instruction_count += 1;
        // CALLOTHER nr 0 is syscall by convention (per IR spec SS3.13).
        if insn.op == IrOp::Callother {
            return self.do_syscall();
        }
        match self.exec(insn) {
            Ok(o) => o,
            Err(e) => StepOutcome::Faulted(e),
        }
    }

    fn exec(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        if let Some(r) = self.dispatch_data_or_arith(insn) {
            return r;
        }
        if let Some(r) = self.dispatch_compare_or_logic(insn) {
            return r;
        }
        if let Some(r) = self.dispatch_float(insn) {
            return r;
        }
        if let Some(r) = self.dispatch_control(insn) {
            return r;
        }
        if let Some(r) = self.dispatch_bitfield(insn) {
            return r;
        }
        if let Some(r) = self.dispatch_pseudo(insn) {
            return r;
        }
        if let Some(r) = self.dispatch_atomic(insn) {
            return r;
        }
        Err(format!("unhandled IR op: {}", insn.op.name()))
    }

    fn dispatch_data_or_arith(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        Some(match insn.op {
            Copy | Indirect => self.exec_unary(insn, |a, _| a),
            Load => self.exec_load(insn),
            Store => self.exec_store(insn),
            IntAdd => self.exec_binary(insn, |a, b, sz| mask(a.wrapping_add(b), sz)),
            IntSub => self.exec_binary(insn, |a, b, sz| mask(a.wrapping_sub(b), sz)),
            IntMult => self.exec_binary(insn, |a, b, sz| mask(a.wrapping_mul(b), sz)),
            IntDiv => self.exec_binary(insn, exec_int_div),
            IntSdiv => self.exec_binary(insn, exec_int_sdiv),
            IntRem => self.exec_binary(insn, exec_int_rem),
            IntSrem => self.exec_binary(insn, exec_int_srem),
            IntNegate => self.exec_unary(insn, |a, sz| mask(!a, sz)),
            Int2comp => self.exec_unary(insn, |a, sz| mask((!a).wrapping_add(1), sz)),
            IntZext => self.exec_zext(insn),
            IntSext => self.exec_sext(insn),
            Ptradd => self.exec_binary(insn, |a, b, sz| mask(a.wrapping_add(b), sz)),
            Ptrsub => self.exec_binary(insn, |a, b, sz| mask(a.wrapping_sub(b), sz)),
            Cast => self.exec_unary(insn, |a, _| a),
            _ => return None,
        })
    }

    fn dispatch_compare_or_logic(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        let sz = max_input_size(insn);
        Some(match insn.op {
            IntEqual => self.exec_binary_bool(insn, |a, b| a == b),
            IntNotequal => self.exec_binary_bool(insn, |a, b| a != b),
            IntLess => self.exec_binary_bool(insn, |a, b| a < b),
            IntLessequal => self.exec_binary_bool(insn, |a, b| a <= b),
            IntSless => self.exec_binary_bool(insn, move |a, b| sext(a, sz) < sext(b, sz)),
            IntSlessequal => self.exec_binary_bool(insn, move |a, b| sext(a, sz) <= sext(b, sz)),
            IntCarry => self.exec_binary_bool(insn, |a, b| a.checked_add(b).is_none()),
            IntScarry => self.exec_binary_bool(insn, move |a, b| {
                sext(a, sz).checked_add(sext(b, sz)).is_none()
            }),
            IntSborrow => self.exec_binary_bool(insn, move |a, b| {
                sext(a, sz).checked_sub(sext(b, sz)).is_none()
            }),
            IntAnd => self.exec_binary(insn, |a, b, s| mask(a & b, s)),
            IntOr => self.exec_binary(insn, |a, b, s| mask(a | b, s)),
            IntXor => self.exec_binary(insn, |a, b, s| mask(a ^ b, s)),
            IntLeft => self.exec_binary(insn, exec_int_left),
            IntRight => self.exec_binary(insn, exec_int_right),
            IntSright => self.exec_binary(insn, exec_int_sright),
            BoolNegate => self.exec_unary(insn, |a, _| u64::from(a == 0)),
            BoolAnd => self.exec_binary(insn, |a, b, _| u64::from((a != 0) && (b != 0))),
            BoolOr => self.exec_binary(insn, |a, b, _| u64::from((a != 0) || (b != 0))),
            BoolXor => self.exec_binary(insn, |a, b, _| u64::from((a != 0) ^ (b != 0))),
            _ => return None,
        })
    }

    fn dispatch_float(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        Some(match insn.op {
            FloatAdd => self.exec_float_binary(insn, |a, b| a + b),
            FloatSub => self.exec_float_binary(insn, |a, b| a - b),
            FloatMult => self.exec_float_binary(insn, |a, b| a * b),
            FloatDiv => self.exec_float_binary(insn, |a, b| a / b),
            FloatNeg => self.exec_float_unary(insn, |a| -a),
            FloatAbs => self.exec_float_unary(insn, |a| a.abs()),
            FloatSqrt => self.exec_float_unary(insn, |a| a.sqrt()),
            FloatCeil => self.exec_float_unary(insn, |a| a.ceil()),
            FloatFloor => self.exec_float_unary(insn, |a| a.floor()),
            FloatRound => self.exec_float_unary(insn, |a| a.round()),
            FloatTrunc => self.exec_float_unary(insn, |a| a.trunc()),
            FloatNan => self.exec_unary(insn, |a, sz| u64::from(decode_float(a, sz).is_nan())),
            FloatInt2float => self.exec_float_convert_from_int(insn),
            FloatFloat2float => self.exec_float_convert(insn),
            FloatFloat2int => self.exec_float_convert_to_int(insn),
            FloatEqual => self.exec_float_compare(insn, |a, b| a == b),
            FloatNotequal => self.exec_float_compare(insn, |a, b| a != b),
            FloatLess => self.exec_float_compare(insn, |a, b| a < b),
            FloatLessequal => self.exec_float_compare(insn, |a, b| a <= b),
            _ => return None,
        })
    }

    fn dispatch_control(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        Some(match insn.op {
            Branch => self.exec_branch(insn),
            Cbranch => self.exec_cbranch(insn),
            Branchind => self.exec_branchind(insn),
            Call => self.exec_call(insn),
            Callind => self.exec_callind(insn),
            Return => Ok(StepOutcome::Return),
            _ => return None,
        })
    }

    fn dispatch_bitfield(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        Some(match insn.op {
            Piece => self.exec_piece(insn),
            Subpiece => self.exec_subpiece(insn),
            Popcount => self.exec_unary(insn, |a, _| a.count_ones() as u64),
            Lzcount => self.exec_unary(insn, exec_lzcount),
            Insert => self.exec_insert(insn),
            Zpull => self.exec_unary(insn, |a, _| a),
            Spull => self.exec_sext(insn),
            _ => return None,
        })
    }

    fn dispatch_pseudo(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        Some(match insn.op {
            Multiequal => self.exec_unary(insn, |a, _| a),
            Cpoolref | New | Segmentop | Unimplemented => {
                Err(format!("unimplemented IR op: {}", insn.op.name()))
            }
            Select => self.exec_select(insn),
            VectorInsert | VectorExtract | VectorShuffle => self.exec_unary(insn, |a, _| a),
            Callother => unreachable!("dispatched above"),
            _ => return None,
        })
    }

    fn dispatch_atomic(&mut self, insn: &IrInsn) -> Option<Result<StepOutcome, String>> {
        use IrOp::*;
        Some(match insn.op {
            Fence => Ok(StepOutcome::Continue),
            AtomicLoad => self.exec_load(insn),
            AtomicStore => self.exec_store(insn),
            AtomicRmw => self.exec_atomic_rmw(insn),
            AtomicCas => self.exec_atomic_cas(insn),
            _ => return None,
        })
    }

    fn exec_branch(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        Ok(StepOutcome::Jump(read_target(insn)?))
    }

    fn exec_cbranch(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let target = read_target(insn)?;
        let cond = self.read_varnode(input_at(insn, 1)?);
        Ok(StepOutcome::ConditionalJump {
            target,
            taken: cond != 0,
        })
    }

    fn exec_branchind(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let target = self.read_varnode(input_at(insn, 0)?);
        Ok(StepOutcome::IndirectJump(target))
    }

    fn exec_call(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        Ok(StepOutcome::Call(read_target(insn)?))
    }

    fn exec_callind(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let target = self.read_varnode(input_at(insn, 0)?);
        Ok(StepOutcome::Call(target))
    }

    fn exec_select(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let cond = self.read_varnode(input_at(insn, 0)?);
        let v = if cond != 0 {
            self.read_varnode(input_at(insn, 1)?)
        } else {
            self.read_varnode(input_at(insn, 2)?)
        };
        self.write_output(insn, v)?;
        Ok(StepOutcome::Continue)
    }

    fn exec_float_convert(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let in_sz = input_at(insn, 0)?.size;
        let out_sz = output_size(insn);
        let v = self.read_varnode(input_at(insn, 0)?);
        self.write_output(insn, encode_float(decode_float(v, in_sz), out_sz))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_float_convert_from_int(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let in_sz = input_at(insn, 0)?.size;
        let out_sz = output_size(insn);
        let v = self.read_varnode(input_at(insn, 0)?);
        let signed = sext(v, in_sz);
        self.write_output(insn, encode_float(signed as f64, out_sz))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_float_convert_to_int(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let in_sz = input_at(insn, 0)?.size;
        let out_sz = output_size(insn);
        let v = self.read_varnode(input_at(insn, 0)?);
        self.write_output(insn, mask(decode_float(v, in_sz) as i64 as u64, out_sz))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_unary<F: FnOnce(u64, u8) -> u64>(
        &mut self,
        insn: &IrInsn,
        f: F,
    ) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        let sz = input_at(insn, 0)?.size;
        self.write_output(insn, f(a, sz))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_binary<F: FnOnce(u64, u64, u8) -> u64>(
        &mut self,
        insn: &IrInsn,
        f: F,
    ) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        let b = self.read_varnode(input_at(insn, 1)?);
        let sz = max_input_size(insn);
        self.write_output(insn, f(a, b, sz))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_binary_bool<F: FnOnce(u64, u64) -> bool>(
        &mut self,
        insn: &IrInsn,
        f: F,
    ) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        let b = self.read_varnode(input_at(insn, 1)?);
        self.write_output(insn, u64::from(f(a, b)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_float_unary<F: FnOnce(f64) -> f64>(
        &mut self,
        insn: &IrInsn,
        f: F,
    ) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        let sz = input_at(insn, 0)?.size;
        let v = decode_float(a, sz);
        self.write_output(insn, encode_float(f(v), output_size(insn)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_float_binary<F: FnOnce(f64, f64) -> f64>(
        &mut self,
        insn: &IrInsn,
        f: F,
    ) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        let b = self.read_varnode(input_at(insn, 1)?);
        let sz = input_at(insn, 0)?.size;
        let av = decode_float(a, sz);
        let bv = decode_float(b, sz);
        self.write_output(insn, encode_float(f(av, bv), output_size(insn)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_float_compare<F: FnOnce(f64, f64) -> bool>(
        &mut self,
        insn: &IrInsn,
        f: F,
    ) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        let b = self.read_varnode(input_at(insn, 1)?);
        let sz = input_at(insn, 0)?.size;
        self.write_output(insn, u64::from(f(decode_float(a, sz), decode_float(b, sz))))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_zext(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let a = self.read_varnode(input_at(insn, 0)?);
        self.write_output(insn, a)?;
        Ok(StepOutcome::Continue)
    }

    fn exec_sext(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let v = self.read_varnode(input_at(insn, 0)?);
        let in_sz = input_at(insn, 0)?.size;
        let signed = sext(v, in_sz) as u64;
        self.write_output(insn, mask(signed, output_size(insn)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_load(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        // Load(space_id, addr) → out. We ignore space_id and always use Ram.
        let addr = self.read_varnode(input_at(insn, 1)?);
        let sz = output_size(insn);
        let bytes = self
            .memory
            .read(addr, sz as usize)
            .ok_or_else(|| format!("unmapped LOAD @ {:#x} size {}", addr, sz))?;
        self.write_output(insn, bytes_to_u64(&bytes))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_store(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        // Store(space_id, addr, value).
        let addr = self.read_varnode(input_at(insn, 1)?);
        let val = self.read_varnode(input_at(insn, 2)?);
        let sz = input_at(insn, 2)?.size;
        let bytes = u64_to_bytes(val, sz);
        if !self.memory.write(addr, &bytes) {
            return Err(format!("unmapped STORE @ {:#x} size {}", addr, sz));
        }
        Ok(StepOutcome::Continue)
    }

    fn exec_piece(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let high = self.read_varnode(input_at(insn, 0)?);
        let low = self.read_varnode(input_at(insn, 1)?);
        let low_sz = input_at(insn, 1)?.size as u32;
        let combined = (high << (low_sz * 8)) | mask(low, input_at(insn, 1)?.size);
        self.write_output(insn, mask(combined, output_size(insn)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_subpiece(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        let v = self.read_varnode(input_at(insn, 0)?);
        let shift_bytes = self.read_varnode(input_at(insn, 1)?);
        let shifted = v.wrapping_shr((shift_bytes as u32) * 8);
        self.write_output(insn, mask(shifted, output_size(insn)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_insert(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        // INSERT(dst, src, offset_bits, size_bits) — write src into dst at
        // the given bit offset/size. Fall back to plain pass-through if the
        // op was emitted with the simpler 2-operand form.
        let dst = self.read_varnode(input_at(insn, 0)?);
        let src = self.read_varnode(input_at(insn, 1)?);
        if insn.inputs.len() < 4 {
            self.write_output(insn, src)?;
            return Ok(StepOutcome::Continue);
        }
        let off_bits = self.read_varnode(input_at(insn, 2)?) as u32;
        let sz_bits = self.read_varnode(input_at(insn, 3)?) as u32;
        let field_mask: u64 = if sz_bits >= 64 {
            u64::MAX
        } else {
            (1u64 << sz_bits) - 1
        };
        let cleared = dst & !(field_mask << off_bits);
        let new = cleared | ((src & field_mask) << off_bits);
        self.write_output(insn, mask(new, output_size(insn)))?;
        Ok(StepOutcome::Continue)
    }

    fn exec_atomic_rmw(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        // ATOMIC_RMW(space, addr, operand, op_kind, ordering) → old_value
        let addr = self.read_varnode(input_at(insn, 1)?);
        let operand = self.read_varnode(input_at(insn, 2)?);
        let op_kind = self.read_varnode(input_at(insn, 3)?);
        let sz = output_size(insn);
        let bytes = self
            .memory
            .read(addr, sz as usize)
            .ok_or_else(|| format!("unmapped ATOMIC_RMW @ {:#x}", addr))?;
        let old = bytes_to_u64(&bytes);
        let new = match op_kind {
            0 => operand,
            1 => mask(old.wrapping_add(operand), sz),
            2 => mask(old.wrapping_sub(operand), sz),
            3 => mask(old & operand, sz),
            4 => mask(old | operand, sz),
            5 => mask(old ^ operand, sz),
            6 => mask(!(old & operand), sz),
            7 => mask(old.min(operand), sz),
            8 => mask(old.max(operand), sz),
            _ => return Err(format!("unknown ATOMIC_RMW op_kind {}", op_kind)),
        };
        self.memory.write(addr, &u64_to_bytes(new, sz));
        self.write_output(insn, old)?;
        Ok(StepOutcome::Continue)
    }

    fn exec_atomic_cas(&mut self, insn: &IrInsn) -> Result<StepOutcome, String> {
        // ATOMIC_CAS(space, addr, expected, desired, ordering) → old_value
        let addr = self.read_varnode(input_at(insn, 1)?);
        let expected = self.read_varnode(input_at(insn, 2)?);
        let desired = self.read_varnode(input_at(insn, 3)?);
        let sz = output_size(insn);
        let bytes = self
            .memory
            .read(addr, sz as usize)
            .ok_or_else(|| format!("unmapped ATOMIC_CAS @ {:#x}", addr))?;
        let old = bytes_to_u64(&bytes);
        if old == expected {
            self.memory.write(addr, &u64_to_bytes(desired, sz));
        }
        self.write_output(insn, old)?;
        Ok(StepOutcome::Continue)
    }

    /// Resolve a Varnode to its current numeric value.
    pub fn read_varnode(&self, v: Varnode) -> u64 {
        match v.space {
            SpaceId::Const => mask(v.offset, v.size),
            SpaceId::Register => mask(self.read_register(v), v.size),
            SpaceId::Unique => mask(
                self.unique_slots
                    .get(&(v.offset, v.size))
                    .copied()
                    .unwrap_or(0),
                v.size,
            ),
            SpaceId::Stack => mask(
                self.stack_slots
                    .get(&(v.offset as i64, v.size))
                    .copied()
                    .unwrap_or(0),
                v.size,
            ),
            SpaceId::Ram => self
                .memory
                .read(v.offset, v.size as usize)
                .map(|b| bytes_to_u64(&b))
                .unwrap_or(0),
            _ => 0,
        }
    }

    fn read_register(&self, v: Varnode) -> u64 {
        let name = register_name(v.offset, v.size);
        self.regs.get(&name)
    }

    /// Write the opcode's output (if any).
    pub fn write_output(&mut self, insn: &IrInsn, value: u64) -> Result<(), String> {
        let Some(out) = insn.output else {
            return Ok(());
        };
        self.write_varnode(out, value)
    }

    fn write_varnode(&mut self, v: Varnode, value: u64) -> Result<(), String> {
        let masked = mask(value, v.size);
        match v.space {
            SpaceId::Const => Err("cannot write to Const space".into()),
            SpaceId::Register => {
                let name = register_name(v.offset, v.size);
                self.regs.set(&name, masked);
                Ok(())
            }
            SpaceId::Unique => {
                self.unique_slots.insert((v.offset, v.size), masked);
                Ok(())
            }
            SpaceId::Stack => {
                self.stack_slots.insert((v.offset as i64, v.size), masked);
                Ok(())
            }
            SpaceId::Ram => {
                let bytes = u64_to_bytes(masked, v.size);
                if !self.memory.write(v.offset, &bytes) {
                    return Err(format!(
                        "unmapped RAM write @ {:#x} size {}",
                        v.offset, v.size
                    ));
                }
                Ok(())
            }
            _ => Err(format!("unsupported space {:?}", v.space)),
        }
    }

    /// Simulate a Linux syscall with the current rax/rdi/.../r9 register
    /// state. Mirrors `do_syscall` from prior step_noop world.
    pub fn do_syscall(&mut self) -> StepOutcome {
        let nr = self.regs.get("rax");
        let args = [
            self.regs.get("rdi"),
            self.regs.get("rsi"),
            self.regs.get("rdx"),
            self.regs.get("r10"),
            self.regs.get("r8"),
            self.regs.get("r9"),
        ];
        let outcome = syscalls::dispatch(nr, args, &self.memory);
        self.syscall_trace.push(syscalls::SyscallTrace {
            nr,
            args,
            outcome: outcome.clone(),
        });
        match outcome {
            syscalls::SyscallOutcome::Ok(rv) => {
                self.regs.set("rax", rv);
                StepOutcome::Continue
            }
            syscalls::SyscallOutcome::Exit(code) => StepOutcome::SyscallExit(code),
            syscalls::SyscallOutcome::Denied => {
                StepOutcome::Faulted("syscall denied by sandbox".to_string())
            }
            syscalls::SyscallOutcome::Unimplemented => {
                self.regs.set("rax", u64::MAX);
                StepOutcome::Continue
            }
        }
    }
}

// ---------------- helpers ----------------

fn exec_int_div(a: u64, b: u64, sz: u8) -> u64 {
    if b == 0 {
        0
    } else {
        mask(a.wrapping_div(b), sz)
    }
}

fn exec_int_sdiv(a: u64, b: u64, sz: u8) -> u64 {
    let ai = sext(a, sz);
    let bi = sext(b, sz);
    if bi == 0 {
        0
    } else {
        mask(ai.wrapping_div(bi) as u64, sz)
    }
}

fn exec_int_rem(a: u64, b: u64, sz: u8) -> u64 {
    if b == 0 {
        0
    } else {
        mask(a.wrapping_rem(b), sz)
    }
}

fn exec_int_srem(a: u64, b: u64, sz: u8) -> u64 {
    let ai = sext(a, sz);
    let bi = sext(b, sz);
    if bi == 0 {
        0
    } else {
        mask(ai.wrapping_rem(bi) as u64, sz)
    }
}

fn exec_int_left(a: u64, b: u64, sz: u8) -> u64 {
    let shift = (b & 0x3F) as u32;
    if shift >= (sz as u32) * 8 {
        0
    } else {
        mask(a.wrapping_shl(shift), sz)
    }
}

fn exec_int_right(a: u64, b: u64, sz: u8) -> u64 {
    let shift = (b & 0x3F) as u32;
    if shift >= (sz as u32) * 8 {
        0
    } else {
        mask(a.wrapping_shr(shift), sz)
    }
}

fn exec_int_sright(a: u64, b: u64, sz: u8) -> u64 {
    let shift = (b & 0x3F) as u32;
    let signed = sext(a, sz);
    if shift >= (sz as u32) * 8 {
        if signed < 0 { mask(u64::MAX, sz) } else { 0 }
    } else {
        mask(signed.wrapping_shr(shift) as u64, sz)
    }
}

fn exec_lzcount(a: u64, sz: u8) -> u64 {
    let bits = (sz as u32) * 8;
    if a == 0 {
        bits as u64
    } else {
        (a.leading_zeros() - (64 - bits)) as u64
    }
}

fn input_at(insn: &IrInsn, idx: usize) -> Result<Varnode, String> {
    insn.inputs
        .get(idx)
        .copied()
        .ok_or_else(|| format!("{} missing input {}", insn.op.name(), idx))
}

fn read_target(insn: &IrInsn) -> Result<u64, String> {
    let v = input_at(insn, 0)?;
    Ok(v.offset)
}

fn output_size(insn: &IrInsn) -> u8 {
    insn.output.map(|v| v.size).unwrap_or(8)
}

fn max_input_size(insn: &IrInsn) -> u8 {
    insn.inputs.iter().map(|v| v.size).max().unwrap_or(8)
}

/// Mask `v` to `sz` bytes (0..16). `sz == 0` is interpreted as 8.
pub fn mask(v: u64, sz: u8) -> u64 {
    if sz == 0 || sz >= 8 {
        v
    } else {
        let bits = (sz as u32) * 8;
        v & ((1u64 << bits) - 1)
    }
}

/// Sign-extend `v` from `sz` bytes to i64. `sz == 0` falls through unchanged.
pub fn sext(v: u64, sz: u8) -> i64 {
    if sz == 0 || sz >= 8 {
        return v as i64;
    }
    let bits = (sz as u32) * 8;
    let sign_bit = 1u64 << (bits - 1);
    let m = mask(v, sz);
    if m & sign_bit != 0 {
        let high = (!0u64) << bits;
        (m | high) as i64
    } else {
        m as i64
    }
}

fn bytes_to_u64(b: &[u8]) -> u64 {
    let mut buf = [0u8; 8];
    let n = b.len().min(8);
    buf[..n].copy_from_slice(&b[..n]);
    u64::from_le_bytes(buf)
}

fn u64_to_bytes(v: u64, sz: u8) -> Vec<u8> {
    let n = if sz == 0 { 8 } else { sz as usize };
    v.to_le_bytes()[..n.min(8)].to_vec()
}

fn decode_float(bits: u64, sz: u8) -> f64 {
    match sz {
        4 => f32::from_bits(bits as u32) as f64,
        _ => f64::from_bits(bits),
    }
}

fn encode_float(v: f64, sz: u8) -> u64 {
    match sz {
        4 => (v as f32).to_bits() as u64,
        _ => v.to_bits(),
    }
}

/// Map (offset, size) → register name. Covers x86_64 GPRs, AArch64 X0-X30,
/// and RISC-V x0-x31, which is what every lifter in the workspace currently
/// emits. Unknown offsets degrade to `r<offset>`.
fn register_name(offset: u64, size: u8) -> String {
    // x86_64 GPRs (offset 0..128, size 1/2/4/8)
    if let Some(n) = x86_64_name(offset, size) {
        return n.to_string();
    }
    // AArch64 X0..X30 typically at offsets 0,8,16,...,240
    if size == 8 && offset < 248 && offset.is_multiple_of(8) {
        let i = offset / 8;
        if i <= 30 {
            return format!("x{}", i);
        }
        if i == 31 {
            return "sp".into();
        }
    }
    // Fallback
    format!("r{:#x}_{}", offset, size)
}

fn x86_64_name(offset: u64, size: u8) -> Option<&'static str> {
    // Table follows Ghidra's x86-64 sleigh register file (offset bytes).
    Some(match (offset, size) {
        (0x00, 8) => "rax",
        (0x00, 4) => "eax",
        (0x00, 2) => "ax",
        (0x00, 1) => "al",
        (0x08, 8) => "rcx",
        (0x08, 4) => "ecx",
        (0x10, 8) => "rdx",
        (0x10, 4) => "edx",
        (0x18, 8) => "rbx",
        (0x18, 4) => "ebx",
        (0x20, 8) => "rsp",
        (0x20, 4) => "esp",
        (0x28, 8) => "rbp",
        (0x30, 8) => "rsi",
        (0x30, 4) => "esi",
        (0x38, 8) => "rdi",
        (0x38, 4) => "edi",
        (0x80, 8) => "r8",
        (0x88, 8) => "r9",
        (0x90, 8) => "r10",
        (0x98, 8) => "r11",
        (0xA0, 8) => "r12",
        (0xA8, 8) => "r13",
        (0xB0, 8) => "r14",
        (0xB8, 8) => "r15",
        (0x288, 8) => "rip",
        _ => return None,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;

    fn vn_const(value: u64, size: u8) -> Varnode {
        Varnode::constant(value, size)
    }

    fn vn_unique(off: u64, size: u8) -> Varnode {
        Varnode::unique(off, size)
    }

    fn vn_rax() -> Varnode {
        Varnode::reg(0x00, 8)
    }

    fn vn_rip() -> Varnode {
        Varnode::reg(0x288, 8)
    }

    fn binary(op: IrOp, out: Varnode, a: Varnode, b: Varnode) -> IrInsn {
        IrInsn::with_output(op, out, smallvec![a, b], 0)
    }

    fn unary(op: IrOp, out: Varnode, a: Varnode) -> IrInsn {
        IrInsn::with_output(op, out, smallvec![a], 0)
    }

    fn run_step(i: &mut Interpreter, insn: &IrInsn) -> StepOutcome {
        i.step(insn)
    }

    #[test]
    fn test_step_copy_const_to_register() {
        let mut i = Interpreter::new();
        let insn = unary(IrOp::Copy, vn_rax(), vn_const(0xDEADBEEF, 8));
        assert_eq!(run_step(&mut i, &insn), StepOutcome::Continue);
        assert_eq!(i.regs.get("rax"), 0xDEADBEEF);
        assert_eq!(i.instruction_count, 1);
    }

    #[test]
    fn test_step_int_add_basic() {
        let mut i = Interpreter::new();
        let insn = binary(IrOp::IntAdd, vn_rax(), vn_const(1, 8), vn_const(2, 8));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("rax"), 3);
    }

    #[test]
    fn test_step_int_sub_underflow_masks() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        let insn = binary(IrOp::IntSub, out, vn_const(0, 4), vn_const(1, 4));
        run_step(&mut i, &insn);
        // 0 - 1 in 32-bit wraps to 0xFFFFFFFF
        assert_eq!(i.regs.get("eax"), 0xFFFFFFFF);
    }

    #[test]
    fn test_step_int_mult_overflow_masks() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 2);
        let insn = binary(IrOp::IntMult, out, vn_const(0x100, 2), vn_const(0x100, 2));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("ax"), 0);
    }

    #[test]
    fn test_step_int_div_by_zero_yields_zero() {
        let mut i = Interpreter::new();
        let insn = binary(IrOp::IntDiv, vn_rax(), vn_const(5, 8), vn_const(0, 8));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("rax"), 0);
    }

    #[test]
    fn test_step_int_sdiv_negative() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        // -6 / 2 = -3 in two's complement → 0xFFFFFFFD
        let insn = binary(IrOp::IntSdiv, out, vn_const(0xFFFFFFFA, 4), vn_const(2, 4));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 0xFFFFFFFD);
    }

    #[test]
    fn test_step_int_negate() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        let insn = unary(IrOp::IntNegate, out, vn_const(0xFF, 4));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 0xFFFFFF00);
    }

    #[test]
    fn test_step_int_2comp() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        let insn = unary(IrOp::Int2comp, out, vn_const(1, 4));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 0xFFFFFFFF);
    }

    #[test]
    fn test_step_int_zext_widens() {
        let mut i = Interpreter::new();
        let insn = unary(IrOp::IntZext, vn_rax(), vn_const(0xFF, 1));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("rax"), 0xFF);
    }

    #[test]
    fn test_step_int_sext_sign_extends() {
        let mut i = Interpreter::new();
        let insn = unary(IrOp::IntSext, vn_rax(), vn_const(0xFF, 1));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("rax"), 0xFFFFFFFFFFFFFFFF);
    }

    #[test]
    fn test_step_int_equal() {
        let mut i = Interpreter::new();
        let out = vn_unique(0, 1);
        let insn = binary(IrOp::IntEqual, out, vn_const(5, 8), vn_const(5, 8));
        run_step(&mut i, &insn);
        assert_eq!(i.unique_slots[&(0, 1)], 1);
        let insn = binary(IrOp::IntEqual, out, vn_const(5, 8), vn_const(6, 8));
        run_step(&mut i, &insn);
        assert_eq!(i.unique_slots[&(0, 1)], 0);
    }

    #[test]
    fn test_step_int_less_unsigned_vs_signed() {
        let mut i = Interpreter::new();
        let out = vn_unique(0, 1);
        // 0xFF (255 unsigned) vs 1 → unsigned: 255 > 1, signed: -1 < 1
        let lhs = vn_const(0xFF, 1);
        let rhs = vn_const(1, 1);
        run_step(&mut i, &binary(IrOp::IntLess, out, lhs, rhs));
        assert_eq!(i.unique_slots[&(0, 1)], 0);
        run_step(&mut i, &binary(IrOp::IntSless, out, lhs, rhs));
        assert_eq!(i.unique_slots[&(0, 1)], 1);
    }

    #[test]
    fn test_step_int_and_or_xor() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        run_step(
            &mut i,
            &binary(IrOp::IntAnd, out, vn_const(0xFF00, 4), vn_const(0x0FF0, 4)),
        );
        assert_eq!(i.regs.get("eax"), 0x0F00);
        run_step(
            &mut i,
            &binary(IrOp::IntOr, out, vn_const(0xFF00, 4), vn_const(0x0FF0, 4)),
        );
        assert_eq!(i.regs.get("eax"), 0xFFF0);
        run_step(
            &mut i,
            &binary(IrOp::IntXor, out, vn_const(0xFF00, 4), vn_const(0x0FF0, 4)),
        );
        assert_eq!(i.regs.get("eax"), 0xF0F0);
    }

    #[test]
    fn test_step_int_shift_left_right() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        run_step(
            &mut i,
            &binary(IrOp::IntLeft, out, vn_const(1, 4), vn_const(4, 4)),
        );
        assert_eq!(i.regs.get("eax"), 0x10);
        run_step(
            &mut i,
            &binary(IrOp::IntRight, out, vn_const(0xFF, 4), vn_const(4, 4)),
        );
        assert_eq!(i.regs.get("eax"), 0x0F);
        run_step(
            &mut i,
            &binary(
                IrOp::IntSright,
                out,
                vn_const(0xFFFFFF00, 4),
                vn_const(4, 4),
            ),
        );
        assert_eq!(i.regs.get("eax"), 0xFFFFFFF0);
    }

    #[test]
    fn test_step_popcount_lzcount() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        run_step(&mut i, &unary(IrOp::Popcount, out, vn_const(0b10110, 4)));
        assert_eq!(i.regs.get("eax"), 3);
        run_step(&mut i, &unary(IrOp::Lzcount, out, vn_const(0x00000010, 4)));
        // 32-bit input, value 0x10 has 27 leading zeros (bit 4 is highest).
        assert_eq!(i.regs.get("eax"), 27);
    }

    #[test]
    fn test_step_load_store_via_memory() {
        let mut i = Interpreter::new();
        i.memory.map(0x4000, &[0u8; 16], (true, true, false));
        let space = vn_const(0, 8); // space id - ignored
        let addr = vn_const(0x4000, 8);
        let val = vn_const(0xCAFE, 4);
        let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr, val], 0);
        run_step(&mut i, &store);
        let out = Varnode::reg(0x00, 4);
        let load = IrInsn::with_output(IrOp::Load, out, smallvec![space, addr], 0);
        run_step(&mut i, &load);
        assert_eq!(i.regs.get("eax"), 0xCAFE);
    }

    #[test]
    fn test_step_branch_returns_jump_target() {
        let mut i = Interpreter::new();
        let target = vn_const(0x401234, 8);
        let insn = IrInsn::without_output(IrOp::Branch, smallvec![target], 0);
        assert_eq!(run_step(&mut i, &insn), StepOutcome::Jump(0x401234));
    }

    #[test]
    fn test_step_cbranch_taken_and_not_taken() {
        let mut i = Interpreter::new();
        let target = vn_const(0x401000, 8);
        let cond_true = vn_const(1, 1);
        let insn = IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond_true], 0);
        assert_eq!(
            run_step(&mut i, &insn),
            StepOutcome::ConditionalJump {
                target: 0x401000,
                taken: true
            }
        );
        let cond_false = vn_const(0, 1);
        let insn = IrInsn::without_output(IrOp::Cbranch, smallvec![target, cond_false], 0);
        assert_eq!(
            run_step(&mut i, &insn),
            StepOutcome::ConditionalJump {
                target: 0x401000,
                taken: false
            }
        );
    }

    #[test]
    fn test_step_call_and_return() {
        let mut i = Interpreter::new();
        let target = vn_const(0x500000, 8);
        let call = IrInsn::without_output(IrOp::Call, smallvec![target], 0);
        assert_eq!(run_step(&mut i, &call), StepOutcome::Call(0x500000));
        let ret = IrInsn::without_output(IrOp::Return, smallvec![], 0);
        assert_eq!(run_step(&mut i, &ret), StepOutcome::Return);
    }

    #[test]
    fn test_step_callind_uses_register_value() {
        let mut i = Interpreter::new();
        i.regs.set("rax", 0x600000);
        let insn = IrInsn::without_output(IrOp::Callind, smallvec![vn_rax()], 0);
        assert_eq!(run_step(&mut i, &insn), StepOutcome::Call(0x600000));
    }

    #[test]
    fn test_step_branchind_indirect_jump() {
        let mut i = Interpreter::new();
        i.regs.set("rip", 0x700000);
        let insn = IrInsn::without_output(IrOp::Branchind, smallvec![vn_rip()], 0);
        assert_eq!(run_step(&mut i, &insn), StepOutcome::IndirectJump(0x700000));
    }

    #[test]
    fn test_step_select_picks_correct_input() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        let cond = vn_const(1, 1);
        let a = vn_const(0xAAAA, 4);
        let b = vn_const(0xBBBB, 4);
        let insn = IrInsn::with_output(IrOp::Select, out, smallvec![cond, a, b], 0);
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 0xAAAA);
        let cond = vn_const(0, 1);
        let insn = IrInsn::with_output(IrOp::Select, out, smallvec![cond, a, b], 0);
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 0xBBBB);
    }

    #[test]
    fn test_step_piece_subpiece_round_trip() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        // PIECE(0xDEAD, 0xBEEF) → 0xDEADBEEF
        let insn = binary(IrOp::Piece, out, vn_const(0xDEAD, 2), vn_const(0xBEEF, 2));
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 0xDEADBEEF);
        // SUBPIECE(0xDEADBEEF, 2 bytes shift) → 0xDEAD
        let out2 = Varnode::reg(0x00, 2);
        let insn = binary(
            IrOp::Subpiece,
            out2,
            vn_const(0xDEADBEEF, 4),
            vn_const(2, 1),
        );
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("ax"), 0xDEAD);
    }

    #[test]
    fn test_step_float_add_round_trip() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 8);
        let a = vn_const(f64::to_bits(1.5), 8);
        let b = vn_const(f64::to_bits(2.5), 8);
        let insn = binary(IrOp::FloatAdd, out, a, b);
        run_step(&mut i, &insn);
        let result = f64::from_bits(i.regs.get("rax"));
        assert_eq!(result, 4.0);
    }

    #[test]
    fn test_step_float_int2float() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 8);
        let v = vn_const(42, 8);
        let insn = unary(IrOp::FloatInt2float, out, v);
        run_step(&mut i, &insn);
        assert_eq!(f64::from_bits(i.regs.get("rax")), 42.0);
    }

    #[test]
    fn test_step_float_float2int_truncates() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        let v = vn_const(f64::to_bits(3.7), 8);
        let insn = unary(IrOp::FloatFloat2int, out, v);
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("eax"), 3);
    }

    #[test]
    fn test_step_bool_negate_and_or() {
        let mut i = Interpreter::new();
        let out = vn_unique(0, 1);
        run_step(&mut i, &unary(IrOp::BoolNegate, out, vn_const(0, 1)));
        assert_eq!(i.unique_slots[&(0, 1)], 1);
        run_step(
            &mut i,
            &binary(IrOp::BoolAnd, out, vn_const(1, 1), vn_const(1, 1)),
        );
        assert_eq!(i.unique_slots[&(0, 1)], 1);
        run_step(
            &mut i,
            &binary(IrOp::BoolOr, out, vn_const(0, 1), vn_const(1, 1)),
        );
        assert_eq!(i.unique_slots[&(0, 1)], 1);
        run_step(
            &mut i,
            &binary(IrOp::BoolXor, out, vn_const(1, 1), vn_const(1, 1)),
        );
        assert_eq!(i.unique_slots[&(0, 1)], 0);
    }

    #[test]
    fn test_step_atomic_rmw_xchg_and_add() {
        let mut i = Interpreter::new();
        i.memory
            .map(0x5000, &[10, 0, 0, 0, 0, 0, 0, 0], (true, true, false));
        let out = Varnode::reg(0x00, 8);
        let insn = IrInsn::with_output(
            IrOp::AtomicRmw,
            out,
            smallvec![
                vn_const(0, 8),
                vn_const(0x5000, 8),
                vn_const(5, 8),
                vn_const(1, 8), // op_kind 1 = Add
                vn_const(4, 8), // ordering: SeqCst
            ],
            0,
        );
        run_step(&mut i, &insn);
        assert_eq!(i.regs.get("rax"), 10); // old value returned
        let bytes = i.memory.read(0x5000, 8).unwrap();
        assert_eq!(bytes_to_u64(&bytes), 15); // updated to 10+5
    }

    #[test]
    fn test_step_unimplemented_faults() {
        let mut i = Interpreter::new();
        let insn = IrInsn::without_output(IrOp::Unimplemented, smallvec![], 0);
        match run_step(&mut i, &insn) {
            StepOutcome::Faulted(s) => assert!(s.contains("UNIMPLEMENTED")),
            other => panic!("expected fault, got {:?}", other),
        }
    }

    #[test]
    fn test_step_callother_dispatches_to_syscall() {
        let mut i = Interpreter::new();
        i.regs.set("rax", 60); // SYS_EXIT
        i.regs.set("rdi", 9);
        let insn = IrInsn::without_output(IrOp::Callother, smallvec![vn_const(0, 4)], 0);
        assert_eq!(run_step(&mut i, &insn), StepOutcome::SyscallExit(9));
    }

    #[test]
    fn test_step_load_unmapped_faults() {
        let mut i = Interpreter::new();
        let out = Varnode::reg(0x00, 4);
        let insn = IrInsn::with_output(
            IrOp::Load,
            out,
            smallvec![vn_const(0, 8), vn_const(0x9999, 8)],
            0,
        );
        match run_step(&mut i, &insn) {
            StepOutcome::Faulted(s) => assert!(s.contains("LOAD")),
            other => panic!("expected fault, got {:?}", other),
        }
    }

    #[test]
    fn test_step_unique_slot_round_trip() {
        let mut i = Interpreter::new();
        let u = vn_unique(0x100, 4);
        let store = unary(IrOp::Copy, u, vn_const(0xABCD, 4));
        run_step(&mut i, &store);
        assert_eq!(i.unique_slots[&(0x100, 4)], 0xABCD);
        let read = unary(IrOp::Copy, vn_rax(), u);
        run_step(&mut i, &read);
        // Note: rax(8 bytes) but unique was 4 — read_varnode masks to 4.
        assert_eq!(i.regs.get("rax"), 0xABCD);
    }

    #[test]
    fn test_step_carry_flag_unsigned_overflow() {
        let mut i = Interpreter::new();
        let out = vn_unique(0, 1);
        let insn = binary(IrOp::IntCarry, out, vn_const(u64::MAX, 8), vn_const(1, 8));
        run_step(&mut i, &insn);
        assert_eq!(i.unique_slots[&(0, 1)], 1);
    }

    #[test]
    fn test_step_int_carry_no_overflow() {
        let mut i = Interpreter::new();
        let out = vn_unique(0, 1);
        let insn = binary(IrOp::IntCarry, out, vn_const(1, 8), vn_const(1, 8));
        run_step(&mut i, &insn);
        assert_eq!(i.unique_slots[&(0, 1)], 0);
    }

    #[test]
    fn test_step_const_to_ram_then_load() {
        let mut i = Interpreter::new();
        i.memory.map(0x8000, &[0u8; 16], (true, true, false));
        // Write via Store, then sanity-check via direct memory read.
        let store = IrInsn::without_output(
            IrOp::Store,
            smallvec![vn_const(0, 8), vn_const(0x8000, 8), vn_const(0x42, 1)],
            0,
        );
        run_step(&mut i, &store);
        assert_eq!(i.memory.read(0x8000, 1).unwrap(), vec![0x42]);
    }

    #[test]
    fn test_mask_and_sext_helpers() {
        assert_eq!(mask(0x1234_5678, 2), 0x5678);
        assert_eq!(mask(0xFF, 1), 0xFF);
        assert_eq!(sext(0xFF, 1), -1);
        assert_eq!(sext(0x7F, 1), 127);
        assert_eq!(sext(0x80, 1), -128);
        assert_eq!(sext(0x12345678, 4), 0x12345678);
    }

    #[test]
    fn test_x86_64_register_name_table() {
        assert_eq!(register_name(0x00, 8), "rax");
        assert_eq!(register_name(0x00, 4), "eax");
        assert_eq!(register_name(0x00, 1), "al");
        assert_eq!(register_name(0x38, 8), "rdi");
        assert_eq!(register_name(0x80, 8), "r8");
        assert_eq!(register_name(0x288, 8), "rip");
    }

    #[test]
    fn test_interpreter_step_noop_increments_counter() {
        let mut i = Interpreter::new();
        for _ in 0..5 {
            assert_eq!(i.step_noop(), StepOutcome::Continue);
        }
        assert_eq!(i.instruction_count, 5);
    }

    #[test]
    fn test_interpreter_syscall_exit() {
        let mut i = Interpreter::new();
        i.regs.set("rax", 60);
        i.regs.set("rdi", 42);
        let outcome = i.do_syscall();
        assert_eq!(outcome, StepOutcome::SyscallExit(42));
        assert_eq!(i.syscall_trace.len(), 1);
    }
}
