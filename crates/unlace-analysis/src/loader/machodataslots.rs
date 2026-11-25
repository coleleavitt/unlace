//! Mach-O symbol-pointer slots whose import is a data object (`machodataslots`,
//! committed under `importdata`).
//!
//! The `LC_DYSYMTAB` indirect-symbol walk ([`super::macho_stubs`]) names every
//! `__got` / `__la_symbol_ptr` entry after the import it holds, and the loader
//! installs each as a `FunctionSymbol` the function inventory lists, so that a
//! call through the slot renders the callee. A Swift type's metadata or nominal
//! type descriptor, a protocol witness table, an Objective-C class object or a
//! C++ vtable is never called, yet its slot was inventoried as a size-0 function
//! too: 7,865 of a 72 MB app's 270,680 entries were such words. [`is_data_import`]
//! tells a data import from its mangling, the walk keeps those slots out of the
//! import stream, and [`MachODataImportPass`] names them exactly as ELF's
//! `elfgotimports` names a `GLOB_DAT` slot: a symbol-table name painted
//! `externref`, never a function-inventory entry, so `importdata` renders a read
//! through the slot as the import. A plain C import carries no such mark and
//! stays a callable slot, as before.

use object::read::Object;
use unlace_decomp::symbolnamechars::{sanitize_symbol_name_bytes, symbolnamechars_mode};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// Does the import's mangled name say it is a data object? Objective-C class,
/// metaclass, ivar offset, protocol and exception-type objects by prefix; a
/// Swift symbol by its demangling tree; an Itanium C++ symbol by its encoding
/// (a vtable, typeinfo, guard or static data member has no function type).
/// A plain C name is not classified. The indirect-symbol walk runs on every
/// read of the import stream, about twenty times a load, so each demangled
/// answer is kept per thread.
pub(crate) fn is_data_import(raw: &[u8]) -> bool {
    const OBJC_OBJECTS: [&[u8]; 5] = [
        b"_OBJC_CLASS_$_",
        b"_OBJC_METACLASS_$_",
        b"_OBJC_IVAR_$_",
        b"_OBJC_PROTOCOL_$_",
        b"_OBJC_EHTYPE_$_",
    ];
    if OBJC_OBJECTS.iter().any(|prefix| raw.starts_with(prefix)) {
        return true;
    }
    let Ok(name) = std::str::from_utf8(raw) else {
        return false;
    };
    let name = name.strip_prefix('_').unwrap_or(name);
    let swift = crate::sourcelang::is_swift_mangled(name);
    if !swift && !name.starts_with("_Z") {
        return false;
    }
    MEMO.with(|memo| {
        if let Some(&data) = memo.borrow().get(raw) {
            return data;
        }
        let data = if swift {
            crate::demangle::swift::is_data_symbol(name).unwrap_or(false)
        } else {
            itanium_is_data(name)
        };
        let mut memo = memo.borrow_mut();
        if memo.len() >= MEMO_CAP {
            memo.clear();
        }
        memo.insert(raw.into(), data);
        data
    })
}

const MEMO_CAP: usize = 1 << 17;

thread_local! {
    static MEMO: std::cell::RefCell<std::collections::HashMap<Box<[u8]>, bool>> =
        std::cell::RefCell::new(std::collections::HashMap::new());
}

/// An Itanium encoding is a function exactly when it carries a parameter list:
/// the demangling with parameters dropped differs from the full one. A data
/// member, a vtable or a typeinfo renders the same both ways. The TLS init and
/// wrapper functions (`_ZTH`, `_ZTW`) are code that has no parameter list.
fn itanium_is_data(name: &str) -> bool {
    if name.starts_with("_ZTH") || name.starts_with("_ZTW") {
        return false;
    }
    let Ok(sym) = cpp_demangle::Symbol::new(name) else {
        return false;
    };
    let full = cpp_demangle::DemangleOptions::new();
    let bare = cpp_demangle::DemangleOptions::new().no_params();
    match (
        sym.demangle_with_options(&full),
        sym.demangle_with_options(&bare),
    ) {
        (Ok(full), Ok(bare)) => full == bare,
        _ => false,
    }
}

/// The name a slot is minted under: the import demangled and sanitized as the
/// loader's function-symbol stream spells it.
fn minted_name(raw: &[u8]) -> String {
    let demangled = std::str::from_utf8(raw)
        .ok()
        .and_then(crate::demangle::demangle_name);
    let name = match &demangled {
        Some(d) => d.as_bytes(),
        None => raw,
    };
    String::from_utf8_lossy(&sanitize_symbol_name_bytes(name, symbolnamechars_mode())).into_owned()
}

/// Names each data-import symbol-pointer slot for its import (a symbol-table
/// name, not a function-inventory entry) and paints it `externref`. Its output
/// is committed only when `importdata` is on.
pub struct MachODataImportPass;

impl AnalysisPass for MachODataImportPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "machodataslots"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        let width = if ctx.file.is_64() { 8 } else { 4 };
        for (slot, name) in super::macho_stubs::resolve_macho_data_import_slots(ctx.file, ctx.bytes)
        {
            let Some(end) = slot.checked_add(width) else {
                continue;
            };
            out.externref.push((slot, end));
            out.import_slot_names.push((slot, minted_name(&name)));
            out.data_import_slots.push(slot);
        }
        out
    }
}

#[cfg(test)]
mod tests;
