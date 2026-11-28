//! Declarators, type spelling and type-definition rendering.

use super::*;

/// Build the declarator front/back text bracketing an identifier for `ct`.
///
/// Returns `(front, back)` such that `<front><name><back>` is the full
/// declaration of an object named `name` of type `ct` -- e.g. in C
///   * `int8`              -> `("int8", "")`             -> `int8 a`
///   * `twostruct *`       -> `("twostruct *", "")`      -> `twostruct *ptr`
///   * `int4 (*)[1]`       -> `("int4 (*", ")[1]")`      -> `int4 (*a)[1]`
///
/// The C body -- the transcription of `PrintC::pushTypeStart`/`pushTypeEnd`
/// (printc.cc:265/314) plus `buildTypeStack` (printc.cc:143) -- moved to
/// `CSpeller::declarator` (`p9_emit/langc.rs`) when the output-language seam
/// landed. A language whose types are pure prefixes returns an empty `back`.
#[doc(hidden)]
pub fn declarator_parts(
    ct: &std::rc::Rc<crate::dtype::Datatype>,
    rt: RealTypeCtx,
) -> (String, String) {
    rt.speller().declarator(&rt, ct)
}

/// (unlace) The full type string for `ct` with no identifier, rendered exactly as
/// the decompiler would print it — e.g. `int`, `char *`, `undefined8`, `int [16]`
/// in C; `i32`, `*mut u8`, `u64`, `[i32; 16]` in Rust.
///
/// A public wrapper over [`declarator_parts`] for out-of-crate consumers (the
/// `unlace decompile-all --json` variable extractor → decbench's `type_match`
/// metric).  It resolves the live `realtypes` context off the architecture so the
/// spelling matches `print_c`'s body, and concatenates the declarator
/// `front`/`back` around an empty identifier (`<front><back>`).
///
/// The name is historical: it follows the ACTIVE output language, which is read
/// off the architecture's printer.  Callers reach it while the printer is in
/// place; a caller that reaches it mid-emission (with the printer loaned out by
/// `with_print`) sees the default C language, which is the safe fallback.
pub fn type_to_c_string(arch: &Architecture, ct: &std::rc::Rc<crate::dtype::Datatype>) -> String {
    let (front, back) = declarator_parts(ct, RealTypeCtx::from_arch(arch, arch.print().out_lang()));
    format!("{front}{back}")
}

/// (unlace) One local declaration the printer emitted: the HighVariable it
/// declares, the name the naming pass gave it, the name it was printed under
/// (suffixed when it collided with another identifier), its declarator with
/// the name taken out (`char [16]`, `S *`), and the datatype that declarator
/// spells when it spells one.
#[derive(Clone, Debug)]
pub struct DeclaredLocal {
    pub high: crate::context::HighVariableId,
    pub base: String,
    pub name: String,
    pub decl: String,
    pub ty: Option<std::rc::Rc<crate::dtype::Datatype>>,
}

// ===========================================================================
// (unlace) `doc_type_definitions` rendering helpers — the pure per-type body
// renderers behind the `docTypeDefinitions` port (see
// `PrintC::doc_type_definitions` for the emission shape + divergences).  All
// take an explicit `RealTypeCtx` and hand-built `Datatype`s so they unit-test
// without an `Architecture`.
// ===========================================================================

/// The words C (C23, with `<stdbool.h>`'s `bool`/`true`/`false`) reserves, which
/// no type, member or enumerator can be named.
pub(super) const C_RESERVED_WORDS: &[&str] = &[
    "_Alignas",
    "_Alignof",
    "_Atomic",
    "_BitInt",
    "_Bool",
    "_Complex",
    "_Decimal128",
    "_Decimal32",
    "_Decimal64",
    "_Generic",
    "_Imaginary",
    "_Noreturn",
    "_Static_assert",
    "_Thread_local",
    "alignas",
    "alignof",
    "auto",
    "bool",
    "break",
    "case",
    "char",
    "const",
    "constexpr",
    "continue",
    "default",
    "do",
    "double",
    "else",
    "enum",
    "extern",
    "false",
    "float",
    "for",
    "goto",
    "if",
    "inline",
    "int",
    "long",
    "nullptr",
    "register",
    "restrict",
    "return",
    "short",
    "signed",
    "sizeof",
    "static",
    "static_assert",
    "struct",
    "switch",
    "thread_local",
    "true",
    "typedef",
    "typeof",
    "typeof_unqual",
    "union",
    "unsigned",
    "void",
    "volatile",
    "while",
];

