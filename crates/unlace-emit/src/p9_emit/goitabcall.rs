//! (unlace `goitabcalls`) An indirect call through a method slot of a Go itab
//! prints as `Interface.Method(receiver, ...)`.
//!
//! The callee of the CALLIND is a LOAD of one slot of an itab (`PTRSUB` or
//! `INT_ADD` of the table pointer and a constant at or past the `Fun` array).
//! The table's interface comes from where the table pointer comes from
//! ([`table_interface`]): a pointer typed to a `go.itab.<interface>` record
//! (an interface formal the DWARF signature split), or the first word of an
//! interface-typed field of a named struct, read through a pointer to the
//! struct (`h->S.tab`, the `GoInterfaceFields` facet), or the result of a
//! type assertion (`runtime.typeAssert` with a constant `abi.TypeAssert`
//! record, `runtime.assertE2I`/`getitab` with a constant descriptor), through
//! copies and joins whose inputs all agree; a join input computed from the
//! assertion record's `Cache` word (the inline cache probe's hit path) counts
//! as agreeing with that assertion. The interface's record names the slot at that
//! offset. Anything else prints as before.

use std::rc::Rc;

use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::goitabcalls::{GoItabCalls, ITAB_FUN_OFFSET_64, ITAB_RECORD_PREFIX, itab_record_name};
use crate::langfacet::LangFacet;
use unlace_base::address::Address;

/// How many defining ops [`table_interface`] follows back from a table value.
const MAX_DEPTH: u32 = 8;

/// How many inputs of one join [`table_interface`] looks at.
const MAX_JOIN_INPUTS: i32 = 8;

/// How many struct levels a field address may nest through.
const MAX_NESTING: u32 = 8;

/// `Interface.Method` for a CALLIND through an itab method slot, under
/// `option goitabcalls`.
pub(crate) fn interface_method(fd: &Funcdata, arch: &Architecture, id: OpId) -> Option<String> {
    if !arch.unlace_options.get::<GoItabCalls>().0 {
        return None;
    }
    let op = fd.obank().get(id)?;
    if op.code() != OpCode::CPUI_CALLIND {
        return None;
    }
    let callee = fd.vbank().get(op.get_in(0)?)?;
    let load = fd.obank().get(callee.get_def()?)?;
    if load.code() != OpCode::CPUI_LOAD {
        return None;
    }
    let (table, offset) = constant_offset(fd, load.get_in(1)?)?;
    if offset < i64::from(ITAB_FUN_OFFSET_64) {
        return None;
    }
    let interface = table_interface(fd, arch, table, MAX_DEPTH)?;
    let types = arch.types();
    let name = itab_record_name(&interface);
    if types.unlace_lang_facet(&name)
        != Some(LangFacet::GoItab {
            interface: interface.clone(),
        })
    {
        return None;
    }
    let record = types.find_by_name(&name).ok()??;
    let method = (0..record.num_depend())
        .filter_map(|i| record.get_field(i))
        .find(|field| i64::from(field.offset) == offset)?;
    (method.field_type.get_metatype() == type_metatype::TYPE_PTR)
        .then(|| format!("{interface}.{}", method.name))
}

/// The base pointer and constant byte offset an address is built from: one
/// `PTRSUB` or `INT_ADD` of a constant.
fn constant_offset(fd: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, i64)> {
    let mut def = fd.obank().get(fd.vbank().get(vn)?.get_def()?)?;
    for _ in 0..4 {
        if def.code() != OpCode::CPUI_CAST {
            break;
        }
        def = fd.obank().get(fd.vbank().get(def.get_in(0)?)?.get_def()?)?;
    }
    // `PTRADD(base, #index, #size)`: an indexed pointer (a receiver typed as
    // `int *` reads its fields as `a0[6]`) at a constant element.
    if def.code() == OpCode::CPUI_PTRADD {
        let index = fd.vbank().get(def.get_in(1)?)?;
        let size = fd.vbank().get(def.get_in(2)?)?;
        if !index.is_constant() || !size.is_constant() {
            return None;
        }
        let bytes = i64::try_from(index.get_offset())
            .ok()?
            .checked_mul(i64::try_from(size.get_offset()).ok()?)?;
        return Some((def.get_in(0)?, bytes));
    }
    if !matches!(def.code(), OpCode::CPUI_PTRSUB | OpCode::CPUI_INT_ADD) {
        return None;
    }
    let offset = fd.vbank().get(def.get_in(1)?)?;
    if !offset.is_constant() {
        return None;
    }
    Some((def.get_in(0)?, i64::try_from(offset.get_offset()).ok()?))
}

