//! A 64-bit equality on i386 is branchless: `(alo ^ blo) | (ahi ^ bhi)` read
//! with `sete`/`setne`. It folds into one `==` of the two wholes, and each
//! `long long` parameter the compare links stays one parameter (#18).
use crate::common;
use object::write::{Object, Symbol, SymbolSection};
use object::{
    Architecture, BinaryFormat, Endianness, SectionKind, SymbolFlags, SymbolKind, SymbolScope,
};
use std::process::Command;

/// clang -target i386-linux-gnu -O2 -fno-inline of
/// `int eq64(long long a, long long b) { return a == b; }`,
/// `int ne64(long long a, long long b) { return a != b; }` and
/// `int eqk(long long a) { return a == 0x500000007LL; }`.
const FUNCS: [(&str, &str); 3] = [
    (
        "eq64",
        "8b 4c 24 04 8b 54 24 08 33 54 24 10 33 4c 24 0c 31 c0 09 d1 0f 94 c0 c3",
    ),
    (
        "ne64",
        "8b 4c 24 04 8b 54 24 08 33 54 24 10 33 4c 24 0c 31 c0 09 d1 0f 95 c0 c3",
    ),
    (
        "eqk",
        "8b 4c 24 04 8b 54 24 08 83 f2 05 83 f1 07 31 c0 09 d1 0f 94 c0 c3",
    ),
];

fn image() -> Vec<u8> {
    let mut object = Object::new(BinaryFormat::Elf, Architecture::I386, Endianness::Little);
    let text = object.add_section(Vec::new(), b".text".to_vec(), SectionKind::Text);
    let mut bytes = Vec::new();
    for (name, code) in FUNCS {
        let code: Vec<u8> = code
            .split_whitespace()
            .map(|b| u8::from_str_radix(b, 16).unwrap())
            .collect();
        object.add_symbol(Symbol {
            name: name.as_bytes().to_vec(),
            value: bytes.len() as u64,
            size: code.len() as u64,
            kind: SymbolKind::Text,
            scope: SymbolScope::Linkage,
            weak: false,
            section: SymbolSection::Section(text),
            flags: SymbolFlags::None,
        });
        bytes.extend(code);
        while bytes.len() % 16 != 0 {
            bytes.push(0x90);
        }
    }
    object.append_section_data(text, &bytes, 16);
    object.write().unwrap()
}

fn decompile(stem: &str, options: &[&str]) -> String {
    let path = common::scratch_file(stem, "o");
    std::fs::write(&path, image()).unwrap();
    let output = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .arg("decompile-all")
        .arg(&path)
        .args(options)
        .output()
        .unwrap();
    let _ = std::fs::remove_file(&path);
    let text = String::from_utf8(output.stdout).unwrap();
    assert!(
        output.status.success(),
        "{text}\n{}",
        String::from_utf8_lossy(&output.stderr)
    );
    text
}

fn function<'a>(text: &'a str, name: &str) -> &'a str {
    let marker = format!("// Function: {name} @");
    text.split(&marker)
        .nth(1)
        .unwrap_or_else(|| panic!("no {name}:\n{text}"))
        .split("// Function:")
        .next()
        .unwrap()
}

/// The number of parameters `name` is declared with.
fn arity(body: &str, name: &str) -> usize {
    let decl = body
        .lines()
        .find(|l| l.contains(&format!("{name}(")))
        .unwrap_or_else(|| panic!("no declaration of {name}:\n{body}"));
    let params = decl
        .split_once('(')
        .and_then(|(_, rest)| rest.rsplit_once(')'))
        .map(|(params, _)| params.trim())
        .unwrap_or("");
    if params.is_empty() || params == "void" {
        0
    } else {
        params.matches(',').count() + 1
    }
}

#[test]
fn a_branchless_two_word_equality_folds_to_one_compare() {
    let text = decompile("pair-equality", &[]);
    for (name, op, params) in [("eq64", "==", 2), ("ne64", "!=", 2), ("eqk", "==", 1)] {
        let body = function(&text, name);
        assert_eq!(arity(body, name), params, "{name}: {body}");
        assert!(body.contains(op), "{name}: no {op}: {body}");
        assert!(!body.contains('^'), "{name}: the XOR chain is left: {body}");
    }
    let eqk = function(&text, "eqk");
    assert!(
        eqk.contains("0x500000007") || eqk.contains("21474836487"),
        "eqk: the constant is not whole: {eqk}"
    );
}

#[test]
fn pairparam_off_keeps_the_words_apart() {
    let text = decompile("pair-equality-off", &["--option", "pairparam", "off"]);
    let body = function(&text, "eq64");
    assert_eq!(arity(body, "eq64"), 4, "{body}");
}
