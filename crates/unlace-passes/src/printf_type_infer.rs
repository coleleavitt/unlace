//! t198 — printf/scanf format-string variadic-argument type inference.
//!
//! When a call targets a known variadic libc routine (printf, fprintf,
//! sprintf, scanf, …) and the format-string argument is a constant
//! pointing into `.rodata`, parse the format specifiers and emit an
//! inferred type for each subsequent variadic argument. Results are
//! exposed via [`infer_printf_arg_types`] so a downstream printer can
//! render `(int)x` casts or `/* %d */` trailing comments.
//!
//! This pass is detection-only — it doesn't mutate the IR — keeping it
//! safe under the v1 IR-spec freeze.

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::Type;

/// Known variadic libc routines whose first argument is a printf-style
/// format string. The order of variadic args after this slot is what
/// this module infers types for.
pub const PRINTF_FAMILY: &[&str] = &[
    "printf",
    "fprintf",
    "sprintf",
    "snprintf",
    "dprintf",
    "asprintf",
    "syslog",
    "vprintf",
    "vfprintf",
    "vsprintf",
    "vsnprintf",
];

/// Known scanf-style routines — same format-string syntax but argument
/// types are pointers to the format-specifier type (e.g. `%d` → `int*`).
pub const SCANF_FAMILY: &[&str] = &["scanf", "fscanf", "sscanf", "vscanf", "vfscanf", "vsscanf"];

/// Returns `true` when `name` is a known variadic libc routine that
/// expects a printf/scanf-style format string in its first argument.
pub fn is_format_string_call(name: &str) -> bool {
    PRINTF_FAMILY.contains(&name) || SCANF_FAMILY.contains(&name)
}

/// Returns `true` when `name` is in the scanf family (args are `T*`
/// rather than `T`).
pub fn is_scanf(name: &str) -> bool {
    SCANF_FAMILY.contains(&name)
}

/// Parse a printf-style format string and return the inferred type for
/// each `%`-specifier in source order (escaped `%%` are skipped).
///
/// For scanf-family callers, wrap each result in a pointer:
/// `Type::Ptr(Box::new(parsed_type))`.
pub fn parse_format_specifiers(fmt: &str) -> Vec<Type> {
    let mut out = Vec::new();
    let bytes = fmt.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] != b'%' {
            i += 1;
            continue;
        }
        i += 1;
        if i >= bytes.len() {
            break;
        }
        // %% — literal percent, no argument
        if bytes[i] == b'%' {
            i += 1;
            continue;
        }
        // Skip flags
        while i < bytes.len() && matches!(bytes[i], b'-' | b'+' | b' ' | b'#' | b'0') {
            i += 1;
        }
        // Skip width
        while i < bytes.len() && bytes[i].is_ascii_digit() {
            i += 1;
        }
        // Skip precision
        if i < bytes.len() && bytes[i] == b'.' {
            i += 1;
            while i < bytes.len() && bytes[i].is_ascii_digit() {
                i += 1;
            }
        }
        // Length modifiers (h, hh, l, ll, L, j, z, t)
        let length = parse_length_modifier(&bytes[i..]);
        i += length.consumed;
        if i >= bytes.len() {
            break;
        }
        // Conversion specifier
        let ty = match bytes[i] {
            b'd' | b'i' => match length.kind {
                LengthKind::HH => Type::Primitive(PrimitiveType::Int(1)),
                LengthKind::H => Type::Primitive(PrimitiveType::Int(2)),
                LengthKind::L | LengthKind::Z | LengthKind::J | LengthKind::T => {
                    Type::Primitive(PrimitiveType::Int(8))
                }
                LengthKind::LL => Type::Primitive(PrimitiveType::Int(8)),
                LengthKind::None => Type::Primitive(PrimitiveType::Int(4)),
                LengthKind::CapitalL => Type::Primitive(PrimitiveType::Int(8)),
            },
            b'u' | b'x' | b'X' | b'o' | b'b' => match length.kind {
                LengthKind::HH => Type::Primitive(PrimitiveType::UnsignedInt(1)),
                LengthKind::H => Type::Primitive(PrimitiveType::UnsignedInt(2)),
                LengthKind::L | LengthKind::Z | LengthKind::J | LengthKind::T => {
                    Type::Primitive(PrimitiveType::UnsignedInt(8))
                }
                LengthKind::LL | LengthKind::CapitalL => {
                    Type::Primitive(PrimitiveType::UnsignedInt(8))
                }
                LengthKind::None => Type::Primitive(PrimitiveType::UnsignedInt(4)),
            },
            b'f' | b'e' | b'g' | b'F' | b'E' | b'G' | b'a' | b'A' => {
                // %f / %g are double on the variadic side (C promotion);
                // %Lf is long double — we model as Double too.
                Type::Primitive(PrimitiveType::Double)
            }
            b'c' => Type::Primitive(PrimitiveType::Int(1)),
            b's' => Type::Ptr(Box::new(Type::Primitive(PrimitiveType::Int(1)))),
            b'p' => Type::Ptr(Box::new(Type::Primitive(PrimitiveType::Unknown))),
            b'n' => Type::Ptr(Box::new(Type::Primitive(PrimitiveType::Int(4)))),
            _ => Type::Primitive(PrimitiveType::Unknown),
        };
        out.push(ty);
        i += 1;
    }
    out
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum LengthKind {
    None,
    H,
    HH,
    L,
    LL,
    CapitalL,
    J,
    Z,
    T,
}

