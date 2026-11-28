//! Switch label forms and declared-variable types.

use super::*;

/// How the case labels of a re-rolled lowered switch print: their signedness,
/// and the cast its selector needs for them to name the values it routes.
///
/// (unlace `loweredswitchexact`) Over a one- or two-byte selector a label with the
/// sign bit set names different values signed and unsigned once C promotes the
/// selector (`case -0x7f:` never matches an `unsigned char`). The install records
/// a signedness from the compare tree before any type is inferred, so a selector
/// variable declared as an integer of the switch size gives the labels its own
/// signedness, and any other selector is cast to the recorded one. `None` leaves
/// the recorded signedness and no cast.
pub(super) fn lowered_switch_label_form(
    fd: &Funcdata,
    arch: &Architecture,
    op: OpId,
    signed_text_byte: bool,
) -> Option<(bool, Option<std::rc::Rc<crate::dtype::Datatype>>)> {
    use crate::dtype::type_metatype::{TYPE_INT, TYPE_UINT};
    let jt = (0..fd.num_jump_tables())
        .map(|i| fd.get_jump_table(i))
        .find(|jt| jt.get_indirect_op() == Some(op))?;
    jt.unlace_lowered_var()?;
    let sz = fd.vbank().get(fd.obank().get(op)?.get_in(0)?)?.get_size();
    if sz != 1 && sz != 2 {
        return None;
    }
    let sign_bit: uintb = 1 << (8 * sz - 1);
    if !(0..jt.num_entries()).any(|i| jt.get_label_by_index(i) & sign_bit != 0) {
        return None;
    }
    if let Some(ct) = switch_variable_type(fd, arch, op)
        && ct.get_size() == sz && matches!(ct.get_metatype(), TYPE_INT | TYPE_UINT) {
            return Some((
                printed_integer_signedness(&ct, signed_text_byte) == Some(true),
                None,
            ));
        }
    let signed = jt.unlace_has_signed_labels();
    let cast = arch
        .types()
        .get_base_no_char(sz, if signed { TYPE_INT } else { TYPE_UINT })
        .ok();
    Some((signed, cast))
}

/// The member Varnode whose data-type `local_decl_type_and_comment` writes as a
/// local high's declaration: the `unlace_declhightype` type representative when
/// the high has no Symbol of its own, else the declaration (storage)
/// representative.
#[doc(hidden)]
pub fn decl_type_representative(
    fd: &Funcdata,
    _arch: &Architecture,
    high: crate::context::HighVariableId,
) -> Option<crate::context::VarnodeId> {
    let rep = decl_rep_varnode(fd, high)?;
    fd.vbank().get(rep)?;
    let type_rep = crate::declhightype::type_representative(fd, high)
        .filter(|_| crate::declhightype::declares_from_high(fd, high));
    Some(
        type_rep
            .filter(|vn| fd.vbank().get(*vn).is_some())
            .unwrap_or(rep),
    )
}

/// The declared type of the variable a `BRANCHIND` reads: a parameter's prototype
/// type, or a local's declaration type. `None` for an expression.
pub(super) fn switch_variable_type(
    fd: &Funcdata,
    _arch: &Architecture,
    op: OpId,
) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
    let vid = fd.obank().get(op)?.get_in(0)?;
    declared_variable_type(fd, vid)
}

/// Native labels follow the selector's declared type, or its expression type.
pub(super) fn native_switch_label_signedness(
    fd: &Funcdata,
    arch: &Architecture,
    op: OpId,
    signed_text_byte: bool,
) -> Option<bool> {
    let vn = fd.vbank().get(fd.obank().get(op)?.get_in(0)?)?;
    let ct = switch_variable_type(fd, arch, op)
        .filter(|ct| ct.get_size() == vn.get_size())
        .unwrap_or_else(|| vn.get_type_read_facing(op).clone());
    printed_integer_signedness(&ct, signed_text_byte)
}

/// Whether the output language spells the integer type `ct` signed; `None` for
/// a non-integer. A text byte is signed exactly when `signed_text_byte` says so
/// (C's `char`, Rust's `u8`).
pub(super) fn printed_integer_signedness(
    ct: &crate::dtype::Datatype,
    signed_text_byte: bool,
) -> Option<bool> {
    use crate::dtype::type_metatype::{TYPE_ENUM_INT, TYPE_ENUM_UINT, TYPE_INT, TYPE_UINT};
    match ct.get_metatype() {
        TYPE_INT if ct.is_char_print() && ct.is_core_type() => Some(signed_text_byte),
        TYPE_INT | TYPE_ENUM_INT => Some(true),
        TYPE_UINT | TYPE_ENUM_UINT => Some(false),
        _ => None,
    }
}