/// The interface whose itab the value `vn` points at, or `None` when its
/// provenance does not say.
fn table_interface(
    fd: &Funcdata,
    arch: &Architecture,
    vn: VarnodeId,
    depth: u32,
) -> Option<String> {
    let v = fd.vbank().get(vn)?;
    if let Some(interface) = typed_table(arch, v.get_type()) {
        return Some(interface);
    }
    if depth == 0 {
        return None;
    }
    // A value method's receiver arrives in registers field by field, so when
    // its struct's first field is an interface the first input is that
    // field's table (`io.nopCloser.Read`).
    if v.is_input() {
        let record = value_receiver_type(arch, fd.get_name())?;
        return is_first_input(fd, arch, vn)
            .then(|| interface_field_at(arch, &record, 0))
            .flatten();
    }
    let def = fd.obank().get(v.get_def()?)?;
    match def.code() {
        // A copy, and the width changes and call guards a register variable shared
        // with a narrower value (the assertion's 4-byte type hash) puts between
        // the table and its use, carry the same pointer.
        OpCode::CPUI_COPY
        | OpCode::CPUI_CAST
        | OpCode::CPUI_INT_ZEXT
        | OpCode::CPUI_SUBPIECE
        | OpCode::CPUI_INDIRECT => table_interface(fd, arch, def.get_in(0)?, depth - 1),
        OpCode::CPUI_MULTIEQUAL => {
            let n = def.num_input();
            if n == 0 || n > MAX_JOIN_INPUTS {
                return None;
            }
            let mut found: Option<String> = None;
            let mut records: Vec<u64> = Vec::new();
            let mut unresolved: Vec<VarnodeId> = Vec::new();
            for i in 0..n {
                let input = def.get_in(i)?;
                // A nil table (the assertion's failure path, a nil interface)
                // agrees with any interface.
                if constant_value(fd, input) == Some(0) {
                    continue;
                }
                if let Some((interface, record)) = assert_result(fd, arch, input) {
                    records.extend(record);
                    if found.as_ref().is_some_and(|held| *held != interface) {
                        return None;
                    }
                    found = Some(interface);
                    continue;
                }
                match table_interface(fd, arch, input, depth - 1) {
                    Some(interface) => {
                        if found.as_ref().is_some_and(|held| *held != interface) {
                            return None;
                        }
                        found = Some(interface);
                    }
                    None => unresolved.push(input),
                }
            }
            let reads_cache = |input: VarnodeId| {
                records
                    .iter()
                    .any(|&record| reads_record(fd, arch, input, record, CACHE_DEPTH))
            };
            (unresolved.iter().all(|&input| reads_cache(input)))
                .then_some(found)
                .flatten()
        }
        OpCode::CPUI_LOAD => field_table(fd, arch, def.get_in(1)?),
        OpCode::CPUI_CALL => {
            asserted_interface(fd, arch, v.get_def()?).map(|(interface, _)| interface)
        }
        _ => None,
    }
}

/// The interface of a pointer typed to an itab record.
fn typed_table(arch: &Architecture, ty: &Rc<Datatype>) -> Option<String> {
    if ty.get_metatype() != type_metatype::TYPE_PTR {
        return None;
    }
    let record = ty.get_ptr_to()?;
    if record.get_metatype() != type_metatype::TYPE_STRUCT
        || !record.get_name().starts_with(ITAB_RECORD_PREFIX)
    {
        return None;
    }
    match arch.types().unlace_lang_facet(record.get_name())? {
        LangFacet::GoItab { interface } => Some(interface),
        _ => None,
    }
}

