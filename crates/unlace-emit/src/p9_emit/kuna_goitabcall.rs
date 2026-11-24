//! (kuna `goitabcalls`) An indirect call through a method slot of a Go itab
//! prints as `Interface.Method(receiver, ...)`.
//!
//! The callee of the CALLIND is a LOAD of one slot of an itab (`PTRSUB` or
//! `INT_ADD` of the table pointer and a constant at or past the `Fun` array).
//! The table's interface comes from where the table pointer comes from
//! ([`table_interface`]): a pointer typed to a `go.itab.<interface>` record
//! (an interface formal the DWARF signature split), or the first word of an
//! interface-typed field of a named struct, read through a pointer to the
//! struct (`h->S.tab`, the `GoInterfaceFields` facet), through copies and
//! joins whose inputs all agree. The interface's record names the slot at that
//! offset. Anything else prints as before.

use std::rc::Rc;

use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::kuna_goitabcalls::{
    GoItabCalls, ITAB_FUN_OFFSET_64, ITAB_RECORD_PREFIX, itab_record_name,
};
use crate::kuna_langfacet::LangFacet;

/// How many defining ops [`table_interface`] follows back from a table value.
const MAX_DEPTH: u32 = 8;

/// How many inputs of one join [`table_interface`] looks at.
const MAX_JOIN_INPUTS: i32 = 8;

/// How many struct levels a field address may nest through.
const MAX_NESTING: u32 = 8;

/// `Interface.Method` for a CALLIND through an itab method slot, under
/// `option goitabcalls`.
pub(crate) fn interface_method(fd: &Funcdata, arch: &Architecture, id: OpId) -> Option<String> {
    if !arch.kuna_options.get::<GoItabCalls>().0 {
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
    if types.kuna_lang_facet(&name)
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
    let def = fd.obank().get(fd.vbank().get(vn)?.get_def()?)?;
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
    let def = fd.obank().get(v.get_def()?)?;
    match def.code() {
        OpCode::CPUI_COPY => table_interface(fd, arch, def.get_in(0)?, depth - 1),
        OpCode::CPUI_MULTIEQUAL => {
            let n = def.num_input();
            if n == 0 || n > MAX_JOIN_INPUTS {
                return None;
            }
            let mut found: Option<String> = None;
            for i in 0..n {
                let interface = table_interface(fd, arch, def.get_in(i)?, depth - 1)?;
                if found.as_ref().is_some_and(|held| *held != interface) {
                    return None;
                }
                found = Some(interface);
            }
            found
        }
        OpCode::CPUI_LOAD => field_table(fd, arch, def.get_in(1)?),
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
    match arch.types().kuna_lang_facet(record.get_name())? {
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
        let (base, step) = constant_offset(fd, vn)?;
        offset = offset.checked_add(step)?;
        vn = base;
    }
    None
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
        arch.types().kuna_lang_facet(record.get_name())
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
