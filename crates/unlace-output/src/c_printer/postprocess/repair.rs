use std::collections::BTreeSet;
use std::fmt::Write;

use super::{collect_v_number_names, is_arg_versioned_name, is_ident_byte};

pub(in crate::c_printer) fn rename_unreturned_bare_result(output: String) -> String {
    // Three transformations on a per-function output:
    //   (a) `result` is declared but never returned → rename so it doesn't
    //       collide with later naming passes (legacy behaviour).
    //   (b) `result` is declared AND returned, but never assigned anywhere
    //       in the function body (uninitialized-read-then-return). Rewrite
    //       each `return result;` to `return 0;` and drop the dead decl.
    //   (c) `result` is NOT declared but `return result;` appears anyway
    //       (the IDA-like emitter dropped the assignment under multi-stmt
    //       coalescing, leaving a literal `return result;` with no binding).
    //       Rewrite each such return to `return 0;`. Without this every
    //       short-circuit early return through a register-collapsed multi
    //       statement leaks a stale-helper-return.
    let has_decl = output.contains("int result;") || output.contains("__int64 result; // rax");
    let has_bare_return = output.contains("return result;");
    if !has_decl && !has_bare_return {
        return output;
    }
    if has_decl && !has_bare_return {
        return replace_identifier_text(&output, "result", "result_0");
    }

    // has_bare_return is true. Decide whether to drop the decl too.
    let has_assign = output.contains("result =")
        || output.contains("result +=")
        || output.contains("result -=")
        || output.contains("result *=")
        || output.contains("result /=")
        || output.contains("result &=")
        || output.contains("result |=")
        || output.contains("result ^=")
        || output.contains("result <<=")
        || output.contains("result >>=")
        || output.contains("result++")
        || output.contains("result--");
    if has_decl && has_assign {
        // Path-sensitive use-before-def. Leaving alone is the safer
        // behaviour; a later domination-aware pass can refine this.
        return output;
    }

    // Rewrite every textual `return result;` to `return 0;`, including
    // segments embedded in multi-statement lines, and drop the (possibly
    // present) dead `T result; // rax` declaration line.
    let mut rewritten = String::with_capacity(output.len());
    for line in output.lines() {
        let trimmed = line.trim_start();
        if trimmed == "int result; // rax"
            || trimmed == "__int64 result; // rax"
            || trimmed == "int result;"
            || trimmed == "__int64 result;"
        {
            continue;
        }
        if line.contains("return result;") {
            let replaced = line.replace("return result;", "return 0;");
            rewritten.push_str(&replaced);
            rewritten.push('\n');
            continue;
        }
        rewritten.push_str(line);
        rewritten.push('\n');
    }
    rewritten
}

pub(in crate::c_printer) fn repair_arg_versioned_address_uses(output: String) -> String {
    if !output.contains("->field_") && !output.contains("*)(") {
        return output;
    }

    let mut names = BTreeSet::new();
    for line in output.lines() {
        collect_v_number_names(line, &mut names);
    }
    names.retain(|name| is_arg_versioned_name(name));
    if names.is_empty() {
        return output;
    }

    let mut repaired = output;
    for name in names {
        repaired = repair_arg_versioned_pointer_casts(repaired, &name);
        repaired = repair_arg_versioned_arrow_fields(repaired, &name);
    }
    repaired
}

pub(in crate::c_printer) fn repair_arg_versioned_pointer_casts(
    mut output: String,
    name: &str,
) -> String {
    for ty in ["_BYTE", "_WORD", "_DWORD", "_QWORD", "_OWORD"] {
        let from = format!("*({ty} *)({name})");
        if !output.contains(&from) {
            continue;
        }
        let to = format!("*({ty} *)(uintptr_t)({name})");
        tracing::debug!(target: "unlace::cprinter", "repair arg-address-cast name={name} ty={ty}");
        output = output.replace(&from, &to);
    }
    output
}

pub(in crate::c_printer) fn repair_arg_versioned_arrow_fields(
    output: String,
    name: &str,
) -> String {
    let needle = format!("{name}->field_");
    if !output.contains(&needle) {
        return output;
    }

    let mut out = String::with_capacity(output.len());
    let mut rest = output.as_str();
    while let Some(pos) = rest.find(&needle) {
        out.push_str(&rest[..pos]);
        let after_prefix = &rest[pos + needle.len()..];
        let digits_len = after_prefix
            .bytes()
            .take_while(|b| b.is_ascii_digit())
            .count();
        if digits_len == 0 {
            out.push_str(&needle);
            rest = after_prefix;
            continue;
        }
        let offset = &after_prefix[..digits_len];
        tracing::debug!(target: "unlace::cprinter", "repair arg-arrow-field name={name} offset={offset}");
        let _ = write!(out, "*(_DWORD *)((uintptr_t){name} + {offset})");
        rest = &after_prefix[digits_len..];
    }
    out.push_str(rest);
    out
}

pub(in crate::c_printer) fn replace_identifier_text(text: &str, from: &str, to: &str) -> String {
    let bytes = text.as_bytes();
    let from_bytes = from.as_bytes();
    if from_bytes.is_empty() {
        return text.to_string();
    }

    let mut out = String::with_capacity(text.len());
    let mut idx = 0usize;
    while idx < bytes.len() {
        if bytes[idx..].starts_with(from_bytes) {
            let before = idx.checked_sub(1).and_then(|i| bytes.get(i)).copied();
            let after = bytes.get(idx + from_bytes.len()).copied();
            let before_boundary = before.is_none_or(|b| !is_ident_byte(b));
            let after_boundary = after.is_none_or(|b| !is_ident_byte(b));
            if before_boundary && after_boundary {
                out.push_str(to);
                idx += from_bytes.len();
                continue;
            }
        }
        out.push(bytes[idx] as char);
        idx += 1;
    }
    out
}
