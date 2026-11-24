//! Tests for the `.til` reader ([`super`]) over hand-built libraries.

use std::io::Write;

use super::{Kind, Til, is_til, to_typelib};

fn dt(v: u16) -> Vec<u8> {
    let v = v + 1;
    if v < 0x80 {
        vec![u8::try_from(v).unwrap()]
    } else {
        vec![
            u8::try_from(v & 0x7f).unwrap() | 0x80,
            u8::try_from(v >> 7).unwrap(),
        ]
    }
}

fn fields(names: &[&str]) -> Vec<u8> {
    let mut out = Vec::new();
    for n in names {
        out.extend(dt(u16::try_from(n.len()).unwrap()));
        out.extend_from_slice(n.as_bytes());
    }
    out
}

fn entry(name: &str, ordinal: u32, tinfo: &[u8], names: &[&str]) -> Vec<u8> {
    assert!(!tinfo.contains(&0), "a type string holds no NUL");
    let mut e = 0x7fff_ffffu32.to_le_bytes().to_vec();
    e.extend_from_slice(name.as_bytes());
    e.push(0);
    e.extend(ordinal.to_le_bytes());
    e.extend_from_slice(tinfo);
    e.push(0);
    e.push(0);
    e.extend(fields(names));
    e.push(0);
    e.push(0);
    e.push(0);
    e
}

fn bucket(entries: &[Vec<u8>], zip: bool) -> Vec<u8> {
    let data: Vec<u8> = entries.concat();
    let mut b = u32::try_from(entries.len()).unwrap().to_le_bytes().to_vec();
    b.extend(u32::try_from(data.len()).unwrap().to_le_bytes());
    if zip {
        let mut enc = flate2::write::ZlibEncoder::new(Vec::new(), flate2::Compression::default());
        enc.write_all(&data).unwrap();
        let packed = enc.finish().unwrap();
        b.extend(u32::try_from(packed.len()).unwrap().to_le_bytes());
        b.extend(packed);
    } else {
        b.extend(data);
    }
    b
}

/// A format-0x12 library: GNU, `int` 4, `bool` 1, `enum` 4, memory model `cm`.
fn library(cm: u8, zip: bool, symbols: &[Vec<u8>], types: &[Vec<u8>]) -> Vec<u8> {
    let mut b = b"IDATIL".to_vec();
    b.extend(0x12u32.to_le_bytes());
    b.extend(u32::from(zip).to_le_bytes());
    b.push(4);
    b.extend_from_slice(b"test");
    b.push(0);
    b.extend([6, cm, 4, 1, 4, 0]);
    b.extend(bucket(symbols, zip));
    b.extend(bucket(types, zip));
    b
}

const INT: u8 = 0x17;
const I32: u8 = 0x14;
const U32: u8 = 0x24;
const CHAR: u8 = 0x32;
const SHORT: u8 = 0x13;

fn types() -> Vec<Vec<u8>> {
    let mut point = vec![0x0d];
    point.extend(dt(2 << 3));
    point.extend([I32, 0x0a, CHAR]);
    let mut flags = vec![0x0d];
    flags.extend(dt(4 << 3));
    flags.extend([0x2e]);
    flags.extend(dt((3 << 1) | 1));
    flags.extend([0x2e]);
    flags.extend(dt((5 << 1) | 1));
    flags.extend([SHORT, 0x1b]);
    flags.extend(dt(6));
    flags.push(CHAR);
    let mut color = vec![0x2d];
    color.extend(dt(3));
    color.extend([0x83, 0x40, 0x41, 0x41]);
    vec![
        entry("pt", 1, &point, &["x", "name"]),
        entry("u32", 2, &[U32], &[]),
        entry("color", 3, &color, &["RED", "GREEN", "BLUE"]),
        entry("flags", 4, &flags, &["a", "b", "s", "buf"]),
    ]
}

fn symbols(cc: u8) -> Vec<Vec<u8>> {
    let mut add = vec![0x0c, cc, INT];
    add.extend(dt(2));
    add.extend([0x0a, 0x3d]);
    add.extend(dt(2));
    add.extend_from_slice(b"pt");
    add.push(INT);
    let mut log = vec![0x0c, 0x40, INT];
    log.extend(dt(1));
    log.extend([0x0a, CHAR | 0x40]);
    let none = vec![0x0c, 0x20, 0x01];
    vec![
        entry("add_pt", 10, &add, &["p", "n"]),
        entry("logf", 11, &log, &["fmt"]),
        entry("tick", 12, &none, &[]),
    ]
}

