//! C declarations for typed memory objects.
//!
//! The synthesised struct types and the global objects are declared in the
//! function's preamble, one declaration per line so a translation unit that
//! prints several functions touching the same object can drop the repeats
//! ([`dedupe_object_declarations`]). Frame objects are declared with the
//! function's locals ([`local_declaration`]).

use std::collections::BTreeSet;
use std::fmt::Write as _;

use unlace_ir::mem_object::MemObject;
use unlace_ir::types::Type;

use super::{MemObjects, ObjectInfo};
use crate::c_printer::render_type_decl_as_c;

/// First line of a function's object declaration block.
pub(in crate::c_printer) const OBJECT_DECLS_HEADER: &str = "// Synthesised object types";

/// The preamble block: every struct the declared objects' types use, then a
/// declaration for each global object an access was printed through. Frame
/// objects are declared as locals. `None` when there is nothing to declare.
pub(in crate::c_printer) fn preamble(objects: &MemObjects) -> Option<String> {
    let declared: Vec<(&MemObject, &ObjectInfo)> = objects
        .objects
        .iter()
        .filter(|(object, _)| {
            matches!(object, MemObject::Frame(_)) || objects.used.contains(object)
        })
        .collect();
    if declared.is_empty() {
        return None;
    }
    let mut structs = Vec::new();
    let mut seen = BTreeSet::new();
    for (_, info) in &declared {
        collect_structs(&info.ty, &mut seen, &mut structs);
    }
    let mut out = String::new();
    let _ = writeln!(out, "{OBJECT_DECLS_HEADER}");
    for (name, fields) in structs {
        let members: String = fields
            .iter()
            .map(|field| format!(" {};", render_type_decl_as_c(&field.ty, &field.name)))
            .collect();
        let _ = writeln!(out, "struct {name} {{{members} }};");
    }
    for (object, info) in declared {
        if let MemObject::Global(_) = object {
            let _ = writeln!(out, "{};", render_type_decl_as_c(&info.ty, &info.name));
        }
    }
    Some(out)
}

/// `struct obj_frame_m90 buf_144[8];`, indented as a local.
pub(in crate::c_printer) fn local_declaration(info: &ObjectInfo) -> String {
    format!("    {};", render_type_decl_as_c(&info.ty, &info.name))
}

/// Named structs reachable from `ty`, members before the struct using them.
fn collect_structs<'a>(
    ty: &'a Type,
    seen: &mut BTreeSet<&'a str>,
    out: &mut Vec<(&'a str, &'a [unlace_ir::types::StructFieldType])>,
) {
    match ty {
        Type::Array { element, .. } => collect_structs(element, seen, out),
        Type::Struct { name, fields } if !name.is_empty() => {
            for field in fields {
                collect_structs(&field.ty, seen, out);
            }
            if seen.insert(name) {
                out.push((name, fields));
            }
        }
        _ => {}
    }
}

/// Drop object declarations an earlier function's block already made, and
/// the header of a block left empty. Two functions that touch one object
/// each declare it; C rejects a struct defined twice.
pub fn dedupe_object_declarations(output: &str) -> String {
    let mut seen = BTreeSet::new();
    let mut out = String::with_capacity(output.len());
    let mut lines = output.split_inclusive('\n');
    while let Some(line) = lines.next() {
        if line.trim_end() != OBJECT_DECLS_HEADER {
            out.push_str(line);
            continue;
        }
        let mut block = String::new();
        let mut rest = None;
        for decl in lines.by_ref() {
            if decl.trim().is_empty() || decl.starts_with(char::is_whitespace) {
                rest = Some(decl);
                break;
            }
            if seen.insert(decl.trim_end().to_string()) {
                block.push_str(decl);
            }
        }
        if !block.is_empty() {
            out.push_str(line);
            out.push_str(&block);
        }
        if let Some(rest) = rest {
            out.push_str(rest);
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn repeated_blocks_keep_only_new_declarations() {
        let one = format!("{OBJECT_DECLS_HEADER}\nstruct s {{ int fld_0; }};\nstruct s g[2];\n\n");
        let two = format!("{OBJECT_DECLS_HEADER}\nstruct s {{ int fld_0; }};\nint h[4];\n\n");
        let input = format!("{one}void f() {{\n}}\n{one}void g() {{\n}}\n{two}void h() {{\n}}\n");
        let expected = format!(
            "{one}void f() {{\n}}\n\nvoid g() {{\n}}\n{OBJECT_DECLS_HEADER}\nint h[4];\n\nvoid h() {{\n}}\n"
        );
        assert_eq!(dedupe_object_declarations(&input), expected);
    }
}
