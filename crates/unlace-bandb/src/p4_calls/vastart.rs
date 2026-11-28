//! (unlace `vastart`) The x86-64 SysV `va_start` prologue prints as
//! `va_start(ap, last)`.
//!
//! A variadic function that materializes a `va_list` spills every argument
//! register to a 176-byte register save area (the XMM half under `if (al)`)
//! and initializes the four `__va_list_tag` fields: `gp_offset` (8 per named
//! integer argument), `fp_offset` (48 plus 16 per named float argument),
//! `overflow_arg_area` (the caller's stack arguments) and `reg_save_area`.
//! Hex-Rays prints the whole sequence as `va_start(va, fmt);`; unlace printed a
//! dozen register copies and four field stores.
//!
//! [`ActionVaStart`] finds the two offset constants (two 4-byte writes or one
//! 8-byte write at `X`) beside the pointer writes at `X+8` and `X+16` in one
//! block, where the `X+16` value is the address of a stack range. It inserts a
//! `va_start(&X, last)` CALLOTHER before the first of those writes and turns
//! each write into an indirect creation of that CALLOTHER, so the `va_list`
//! keeps its later readers. `last` is the input that carries the last named
//! argument: the parameter at index `gp_offset/8 + (fp_offset-48)/16 - 1`,
//! or with no prototype yet and no named float argument, the integer argument
//! register `gp_offset/8 - 1`. With `vaargconst` on, a lone 4-byte `gp_offset` write (gcc's
//! prologue when no `va_arg` reads a double) counts, with `fp_offset` 48.
//! The register save area loses its address-forced liveness and its local
//! mapping (as the stack-guard strip does for the canary slot), so dead-code
//! removes the spills. An unlocked prototype is marked variadic.

use crate::funcdata_spacebase::FuncdataAliasCrateExt;
use unlace_base::address::Address;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// Bytes of the x86-64 SysV register save area (6 GPRs, 8 XMM registers).
const SAVE_AREA: u64 = 176;

/// A stack write `(offset, size, op)`.
type Write = (u64, int4, OpId);

fn stack_writes(data: &Funcdata) -> Vec<Write> {
    let Some(stack) = data.get_arch().manage().get_stack_space() else {
        return Vec::new();
    };
    let mut out = Vec::new();
    let ops: Vec<OpId> = data.obank().iter_alive().collect();
    for op in ops {
        let Some(o) = data.obank().get(op) else {
            continue;
        };
        if o.get_parent().is_none() || o.code() == OpCode::CPUI_MULTIEQUAL {
            continue;
        }
        let Some(v) = o.get_out().and_then(|v| data.vbank().get(v)) else {
            continue;
        };
        if v.get_addr()
            .get_space()
            .is_some_and(|s| s.get_index() == stack.get_index())
        {
            out.push((v.get_offset(), v.get_size(), op));
        }
    }
    out
}

/// The constant a COPY writes.
fn copied(data: &Funcdata, op: OpId) -> Option<u64> {
    let o = data.obank().get(op)?;
    if o.code() != OpCode::CPUI_COPY {
        return None;
    }
    let v = data.vbank().get(o.get_in(0)?)?;
    v.is_constant().then(|| v.get_offset())
}

/// `(spacebase, offset, op)` when `vn` is a stack address, `PTRSUB(sp, offset)`
/// or `INT_ADD(sp, offset)`, through COPYs.
fn stack_address(data: &Funcdata, mut vn: VarnodeId) -> Option<(VarnodeId, u64, OpCode)> {
    for _ in 0..4 {
        let d = data.obank().get(data.vbank().get(vn)?.get_def()?)?;
        match d.code() {
            OpCode::CPUI_COPY => vn = d.get_in(0)?,
            code @ (OpCode::CPUI_PTRSUB | OpCode::CPUI_INT_ADD) => {
                let sb = d.get_in(0)?;
                let off = data.vbank().get(d.get_in(1)?)?;
                return (data.vbank().get(sb)?.is_spacebase() && off.is_constant())
                    .then(|| (sb, off.get_offset(), code));
            }
            _ => return None,
        }
    }
    None
}

/// The value `op` puts in its stack output: a COPY's input, or the input of an
/// INDIRECT whose input is other storage (a store folded into the call's
/// effect on the slot).
fn written(data: &Funcdata, op: OpId) -> Option<VarnodeId> {
    let o = data.obank().get(op)?;
    let input = o.get_in(0)?;
    match o.code() {
        OpCode::CPUI_COPY => Some(input),
        OpCode::CPUI_INDIRECT => {
            let (i, out) = (data.vbank().get(input)?, data.vbank().get(o.get_out()?)?);
            (i.get_addr() != out.get_addr() && !i.is_constant()).then_some(input)
        }
        _ => None,
    }
}

