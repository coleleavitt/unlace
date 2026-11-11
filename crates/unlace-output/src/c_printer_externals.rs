//! c_printer: externals.

use super::*;

/// Keep the first IDA compatibility prelude in a multi-function translation unit
/// and remove repeated copies from subsequent function renderings.
pub fn dedupe_ida_typedefs(output: &str) -> String {
    let Some(first) = output.find(IDA_TYPEDEFS) else {
        return output.to_string();
    };
    let mut compact = String::with_capacity(output.len());
    let (head, tail) = output.split_at(first + IDA_TYPEDEFS.len());
    compact.push_str(head);
    compact.push_str(&tail.replace(IDA_TYPEDEFS, ""));
    compact
}

/// Add declarations for pseudo-C globals/stubs that are referenced by name but
/// not materialized as normal functions or data objects in the recovered unit.
pub fn declare_pseudo_c_externals(output: &str) -> String {
    let mut decls = BTreeSet::new();
    let mut defined_subs = BTreeSet::new();

    for line in output.lines() {
        let trimmed = line.trim();
        if trimmed.ends_with('{')
            && let Some((name, proto)) = parse_function_definition_prototype(trimmed)
            && name.starts_with("sub_")
        {
            defined_subs.insert(name.to_string());
            decls.insert(proto);
        }
    }

    // Objects the output declares itself (typed globals) keep their type.
    let declared: BTreeSet<&str> = output.lines().filter_map(file_scope_object_name).collect();
    for (prefix, ty) in [
        ("byte_", "_BYTE"),
        ("word_", "_WORD"),
        ("dword_", "_DWORD"),
        ("qword_", "_QWORD"),
    ] {
        collect_prefixed_identifiers(output, prefix, |name| {
            if !declared.contains(name) {
                decls.insert(format!("{ty} {name};"));
            }
        });
    }

    collect_prefixed_identifiers(output, "sub_", |name| {
        if !defined_subs.contains(name) {
            decls.insert(format!("__int64 {}();", name));
        }
    });

    if decls.is_empty() {
        return output.to_string();
    }

    let mut block = String::new();
    for decl in decls {
        block.push_str(&decl);
        block.push('\n');
    }
    block.push('\n');

    if let Some(pos) = output.find(IDA_TYPEDEFS) {
        let insert_at = pos + IDA_TYPEDEFS.len();
        let mut out = String::with_capacity(output.len() + block.len());
        out.push_str(&output[..insert_at]);
        out.push_str(&block);
        out.push_str(&output[insert_at..]);
        out
    } else {
        let mut out = String::with_capacity(output.len() + block.len());
        out.push_str(&block);
        out.push_str(output);
        out
    }
}

pub(super) fn parse_function_definition_prototype(line: &str) -> Option<(&str, String)> {
    let header = line.strip_suffix('{')?.trim_end();
    let open = header.find('(')?;
    let before = header[..open].trim_end();
    let name_start = before
        .rfind(|c: char| !(c == '_' || c == '$' || c.is_ascii_alphanumeric()))
        .map_or(0, |idx| idx + 1);
    let name = &before[name_start..];
    if !is_c_identifier(name) {
        return None;
    }
    Some((name, format!("{};", header)))
}

/// The object a file-scope declaration line such as `int dword_404040[16];`
/// or `struct obj_4040 stru_4040[8];` declares.
pub(super) fn file_scope_object_name(line: &str) -> Option<&str> {
    if line.starts_with(char::is_whitespace) || line.contains('(') || line.contains('{') {
        return None;
    }
    let declarator = line.strip_suffix(';')?;
    let declarator = declarator.split('[').next()?.trim_end();
    let start = declarator
        .rfind(|c: char| !is_ident_byte(c as u8))
        .map_or(0, |idx| idx + 1);
    let name = &declarator[start..];
    (start > 0 && is_c_identifier(name)).then_some(name)
}

pub(super) fn collect_prefixed_identifiers(mut text: &str, prefix: &str, mut f: impl FnMut(&str)) {
    while let Some(pos) = text.find(prefix) {
        let start = pos;
        let bytes = text.as_bytes();
        let mut end = start + prefix.len();
        while end < bytes.len() && bytes[end].is_ascii_hexdigit() {
            end += 1;
        }
        let before_ok = start == 0 || !is_ident_byte(bytes[start - 1]);
        let after_ok = end == bytes.len() || !is_ident_byte(bytes[end]);
        if end > start + prefix.len() && before_ok && after_ok {
            f(&text[start..end]);
        }
        text = &text[end.min(text.len())..];
    }
}

/// Remove the compatibility prelude for fixture/metric output. The decompiled C
/// remains pseudo-C and the prelude can dominate line-count parity metrics.
pub fn strip_ida_typedefs(output: &str) -> String {
    output.replace(IDA_TYPEDEFS, "")
}
