//! Directives to rows and back.
//!
//! A project row is the durable form of one `--assert` directive
//! (`docs/cli.md`, "--assert"); the decompiler applies the project by rendering
//! its rows back into directives, so a project and a hand-written `@file` reach
//! the engine through the same path. This module only splits a directive into
//! its key and value: the CLI checks the directive against the engine's own
//! grammar before storing it.

use crate::ProjectError;

/// One stored fact: the row a directive writes.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Change {
    /// `function <start>[-<end>][=<name>]`: a function entry, its extent and its name.
    Function {
        address: u64,
        end: Option<u64>,
        name: Option<String>,
    },
    /// `prototype <func> <C declaration>`.
    Prototype {
        function: String,
        declaration: String,
    },
    /// `name [<func>::]<symbol> <newname>`.
    LocalName { target: String, name: String },
    /// `type [<func>::]<symbol> <C type>`.
    LocalType { target: String, ty: String },
    /// `isolate [<func>::]<symbol>`.
    LocalIsolate { target: String },
    /// `typedef <C declaration>`, keyed by the name it declares.
    Type { name: String, declaration: String },
    /// `data <addr> <C typedeclaration>`.
    Data { address: u64, declaration: String },
    /// `comment [<func>::]<addr> <text>`.
    Comment { target: String, text: String },
    /// `callee [<func>::]<callsite> <name|address>`.
    Callee { target: String, callee: String },
    /// `callproto [<func>::]<callsite> <C declaration>`.
    CallProto { target: String, prototype: String },
    /// `bytes <addr> <hex>` (an `@FILE` is read by the caller first).
    Patch { address: u64, bytes: Vec<u8> },
    /// `bookmark <addr> <title>`: project-only, never sent to the engine.
    Bookmark { address: u64, title: String },
    /// Every other directive (`param`, `return`, `flow`, `format`, `readonly`,
    /// `volatile`, `register`, `noreturn`, `split`, `map`, `noprop`), stored verbatim under its kind and target.
    Assertion {
        kind: String,
        target: String,
        directive: String,
    },
}

/// The directive kinds stored verbatim in the `assertions` table.
pub const VERBATIM: &[&str] = &[
    "param", "return", "flow", "format", "readonly", "volatile", "register", "noreturn", "split",
    "map", "noprop",
];

fn take_token(s: &str) -> (&str, &str) {
    let s = s.trim_start();
    match s.find(char::is_whitespace) {
        Some(at) => (&s[..at], s[at..].trim_start()),
        None => (s, ""),
    }
}

fn invalid(msg: impl Into<String>) -> ProjectError {
    ProjectError::Invalid(msg.into())
}

/// A hexadecimal address, with or without `0x`.
pub fn parse_address(text: &str) -> Result<u64, ProjectError> {
    let t = text.trim();
    let digits = t
        .strip_prefix("0x")
        .or_else(|| t.strip_prefix("0X"))
        .unwrap_or(t);
    u64::from_str_radix(digits, 16)
        .map_err(|_| invalid(format!("not a hexadecimal address: {t:?}")))
}

/// Bytes written as hex digits (whitespace ignored).
pub fn parse_hex_bytes(text: &str) -> Result<Vec<u8>, ProjectError> {
    let digits: String = text.chars().filter(|c| !c.is_whitespace()).collect();
    if digits.is_empty() || digits.len() % 2 != 0 {
        return Err(invalid(format!(
            "bytes need an even, non-zero number of hex digits: {text:?}"
        )));
    }
    (0..digits.len())
        .step_by(2)
        .map(|i| {
            u8::from_str_radix(&digits[i..i + 2], 16)
                .map_err(|_| invalid(format!("not hex bytes: {text:?}")))
        })
        .collect()
}

pub fn hex_bytes(bytes: &[u8]) -> String {
    bytes.iter().map(|b| format!("{b:02x}")).collect()
}

/// The name a `typedef` declaration declares: `struct NAME`/`union NAME`/`enum NAME`
/// for a tagged aggregate, otherwise the last identifier before the final `;`.
/// A declaration whose name cannot be found is keyed by itself.
pub fn typedef_name(decl: &str) -> String {
    let d = decl.trim().trim_end_matches(';').trim();
    let mut words = d
        .split(|c: char| !(c.is_alphanumeric() || c == '_'))
        .filter(|w| !w.is_empty());
    let first = words.next().unwrap_or("");
    if matches!(first, "struct" | "union" | "enum") {
        if let Some(tag) = words.next() {
            if !d.trim_start().starts_with("typedef") {
                return format!("{first} {tag}");
            }
        }
    }
    if first == "typedef" {
        // a function-pointer typedef names the identifier after `(*`
        if let Some(at) = d.find("(*") {
            let name: String = d[at + 2..]
                .trim_start()
                .chars()
                .take_while(|c| c.is_alphanumeric() || *c == '_')
                .collect();
            if !name.is_empty() {
                return name;
            }
        }
        // otherwise the last identifier outside braces, brackets and parentheses
        let mut depth = 0i32;
        let mut last = String::new();
        let mut cur = String::new();
        for c in d.chars() {
            if c.is_alphanumeric() || c == '_' {
                cur.push(c);
                continue;
            }
            if depth == 0 && !cur.is_empty() && !cur.starts_with(|f: char| f.is_ascii_digit()) {
                last = cur.clone();
            }
            cur.clear();
            match c {
                '{' | '[' | '(' => depth += 1,
                '}' | ']' | ')' => depth -= 1,
                _ => {}
            }
        }
        if depth == 0 && !cur.is_empty() && !cur.starts_with(|f: char| f.is_ascii_digit()) {
            last = cur;
        }
        if !last.is_empty() {
            return last;
        }
    }
    d.to_string()
}