struct VaStart {
    list: u64,
    /// The COPYs of the two offsets.
    offsets: Vec<OpId>,
    /// Every write of the `overflow_arg_area` and `reg_save_area` values to their fields.
    pointers: Vec<OpId>,
    spacebase: VarnodeId,
    address_op: OpCode,
    save_area: u64,
    /// The bytes of the register save area (176 for SysV, 192 for AAPCS64).
    save_len: u64,
    named: int4,
    gp: int4,
}

/// The block of the op that defines `vn`.
fn def_block(data: &Funcdata, vn: VarnodeId) -> Option<crate::context::BlockId> {
    data.obank()
        .get(data.vbank().get(vn)?.get_def()?)?
        .get_parent()
}

fn find(data: &Funcdata) -> Option<VaStart> {
    let writes = stack_writes(data);
    let mut weak = None;
    let at = |off: u64, size: int4| {
        writes
            .iter()
            .filter(move |w| w.0 == off && w.1 == size)
            .map(|w| w.2)
    };
    let gp_ok = |gp: u64| gp % 8 == 0 && gp <= 48;
    let fp_ok = |fp: u64| (48..=SAVE_AREA).contains(&fp) && (fp - 48) % 16 == 0;
    for &(x, size, op) in &writes {
        let (offsets, gp, fp) = match (size, copied(data, op)) {
            (8, Some(v)) if gp_ok(v & 0xffff_ffff) && fp_ok(v >> 32) => {
                (vec![op], v & 0xffff_ffff, v >> 32)
            }
            (4, Some(gp)) if gp_ok(gp) => {
                match at(x.wrapping_add(4), 4)
                    .find_map(|f| copied(data, f).filter(|&fp| fp_ok(fp)).map(|fp| (f, fp)))
                {
                    Some((fop, fp)) => (vec![op, fop], gp, fp),
                    // gcc leaves fp_offset unwritten when no va_arg reads a double;
                    // taken only with vaargconst on, which leaves that shape behind
                    None if crate::vaargconst::enabled(data)
                        && gp >= 8
                        && at(x.wrapping_add(4), 4).next().is_none() =>
                    {
                        (vec![op], gp, 48)
                    }
                    None => continue,
                }
            }
            _ => continue,
        };
        let Some(block) = data.obank().get(op).and_then(|o| o.get_parent()) else {
            continue;
        };
        // A pointer write counts when it, or the value it writes, is in the offset's block:
        // once the fields are heritaged their writes can survive only as the INDIRECTs a
        // later call carries, while the values stay where va_start computed them.
        let here = |o: OpId| {
            let v = written(data, o)?;
            let defined = def_block(data, v) == Some(block);
            (defined || data.obank().get(o).and_then(|p| p.get_parent()) == Some(block))
                .then_some((o, v, defined))
        };
        let Some((_, overflow, ov_def)) = at(x.wrapping_add(8), 8).find_map(&here) else {
            continue;
        };
        let Some((save, spacebase, save_area, address_op, sv_def)) = at(x.wrapping_add(16), 8)
            .find_map(|s| {
                let (_, v, defined) = here(s)?;
                stack_address(data, v).map(|(sb, off, code)| (v, sb, off, code, defined))
            })
        else {
            continue;
        };
        let mut pointers: Vec<OpId> = at(x.wrapping_add(8), 8)
            .filter(|&o| written(data, o) == Some(overflow))
            .collect();
        pointers.extend(at(x.wrapping_add(16), 8).filter(|&o| written(data, o) == Some(save)));
        let named = (gp / 8 + (fp - 48) / 16) as int4;
        let m = VaStart {
            list: x,
            offsets,
            pointers,
            spacebase,
            address_op,
            save_area,
            save_len: SAVE_AREA,
            named,
            gp: (gp / 8) as int4,
        };
        // a gp_offset store that only steps the offset (a va_arg gcc folded) sits in a block
        // that carries the pointer fields without computing them; prefer the real va_start
        if ov_def && sv_def {
            return Some(m);
        }
        weak.get_or_insert(m);
    }
    weak
}

/// The constant a COPY of `vn` writes, through constant arithmetic (see
/// `vaargaapcs::fold_const`).
fn written_const(data: &Funcdata, op: OpId) -> Option<u64> {
    let o = data.obank().get(op)?;
    if o.code() != OpCode::CPUI_COPY {
        return None;
    }
    crate::vaargaapcs::fold_const(data, o.get_in(0)?, 8)
}

