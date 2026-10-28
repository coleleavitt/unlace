//! Declarations that make engine output compile as C: the type names of the output style and
//! the p-code helper operations Ghidra prints as calls (`CONCAT44`, `SUB84`, `ZEXT48`,
//! `CARRY4`, ...). Only what the text uses is declared.

use std::collections::BTreeSet;

use unlace_engine::output_style::OutputStyle;

const HEADER: &str = "#include <stdbool.h>\n#include <stdint.h>\n";

/// `(identifier, definition)` for type names, in dependency order.
const IDA_TYPES: &[(&str, &str)] = &[
    ("__int8", "#define __int8 char"),
    ("__int16", "#define __int16 short"),
    ("__int64", "#define __int64 long long"),
    ("_BYTE", "typedef uint8_t _BYTE;"),
    ("_WORD", "typedef uint16_t _WORD;"),
    ("_DWORD", "typedef uint32_t _DWORD;"),
    ("_QWORD", "typedef uint64_t _QWORD;"),
    ("char16_t", "typedef uint16_t char16_t;"),
    ("char32_t", "typedef uint32_t char32_t;"),
    ("code", "typedef void code();"),
];

const GHIDRA_TYPES: &[(&str, &str)] = &[
    ("int1", "typedef int8_t int1;"),
    ("int2", "typedef int16_t int2;"),
    ("int4", "typedef int32_t int4;"),
    ("int8", "typedef int64_t int8;"),
    ("uint1", "typedef uint8_t uint1;"),
    ("uint2", "typedef uint16_t uint2;"),
    ("uint4", "typedef uint32_t uint4;"),
    ("uint8", "typedef uint64_t uint8;"),
    ("xunknown1", "typedef uint8_t xunknown1;"),
    ("xunknown2", "typedef uint16_t xunknown2;"),
    ("xunknown4", "typedef uint32_t xunknown4;"),
    ("xunknown8", "typedef uint64_t xunknown8;"),
    ("float4", "typedef float float4;"),
    ("float8", "typedef double float8;"),
    ("float10", "typedef long double float10;"),
    ("wchar2", "typedef uint16_t wchar2;"),
    ("wchar4", "typedef uint32_t wchar4;"),
    ("code", "typedef void code();"),
];

const SIZES: [u32; 6] = [1, 2, 4, 8, 10, 16];

/// The declarations `text` needs, followed by a blank line; empty when it needs none.
pub fn prelude_for(text: &str, style: OutputStyle) -> String {
    let identifiers = identifiers(text);
    let types = match style {
        OutputStyle::Ghidra => GHIDRA_TYPES,
        OutputStyle::Ida => IDA_TYPES,
    };
    let mut lines: Vec<String> = types
        .iter()
        .filter(|(name, _)| identifiers.contains(*name))
        .map(|(_, definition)| definition.to_string())
        .collect();
    lines.extend(
        identifiers
            .iter()
            .filter_map(|name| helper_definition(name)),
    );
    if lines.is_empty() {
        return String::new();
    }
    let mut out = String::from(HEADER);
    for line in lines {
        out.push_str(&line);
        out.push('\n');
    }
    out.push('\n');
    out
}

fn identifiers(text: &str) -> BTreeSet<&str> {
    text.split(|c: char| !(c.is_ascii_alphanumeric() || c == '_'))
        .filter(|word| word.starts_with(|c: char| c.is_ascii_alphabetic() || c == '_'))
        .collect()
}

