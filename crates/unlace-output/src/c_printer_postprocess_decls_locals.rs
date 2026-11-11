use crate::c_printer::postprocess::{
    is_c_identifier, is_decl_synthetic_local, is_side_effect_free_temp_initializer,
};

pub(in crate::c_printer) fn parse_plain_local_decl_name(line: &str) -> Option<&str> {
    parse_local_decl_name_inner(line, true)
}

pub(in crate::c_printer) fn parse_shadowing_local_decl_name(line: &str) -> Option<&str> {
    parse_local_decl_name_inner(line, false)
}

pub(in crate::c_printer) fn parse_local_decl_name_inner(
    line: &str,
    require_prunable_init: bool,
) -> Option<&str> {
    // Accept any indented declaration; previously this required exactly 4-space
    // (function-top) indent and bailed on deeper nesting, leaving every inline
    // shadowing `_BOOL cond_14 = ...` inside an `if`/`do` body undetected.
    let indent_len = line.len() - line.trim_start().len();
    if indent_len < 4 {
        return None;
    }
    let rest = &line[indent_len..];
    if rest.contains("BYREF") || rest.contains("[rsp") || rest.contains("[rbp") {
        return None;
    }
    if rest.starts_with("//") {
        return None;
    }
    let semi = rest.find(';')?;
    let stmt = rest[..semi].trim();
    let decl = if let Some((decl, init)) = stmt.split_once(" = ") {
        // Accept any trailing line comment as a synthetic-temp marker —
        // the flag-recovery pass emits `// OF`, `// PF`, `// ZF` etc.; the
        // generic pruner already gates the LHS via `is_decl_synthetic_local`,
        // so checking only "// temp" was overly restrictive and let
        // `_BOOL cond_1 = ... ; // PF` survive even when the rhs was pure.
        let has_temp_comment = rest.contains("// temp")
            || rest.contains("// OF")
            || rest.contains("// PF")
            || rest.contains("// ZF")
            || rest.contains("// CF")
            || rest.contains("// SF")
            || rest.contains("// AF");
        if require_prunable_init
            && (!has_temp_comment || !is_side_effect_free_temp_initializer(init))
        {
            return None;
        }
        decl.trim()
    } else {
        stmt
    };
    if decl.contains('(') || decl.contains(')') || decl.contains('[') {
        return None;
    }
    let first = decl.split_whitespace().next()?;
    if !is_plain_local_decl_type_start(first) {
        return None;
    }
    if matches!(
        first,
        "return"
            | "if"
            | "while"
            | "do"
            | "for"
            | "switch"
            | "case"
            | "goto"
            | "break"
            | "continue"
    ) {
        return None;
    }
    let name = decl.split_whitespace().last()?.trim_start_matches('*');
    (is_c_identifier(name) && is_decl_synthetic_local(name)).then_some(name)
}

pub(in crate::c_printer) fn is_plain_local_decl_type_start(first: &str) -> bool {
    matches!(
        first,
        "char"
            | "short"
            | "int"
            | "long"
            | "unsigned"
            | "signed"
            | "float"
            | "double"
            | "void"
            | "struct"
            | "union"
            | "enum"
            | "_BYTE"
            | "_BOOL"
            | "_WORD"
            | "_DWORD"
            | "_QWORD"
            | "_OWORD"
            | "__int16"
            | "__int64"
            | "__int128"
            | "__m64"
            | "__m128"
            | "__m128d"
            | "__m128i"
            | "__m256"
            | "__m256d"
            | "__m256i"
            | "__m512"
            | "__m512d"
            | "__m512i"
    )
}