/// The AAPCS64 `va_list` (option `vaargaapcs`): `__stack` at L, `__gr_top` at L+8,
/// `__vr_top` at L+16, `__gr_offs` at L+24 and `__vr_offs` at L+28, either as two 4-byte
/// constants or as one 8-byte constant with `__vr_offs` in its high half. The register save
/// area runs from `__vr_top` less 128 bytes to `__gr_top`.
fn find_aapcs(data: &Funcdata) -> Option<VaStart> {
    if !crate::vaargaapcs::applies(data) {
        return None;
    }
    let writes = stack_writes(data);
    let at = |off: u64, size: int4| -> Vec<OpId> {
        writes
            .iter()
            .filter(|w| w.0 == off && w.1 == size)
            .map(|w| w.2)
            .collect()
    };
    let stack_ptr = |field: u64| -> Option<(OpId, (VarnodeId, u64, OpCode))> {
        at(field, 8).into_iter().find_map(|o| {
            let v = written(data, o)?;
            stack_address(data, v).map(|s| (o, s))
        })
    };
    for &(x, size, op) in &writes {
        let (gr, vr, offsets) = match size {
            8 => {
                let c = written_const(data, op)?;
                (
                    crate::vaargaapcs::signed(c, 4),
                    crate::vaargaapcs::signed(c >> 32, 4),
                    vec![op],
                )
            }
            4 => {
                let g = written_const(data, op)?;
                let vop = at(x.wrapping_add(4), 4)
                    .into_iter()
                    .find(|&o| written_const(data, o).is_some())?;
                let v = written_const(data, vop)?;
                (
                    crate::vaargaapcs::signed(g, 4),
                    crate::vaargaapcs::signed(v, 4),
                    vec![op, vop],
                )
            }
            _ => continue,
        };
        if !(-56..=0).contains(&gr) || gr % 8 != 0 || !(-128..=0).contains(&vr) || vr % 16 != 0 {
            continue;
        }
        let Some(list) = x.checked_sub(24) else {
            continue;
        };
        let Some((stack_op, _)) = stack_ptr(list) else {
            continue;
        };
        let Some((gr_op, (_, gr_off, _))) = stack_ptr(list + 8) else {
            continue;
        };
        let Some((vr_op, (sb, vr_off, code))) = stack_ptr(list + 16) else {
            continue;
        };
        let save_area = vr_off.wrapping_sub(128);
        let save_len = gr_off.wrapping_sub(save_area) as i64;
        if !(8..=0x100).contains(&save_len) {
            continue;
        }
        let pointers = vec![stack_op, gr_op, vr_op];
        let block = |o: OpId| data.obank().get(o).and_then(|x| x.get_parent());
        let b0 = block(op)?;
        if !offsets
            .iter()
            .chain(pointers.iter())
            .all(|&o| block(o) == Some(b0))
        {
            continue;
        }
        let named = (8 + gr / 8) as int4;
        return Some(VaStart {
            list,
            offsets,
            pointers,
            spacebase: sb,
            address_op: code,
            save_area,
            save_len: save_len as u64,
            named,
            gp: named + 1,
        });
    }
    None
}

/// The input that carries the last named argument: the prototype's parameter
/// `named - 1` when it lists that many, else (no named float argument) the
/// SysV integer argument register `gp / 8 - 1` (a 4- or 8-byte input).
#[doc(hidden)]
pub fn last_named(data: &Funcdata, named: int4, gp: int4) -> Option<VarnodeId> {
    let proto = data.get_func_proto();
    if named == 0 {
        return None;
    }
    if proto.has_store() && proto.num_params() >= named {
        let p = proto.get_param(named - 1)?;
        return data.vbank().find_input(p.get_size(), &p.get_address());
    }
    if named != gp {
        return None;
    }
    let name = ["RDI", "RSI", "RDX", "RCX", "R8", "R9"].get(usize::try_from(gp - 1).ok()?)?;
    let st = data
        .get_arch()
        .manage()
        .register_lookup()?
        .probe_register(name)?;
    let addr = Address::new(st.space.clone()?, st.offset);
    [8, 4]
        .into_iter()
        .find_map(|size| data.vbank().find_input(size, &addr))
}

