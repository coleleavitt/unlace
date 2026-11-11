//! c_printer: struct preamble.

use super::*;

/// Render a preamble block of `struct __anon<N> { ... };` declarations for
/// every composite type recovered on the [`SsaFunction`]:
///
/// * [`SsaFunction::inferred_structs`] — stack-frame composites synthesised
///   from adjacent same-typed stack slots by `StackVarRecoveryPass` (t147),
///   keyed by RSP-relative starting offset.
/// * [`SsaFunction::array_struct_layouts`] — heap / global / parameter-pointer
///   structs recovered from array-of-structs access patterns inside natural
///   loops by `struct_field_recovery::recover_structs` (t213), keyed by the
///   base-pointer SSA varnode.
///
/// One `struct __anon0 { … };` block is emitted per layout, numbered in the
/// fixed order above (stack-frame composites first, then array layouts).
/// Field names use the byte-offset convention `field_<offset>` so the layout
/// is self-describing without leaking the synthesised internal name.
///
/// Returns an empty string when both maps are empty, so callers can splice
/// the result unconditionally and only emit a trailing blank line when the
/// preamble is non-empty.
pub fn emit_inferred_struct_preamble(func: &SsaFunction) -> String {
    if func.inferred_structs.is_empty() && func.array_struct_layouts.is_empty() {
        return String::new();
    }

    let mut out = String::new();
    let mut idx: usize = 0;

    // Stack-frame composites (t147).  `inferred_structs` stores `Type::Struct`
    // values whose field names are sequential (`field_0`, `field_1`, …) but
    // whose `offset` is a true byte offset.  We re-emit with offset-based
    // names so the rendered struct is self-describing.
    for ty in func.inferred_structs.values() {
        if let Type::Struct { fields, .. } = ty {
            let _ = writeln!(out, "struct __anon{idx} {{");
            for f in fields {
                let _ = writeln!(
                    out,
                    "    {};",
                    render_type_decl_as_c(&f.ty, &format!("field_{}", f.offset))
                );
            }
            let _ = writeln!(out, "}};");
            idx += 1;
        }
    }

    // Array-of-structs layouts (t213).  `InferredStruct` carries raw
    // `(offset, access_width)` pairs; pick a primitive integer type of the
    // matching width so the rendered field has a concrete C type.
    for layout in func.array_struct_layouts.values() {
        let _ = writeln!(out, "struct __anon{idx} {{");
        for field in &layout.fields {
            let ty = primitive_for_width(field.size);
            let _ = writeln!(out, "    {} field_{};", ty, field.offset);
        }
        let _ = writeln!(out, "}};");
        idx += 1;
    }

    out
}

/// Companion to [`emit_inferred_struct_preamble`]: return the
/// `__anon<N>` index assigned to every entry in
/// `SsaFunction::array_struct_layouts`, using the *same* enumeration
/// order as the preamble emitter (stack-frame composites first, then
/// array layouts in BTreeMap order).
///
/// The c_printer's `try_array_struct_field_access` (t231) consumes this
/// map to render typed accesses as `arr<N>[i].field_<offset>` whose
/// `<N>` matches the `struct __anon<N>` declared at the top of the
/// function.
pub fn compute_array_struct_indices(func: &SsaFunction) -> BTreeMap<SsaVarnode, usize> {
    let mut out = BTreeMap::new();
    let mut idx: usize = 0;
    // Stack-frame composites (t147) — count one slot each. Their iteration
    // order must mirror `emit_inferred_struct_preamble`.
    for ty in func.inferred_structs.values() {
        if matches!(ty, Type::Struct { .. }) {
            idx += 1;
        }
    }
    // Array-of-struct layouts (t213).
    for base in func.array_struct_layouts.keys() {
        out.insert(*base, idx);
        idx += 1;
    }
    out
}

/// Map an access width (in bytes) to a C primitive type name used in the
/// inferred-struct preamble.  Widths outside the recognised set fall back to
/// `__int64`, matching the conservative-widening convention used elsewhere
/// in the printer for unrecovered scalar types.
pub(super) fn primitive_for_width(width: u8) -> &'static str {
    match width {
        1 => "char",
        2 => "__int16",
        4 => "int",
        8 => "__int64",
        16 => "__int128",
        _ => "__int64",
    }
}