/// (unlace) Rewrite `name` into a valid C identifier: every character outside
/// `[A-Za-z0-9_]` becomes `_`, a leading digit gains a `_` prefix, and a C
/// keyword (a DWARF member named `register`) gains a `_` suffix. Borrowed
/// unchanged when already valid (the caller emits a `/* renamed from "…" */`
/// comment when it changed). The printer spells a member access with the same
/// rewrite, so a definition and its uses agree.
#[doc(hidden)]
pub fn sanitize_type_name(name: &str) -> std::borrow::Cow<'_, str> {
    let ok_char = |c: char| c.is_ascii_alphanumeric() || c == '_';
    let clean = !name.is_empty()
        && name.chars().all(ok_char)
        && !name.starts_with(|c: char| c.is_ascii_digit());
    if clean {
        if C_RESERVED_WORDS.contains(&name) {
            return std::borrow::Cow::Owned(format!("{name}_"));
        }
        return std::borrow::Cow::Borrowed(name);
    }
    let mut s = String::with_capacity(name.len() + 1);
    if name.starts_with(|c: char| c.is_ascii_digit()) {
        s.push('_');
    }
    for c in name.chars() {
        s.push(if ok_char(c) { c } else { '_' });
    }
    std::borrow::Cow::Owned(s)
}

/// The name declared in the type-definition block, shared by its uses.
#[doc(hidden)]
pub fn c_type_definition_name(ct: &crate::dtype::Datatype) -> Option<std::borrow::Cow<'_, str>> {
    use crate::dtype::DatatypeKind;
    if ct.is_core_type() || ct.get_name().is_empty() || ct.has_stripped() {
        return None;
    }
    (ct.get_typedef().is_some()
        || matches!(
            &ct.kind,
            DatatypeKind::Struct { .. } | DatatypeKind::Union { .. }
        )
        || ct.is_enum_type())
    .then(|| sanitize_type_name(ct.get_name()))
}

/// (unlace, GH-340) Make `raw` safe to interpolate into a `/* … */` comment.
///
/// The `/* renamed from "<raw>" */` note prints the type name a binary actually
/// carried, and that string is unvalidated binary data: a `*/` in it closes the
/// comment early and turns the rest of the line into code, and a newline splits
/// the comment across two lines. Both re-open, in a different construct, exactly
/// the hole [`sanitize_type_name`] was written to close — so the note escapes
/// what it quotes. Every ASCII control byte becomes a space and both comment
/// delimiters lose their second character to `_`; nothing else is touched, so a
/// name that could never break a comment prints verbatim.
pub(super) fn comment_safe(raw: &str) -> std::borrow::Cow<'_, str> {
    let breaks = |w: &[u8]| matches!(w, [b'*', b'/'] | [b'/', b'*']);
    let bytes = raw.as_bytes();
    let clean = !bytes.iter().any(|b| b.is_ascii_control()) && !bytes.windows(2).any(breaks);
    if clean {
        return std::borrow::Cow::Borrowed(raw);
    }
    let mut out = String::with_capacity(raw.len());
    for (i, c) in raw.char_indices() {
        if c.is_ascii_control() {
            out.push(' ');
        } else if i > 0 && breaks(&bytes[i - 1..i + 1]) {
            out.push('_');
        } else {
            out.push(c);
        }
    }
    std::borrow::Cow::Owned(out)
}

/// (unlace `globalref`) `T name` for a global of type `ct`, via the same
/// declarator builder a structure member uses.
pub fn declaration_text(
    ct: &std::rc::Rc<crate::dtype::Datatype>,
    name: &str,
    rt: RealTypeCtx,
) -> String {
    field_decl_text(ct, name, rt.clone())
}

/// (unlace `globalref`) The name the printer gives the unnamed global at `addr`.
pub fn global_data_name(arch: &Architecture, addr: u64) -> String {
    crate::stringglobalnames::global_name(arch, addr)
}

/// (unlace) One member declaration `<front><name><back>` via the C-declarator
/// builder [`declarator_parts`] — the same front/name spacing rule the emit
/// loop uses (`a `*` front glues to the identifier with no space).
pub(super) fn field_decl_text(
    ct: &std::rc::Rc<crate::dtype::Datatype>,
    name: &str,
    rt: RealTypeCtx,
) -> String {
    let (front, back) = declarator_parts(ct, rt.clone());
    let sep = if front.ends_with('*') || name.is_empty() {
        ""
    } else {
        " "
    };
    format!("{front}{sep}{name}{back}")
}

/// (unlace) The unsigned C integer spelling for a byte size (the empty-enum /
/// fallback scalar spelling; 8 covers any larger size best-effort).
pub(super) fn unsigned_c_int_of_size(size: int4) -> &'static str {
    match size {
        1 => "unsigned char",
        2 => "unsigned short",
        4 => "unsigned int",
        _ => "unsigned long long",
    }
}