fn rewrite(data: &mut Funcdata, m: &VaStart) -> unlace_base::error::UnlaceResult<()> {
    use unlace_base::error::UnlaceError;
    let block = data
        .obank()
        .get(m.offsets[0])
        .and_then(|o| o.get_parent())
        .ok_or_else(|| UnlaceError::lowlevel("vastart: stale op"))?;
    let first = data
        .bb_ops(block)
        .into_iter()
        .find(|o| m.offsets.contains(o))
        .ok_or_else(|| UnlaceError::lowlevel("vastart: no first"))?;
    let at = data
        .obank()
        .get(first)
        .map(|o| o.get_addr().clone())
        .ok_or_else(|| UnlaceError::lowlevel("vastart: stale op"))?;
    let sb_size = data.vbank().get(m.spacebase).map_or(8, |v| v.get_size());
    let ptr = data.new_op(2, at.clone());
    data.op_set_opcode_code(ptr, m.address_op);
    data.op_set_input(ptr, m.spacebase, 0)?;
    let off = data.new_constant(sb_size, m.list as uintb);
    data.op_set_input(ptr, off, 1)?;
    let ap = data.new_unique_out(sb_size, ptr)?;
    data.op_insert_before(ptr, first);
    let last = last_named(data, m.named, m.gp);
    let call = data.new_op(if last.is_some() { 3 } else { 2 }, at);
    data.op_set_opcode_code(call, OpCode::CPUI_CALLOTHER);
    let id = data.new_constant(4, crate::userop::BUILTIN_VA_START as uintb);
    data.op_set_input(call, id, 0)?;
    data.op_set_input(call, ap, 1)?;
    if let Some(last) = last {
        data.op_set_input(call, last, 2)?;
    }
    data.op_insert_after(call, ptr);
    for &op in &m.offsets {
        let size = data
            .obank()
            .get(op)
            .and_then(|o| o.get_out())
            .and_then(|v| data.vbank().get(v))
            .map_or(8, |v| v.get_size());
        data.op_uninsert(op);
        let zero = data.new_constant(size, 0);
        let iop = data.new_varnode_iop(call);
        data.op_set_all_input(op, &[zero, iop])?;
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_INDIRECT));
        if let Some(o) = data.obank_mut().get_mut(op) {
            o.set_flag(crate::op::pcodeop_flags::indirect_creation);
        }
        data.op_insert_before(op, call);
    }
    let mut values: Vec<(Address, int4, VarnodeId)> = Vec::new();
    for &op in &m.pointers {
        let Some(out) = data.obank().get(op).and_then(|o| o.get_out()) else {
            continue;
        };
        let (addr, size) = data
            .vbank()
            .get(out)
            .map(|v| (v.get_addr().clone(), v.get_size()))
            .ok_or_else(|| UnlaceError::lowlevel("vastart: stale out"))?;
        let found = values
            .iter()
            .find(|(a, s, _)| *a == addr && *s == size)
            .map(|(_, _, v)| *v);
        let value = match found {
            Some(value) => value,
            None => {
                let created = data.new_indirect_creation(call, &addr, size, false);
                let value = data
                    .obank()
                    .get(created)
                    .and_then(|o| o.get_out())
                    .ok_or_else(|| UnlaceError::lowlevel("vastart: no creation"))?;
                values.push((addr, size, value));
                value
            }
        };
        data.op_set_input(op, value, 0)?;
    }
    if let Some(stack) = data.get_arch().manage().get_stack_space().cloned() {
        let end = m.save_area.wrapping_add(m.save_len);
        let spills: Vec<VarnodeId> = data
            .vbank()
            .iter_loc()
            .filter(|&v| {
                data.vbank().get(v).is_some_and(|n| {
                    n.get_addr()
                        .get_space()
                        .is_some_and(|s| s.get_index() == stack.get_index())
                        && (m.save_area..end).contains(&n.get_offset())
                })
            })
            .collect();
        for vn in spills {
            if let Some(v) = data.vbank_mut().get_mut(vn)
                && v.is_addr_tied()
                && v.is_addr_force()
            {
                v.clear_addr_force();
            }
        }
        data.scope_local_mark_not_mapped(&stack, m.save_area, m.save_len as int4, false);
    }
    if !data.get_func_proto().is_input_locked() {
        data.get_func_proto_mut().set_dotdotdot(true);
    }
    Ok(())
}

/// Print the `va_start` prologue as one call (see the module docs).
pub struct ActionVaStart {
    base: ActionBase,
}

impl ActionVaStart {
    pub fn boxed(g: &str) -> Box<dyn Action> {
        Box::new(ActionVaStart {
            base: ActionBase::new(0, "vastart", g),
        })
    }
}

impl Action for ActionVaStart {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        grouplist.contains(self.get_group()).then(|| {
            Box::new(ActionVaStart {
                base: self.base.clone(),
            }) as Box<dyn Action>
        })
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data
            .get_arch()
            .unlace_options
            .get::<crate::vastart::VaStartRewrite>()
            .0
        {
            return 0;
        }
        let Some(m) = find(data).or_else(|| find_aapcs(data)) else {
            return 0;
        };
        if rewrite(data, &m).is_ok() {
            self.base.count += 1;
            return 1;
        }
        0
    }
}

crate::unlace_flag!(
    /// (unlace `vastart`) The x86-64 va_start prologue as va_start(ap, last).
    VaStartRewrite,
    "vastart",
    "va_start prologue as one call",
    unset: false,
    shipped: true
);