#[test]
fn a_library_decodes_its_entries() {
    let bytes = library(0x31, false, &symbols(0x30), &types());
    assert!(is_til(&bytes));
    let til = Til::parse(&bytes).unwrap();
    assert_eq!(til.header.title, "test");
    assert_eq!(til.header.ptr_size, 8);
    assert_eq!(til.symbols.len(), 3);
    assert_eq!(til.types.len(), 4);
    let pt = til.types[0].ty.as_ref().unwrap();
    let Kind::Struct(udt) = &pt.kind else {
        panic!("{pt:?}")
    };
    assert_eq!(udt.members.len(), 2);
    assert_eq!(udt.members[1].name.as_deref(), Some("name"));
    let Some(Kind::Func(f)) = til.symbols[0].ty.as_ref().map(|t| &t.kind) else {
        panic!("add_pt is a function")
    };
    assert_eq!(f.args.len(), 2);
    assert_eq!(f.args[0].0.as_deref(), Some("p"));
}

#[test]
fn entries_render_as_library_lines() {
    let bytes = library(0x31, false, &symbols(0x30), &types());
    let text = to_typelib(&bytes, "elf x86_64", 8).unwrap();
    let lines: Vec<&str> = text.lines().collect();
    assert_eq!(
        &lines[..3],
        &["kuna-typelib 1", "target elf x86_64", "source til test"]
    );
    for want in [
        "S pt * 16 8",
        " 0 x\tint",
        " 8 name\tchar *",
        "T u32 *\tunsigned int",
        "T color *\tunsigned int",
        "S flags * 12 4",
        " 4 s\tshort",
        " 6 buf\tchar[6]",
        "F add_pt *\tint add_pt(struct pt *p, int n)",
        "F logf *\tint logf(const char *fmt, ...)",
        "F tick *\tvoid tick(void)",
    ] {
        assert!(lines.contains(&want), "missing {want:?} in\n{text}");
    }
    assert!(!text.contains(" a\t"), "a bit-field is a hole:\n{text}");
}

#[test]
fn a_compressed_library_reads_the_same() {
    let plain = library(0x31, false, &symbols(0x30), &types());
    let zipped = library(0x31, true, &symbols(0x30), &types());
    assert_eq!(
        to_typelib(&plain, "t", 8).unwrap(),
        to_typelib(&zipped, "t", 8).unwrap()
    );
}

#[test]
fn a_32_bit_library_keeps_stdcall_and_its_pointer_size() {
    let bytes = library(0x53, false, &symbols(0x50), &types());
    let text = to_typelib(&bytes, "windows x86", 4).unwrap();
    assert!(
        text.contains("F add_pt *\tint __stdcall add_pt(struct pt *p, int n)"),
        "{text}"
    );
    assert!(text.contains("S pt * 8 4"), "{text}");
    assert!(text.contains(" 4 name\tchar *"), "{text}");
}

#[test]
fn malformed_libraries_are_refused_without_panicking() {
    assert!(to_typelib(b"NOTATIL", "t", 8).is_err());
    let bytes = library(0x31, true, &symbols(0x30), &types());
    for cut in 0..bytes.len() {
        let _ = to_typelib(&bytes[..cut], "t", 8);
    }
    let mut bad = bytes.clone();
    bad[6] = 0x20;
    assert!(to_typelib(&bad, "t", 8).is_err());
}

#[test]
fn anonymous_type_names_become_identifiers() {
    assert_eq!(
        super::c_name("$837407842DC9"),
        Some("_837407842DC9".to_string())
    );
    assert_eq!(
        super::c_name("_LARGE_INTEGER::$8374"),
        Some("_LARGE_INTEGER___8374".to_string())
    );
    assert_eq!(super::c_name("pt"), Some("pt".to_string()));
    assert_eq!(super::c_name("int"), None);
    assert_eq!(super::c_name("std::vector<int>"), None);
}