/// A locked scalar local is declared at its Symbol's type even when a merged
/// storage representative retained a weaker type. Member and parameter views
/// have their own declaration rules; only a whole, same-width local qualifies.
/// A high that coalescing left without its Symbol binding qualifies only when
/// a member is type-locked to the carried type; input, global and reference
/// views never do.
pub(super) fn locked_scalar_local_type(
    fd: &Funcdata,
    high: crate::context::HighVariableId,
) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
    use crate::dtype::type_metatype;
    let h = fd.high_bank().get(high)?;
    if h.unlace_symbol_offset() > 0 {
        return None;
    }
    let ty = if let Some(symbol) = h.unlace_link_symbol() {
        let scope = fd.get_scope_local()?;
        let record = scope.database().symbol(symbol);
        if record.scope != scope.scope_id()
            || !record.is_type_locked()
            || scope.symbol_category(symbol) == crate::database::symbol_category::FUNCTION_PARAMETER
        {
            return None;
        }
        std::rc::Rc::clone(record.dtype.as_ref()?)
    } else {
        if h.unlace_global() || h.unlace_ref_symbol().is_some() {
            return None;
        }
        let ty = h.unlace_symbol_type()?;
        let mut locked = false;
        for index in 0..h.num_instances() {
            let member = fd.vbank().get(h.get_instance(index))?;
            if member.is_input() || member.is_persist() {
                return None;
            }
            locked |= member.is_type_lock() && std::rc::Rc::ptr_eq(member.get_type(), ty);
        }
        if !locked {
            return None;
        }
        std::rc::Rc::clone(ty)
    };
    if !matches!(
        ty.get_metatype(),
        type_metatype::TYPE_BOOL
            | type_metatype::TYPE_INT
            | type_metatype::TYPE_UINT
            | type_metatype::TYPE_FLOAT
            | type_metatype::TYPE_PTR
    ) {
        return None;
    }
    let representative = fd.vbank().get(decl_rep_varnode(fd, high)?)?;
    (representative.get_size() == ty.get_size()).then_some(ty)
}

/// The type the printed C declares the variable `vid` belongs to: a parameter's
/// prototype type, or a local's declaration type. `None` for an expression.
#[doc(hidden)]
pub fn declared_variable_type(
    fd: &Funcdata,
    vid: crate::context::VarnodeId,
) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
    let vn = fd.vbank().get(vid)?;
    if vn.is_implied() {
        return None;
    }
    let hid = vn.get_high()?;
    let h = fd.high_bank().get(hid)?;
    let proto = fd.get_func_proto();
    for i in 0..h.num_instances() {
        let m = match fd.vbank().get(h.get_instance(i)) {
            Some(m) if m.is_input() => m,
            _ => continue,
        };
        for p in 0..proto.num_params() {
            if let Some(param) = proto.get_param(p)
                && param.get_address() == *m.get_addr() && param.get_size() == m.get_size() {
                    return param.get_type().cloned();
                }
        }
    }
    if let Some(locked) = locked_scalar_local_type(fd, hid) {
        return Some(locked);
    }
    let type_rep = crate::declhightype::type_representative(fd, hid)
        .filter(|_| crate::declhightype::declares_from_high(fd, hid));
    let rep = type_rep.or_else(|| decl_rep_varnode(fd, hid))?;
    Some(fd.vbank().get(rep)?.get_type().clone())
}

