//! (unlace `com`) What a COM object request hands back, from the interface id it
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
//!
//! `CoCreateInstanceEx` and the other requests that fill a `MULTI_QI` array
//! ([`MULTI_QI_REQUESTS`]) take one interface id per element, written into
//! the element's `pIID` before the call: the array's argument is typed a
//! pointer to a record of that many `MULTI_QI_<Interface>` elements, each
//! `pItf` the interface its `pIID` names, read from the stack writes at the
//! element's offset.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, TypeFactory, TypeField, type_metatype};
use crate::fspec::FuncCallSpecs;
use crate::funcdata::Funcdata;

/// The imported requests: (name, slot of the interface id, slot of the
/// out-parameter), slots counted as p-code inputs (the callee is input 0).
pub const REQUESTS: &[(&str, i32, i32)] = &[
    ("CoCreateInstance", 4, 5),
    ("CoGetClassObject", 4, 5),
    ("CoGetObject", 3, 4),
    ("CoGetInterfaceAndReleaseStream", 2, 3),
    ("CoGetObjectContext", 1, 2),
    ("CoGetCallContext", 1, 2),
    ("DllGetClassObject", 2, 3),
    ("OleCreate", 2, 7),
];

/// The requests that fill a `MULTI_QI` array: (name, slot of the element
/// count, slot of the array), slots counted as in [`REQUESTS`].
pub const MULTI_QI_REQUESTS: &[(&str, i32, i32)] = &[
    ("CoCreateInstanceEx", 5, 6),
    ("CoCreateInstanceFromApp", 5, 6),
    ("CoGetInstanceFromIStorage", 6, 7),
    ("CoGetInstanceFromFile", 7, 8),
];

/// The most `MULTI_QI` elements one request is typed for.
const MAX_QI: u64 = 8;

/// Interface-id address to the interface struct it names (`IShellLinkW`,
/// whose only member is `lpVtbl`).
#[derive(Default, Clone)]
pub struct ComInterfaces(pub BTreeMap<u64, Rc<Datatype>>);

crate::unlace_arch_state!(ComInterfaces);

/// The image's interface ids, shared through the architecture's states; empty
/// before the analysis commits them (and always, with `com` off).
pub fn com_interfaces(states: &crate::archstate::ArchStates) -> Rc<ComInterfaces> {
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
    let known = com_interfaces(&arch.unlace_states);
    if known.0.is_empty() {
        return None;
    }
    let o = data.obank().get(op)?;
    if !matches!(o.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
        return None;
    }
    let name = plain_name(fc.get_name());
    if let Some((_, count, array)) = MULTI_QI_REQUESTS.iter().find(|(n, ..)| *n == name) {
        if slot != *array || o.num_input() <= *array {
            return None;
        }
        return multi_qi_type(data, o, *count, *array, &known);
    }
    let (riid, out) = match REQUESTS
        .iter()
        .find(|(n, riid, out)| *n == name && riid != out)
    {
        Some((_, riid, out)) => (*riid, *out),
        None if o.code() == OpCode::CPUI_CALLIND => {
            let ptr = arch.manage.get_default_data_space()?.get_addr_size() as u64;
            match table_slot(data, o.get_in(0)?, o.get_in(1)?)? {
                0 if o.num_input() >= 4 => (2, 3),
                s if s == 3 * ptr && o.num_input() >= 5 => (3, 4),
                _ => return None,
            }
        }
        None => return None,
    };
    if slot != out || o.num_input() <= out {
        return None;
    }
    let iid = crate::objcrettype::constant_address(data, o.get_in(riid)?, 0)?;
    let iface = known.0.get(&iid)?;
    let types = arch.types()?;
    let space = arch.manage.get_default_data_space()?;
    let (ptr_size, word) = (space.get_addr_size() as i32, space.get_word_size());
    let one = types
        .get_type_pointer(ptr_size, Rc::clone(iface), word)
        .ok()?;
    types.get_type_pointer(ptr_size, one, word).ok()
}