/// Split a directive into the row it writes.
pub fn parse(text: &str) -> Result<Change, ProjectError> {
    let (keyword, rest) = take_token(text.trim());
    let need = |what: &str| invalid(format!("{keyword} needs {what}"));
    match keyword {
        "function" => {
            let (range, name) = match rest.split_once('=') {
                Some((r, n)) => (
                    r.trim(),
                    Some(n.trim().to_string()).filter(|n| !n.is_empty()),
                ),
                None => (rest.trim(), None),
            };
            if range.is_empty() {
                return Err(need("<start>[-<end>][=<name>]"));
            }
            let (start, end) = match range.split_once('-') {
                Some((s, e)) => (parse_address(s)?, Some(parse_address(e)?)),
                None => (parse_address(range)?, None),
            };
            Ok(Change::Function {
                address: start,
                end,
                name,
            })
        }
        "prototype" => {
            let (function, decl) = take_token(rest);
            if function.is_empty() || decl.is_empty() {
                return Err(need("<func> then a C declaration"));
            }
            Ok(Change::Prototype {
                function: function.into(),
                declaration: decl.into(),
            })
        }
        "name" => {
            let (target, name) = take_token(rest);
            if target.is_empty() || name.is_empty() {
                return Err(need("[<func>::]<symbol> then the new name"));
            }
            Ok(Change::LocalName {
                target: target.into(),
                name: name.into(),
            })
        }
        "type" => {
            let (target, ty) = take_token(rest);
            if target.is_empty() || ty.is_empty() {
                return Err(need("[<func>::]<symbol> then a C type"));
            }
            Ok(Change::LocalType {
                target: target.into(),
                ty: ty.into(),
            })
        }
        "isolate" => {
            let (target, extra) = take_token(rest);
            if target.is_empty() || !extra.is_empty() {
                return Err(need("exactly one [<func>::]<symbol>"));
            }
            Ok(Change::LocalIsolate {
                target: target.into(),
            })
        }
        "typedef" => {
            if rest.is_empty() {
                return Err(need("a C declaration"));
            }
            Ok(Change::Type {
                name: typedef_name(rest),
                declaration: rest.into(),
            })
        }
        "data" => {
            let (addr, decl) = take_token(rest);
            if addr.is_empty() || decl.is_empty() {
                return Err(need("<addr> then a C declaration"));
            }
            Ok(Change::Data {
                address: parse_address(addr)?,
                declaration: decl.into(),
            })
        }
        "comment" => {
            let (target, text) = take_token(rest);
            if target.is_empty() || text.is_empty() {
                return Err(need("[<func>::]<addr> then the text"));
            }
            Ok(Change::Comment {
                target: target.into(),
                text: text.into(),
            })
        }
        "callee" => {
            let (target, callee) = take_token(rest);
            if target.is_empty() || callee.is_empty() {
                return Err(need("[<func>::]<callsite> then a name or address"));
            }
            Ok(Change::Callee {
                target: target.into(),
                callee: callee.into(),
            })
        }
        "callproto" => {
            let (target, decl) = take_token(rest);
            if target.is_empty() || decl.is_empty() {
                return Err(need("[<func>::]<callsite> then a C declaration"));
            }
            Ok(Change::CallProto {
                target: target.into(),
                prototype: decl.into(),
            })
        }
        "bytes" => {
            let (addr, hex) = take_token(rest);
            if addr.is_empty() || hex.is_empty() {
                return Err(need("<addr> then hex bytes"));
            }
            if hex.starts_with('@') {
                return Err(invalid(
                    "bytes @FILE: read the file and pass its bytes as hex",
                ));
            }
            Ok(Change::Patch {
                address: parse_address(addr)?,
                bytes: parse_hex_bytes(hex)?,
            })
        }
        "bookmark" => {
            let (addr, title) = take_token(rest);
            if addr.is_empty() {
                return Err(need("<addr> [title]"));
            }
            Ok(Change::Bookmark {
                address: parse_address(addr)?,
                title: title.into(),
            })
        }
        kind if VERBATIM.contains(&kind) => {
            let (first, tail) = take_token(rest);
            if first.is_empty() {
                return Err(need("its arguments"));
            }
            let target = match kind {
                // `format [<func>::]<addr> <form> [<value>]`: one row per constant read there.
                "format" => {
                    let (_form, value) = take_token(tail);
                    if value.is_empty() {
                        first.to_string()
                    } else {
                        format!("{first} {value}")
                    }
                }
                // `register <name> <value> [<range>]`: one row per register and range.
                "register" => {
                    let (_value, range) = take_token(tail);
                    if range.is_empty() {
                        first.to_string()
                    } else {
                        format!("{first} {range}")
                    }
                }
                _ => first.to_string(),
            };
            Ok(Change::Assertion {
                kind: kind.into(),
                target,
                directive: format!("{kind} {rest}"),
            })
        }
        "" => Err(invalid("empty directive")),
        other => Err(invalid(format!("unknown directive {other:?}"))),
    }
}