/// Whether `vn` is an index the binary scaled, widened or masked (a multiply or
/// left shift by a constant, an extension, an AND with a mask below 0x10000, or
/// a sum of those), so it cannot be the base pointer of an addition whose other
/// operand is a constant address.
pub(super) fn scaled_index(fd: &Funcdata, vn: VarnodeId, depth: u32) -> bool {
    let Some(def) = fd
        .vbank()
        .get(vn)
        .and_then(|v| v.get_def())
        .and_then(|d| fd.obank().get(d))
    else {
        return false;
    };
    let constant = |slot: i32| {
        def.get_in(slot)
            .and_then(|i| fd.vbank().get(i))
            .is_some_and(|v| v.is_constant())
    };
    match def.code() {
        OpCode::CPUI_INT_MULT => constant(0) || constant(1),
        OpCode::CPUI_INT_LEFT => constant(1),
        OpCode::CPUI_INT_SEXT | OpCode::CPUI_INT_ZEXT => true,
        OpCode::CPUI_INT_AND => (0..2).any(|slot| {
            def.get_in(slot)
                .and_then(|i| fd.vbank().get(i))
                .is_some_and(|v| v.is_constant() && v.get_offset() <= 0xffff)
        }),
        OpCode::CPUI_CAST | OpCode::CPUI_COPY if depth > 0 => def.get_in(0).is_some_and(|input| {
            fd.vn_type_def_facing(input).get_metatype() != crate::dtype::type_metatype::TYPE_PTR
                && scaled_index(fd, input, depth - 1)
        }),
        OpCode::CPUI_INT_ADD if depth > 0 => {
            (0..2).all(|slot| {
                constant(slot)
                    || def
                        .get_in(slot)
                        .is_some_and(|input| scaled_index(fd, input, depth - 1))
            }) && !(constant(0) && constant(1))
        }
        _ => false,
    }
}

/// (unlace `neonintrin`) The ACLE spelling of the AArch64 NEON user op `op` named
/// `name`, and the operands it prints (the element-size immediate dropped).
pub(super) fn neon_spelling(
    fd: &Funcdata,
    arch: &Architecture,
    op: OpId,
    name: &[u8],
) -> Option<(String, Vec<VarnodeId>)> {
    if !arch
        .unlace_options
        .get::<crate::neonintrin::NeonIntrin>()
        .on
        || !arch.archid.starts_with("AARCH64:")
    {
        return None;
    }
    let name = std::str::from_utf8(name).ok()?;
    let o = fd.obank().get(op)?;
    let inputs: Vec<VarnodeId> = (1..o.num_input()).filter_map(|i| o.get_in(i)).collect();
    let sizes: Vec<i32> = inputs
        .iter()
        .map(|&v| fd.vbank().get(v).map_or(0, |v| v.get_size()))
        .collect();
    let consts: Vec<Option<u64>> = inputs.iter().map(|&v| neon_constant(fd, v)).collect();
    let out = o
        .get_out()
        .and_then(|v| fd.vbank().get(v))
        .map_or(0, |v| v.get_size());
    let (intr, order, _) = crate::neonintrin::userop_name(name, &sizes, &consts, out)?;
    let args = order
        .iter()
        .map(|&i| inputs.get(i).copied())
        .collect::<Option<Vec<_>>>()?;
    Some((intr, args))
}

/// The value of `vn` when it is a constant or a zero-extension or copy of one.
pub(super) fn neon_constant(fd: &Funcdata, vn: VarnodeId) -> Option<u64> {
    let v = fd.vbank().get(vn)?;
    if v.is_constant() {
        return Some(v.get_offset());
    }
    let def = fd.obank().get(v.get_def().filter(|_| v.is_written())?)?;
    if !matches!(def.code(), OpCode::CPUI_INT_ZEXT | OpCode::CPUI_COPY) {
        return None;
    }
    let src = fd.vbank().get(def.get_in(0)?)?;
    src.is_constant().then(|| src.get_offset())
}

/// (unlace `syscallnames`) The name of the ARM or AArch64 system call `op` makes,
/// and the arguments it prints, when `syscallregs` gave it a constant number.
pub(super) fn syscall_spelling(
    fd: &Funcdata,
    arch: &Architecture,
    op: OpId,
    name: &[u8],
) -> Option<(String, Vec<VarnodeId>)> {
    if !arch
        .unlace_options
        .get::<crate::syscallnames::SyscallNames>()
        .0
        || !matches!(name, b"CallSupervisor" | b"software_interrupt")
    {
        return None;
    }
    let o = fd.obank().get(op)?;
    if o.num_input() < 3 {
        return None;
    }
    let imm = fd
        .vbank()
        .get(o.get_in(1)?)
        .filter(|v| v.is_constant())?
        .get_offset();
    let number = o.get_in(2)?;
    let value = neon_constant(fd, number)?;
    let size = fd.vbank().get(number)?.get_size();
    let (call, count) =
        crate::syscallnames::name_for(std::str::from_utf8(name).ok()?, imm, value, size)?;
    let mut args: Vec<VarnodeId> = (3..o.num_input()).filter_map(|i| o.get_in(i)).collect();
    if let Some(n) = count {
        args.truncate(n as usize);
    }
    Some((call, args))
}