/// (unlace) Render ONE complete composite (struct/union) body definition —
/// `struct <name> { … };` — as a pure function of the data-type.
///
/// Struct field-offset gaps and trailing padding (vs `get_size()`) become
/// explicit `undefined1 _pad<hexoff>[N];` members.  Bitfields render
/// best-effort as `<type> <name> : <bits>;` with padding suppressed (their
/// byte coverage overlaps the gap computation).  Unions carry no padding.
/// Returns `""` for a non-composite kind.
#[doc(hidden)]
pub fn compose_type_body(
    ct: &std::rc::Rc<crate::dtype::Datatype>,
    name: &str,
    rt: RealTypeCtx,
) -> String {
    use crate::dtype::DatatypeKind;
    let rt = rt.for_type_definition();
    let mut out = String::new();
    match &ct.kind {
        DatatypeKind::Struct { field, bitfield } => {
            out.push_str(&format!("struct {name} {{\n"));
            let have_bits = !bitfield.is_empty();
            let mut cur: int4 = 0;
            for f in field {
                if !have_bits && f.offset > cur {
                    out.push_str(&format!(
                        "    undefined1 _pad{:x}[{}];\n",
                        cur,
                        f.offset - cur
                    ));
                }
                let fname = sanitize_type_name(&f.name);
                out.push_str(&format!(
                    "    {};\n",
                    field_decl_text(&f.field_type, &fname, rt.clone())
                ));
                cur = cur.max(f.offset + f.field_type.get_size());
            }
            if have_bits {
                out.push_str("    /* bitfields (byte layout approximate; padding omitted) */\n");
                for bf in bitfield {
                    let bname = sanitize_type_name(&bf.name);
                    out.push_str(&format!(
                        "    {} : {};\n",
                        field_decl_text(&bf.field_type, &bname, rt.clone()),
                        bf.num_bits
                    ));
                }
            } else if ct.get_size() > cur {
                out.push_str(&format!(
                    "    undefined1 _pad{:x}[{}];\n",
                    cur,
                    ct.get_size() - cur
                ));
            }
            out.push_str(&format!("}}{};\n", crate::stacklayout::suffix(ct)));
        }
        DatatypeKind::Union { field } => {
            out.push_str(&format!("union {name} {{\n"));
            for f in field {
                let fname = sanitize_type_name(&f.name);
                out.push_str(&format!(
                    "    {};\n",
                    field_decl_text(&f.field_type, &fname, rt.clone())
                ));
            }
            out.push_str(&format!("}}{};\n", crate::stacklayout::suffix(ct)));
        }
        _ => {}
    }
    out
}

/// (unlace) Render ONE enum definition — `typedef enum <name> { A = <v>, … }
/// <name>;` — from the `TypeEnum` namemap.  A `TYPE_INT`-facing enum (the
/// decode-time `TYPE_ENUM_INT` form) prints signed decimal values
/// (sign-extended by the enum's byte size); the `TYPE_UINT` form prints hex.
/// An empty namemap falls back to a plain integer typedef (an empty `enum {}`
/// is not valid C).
#[doc(hidden)]
pub fn compose_enum_body(ct: &std::rc::Rc<crate::dtype::Datatype>, name: &str) -> String {
    use crate::dtype::type_metatype;
    let Some(nmap) = ct.as_enum_namemap() else {
        return String::new();
    };
    let size = ct.get_size();
    if nmap.is_empty() {
        return format!(
            "typedef {} {name}; /* empty enum */\n",
            unsigned_c_int_of_size(size)
        );
    }
    let signed = ct.get_metatype() == type_metatype::TYPE_INT;
    let mut out = format!("typedef enum {name} {{\n");
    let n = nmap.len();
    for (i, (val, ename)) in nmap.iter().enumerate() {
        let ename = sanitize_type_name(ename);
        let vtxt = if signed && size > 0 && size <= 8 {
            format!(
                "{}",
                unlace_base::address::sign_extend(*val as i64, size * 8 - 1)
            )
        } else {
            format!("0x{val:x}")
        };
        let comma = if i + 1 < n { "," } else { "" };
        out.push_str(&format!("    {ename} = {vtxt}{comma}\n"));
    }
    out.push_str(&format!("}} {name};\n"));
    out
}

/// (unlace) Render ONE typedef — `typedef <declarator around name>;` — of the
/// typedef's immediate base type (`get_typedef()`), via the C-declarator
/// builder (so `typedef char *mystr;` and array typedefs lay out correctly).
#[doc(hidden)]
pub fn compose_typedef_line(
    base: &std::rc::Rc<crate::dtype::Datatype>,
    name: &str,
    rt: RealTypeCtx,
) -> String {
    format!(
        "typedef {};\n",
        field_decl_text(base, name, rt.for_type_definition())
    )
}