/// The type of the `MULTI_QI` array a request fills: a pointer to one
/// `MULTI_QI_<Interface>` element, or to a record of `count` of them, each
/// `pItf` typed by the id its `pIID` is set to; `None` when the count is not
/// a literal of 1 to [`MAX_QI`], the array is not on the stack, or no element's
/// id is a known interface id.
fn multi_qi_type(
    data: &Funcdata,
    o: &crate::op::PcodeOp,
    count: i32,
    array: i32,
    known: &ComInterfaces,
) -> Option<Rc<Datatype>> {
    let n = crate::objcrettype::constant_address(data, o.get_in(count)?, 0)?;
    if n == 0 || n > MAX_QI {
        return None;
    }
    let arch = data.get_arch();
    let types = arch.types()?;
    let space = arch.manage.get_default_data_space()?;
    let (ptr, word) = (space.get_addr_size() as i32, space.get_word_size());
    let base = stack_offset(data, o.get_in(array)?)?;
    let ids = element_ids(data, base, n, i64::from(3 * ptr), ptr);
    let ifaces: Vec<Option<&Rc<Datatype>>> = ids
        .iter()
        .map(|id| id.and_then(|a| known.0.get(&a)))
        .collect();
    if ifaces.iter().all(Option::is_none) {
        return None;
    }
    let elements = ifaces
        .iter()
        .map(|iface| multi_qi_record(types, *iface, ptr, word))
        .collect::<Option<Vec<_>>>()?;
    let whole = if elements.len() == 1 {
        Rc::clone(&elements[0])
    } else {
        multi_qi_array(types, &ifaces, &elements, ptr)?
    };
    types.get_type_pointer(ptr, whole, word).ok()
}

/// `MULTI_QI_<Interface>` (`MULTI_QI` without an interface): `pIID`, `pItf`
/// a pointer to the interface, `hr`. A record of the name already complete is
/// used when its size is the element's.
fn multi_qi_record(
    types: &dyn TypeFactory,
    iface: Option<&Rc<Datatype>>,
    ptr: i32,
    word: u32,
) -> Option<Rc<Datatype>> {
    let name = match iface {
        Some(i) => format!("MULTI_QI_{}", i.get_name()),
        None => "MULTI_QI".to_string(),
    };
    let size = 3 * ptr;
    let shell = types.unlace_declare_record(&name, false).ok()?;
    if shell.get_metatype() != type_metatype::TYPE_STRUCT {
        return None;
    }
    if !shell.is_incomplete() {
        return (shell.get_size() == size).then_some(shell);
    }
    let void_ptr = types
        .get_type_pointer(ptr, types.get_type_void().ok()?, word)
        .ok()?;
    let iid = match types.find_by_name("GUID").ok().flatten() {
        Some(g) if g.get_size() == 16 => types.get_type_pointer(ptr, g, word).ok()?,
        _ => Rc::clone(&void_ptr),
    };
    let itf = match iface {
        Some(i) => types.get_type_pointer(ptr, Rc::clone(i), word).ok()?,
        None => void_ptr,
    };
    let int = types.get_base(4, type_metatype::TYPE_INT).ok()?;
    let hr = types.get_typedef(&int, "HRESULT", 0, 0).unwrap_or(int);
    let fields = vec![
        TypeField::new(0, 0, "pIID", iid),
        TypeField::new(1, ptr, "pItf", itf),
        TypeField::new(2, 2 * ptr, "hr", hr),
    ];
    types
        .set_fields_struct_raw(&shell, fields, Vec::new(), size, ptr, 0)
        .ok()
}

/// A record of several `MULTI_QI` elements, each field named after its
/// interface (`qi<N>` for an element without one, or a repeat).
fn multi_qi_array(
    types: &dyn TypeFactory,
    ifaces: &[Option<&Rc<Datatype>>],
    elements: &[Rc<Datatype>],
    ptr: i32,
) -> Option<Rc<Datatype>> {
    let label = |i: usize| ifaces[i].map_or("IUnknown", |t| t.get_name());
    let name = format!(
        "MULTI_QI_{}",
        (0..ifaces.len()).map(label).collect::<Vec<_>>().join("_")
    );
    let stride = 3 * ptr;
    let size = stride.checked_mul(i32::try_from(elements.len()).ok()?)?;
    let shell = types.unlace_declare_record(&name, false).ok()?;
    if shell.get_metatype() != type_metatype::TYPE_STRUCT {
        return None;
    }
    if !shell.is_incomplete() {
        return (shell.get_size() == size).then_some(shell);
    }
    let mut used = std::collections::BTreeSet::new();
    let fields = elements
        .iter()
        .enumerate()
        .map(|(i, e)| {
            let field = match ifaces[i] {
                Some(t) if used.insert(t.get_name().to_string()) => t.get_name().to_string(),
                _ => format!("qi{i}"),
            };
            TypeField::new(i as i32, i as i32 * stride, field, Rc::clone(e))
        })
        .collect();
    types
        .set_fields_struct_raw(&shell, fields, Vec::new(), size, ptr, 0)
        .ok()
}

