//! Object widening: retype whole memory objects from their access patterns.
//!
//! Hex-Rays records every access to a global data item or a stack frame
//! member while it rewrites pointer arithmetic (`sub_27E790`). After that walk
//! it looks at each object (`sub_27D2C0` → `sub_27BC20`): when the accesses run
//! past the object's current extent, or go through a variable index, it builds
//! a new type for the whole object (`sub_27AE10`) — an array, an array of
//! structs, or an anonymous struct with `fld_N` members and `_BYTE[n]` gaps —
//! and applies it.
//!
//! This module is the unlace counterpart, keyed by [`MemObject`] (the object's
//! identity), not by the SSA pointer an access goes through:
//!
//! * [`access`] — the access map and its recording rule (`sub_27E790`).
//! * `collect` — walks `LOAD`/`STORE` addresses, splits each into
//!   `object + stride * index + offset`, and attributes it to an object.
//! * [`synthesize`] — builds the object type from its accesses (`sub_27AE10`,
//!   `sub_278A80`, `sub_278CA0`, `sub_2782C0`).
//! * `widen` — decides whether an object grows, how far it may grow, and
//!   whether the synthesised type is accepted (`sub_27BC20`).
//!
//! Results land in [`SsaFunction::object_types`]. Deviations from hexx64
//! 9.3sp1 are noted where they happen; the main ones are that pointer
//! induction variables (`p = &g; ...; p += 16`) count as strided accesses to
//! the object they start at, and that arrays of structs are accepted (hexx64
//! rejects a struct element type at the final acceptance step).
//!
//! [`SsaFunction::object_types`]: unlace_ir::ssa::SsaFunction::object_types

pub mod access;
mod collect;
pub mod synthesize;
mod widen;

#[cfg(test)]
mod tests;

use std::collections::BTreeMap;

use unlace_ir::mem_object::MemObject;
use unlace_ir::ssa::SsaFunction;

use crate::pass::{Pass, PassError, PassPhase};

pub use access::{AccessMap, ObjectAccess, ObjectAccesses};

/// Synthesises array / array-of-struct / `fld_N` struct types for global data
/// items and stack frame regions. See the [module docs](self).
pub struct ObjectWidenPass;

impl Pass for ObjectWidenPass {
    fn name(&self) -> &str {
        "object-widen"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let collected = collect::collect(func);
        let mut object_types = BTreeMap::new();
        for (&object, accesses) in collected.map.iter() {
            let Some(ty) = widen::widen(func, &collected, object, accesses) else {
                continue;
            };
            if func.object_types.get(&object) != Some(&ty) {
                tracing::debug!(
                    target: "unlace::object_widen",
                    function = %func.function.name,
                    object = %object_label(object),
                    accesses = accesses.accesses.len(),
                    max_end = accesses.max_end,
                    ty = %describe(&ty),
                    "object type synthesised"
                );
            }
            object_types.insert(object, ty);
        }
        let changed = object_types != func.object_types;
        func.object_types = object_types;
        Ok(changed)
    }
}

/// Stable label for an object, used in type names and traces.
fn object_label(object: MemObject) -> String {
    match object {
        MemObject::Global(addr) => format!("{addr:x}"),
        MemObject::Frame(off) if off < 0 => format!("frame_m{:x}", off.unsigned_abs()),
        MemObject::Frame(off) => format!("frame_{off:x}"),
    }
}

/// One-line rendering of a synthesised type with its member layout.
fn describe(ty: &unlace_ir::types::Type) -> String {
    use unlace_ir::types::Type;
    match ty {
        Type::Struct { name, fields } => {
            let members: Vec<String> = fields
                .iter()
                .map(|f| format!("{}@{}:{}", f.name, f.offset, describe(&f.ty)))
                .collect();
            format!("struct {name} {{ {} }}", members.join(", "))
        }
        Type::Array { element, size } => match size {
            Some(n) => format!("{}[{n}]", describe(element)),
            None => format!("{}[]", describe(element)),
        },
        other => other.to_string(),
    }
}
