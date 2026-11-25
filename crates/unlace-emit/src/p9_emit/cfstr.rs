//! (unlace `cfstrings`) Type and render a Mach-O Core Foundation constant string.
//!
//! The `cfstrings` commit types each `__cfstring` entry as an opaque
//! `struct __CFString` the size of the entry, and [`declare_types`] makes
//! `CFStringRef` the spelling of every pointer to it, so a function returning or
//! passing the entry is typed `CFStringRef`. The commit also seeds the entry
//! address with the string its char pointer resolves to; the printer reads that
//! string for a reference to an entry whatever the reference's type, and the C
//! printer wraps it in `CFSTR(...)`. With `cfstrings annotate` it also names the
//! entry address in a comment, which is the address a listing or hex view shows
//! for it.

use std::rc::Rc;

use unlace_base::error::UnlaceResult;
use unlace_base::types::{int4, uint4};

use crate::dtype::type_metatype::{TYPE_PTR, TYPE_STRUCT};
use crate::dtype::{Datatype, TypeFactory};

const TAG: &str = "__CFString";
const REF: &str = "CFStringRef";

/// Declare the `struct __CFString` an entry of `size` bytes is typed as, and
/// make the `CFStringRef` pointer to it the type every pointer to it gets.
/// Reuses a `CFStringRef` and `__CFString` the factory already holds, completing
/// an opaque `__CFString` to the entry size. `None` when an existing one cannot
/// serve (another size, or a `CFStringRef` that is not a pointer to it).
pub fn declare_types(
    types: &dyn TypeFactory,
    size: int4,
    ws: uint4,
) -> UnlaceResult<Option<Rc<Datatype>>> {
    let ps = types.get_size_of_pointer();
    let existing = types
        .find_by_name(REF)?
        .filter(|t| t.get_metatype() == TYPE_PTR);
    let mut record = match existing.as_ref().and_then(|p| p.get_ptr_to()) {
        Some(to) if to.get_metatype() == TYPE_STRUCT => to,
        _ => match types.find_by_name(TAG)? {
            Some(t) => t,
            None => types.get_type_struct(TAG)?,
        },
    };
    if record.get_metatype() != TYPE_STRUCT {
        return Ok(None);
    }
    if record.is_incomplete() {
        record = types.set_fields_struct_raw(&record, Vec::new(), Vec::new(), size, ps, 0)?;
    }
    if record.get_size() != size {
        return Ok(None);
    }
    let ptr = match existing {
        Some(p) if p.get_ptr_to().is_some_and(|to| Rc::ptr_eq(&to, &record)) => p,
        Some(_) => return Ok(None),
        None => types.get_type_pointer_named(ps, Rc::clone(&record), ws, REF)?,
    };
    types.unlace_prefer_named_pointer(&ptr);
    Ok(Some(record))
}

/// Wrap the already-escaped C literal `lit` for the `__cfstring` entry at `entry`.
pub fn wrap(lit: &str, entry: u64, annotate: bool) -> String {
    if annotate {
        format!("CFSTR({lit}) /* cfstring@0x{entry:x} */")
    } else {
        format!("CFSTR({lit})")
    }
}

#[cfg(test)]
mod tests;