/// (unlace) The full `docTypeDefinitions` walk over an already
/// dependency-ordered type list (see
/// [`PrintC::doc_type_definitions`](PrintC::doc_type_definitions) for the
/// shape + divergence notes): pass 1 emits the struct/union forward-declaration
/// block, pass 2 the bodies (struct/union/enum/typedef) in dependency order.
/// Pure over the input slice for unit-testability.
#[doc(hidden)]
pub fn render_type_definitions(
    deporder: &[std::rc::Rc<crate::dtype::Datatype>],
    rt: RealTypeCtx,
) -> String {
    use crate::dtype::{Datatype, DatatypeKind};
    use std::collections::HashSet;
    use std::rc::Rc;

    let is_composite = |ct: &Rc<Datatype>| {
        matches!(
            &ct.kind,
            DatatypeKind::Struct { .. } | DatatypeKind::Union { .. }
        )
    };
    // Which sanitized composite tag names have a COMPLETE definition somewhere
    // (drives the `/* opaque */` annotation on forward-only names).
    let mut complete_names: HashSet<String> = HashSet::new();
    for ct in deporder {
        if is_composite(ct) && ct.get_typedef().is_none() && !ct.is_incomplete()
            && let Some(name) = c_type_definition_name(ct) {
                complete_names.insert(name.into_owned());
            }
    }

    let mut out = String::new();

    // -- Pass 1: the forward-declaration block (every struct/union tag). -----
    let mut fwd: HashSet<String> = HashSet::new();
    for ct in deporder {
        if !is_composite(ct) || ct.get_typedef().is_some() {
            continue;
        }
        let Some(name) = c_type_definition_name(ct) else {
            continue;
        };
        let raw = ct.get_name();
        if !fwd.insert(name.to_string()) {
            continue; // one forward declaration per tag name
        }
        let kw = if matches!(&ct.kind, DatatypeKind::Union { .. }) {
            "union"
        } else {
            "struct"
        };
        out.push_str(&format!("typedef {kw} {name} {name};"));
        if name != raw {
            out.push_str(&format!(" /* renamed from \"{}\" */", comment_safe(raw)));
        }
        if !complete_names.contains(name.as_ref()) {
            out.push_str(" /* opaque */");
        }
        out.push('\n');
    }
    if !fwd.is_empty() {
        out.push('\n');
    }

    // -- Pass 2: bodies in dependency order. ---------------------------------
    let mut defined: HashSet<String> = HashSet::new();
    for ct in deporder {
        let Some(name) = c_type_definition_name(ct) else {
            continue;
        };
        let raw = ct.get_name();
        if let Some(base) = ct.get_typedef() {
            // A typedef (of anything, including a composite clone — checked
            // FIRST since the clone carries the base's kind).  The struct-tag
            // forward typedef already claims its own name, so a same-named
            // typedef-of-struct is exactly that declaration — skip as a dup.
            if fwd.contains(name.as_ref()) || !defined.insert(name.to_string()) {
                out.push_str(&format!("/* duplicate type name skipped: {name} */\n"));
                continue;
            }
            if name != raw {
                out.push_str(&format!("/* renamed from \"{}\" */\n", comment_safe(raw)));
            }
            out.push_str(&compose_typedef_line(base, &name, rt.clone()));
            out.push('\n');
        } else if is_composite(ct) {
            if ct.is_incomplete() {
                continue; // forward-declared only (`/* opaque */`)
            }
            if !defined.insert(name.to_string()) {
                out.push_str(&format!("/* duplicate type name skipped: {name} */\n"));
                continue;
            }
            if name != raw {
                out.push_str(&format!("/* renamed from \"{}\" */\n", comment_safe(raw)));
            }
            out.push_str(&compose_type_body(ct, &name, rt.clone()));
            out.push('\n');
        } else if ct.is_enum_type() {
            if fwd.contains(name.as_ref()) || !defined.insert(name.to_string()) {
                out.push_str(&format!("/* duplicate type name skipped: {name} */\n"));
                continue;
            }
            if name != raw {
                out.push_str(&format!("/* renamed from \"{}\" */\n", comment_safe(raw)));
            }
            out.push_str(&compose_enum_body(ct, &name));
            out.push('\n');
        }
    }
    out
}

/// The `(front, back)` type text to render around a declaration's name.
///
/// The C body moved to `CSpeller::type_name` (`p9_emit/langc.rs`) when the
/// output-language seam landed.
pub(super) fn type_name_for_decl(
    t: &std::rc::Rc<crate::dtype::Datatype>,
    rt: RealTypeCtx,
) -> (String, String) {
    rt.speller().type_name(&rt, t)
}