/// The interface of the table word a LOAD at `address` reads, when the
/// address is the first word of an interface-typed field: the address is a
/// chain of constant offsets from a pointer to a struct, tried at each link.
fn field_table(fd: &Funcdata, arch: &Architecture, address: VarnodeId) -> Option<String> {
    let mut vn = address;
    let mut offset: i64 = 0;
    for _ in 0..MAX_NESTING {
        let ty = fd.vbank().get(vn)?.get_type();
        if ty.get_metatype() == type_metatype::TYPE_PTR {
            if let Some(found) = ty
                .get_ptr_to()
                .and_then(|record| struct_field_interface(arch, &record, offset, MAX_NESTING))
            {
                return Some(found);
            }
        }
        let Some((base, step)) = constant_offset(fd, vn) else {
            return receiver_field_interface(fd, arch, vn, offset);
        };
        offset = offset.checked_add(step)?;
        vn = base;
    }
    None
}

/// The interface of the interface-typed field at `offset` of a pointer
/// method's receiver, when `vn` is the receiver as the function received it:
/// the function's own name `pkg.(*T).M` names the receiver's struct `pkg.T`
/// (a stripped binary keeps it in its pclntab), whose `GoInterfaceFields`
/// facet lists its interface fields, and the Go register ABI passes the
/// receiver first (amd64 `RAX`), so the input in that register is it. Only
/// the struct's own fields are named (no nested layout is assumed).
fn receiver_field_interface(
    fd: &Funcdata,
    arch: &Architecture,
    vn: VarnodeId,
    offset: i64,
) -> Option<String> {
    if !is_first_input(fd, arch, vn) {
        return None;
    }
    let record = pointer_receiver_type(fd.get_name())?;
    interface_field_at(arch, &record, offset)
}

/// The interface of the field at byte `offset` of named struct `record`, from
/// its `GoInterfaceFields` facet.
fn interface_field_at(arch: &Architecture, record: &str, offset: i64) -> Option<String> {
    match arch.types().unlace_lang_facet(record)? {
        LangFacet::GoInterfaceFields { fields } => fields
            .into_iter()
            .find(|(at, _)| i64::from(*at) == offset)
            .map(|(_, interface)| interface),
        _ => None,
    }
}

/// How many Varnodes [`input_root`] visits.
const MAX_ROOT_NODES: usize = 32;

/// `true` when `vn` is, on every path, the function's first integer input as
/// it was received (amd64 `RAX`, the Go register ABI's receiver and first
/// argument): its definitions back to the input are copies, casts, call
/// guards and joins, a loop's join included.
fn is_first_input(fd: &Funcdata, arch: &Architecture, vn: VarnodeId) -> bool {
    if !arch.archid.starts_with("x86:LE:64:") {
        return false;
    }
    let Ok(rax) = arch.get_register_varnode(b"RAX") else {
        return false;
    };
    let mut roots: Vec<VarnodeId> = Vec::new();
    let mut seen: Vec<VarnodeId> = Vec::new();
    if !input_root(fd, vn, &mut seen, &mut roots) {
        return false;
    }
    let [root] = roots.as_slice() else {
        return false;
    };
    fd.vbank().get(*root).is_some_and(|v| {
        v.is_input()
            && v.get_offset() == rax.offset
            && Some(v.get_space().get_index()) == rax.space.as_ref().map(|s| s.get_index())
    })
}

/// Collect into `roots` the inputs `vn` comes from through copies, casts,
/// call guards and joins; `false` when another definition (or the visit
/// bound) is reached.
fn input_root(
    fd: &Funcdata,
    vn: VarnodeId,
    seen: &mut Vec<VarnodeId>,
    roots: &mut Vec<VarnodeId>,
) -> bool {
    if seen.contains(&vn) {
        return true;
    }
    if seen.len() >= MAX_ROOT_NODES {
        return false;
    }
    seen.push(vn);
    let Some(v) = fd.vbank().get(vn) else {
        return false;
    };
    if v.is_input() {
        if !roots.contains(&vn) {
            roots.push(vn);
        }
        return true;
    }
    let Some(def) = v.get_def().and_then(|id| fd.obank().get(id)) else {
        return false;
    };
    match def.code() {
        OpCode::CPUI_COPY | OpCode::CPUI_CAST | OpCode::CPUI_INDIRECT => def
            .get_in(0)
            .is_some_and(|input| input_root(fd, input, seen, roots)),
        OpCode::CPUI_MULTIEQUAL => {
            (0..def.num_input().min(MAX_JOIN_INPUTS)).all(|i| {
                def.get_in(i)
                    .is_some_and(|input| input_root(fd, input, seen, roots))
            }) && def.num_input() <= MAX_JOIN_INPUTS
        }
        _ => false,
    }
}

