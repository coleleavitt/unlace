//! (kuna `com`) What a COM object request hands back, from the interface id it
//! passes.
//!
//! `CoCreateInstance(&CLSID_ShellLink, 0, 1, &IID_IShellLinkW, &p)` writes an
//! `IShellLinkW *` through its last argument, and `p->lpVtbl->QueryInterface(p,
//! &IID_IPersistFile, &q)` an `IPersistFile *`, but both are declared `void **`,
//! so every later call through `p` is `(**(code **)(*p + 0x58))(p, ...)`. The
//! COM analysis (`unlace-analysis/src/analyzers/com`) finds every interface id
//! the image holds and hands the engine the interface struct each one names
//! ([`ComInterfaces`]); [`out_param_type`] answers `TypeOpCall::getInputLocal`
//! for the out-parameter of such a request whose interface-id argument folds to
//! one of them, so the object it fills is typed and its calls print as
//! `p->lpVtbl->SetPath(p, ...)`.
//!
//! The requests read are the `ole32` entry points that take an interface id
//! ([`REQUESTS`]) and two calls through an object's own table: slot 0
//! (`IUnknown::QueryInterface(This, riid, ppv)`) and slot 3 with four
//! arguments (`IClassFactory::CreateInstance(This, pUnkOuter, riid, ppv)`),
//! each only when the call passes the object it read the table from as `This`.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::dtype::Datatype;
use crate::fspec::FuncCallSpecs;
use crate::funcdata::Funcdata;

/// The imported requests: (name, slot of the interface id, slot of the
/// out-parameter), slots counted as p-code inputs (the callee is input 0).
pub const REQUESTS: &[(&str, i32, i32)] = &[
    ("CoCreateInstance", 4, 5),
    ("CoGetClassObject", 4, 5),
    ("CoGetObject", 3, 4),
    ("CoCreateInstanceFromApp", 4, 5),
    ("CoGetInterfaceAndReleaseStream", 2, 3),
    ("CoGetObjectContext", 1, 2),
    ("CoGetCallContext", 1, 2),
    ("DllGetClassObject", 2, 3),
    ("OleCreate", 2, 7),
];

/// Interface-id address to the interface struct it names (`IShellLinkW`,
/// whose only member is `lpVtbl`).
#[derive(Default, Clone)]
pub struct ComInterfaces(pub BTreeMap<u64, Rc<Datatype>>);

crate::kuna_arch_state!(ComInterfaces);

/// The image's interface ids, shared through the architecture's states; empty
/// before the analysis commits them (and always, with `com` off).
pub fn com_interfaces(states: &crate::kuna_archstate::ArchStates) -> Rc<ComInterfaces> {
    states.get_rc::<ComInterfaces>().unwrap_or_default()
}

/// `name` as the import table spells it, without a DLL qualifier, an
/// import-slot prefix or an x86 `stdcall` decoration.
pub fn plain_name(name: &str) -> &str {
    let name = name.rsplit("::").next().unwrap_or(name);
    let name = name.rsplit('!').next().unwrap_or(name);
    let name = name.strip_prefix("__imp_").unwrap_or(name);
    let name = name.strip_prefix('_').unwrap_or(name);
    match name.rfind('@') {
        Some(at) if name[at + 1..].bytes().all(|b| b.is_ascii_digit()) && at > 0 => &name[..at],
        _ => name,
    }
}