struct Length {
    kind: LengthKind,
    consumed: usize,
}

fn parse_length_modifier(bytes: &[u8]) -> Length {
    if bytes.starts_with(b"hh") {
        return Length {
            kind: LengthKind::HH,
            consumed: 2,
        };
    }
    if bytes.starts_with(b"ll") {
        return Length {
            kind: LengthKind::LL,
            consumed: 2,
        };
    }
    if bytes.first() == Some(&b'h') {
        return Length {
            kind: LengthKind::H,
            consumed: 1,
        };
    }
    if bytes.first() == Some(&b'l') {
        return Length {
            kind: LengthKind::L,
            consumed: 1,
        };
    }
    if bytes.first() == Some(&b'L') {
        return Length {
            kind: LengthKind::CapitalL,
            consumed: 1,
        };
    }
    if bytes.first() == Some(&b'j') {
        return Length {
            kind: LengthKind::J,
            consumed: 1,
        };
    }
    if bytes.first() == Some(&b'z') {
        return Length {
            kind: LengthKind::Z,
            consumed: 1,
        };
    }
    if bytes.first() == Some(&b't') {
        return Length {
            kind: LengthKind::T,
            consumed: 1,
        };
    }
    Length {
        kind: LengthKind::None,
        consumed: 0,
    }
}

/// Full driver: parse a format string and apply the scanf pointer-wrap
/// rule. Returns one `Type` per variadic argument the call expects.
pub fn infer_printf_arg_types(callee: &str, format: &str) -> Vec<Type> {
    let mut types = parse_format_specifiers(format);
    if is_scanf(callee) {
        for t in types.iter_mut() {
            let inner = std::mem::replace(t, Type::Primitive(PrimitiveType::Unknown));
            *t = Type::Ptr(Box::new(inner));
        }
    }
    types
}

#[cfg(test)]
mod tests {
    use super::*;

    fn assert_int4(t: &Type) {
        match t {
            Type::Primitive(PrimitiveType::Int(4)) => {}
            other => panic!("expected int4, got {other:?}"),
        }
    }

    #[test]
    fn t198_basic_printf_d() {
        let got = infer_printf_arg_types("printf", "value=%d\n");
        assert_eq!(got.len(), 1);
        assert_int4(&got[0]);
    }

    #[test]
    fn t198_mixed_s_d() {
        let got = infer_printf_arg_types("printf", "%s says %d");
        assert_eq!(got.len(), 2);
        assert!(matches!(got[0], Type::Ptr(_)));
        assert_int4(&got[1]);
    }

    #[test]
    fn t198_scanf_wraps_in_pointer() {
        let got = infer_printf_arg_types("scanf", "%ld %lf");
        assert_eq!(got.len(), 2);
        // Each result must be Ptr<inner>.
        for t in &got {
            assert!(matches!(t, Type::Ptr(_)));
        }
    }

    #[test]
    fn t198_unknown_callee_still_parses_format() {
        // We don't gate on callee name in parse_format_specifiers — but
        // is_format_string_call lets the caller decide whether to even
        // invoke us. Verify the predicate filters non-libc names.
        assert!(!is_format_string_call("my_helper"));
        assert!(is_format_string_call("printf"));
        assert!(is_format_string_call("scanf"));
    }

    #[test]
    fn t198_double_percent_escape_no_arg() {
        let got = infer_printf_arg_types("printf", "100%% sure");
        assert!(got.is_empty(), "%% is a literal, no variadic arg");
    }

    #[test]
    fn t198_length_modifiers() {
        let got = infer_printf_arg_types("printf", "%hhd %hd %ld %lld %zu");
        assert_eq!(got.len(), 5);
        match &got[0] {
            Type::Primitive(PrimitiveType::Int(1)) => {}
            t => panic!("hhd should be int1, got {t:?}"),
        }
        match &got[1] {
            Type::Primitive(PrimitiveType::Int(2)) => {}
            t => panic!("hd should be int2, got {t:?}"),
        }
        match &got[2] {
            Type::Primitive(PrimitiveType::Int(8)) => {}
            t => panic!("ld should be int8, got {t:?}"),
        }
        match &got[3] {
            Type::Primitive(PrimitiveType::Int(8)) => {}
            t => panic!("lld should be int8, got {t:?}"),
        }
        match &got[4] {
            Type::Primitive(PrimitiveType::UnsignedInt(8)) => {}
            t => panic!("zu should be unsigned-int8, got {t:?}"),
        }
    }
}
