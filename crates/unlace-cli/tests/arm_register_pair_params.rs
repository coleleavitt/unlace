//! A `long long` parameter of an unprototyped 32-bit ARM function arrives in
//! an aligned register pair (`r0:r1`, `r2:r3`). With option `armpairparam`
//! the pair a carry or borrow links is one parameter; off (the default) it is
//! two `int` parameters, as before (#18).
use crate::common;
use object::write::{Object, Symbol, SymbolSection};
use object::{
    Architecture, BinaryFormat, Endianness, FileFlags, SectionKind, SymbolFlags, SymbolKind,
    SymbolScope,
};
use std::process::Command;

/// clang -target armv7-linux-gnueabihf -marm -O2 -fno-inline of
/// `long long add64(long long a, long long b) { return a + b; }` and
/// `int lt64(long long a, long long b) { return a < b; }`.
const FUNCS: [(&str, &[u32]); 2] = [
    ("add64", &[0xe0920000, 0xe0a31001, 0xe12fff1e]),
    (
        "lt64",
        &[
            0xe0500002, 0xe3a0c000, 0xe0d10003, 0xb300c001, 0xe1a0000c, 0xe12fff1e,
        ],
    ),
];

fn image() -> Vec<u8> {
    let mut object = Object::new(BinaryFormat::Elf, Architecture::Arm, Endianness::Little);
    object.flags = FileFlags::Elf {
        os_abi: 0,
        abi_version: 0,
        e_flags: 0x0500_0000,
    };
    let text = object.add_section(Vec::new(), b".text".to_vec(), SectionKind::Text);
    let mut bytes = Vec::new();
    for (name, words) in FUNCS {
        object.add_symbol(Symbol {
            name: name.as_bytes().to_vec(),
            value: bytes.len() as u64,
            size: words.len() as u64 * 4,
            kind: SymbolKind::Text,
            scope: SymbolScope::Linkage,
            weak: false,
            section: SymbolSection::Section(text),
            flags: SymbolFlags::None,
        });
        for &word in words {
            bytes.extend(word.to_le_bytes());
        }
    }
    object.append_section_data(text, &bytes, 4);
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
fn armpairparam_joins_an_aligned_register_pair() {
    let text = decompile("arm-pair-params-on", &["--option", "armpairparam", "on"]);
    for name in ["add64", "lt64"] {
        let body = function(&text, name);
        assert_eq!(arity(body, name), 2, "{name}: {body}");
        assert!(!body.contains("SBORROW"), "{name}: {body}");
    }
}

#[test]
fn armpairparam_off_keeps_four_words() {
    let text = decompile("arm-pair-params-off", &[]);
    assert_eq!(arity(function(&text, "add64"), "add64"), 4, "{text}");
}