/// `TypeOpCall::getInputLocal` / `TypeOpCallind::getInputLocal` for the
/// out-parameter of a COM request: a pointer to a pointer to the interface
/// the request's interface-id argument names.
pub fn out_param_type(
    data: &Funcdata,
    op: OpId,
    fc: &FuncCallSpecs,
    slot: i32,
) -> Option<Rc<Datatype>> {
    let arch = data.get_arch();
    let known = com_interfaces(&arch.kuna_states);
    if known.0.is_empty() {
        return None;
    }
    let o = data.obank().get(op)?;
    let (riid, out) = match o.code() {
        OpCode::CPUI_CALL => {
            let name = plain_name(fc.get_name());
            let (_, riid, out) = REQUESTS
                .iter()
                .find(|(n, riid, out)| *n == name && riid != out)?;
            (*riid, *out)
        }
        OpCode::CPUI_CALLIND => {
            let ptr = arch.manage.get_default_data_space()?.get_addr_size() as u64;
            match table_slot(data, o.get_in(0)?, o.get_in(1)?)? {
                0 if o.num_input() >= 4 => (2, 3),
                s if s == 3 * ptr && o.num_input() >= 5 => (3, 4),
                _ => return None,
            }
        }
        _ => return None,
    };
    if slot != out || o.num_input() <= out {
        return None;
    }
    let iid = crate::kuna_objcrettype::constant_address(data, o.get_in(riid)?, 0)?;
    let iface = known.0.get(&iid)?;
    let types = arch.types()?;
    let space = arch.manage.get_default_data_space()?;
    let (ptr_size, word) = (space.get_addr_size() as i32, space.get_word_size());
    let one = types
        .get_type_pointer(ptr_size, Rc::clone(iface), word)
        .ok()?;
    types.get_type_pointer(ptr_size, one, word).ok()
}

/// The byte offset into an object's function table a call target is read
/// from, when the target is `*(*this + off)` and `this` is the call's first
/// argument.
fn table_slot(data: &Funcdata, target: VarnodeId, this: VarnodeId) -> Option<u64> {
    let load = def_of(data, target, OpCode::CPUI_LOAD)?;
    let (table, off) = offset_from(data, load.get_in(1)?);
    let inner = def_of(data, table, OpCode::CPUI_LOAD)?;
    let object = inner.get_in(1)?;
    (same_value(data, object, this)).then_some(off)
}

fn def_of(data: &Funcdata, vn: VarnodeId, opc: OpCode) -> Option<&crate::op::PcodeOp> {
    let d = data
        .obank()
        .get(data.vbank().get(strip(data, vn))?.get_def()?)?;
    (d.code() == opc).then_some(d)
}

/// `vn` as a base plus a constant offset.
fn offset_from(data: &Funcdata, vn: VarnodeId) -> (VarnodeId, u64) {
    let vn = strip(data, vn);
    let Some(d) = data
        .vbank()
        .get(vn)
        .and_then(|v| v.get_def())
        .and_then(|d| data.obank().get(d))
    else {
        return (vn, 0);
    };
    if matches!(d.code(), OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRSUB) {
        if let (Some(base), Some(off)) = (d.get_in(0), d.get_in(1)) {
            if let Some(c) = data.vbank().get(off).filter(|c| c.is_constant()) {
                return (strip(data, base), c.get_offset());
            }
        }
    }
    (vn, 0)
}

/// `vn` with the copies and casts in front of it removed.
fn strip(data: &Funcdata, mut vn: VarnodeId) -> VarnodeId {
    for _ in 0..4 {
        let Some(d) = data
            .vbank()
            .get(vn)
            .and_then(|v| v.get_def())
            .and_then(|d| data.obank().get(d))
        else {
            break;
        };
        if !matches!(d.code(), OpCode::CPUI_COPY | OpCode::CPUI_CAST) {
            break;
        }
        match d.get_in(0) {
            Some(src) => vn = src,
            None => break,
        }
    }
    vn
}

fn same_value(data: &Funcdata, a: VarnodeId, b: VarnodeId) -> bool {
    strip(data, a) == strip(data, b)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn import_spellings_reduce_to_the_api_name() {
        assert_eq!(plain_name("CoCreateInstance"), "CoCreateInstance");
        assert_eq!(plain_name("__imp_CoCreateInstance"), "CoCreateInstance");
        assert_eq!(plain_name("_CoCreateInstance@20"), "CoCreateInstance");
        assert_eq!(
            plain_name("ole32.dll::CoGetClassObject"),
            "CoGetClassObject"
        );
        assert_eq!(plain_name("OLE32!CoGetObject"), "CoGetObject");
        assert_eq!(plain_name("@"), "@");
    }

    #[test]
    fn every_request_names_two_distinct_slots() {
        for (name, riid, out) in REQUESTS {
            assert_ne!(riid, out, "{name}");
            assert!(*riid >= 1 && *out >= 1, "{name}");
        }
    }
}
