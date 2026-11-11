//! c_printer: objc.

use super::*;

/// If `insn` is an `objc_msgSend` call site that the dispatch pass resolved
/// to a concrete `[Class method:]` annotation, return that bracket form so
/// the printer can emit it in place of the synthesised `objc_msgSend(...)`
/// expression. Returns `None` when no annotation is recorded or when it is
/// the fallback `// objc_msgSend(...)` comment form (which the existing
/// `cxa_call_annotation` / line-comment paths render separately).
pub(super) fn objc_bracket_call(insn: &IrInsn, ctx: &PrintCtx) -> Option<String> {
    if !matches!(insn.op, IrOp::Call) {
        return None;
    }
    let ann = ctx.objc_dispatch_calls.get(&insn.addr)?;
    if ann.starts_with('[') {
        Some(ann.clone())
    } else {
        None
    }
}

/// Translate a single ObjC `@encoding` type code into the closest C type
/// spelling.  Unknown encodings fall back to `void*` with an inline comment
/// preserving the original code so the reader can still recover the
/// intended type.  Compound encodings (`^X`, `[N X]`) recurse on `X`.
pub fn objc_type_encoding_to_c(encoding: &str) -> String {
    let trimmed = encoding.trim();
    let trimmed = trimmed.trim_start_matches(['r', 'n', 'N', 'o', 'O', 'R', 'V']);
    match trimmed {
        "c" => return "char".into(),
        "C" => return "_BYTE".into(),
        "s" => return "__int16".into(),
        "S" => return "_WORD".into(),
        "i" => return "int".into(),
        "I" => return "_DWORD".into(),
        "l" => return "int".into(),
        "L" => return "_DWORD".into(),
        "q" => return "__int64".into(),
        "Q" => return "_QWORD".into(),
        "f" => return "float".into(),
        "d" => return "double".into(),
        "B" => return "_BOOL".into(),
        "v" => return "void".into(),
        "*" => return "char*".into(),
        "@" => return "id".into(),
        "#" => return "Class".into(),
        ":" => return "SEL".into(),
        "?" => return "void* /* type=? */".into(),
        "" => return "void* /* type= */".into(),
        _ => {}
    }

    if let Some(rest) = trimmed.strip_prefix('@') {
        if let Some(class) = rest.strip_prefix('"').and_then(|s| s.strip_suffix('"'))
            && !class.is_empty()
            && !class.starts_with('<')
        {
            return format!("{}*", class);
        }
        return "id".into();
    }

    if let Some(inner) = trimmed.strip_prefix('^') {
        return format!("{}*", objc_type_encoding_to_c(inner));
    }

    if let Some(body) = trimmed.strip_prefix('[').and_then(|s| s.strip_suffix(']')) {
        let split = body
            .find(|c: char| !c.is_ascii_digit())
            .unwrap_or(body.len());
        let (count, inner) = body.split_at(split);
        if !count.is_empty() && !inner.is_empty() {
            return format!("{}[{}]", objc_type_encoding_to_c(inner), count);
        }
    }

    if let Some(body) = trimmed.strip_prefix('{').and_then(|s| s.strip_suffix('}'))
        && let Some(name) = body.split('=').next()
        && !name.is_empty()
        && name != "?"
    {
        return format!("struct {}", name);
    }
    if let Some(body) = trimmed.strip_prefix('(').and_then(|s| s.strip_suffix(')'))
        && let Some(name) = body.split('=').next()
        && !name.is_empty()
        && name != "?"
    {
        return format!("union {}", name);
    }

    if let Some(width) = trimmed.strip_prefix('b')
        && !width.is_empty()
        && width.chars().all(|c| c.is_ascii_digit())
    {
        return format!("unsigned int /* :{} */", width);
    }

    format!("void* /* type={} */", trimmed.escape_default())
}

/// Emit a synthetic `struct ClassName { type ivar1; type ivar2; ... };`
/// for the given ObjC class.  Returns `None` when no ivars are recorded so
/// callers can skip emission entirely rather than printing an empty struct
/// (which is a C constraint violation).
///
/// Ivars are emitted in declared order so reading the synthetic struct
/// top-to-bottom mirrors the recovered offsets.
pub fn render_objc_class_struct(class: &unlace_loader::ObjcClass) -> Option<String> {
    if class.ivars.is_empty() {
        return None;
    }
    let mut out = String::new();
    let _ = writeln!(out, "struct {} {{", class.name);
    for ivar in &class.ivars {
        let ty = objc_type_encoding_to_c(&ivar.type_encoding);
        let _ = writeln!(
            out,
            "    {} {};  /* offset 0x{:X} */",
            ty, ivar.name, ivar.offset
        );
    }
    let _ = writeln!(out, "}};");
    // t147 / t224: ObjC class layouts are wired into the preamble emitter at
    // the top of `print_c_with_annotations` via `PrinterAnnotations::objc_classes`.
    // The companion `emit_inferred_struct_preamble` below handles the
    // SSA-recovered stack-frame and array-of-structs layouts.
    Some(out)
}

/// Render an ObjC category as a commented `@interface` block:
///
/// ```text
/// // @interface ClassName (CategoryName)
/// //   - methodA();
/// //   - methodB();
/// // @end
/// ```
///
/// The header line uses the recovered `class_name` if present; when the
/// category's `class_ref` could not be resolved to a name (only the raw
/// `class_addr` survived the scan) we fall back to `class_0x<addr>` so the
/// preamble still parses on the eye even though the symbol is anonymous.
///
/// Both `instance_methods` and `class_methods` are surfaced — instance
/// methods are prefixed `-` (matching ObjC's `-`/`+` selector convention),
/// class methods `+`. The body is intentionally allowed to be empty: a
/// category may exist in the runtime even with zero recovered selectors
/// (the analyst gets a "this category exists" breadcrumb to chase).
pub fn render_objc_category(cat: &unlace_loader::ObjcCategory) -> String {
    let mut out = String::new();
    let class_label: String = cat
        .class_name
        .clone()
        .unwrap_or_else(|| format!("class_0x{:X}", cat.class_addr));
    let _ = writeln!(out, "// @interface {} ({})", class_label, cat.name);
    for m in &cat.instance_methods {
        let _ = writeln!(out, "//   - {}();", m.name);
    }
    for m in &cat.class_methods {
        let _ = writeln!(out, "//   + {}();", m.name);
    }
    let _ = writeln!(out, "// @end");
    out
}