/// The directive text of a `functions` row.
pub fn function_directive(address: u64, end: Option<u64>, name: Option<&str>) -> String {
    let mut out = format!("function {address:#x}");
    if let Some(end) = end {
        out.push_str(&format!("-{end:#x}"));
    }
    if let Some(name) = name {
        out.push('=');
        out.push_str(name);
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn functions_parse_with_and_without_extent_and_name() {
        assert_eq!(
            parse("function 0x4013c9-0x401420=stage1").unwrap(),
            Change::Function {
                address: 0x4013c9,
                end: Some(0x401420),
                name: Some("stage1".into())
            }
        );
        assert_eq!(
            parse("function 4014a0 = main").unwrap(),
            Change::Function {
                address: 0x4014a0,
                end: None,
                name: Some("main".into())
            }
        );
        assert_eq!(
            parse("function 0x10").unwrap(),
            Change::Function {
                address: 0x10,
                end: None,
                name: None
            }
        );
        assert_eq!(
            function_directive(0x10, Some(0x20), Some("f")),
            "function 0x10-0x20=f"
        );
    }

    #[test]
    fn locals_and_callsites_keep_their_scoped_target() {
        assert_eq!(
            parse("name main::v2 credbuf").unwrap(),
            Change::LocalName {
                target: "main::v2".into(),
                name: "credbuf".into()
            }
        );
        assert_eq!(
            parse("type v2 char[16]").unwrap(),
            Change::LocalType {
                target: "v2".into(),
                ty: "char[16]".into()
            }
        );
        assert_eq!(
            parse("callproto 0x13b0 void f(char *fmt, int a)").unwrap(),
            Change::CallProto {
                target: "0x13b0".into(),
                prototype: "void f(char *fmt, int a)".into()
            }
        );
    }

    #[test]
    fn typedefs_are_keyed_by_the_name_they_declare() {
        assert_eq!(
            typedef_name("struct point { int x; int y; };"),
            "struct point"
        );
        assert_eq!(
            typedef_name("typedef struct { int x; } point_t;"),
            "point_t"
        );
        assert_eq!(typedef_name("typedef int (*cb)(int);"), "cb");
        assert_eq!(typedef_name("typedef char name[16];"), "name");
        assert_eq!(typedef_name("enum color { RED, GREEN };"), "enum color");
    }

    #[test]
    fn noreturn_is_stored_by_its_function() {
        assert_eq!(
            parse("noreturn 0x401200").unwrap(),
            Change::Assertion {
                kind: "noreturn".into(),
                target: "0x401200".into(),
                directive: "noreturn 0x401200".into(),
            }
        );
    }

    #[test]
    fn verbatim_kinds_keep_the_directive_and_a_target() {
        assert_eq!(
            parse("format 0x1005 oct 0x1ff").unwrap(),
            Change::Assertion {
                kind: "format".into(),
                target: "0x1005 0x1ff".into(),
                directive: "format 0x1005 oct 0x1ff".into()
            }
        );
        assert_eq!(
            parse("readonly 0x404028+8").unwrap(),
            Change::Assertion {
                kind: "readonly".into(),
                target: "0x404028+8".into(),
                directive: "readonly 0x404028+8".into()
            }
        );
    }

    #[test]
    fn bytes_and_errors() {
        assert_eq!(
            parse("bytes 0x43d0c6 8bd5 81").unwrap(),
            Change::Patch {
                address: 0x43d0c6,
                bytes: vec![0x8b, 0xd5, 0x81]
            }
        );
        assert!(parse("bytes 0x10 @x.bin").is_err());
        assert!(parse("bytes 0x10 abc").is_err());
        assert!(parse("prototype main").is_err());
        assert!(parse("frobnicate x").is_err());
        assert!(parse("").is_err());
    }
}