/// The interface id each of `n` elements `stride` bytes apart from stack
/// offset `base` has its first word set to: the address every pointer-sized
/// write of that word (a copy into the stack slot or a store through a
/// stack address) agrees on, else `None`.
fn element_ids(data: &Funcdata, base: i64, n: u64, stride: i64, ptr: i32) -> Vec<Option<u64>> {
    let mut seen: BTreeMap<u64, Option<u64>> = BTreeMap::new();
    let Some(stack) = data.get_arch().manage.get_stack_space() else {
        return vec![None; n as usize];
    };
    let width = stack.get_addr_size() as i32;
    let element = |off: i64| {
        let d = off.checked_sub(base)?;
        (d >= 0 && d % stride == 0 && ((d / stride) as u64) < n).then(|| (d / stride) as u64)
    };
    for id in data.obank().iter_alive() {
        let Some(op) = data.obank().get(id) else {
            continue;
        };
        let (off, value) = match op.code() {
            OpCode::CPUI_COPY => {
                let Some(out) = op.get_out().and_then(|o| data.vbank().get(o)) else {
                    continue;
                };
                let on_stack = out
                    .get_addr()
                    .get_space()
                    .is_some_and(|s| Rc::ptr_eq(s, stack));
                if !on_stack || out.get_size() != ptr {
                    continue;
                }
                (signed(out.get_offset(), width), op.get_in(0))
            }
            OpCode::CPUI_STORE => match op.get_in(1).and_then(|p| stack_offset(data, p)) {
                Some(off) => (off, op.get_in(2)),
                None => continue,
            },
            _ => continue,
        };
        let (Some(i), Some(value)) = (element(off), value) else {
            continue;
        };
        if data.vbank().get(value).map(|v| v.get_size()) != Some(ptr) {
            continue;
        }
        let iid = crate::objcrettype::constant_address(data, value, 0);
        seen.entry(i)
            .and_modify(|e| {
                if *e != iid {
                    *e = None;
                }
            })
            .or_insert(iid);
    }
    (0..n).map(|i| seen.get(&i).copied().flatten()).collect()
}

/// The offset from the function's entry stack pointer of the address `vn`:
/// that pointer (or the stack's base register) plus literals.
fn stack_offset(data: &Funcdata, vn: VarnodeId) -> Option<i64> {
    let sp = data
        .get_arch()
        .manage
        .get_stack_space()?
        .get_spacebase(0)
        .ok()?;
    let mut at = vn;
    let mut off: i64 = 0;
    for _ in 0..16 {
        let v = data.vbank().get(at)?;
        let Some(def) = v.get_def() else {
            let a = v.get_addr();
            let is_sp = v.is_input()
                && a.get_space()
                    .zip(sp.space.as_ref())
                    .is_some_and(|(x, y)| Rc::ptr_eq(x, y))
                && a.get_offset() == sp.offset
                && v.get_size() as u32 == sp.size;
            return (is_sp || (v.is_spacebase() && !v.is_constant())).then_some(off);
        };
        let d = data.obank().get(def)?;
        let literal = || {
            d.get_in(1)
                .and_then(|x| data.vbank().get(x))
                .filter(|x| x.is_constant())
                .map(|x| signed(x.get_offset(), x.get_size()))
        };
        match d.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => at = d.get_in(0)?,
            OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRSUB => {
                off = off.wrapping_add(literal()?);
                at = d.get_in(0)?;
            }
            OpCode::CPUI_INT_SUB => {
                off = off.wrapping_sub(literal()?);
                at = d.get_in(0)?;
            }
            _ => return None,
        }
    }
    None
}

/// `v` read as a signed integer of `size` bytes.
fn signed(v: u64, size: i32) -> i64 {
    if !(1..8).contains(&size) {
        return v as i64;
    }
    let shift = 64 - 8 * size as u32;
    ((v << shift) as i64) >> shift
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
    if matches!(d.code(), OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRSUB)
        && let (Some(base), Some(off)) = (d.get_in(0), d.get_in(1))
            && let Some(c) = data.vbank().get(off).filter(|c| c.is_constant()) {
                return (strip(data, base), c.get_offset());
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
mod tests;