/// `pkg.T` for a value method `pkg.T.M` whose receiver struct carries a
/// `GoInterfaceFields` facet (a function `pkg.F` names no such struct).
fn value_receiver_type(arch: &Architecture, name: &str) -> Option<String> {
    if name.contains(['(', '[', ' ']) {
        return None;
    }
    let record = &name[..name.rfind('.')?];
    if !record.contains('.') {
        return None;
    }
    matches!(
        arch.types().unlace_lang_facet(record)?,
        LangFacet::GoInterfaceFields { .. }
    )
    .then(|| record.to_string())
}

/// `pkg.T` for a pointer method named `pkg.(*T).M`; `None` for any other
/// name (a function, a value method, a generic receiver).
fn pointer_receiver_type(name: &str) -> Option<String> {
    let open = name.find(".(*")?;
    let rest = &name[open + 3..];
    let close = rest.find(").")?;
    let ty = &rest[..close];
    if ty.is_empty() || ty.contains(['[', '(', '*', ' ']) || rest[close + 2..].is_empty() {
        return None;
    }
    Some(format!("{}.{ty}", &name[..open]))
}

/// The interface of the interface-typed field whose first word sits at
/// `offset` in `record`, looking into nested struct fields.
fn struct_field_interface(
    arch: &Architecture,
    record: &Rc<Datatype>,
    offset: i64,
    depth: u32,
) -> Option<String> {
    if record.get_metatype() != type_metatype::TYPE_STRUCT || depth == 0 {
        return None;
    }
    if let Some(LangFacet::GoInterfaceFields { fields }) =
        arch.types().unlace_lang_facet(record.get_name())
    {
        if let Some((_, interface)) = fields.iter().find(|(at, _)| i64::from(*at) == offset) {
            return Some(interface.clone());
        }
    }
    let field = (0..record.num_depend())
        .filter_map(|i| record.get_field(i))
        .find(|field| {
            let start = i64::from(field.offset);
            start <= offset && offset < start + i64::from(field.field_type.get_size())
        })?;
    struct_field_interface(
        arch,
        &field.field_type,
        offset - i64::from(field.offset),
        depth - 1,
    )
}

/// How many defining ops [`reads_record`] searches back from a join input.
const CACHE_DEPTH: u32 = 8;

/// The runtime entries that return an itab for an interface their arguments
/// name: `(name, slot of the descriptor argument, whether that argument is an
/// `abi.TypeAssert` record whose `Inter` word is the descriptor)`.
const ASSERT_ENTRIES: [(&str, i32, bool); 3] = [
    ("runtime.typeAssert", 1, true),
    ("runtime.assertE2I", 1, false),
    ("runtime.getitab", 1, false),
];

/// [`asserted_interface`] for the value `vn` when a CALL, or a COPY of one,
/// defines it.
fn assert_result(
    fd: &Funcdata,
    arch: &Architecture,
    vn: VarnodeId,
) -> Option<(String, Option<u64>)> {
    let mut v = fd.vbank().get(vn)?;
    for _ in 0..4 {
        let id = v.get_def()?;
        let def = fd.obank().get(id)?;
        match def.code() {
            OpCode::CPUI_CALL => return asserted_interface(fd, arch, id),
            OpCode::CPUI_COPY
            | OpCode::CPUI_CAST
            | OpCode::CPUI_INT_ZEXT
            | OpCode::CPUI_SUBPIECE
            | OpCode::CPUI_INDIRECT => v = fd.vbank().get(def.get_in(0)?)?,
            _ => return None,
        }
    }
    None
}