fn helper_definition(name: &str) -> Option<String> {
    if name == "halt_baddata" {
        return Some("#define halt_baddata() __builtin_trap()".to_string());
    }
    if name == "POPCOUNT" {
        return Some(
            "#define POPCOUNT(x) __builtin_popcountll((unsigned long long)(x))".to_string(),
        );
    }
    let digits_at = name.find(|c: char| c.is_ascii_digit())?;
    let (operation, digits) = name.split_at(digits_at);
    match operation {
        "CONCAT" | "SUB" | "ZEXT" | "SEXT" => {
            let (first, second) = split_sizes(digits)?;
            let definition = match operation {
                "CONCAT" => format!(
                    "#define {name}(a, b) (({w})({x})(a) << {shift} | ({w})({y})(b))",
                    w = unsigned(first + second)?,
                    x = unsigned(first)?,
                    y = unsigned(second)?,
                    shift = 8 * second,
                ),
                "SUB" => format!(
                    "#define {name}(v, off) (({y})(({x})(v) >> (8 * (off))))",
                    x = unsigned(first)?,
                    y = unsigned(second)?,
                ),
                "ZEXT" => format!(
                    "#define {name}(v) (({y})({x})(v))",
                    x = unsigned(first)?,
                    y = unsigned(second)?
                ),
                _ => format!(
                    "#define {name}(v) (({y})({x})(v))",
                    x = signed(first)?,
                    y = signed(second)?
                ),
            };
            Some(definition)
        }
        "CARRY" | "SCARRY" | "SBORROW" => {
            let size: u32 = digits.parse().ok()?;
            let (u, s) = (unsigned(size)?, signed(size)?);
            Some(match operation {
                "CARRY" => format!("#define {name}(a, b) (({u})(({u})(a) + ({u})(b)) < ({u})(a))"),
                "SCARRY" => format!(
                    "#define {name}(a, b) (((({s})(({u})(a) + ({u})(b))) ^ ({s})(a)) & ((({s})(({u})(a) + ({u})(b))) ^ ({s})(b))) < 0)"
                ),
                _ => format!(
                    "#define {name}(a, b) (((({s})(a) ^ ({s})(b)) & (({s})(a) ^ ({s})(({u})(a) - ({u})(b)))) < 0)"
                ),
            })
        }
        _ => None,
    }
}

/// Split the size digits of a helper name (`44`, `168`, `816`) into input and output sizes.
fn split_sizes(digits: &str) -> Option<(u32, u32)> {
    (1..digits.len()).find_map(|at| {
        let first: u32 = digits[..at].parse().ok()?;
        let second: u32 = digits[at..].parse().ok()?;
        (SIZES.contains(&first) && SIZES.contains(&second)).then_some((first, second))
    })
}

fn unsigned(size: u32) -> Option<&'static str> {
    Some(match size {
        1 => "uint8_t",
        2 => "uint16_t",
        3..=4 => "uint32_t",
        5..=8 => "uint64_t",
        9..=16 => "unsigned __int128",
        _ => return None,
    })
}

fn signed(size: u32) -> Option<&'static str> {
    Some(match size {
        1 => "int8_t",
        2 => "int16_t",
        3..=4 => "int32_t",
        5..=8 => "int64_t",
        9..=16 => "__int128",
        _ => return None,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn declares_only_used_names() {
        let prelude = prelude_for(
            "_QWORD f(int a1) { return CONCAT44(a1, a1) + ZEXT48(a1); }",
            OutputStyle::Ida,
        );
        assert!(prelude.contains("typedef uint64_t _QWORD;"));
        assert!(prelude.contains(
            "#define CONCAT44(a, b) ((uint64_t)(uint32_t)(a) << 32 | (uint64_t)(uint32_t)(b))"
        ));
        assert!(prelude.contains("#define ZEXT48(v) ((uint64_t)(uint32_t)(v))"));
        assert!(!prelude.contains("_DWORD"));
        assert_eq!(
            prelude_for("int f(void) { return 0; }", OutputStyle::Ida),
            ""
        );
    }

    #[test]
    fn splits_two_digit_sizes() {
        assert_eq!(split_sizes("168"), Some((16, 8)));
        assert_eq!(split_sizes("816"), Some((8, 16)));
        assert_eq!(split_sizes("44"), Some((4, 4)));
    }
}
