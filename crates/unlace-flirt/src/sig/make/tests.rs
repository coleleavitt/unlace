use std::collections::BTreeMap;

use unlace_ir::ArchId;

use super::*;
use crate::sig::SigFile;
use crate::sig::matching::{CodeWindow, MatchContext};

const BASE: u64 = 0x1000;

fn function(name: &str, bytes: &[u8]) -> LibraryFunction {
    LibraryFunction {
        bytes: bytes.iter().copied().map(Some).collect(),
        names: vec![LibraryName {
            name: name.to_string(),
            local: false,
        }],
        references: Vec::new(),
    }
}

fn spec() -> SigSpec {
    SigSpec {
        min_fixed_bytes: 4,
        ..SigSpec::new("test", ArchId::X86_64, SigSpec::FILE_ELF, SigSpec::OSTYPE_UNIX).unwrap()
    }
}

fn body(seed: u8, len: usize) -> Vec<u8> {
    (0..len).map(|i| seed.wrapping_add((i as u8).wrapping_mul(7))).collect()
}

/// Lay `functions` out back to back and return the start of each.
fn image(functions: &[&[u8]]) -> (Vec<u8>, Vec<u64>) {
    let mut code = Vec::new();
    let mut starts = Vec::new();
    for bytes in functions {
        starts.push(BASE + code.len() as u64);
        code.extend_from_slice(bytes);
    }
    code.extend([0xCC; 64]);
    (code, starts)
}

fn name_at(sig: &SigFile, code: &[u8], names: &BTreeMap<u64, String>, ea: u64) -> Option<String> {
    let cx = MatchContext {
        arch: ArchId::X86_64,
        code: CodeWindow::new(BASE, code),
        names,
    };
    sig.match_at(&cx, ea)
        .and_then(|m| m.module.function_name())
        .map(|n| n.name.clone())
}

#[test]
fn round_trips_and_matches_shared_prefixes_and_variant_bytes() {
    let mut strlen = vec![0xF3, 0x0F, 0x1E, 0xFA];
    strlen.extend(body(0x10, 60));
    let mut strcpy = vec![0xF3, 0x0F, 0x1E, 0xFA];
    strcpy.extend(body(0x20, 20));
    let mut memset = function("memset", &body(0x30, 80));
    for byte in &mut memset.bytes[5..9] {
        *byte = None;
    }
    let functions = vec![
        function("strlen", &strlen),
        function("strcpy", &strcpy),
        memset.clone(),
    ];
    let (bytes, report) = make_sig(&spec(), &functions).unwrap();
    assert_eq!(report.modules, 3);
    let sig = SigFile::parse(&bytes).unwrap();
    assert_eq!(sig.header.n_modules, 3);
    assert_eq!(sig.header.library_name, "test");
    assert!(sig.header.applies_to(ArchId::X86_64));
    assert!(!sig.header.applies_to(ArchId::X86));

    let mut other_memset = body(0x30, 80);
    other_memset[5..9].copy_from_slice(&[1, 2, 3, 4]);
    let (code, starts) = image(&[&strlen, &strcpy, &other_memset]);
    let names = BTreeMap::new();
    assert_eq!(name_at(&sig, &code, &names, starts[0]).as_deref(), Some("strlen"));
    assert_eq!(name_at(&sig, &code, &names, starts[1]).as_deref(), Some("strcpy"));
    assert_eq!(name_at(&sig, &code, &names, starts[2]).as_deref(), Some("memset"));

    // A changed byte in the CRC range no longer matches.
    let mut changed = strlen.clone();
    changed[40] ^= 0xFF;
    let (code, starts) = image(&[&changed]);
    assert_eq!(name_at(&sig, &code, &names, starts[0]), None);
}

#[test]
fn tail_byte_tells_identical_prefixes_apart() {
    // Same first 32 + 255 bytes, different byte afterwards.
    let mut a = body(0x40, 300);
    let mut b = a.clone();
    a[290] = 0xAA;
    b[290] = 0xBB;
    let (bytes, report) = make_sig(&spec(), &[function("a", &a), function("b", &b)]).unwrap();
    assert_eq!(report.resolved_collisions, 1);
    let sig = SigFile::parse(&bytes).unwrap();
    let (code, starts) = image(&[&a, &b]);
    let names = BTreeMap::new();
    assert_eq!(name_at(&sig, &code, &names, starts[0]).as_deref(), Some("a"));
    assert_eq!(name_at(&sig, &code, &names, starts[1]).as_deref(), Some("b"));
}

#[test]
fn referenced_name_tells_wrappers_apart() {
    // `call rel32; ret` wrappers that differ only in their callee; the
    // callee names are longer than a length byte holds.
    let long_a = format!("_ZN{}a", "x".repeat(300));
    let long_b = format!("_ZN{}b", "x".repeat(300));
    let mut code = vec![0x55, 0x48, 0x89, 0xE5, 0x53, 0x41, 0x54, 0xE8, 0, 0, 0, 0, 0x5D, 0xC3];
    code.extend(body(0x50, 30));
    let wrapper = |name: &str, callee: &str| {
        let mut f = function(name, &code);
        for byte in &mut f.bytes[8..12] {
            *byte = None;
        }
        f.references.push(ModuleRef {
            offset: 8,
            name: callee.to_string(),
        });
        f
    };
    let functions = vec![wrapper("call_a", &long_a), wrapper("call_b", &long_b)];
    let (bytes, report) = make_sig(&spec(), &functions).unwrap();
    assert_eq!(report.resolved_collisions, 1);
    let sig = SigFile::parse(&bytes).unwrap();
    assert_eq!(sig.modules()[0].reference.as_ref().unwrap().name, long_a);

    // Image: wrapper calling the function at `target`.
    let mut image_code = code.clone();
    let target = BASE + 0x100;
    let rel = (target as i64 - (BASE as i64 + 12)) as i32;
    image_code[8..12].copy_from_slice(&rel.to_le_bytes());
    image_code.resize(0x200, 0xCC);
    let names = BTreeMap::from([(target, long_b.clone())]);
    assert_eq!(name_at(&sig, &image_code, &names, BASE).as_deref(), Some("call_b"));
    let unknown = BTreeMap::new();
    assert_eq!(name_at(&sig, &image_code, &unknown, BASE), None);
}

#[test]
fn identical_code_with_different_names_is_dropped() {
    let code = body(0x60, 50);
    let mut keep = body(0x70, 50);
    keep[0] = 0x90;
    let functions = vec![function("one", &code), function("two", &code), function("keep", &keep)];
    let (bytes, report) = make_sig(&spec(), &functions).unwrap();
    assert_eq!(report.modules, 1);
    assert_eq!(report.dropped_collisions, vec![vec!["one".to_string(), "two".to_string()]]);
    assert_eq!(SigFile::parse(&bytes).unwrap().modules().len(), 1);
}

#[test]
fn same_name_twice_is_one_module_and_short_functions_are_skipped() {
    let code = body(0x80, 50);
    let functions = vec![
        function("dup", &code),
        function("dup", &code),
        function("tiny", &[0x31, 0xC0, 0xC3]),
    ];
    let (_, report) = make_sig(&spec(), &functions).unwrap();
    assert_eq!(report.modules, 1);
    assert_eq!(report.duplicates, 1);
    assert_eq!(report.too_short, 1);
}