/// The interface a type assertion's result is an itab of: the CALL is to one
/// of [`ASSERT_ENTRIES`] and its descriptor argument is a constant address
/// (directly, or the `Inter` word of a constant `abi.TypeAssert` record read
/// from the image) at the start of a `type:<interface>` symbol. Also returns
/// the `abi.TypeAssert` record's address, whose `Cache` word the inline
/// cache probe reads.
fn asserted_interface(
    fd: &Funcdata,
    arch: &Architecture,
    id: OpId,
) -> Option<(String, Option<u64>)> {
    let op = fd.obank().get(id)?;
    if op.code() != OpCode::CPUI_CALL {
        return None;
    }
    let name = fd.get_call_specs(fd.get_call_specs_index(id)?).get_name();
    let &(_, slot, record) = ASSERT_ENTRIES.iter().find(|(entry, _, _)| *entry == name)?;
    let argument = constant_value(fd, op.get_in(slot)?)?;
    let space = arch.manage().get_default_data_space()?.clone();
    let descriptor = if record {
        let mut word = [0u8; 8];
        arch.translate()
            .loader_rc()
            .borrow_mut()
            .load_fill(
                &mut word,
                &Address::new(Rc::clone(&space), argument.checked_add(8)?),
            )
            .ok()?;
        u64::from_le_bytes(word)
    } else {
        argument
    };
    let (symbol, offset, _) = fd.get_arch().name_for_global_varnode(
        &Address::new(space, descriptor),
        1,
        &Address::default(),
    )?;
    if offset != 0 {
        return None;
    }
    let interface = symbol.strip_prefix("type:")?.to_string();
    Some((interface, record.then_some(argument)))
}

/// The constant a Varnode holds, directly or one COPY away.
fn constant_value(fd: &Funcdata, vn: VarnodeId) -> Option<u64> {
    let mut v = fd.vbank().get(vn)?;
    for _ in 0..4 {
        if v.is_constant() {
            return Some(v.get_offset());
        }
        let def = fd.obank().get(v.get_def()?)?;
        match def.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => v = fd.vbank().get(def.get_in(0)?)?,
            // A global's address: `PTRSUB(#0, #addr)`.
            OpCode::CPUI_PTRSUB => {
                let base = fd.vbank().get(def.get_in(0)?)?;
                let offset = fd.vbank().get(def.get_in(1)?)?;
                return (base.is_constant() && base.get_offset() == 0 && offset.is_constant())
                    .then(|| offset.get_offset());
            }
            _ => return None,
        }
    }
    None
}

/// `true` when the value `vn` is computed from a read of the word at
/// `record` (the `abi.TypeAssert` record's `Cache` pointer): a direct read of
/// that global or a LOAD from that constant address, within `depth` defining
/// ops. The type-assertion cache probe's hit path returns such a value, an
/// itab the cache holds for this assertion site.
fn reads_record(
    fd: &Funcdata,
    arch: &Architecture,
    vn: VarnodeId,
    record: u64,
    depth: u32,
) -> bool {
    let Some(v) = fd.vbank().get(vn) else {
        return false;
    };
    let data = arch
        .manage()
        .get_default_data_space()
        .map(|s| s.get_index());
    if !v.is_constant() && v.get_offset() == record && Some(v.get_space().get_index()) == data {
        return true;
    }
    if depth == 0 {
        return false;
    }
    let Some(def) = v.get_def().and_then(|id| fd.obank().get(id)) else {
        return false;
    };
    if def.code() == OpCode::CPUI_LOAD
        && def
            .get_in(1)
            .and_then(|address| constant_value(fd, address))
            == Some(record)
    {
        return true;
    }
    if !matches!(
        def.code(),
        OpCode::CPUI_LOAD
            | OpCode::CPUI_COPY
            | OpCode::CPUI_CAST
            | OpCode::CPUI_INT_ADD
            | OpCode::CPUI_PTRADD
            | OpCode::CPUI_PTRSUB
            | OpCode::CPUI_INT_MULT
            | OpCode::CPUI_INT_LEFT
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_ZEXT
            | OpCode::CPUI_MULTIEQUAL
    ) {
        return false;
    }
    (0..def.num_input().min(MAX_JOIN_INPUTS))
        .filter_map(|i| def.get_in(i))
        .any(|input| reads_record(fd, arch, input, record, depth - 1))
}

#[cfg(test)]
mod tests;
