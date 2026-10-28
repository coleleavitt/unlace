//! A small IDASGN encoder lets these tests build signatures with exactly
//! the shapes the decoder and matcher must handle. The real IDA signature
//! set (`research/ida-sig-til-samples`, not redistributable) is decoded
//! when present.

use std::collections::BTreeMap;
use std::io::Write;
use std::path::PathBuf;

use flate2::Compression;
use flate2::write::ZlibEncoder;
use unlace_ir::ArchId;

use super::matching::{CodeWindow, MatchContext};
use super::*;

enum TNode {
    Inner(Vec<(Vec<Option<u8>>, TNode)>),
    Leaf(Vec<TModule>),
}

#[derive(Clone)]
struct TModule {
    length: u32,
    crc_len: u8,
    crc16: u16,
    names: Vec<(i32, &'static str, u8)>,
    tails: Vec<(u32, u8)>,
    reference: Option<(i32, &'static str)>,
}

impl TModule {
    fn named(name: &'static str, length: u32) -> Self {
        Self {
            length,
            crc_len: 0,
            crc16: 0,
            names: vec![(0, name, 0)],
            tails: Vec::new(),
            reference: None,
        }
    }
}

struct Encoder {
    version: u8,
    out: Vec<u8>,
}

impl Encoder {
    fn short(&mut self, v: u32) {
        assert!(v < 0x8000);
        if v < 0x80 {
            self.out.push(v as u8);
        } else {
            self.out.extend([0x80 | (v >> 8) as u8, v as u8]);
        }
    }

    fn long(&mut self, v: u32) {
        if v < 0x80 {
            self.out.push(v as u8);
        } else if v < 0x4000 {
            self.out.extend([0x80 | (v >> 8) as u8, v as u8]);
        } else if v < 0x2000_0000 {
            self.out
                .extend([0xC0 | (v >> 24) as u8, (v >> 16) as u8, (v >> 8) as u8, v as u8]);
        } else {
            self.out.push(0xE0);
            self.out.extend(v.to_be_bytes());
        }
    }

    fn offset(&mut self, v: u32) {
        if self.version > 8 { self.long(v) } else { self.short(v) }
    }

    fn node(&mut self, node: &TNode) {
        match node {
            TNode::Leaf(modules) => {
                self.short(0);
                self.leaf(modules);
            }
            TNode::Inner(children) => {
                self.short(children.len() as u32);
                for (pattern, child) in children {
                    let len = pattern.len();
                    if self.version <= 9 {
                        self.out.push(len as u8);
                    } else {
                        self.short(len as u32);
                    }
                    let mask = pattern
                        .iter()
                        .enumerate()
                        .filter(|(_, b)| b.is_none())
                        .fold(0u64, |m, (i, _)| m | 1 << (len - 1 - i));
                    if len <= 0x0F {
                        self.short(mask as u32);
                    } else if len <= 0x20 {
                        self.long(mask as u32);
                    } else {
                        self.long((mask >> 32) as u32);
                        self.long(mask as u32);
                    }
                    self.out.extend(pattern.iter().flatten());
                    self.node(child);
                }
            }
        }
    }

    fn leaf(&mut self, modules: &[TModule]) {
        for (i, module) in modules.iter().enumerate() {
            let new_group = i == 0 || {
                let prev = &modules[i - 1];
                (prev.crc_len, prev.crc16) != (module.crc_len, module.crc16)
            };
            if new_group {
                self.out.push(module.crc_len);
                self.out.extend(module.crc16.to_be_bytes());
            }
            self.offset(module.length);
            let mut previous = 0;
            for (n, &(offset, name, flags)) in module.names.iter().enumerate() {
                let delta = offset - previous;
                previous = offset;
                self.offset(delta.unsigned_abs());
                let flags = flags | if delta < 0 { 0x10 } else { 0 };
                if flags != 0 {
                    self.out.push(flags);
                }
                self.out.extend(name.bytes());
                let mut parse = 0;
                if n + 1 < module.names.len() {
                    parse |= 0x01;
                } else {
                    if !module.tails.is_empty() {
                        parse |= 0x02;
                    }
                    if module.reference.is_some() {
                        parse |= 0x04;
                    }
                    match modules.get(i + 1) {
                        Some(next) if (next.crc_len, next.crc16) == (module.crc_len, module.crc16) => {
                            parse |= 0x08
                        }
                        Some(_) => parse |= 0x10,
                        None => {}
                    }
                }
                self.out.push(parse);
            }
            if !module.tails.is_empty() {
                if self.version > 7 {
                    self.out.push(module.tails.len() as u8);
                }
                for &(offset, value) in &module.tails {
                    self.offset(offset);
                    self.out.push(value);
                }
            }
            if let Some((offset, name)) = module.reference {
                if self.version > 7 {
                    self.out.push(1);
                }
                self.offset(offset.unsigned_abs());
                let len = name.len() + usize::from(offset < 0);
                self.out.push(len as u8);
                self.out.extend(name.bytes());
                if offset < 0 {
                    self.out.push(0);
                }
            }
        }
    }
}

struct Spec {
    version: u8,
    arch: u8,
    app_types: u16,
    features: u16,
    name: &'static str,
}

impl Default for Spec {
    fn default() -> Self {
        Self {
            version: 10,
            arch: 0,
            app_types: 0,
            features: SigFeatures::COMPRESSED.bits(),
            name: "test libc",
        }
    }
}

fn encode(spec: &Spec, root: &TNode) -> Vec<u8> {
    let mut encoder = Encoder {
        version: spec.version.max(7),
        out: Vec::new(),
    };
    encoder.node(root);
    let body = if spec.features & SigFeatures::COMPRESSED.bits() != 0 {
        let mut z = ZlibEncoder::new(Vec::new(), Compression::default());
        z.write_all(&encoder.out).unwrap();
        z.finish().unwrap()
    } else {
        encoder.out
    };
    let mut out = Vec::new();
    out.extend(b"IDASGN");
    out.push(spec.version);
    out.push(spec.arch);
    out.extend(u32::MAX.to_le_bytes());
    out.extend(u16::MAX.to_le_bytes());
    out.extend(spec.app_types.to_le_bytes());
    out.extend(spec.features.to_le_bytes());
    out.extend(0u16.to_le_bytes());
    out.extend(0u16.to_le_bytes());
    out.extend([0u8; 12]);
    out.push(spec.name.len() as u8);
    out.extend(0u16.to_le_bytes());
    out.extend(0u32.to_le_bytes());
    out.extend(32u16.to_le_bytes());
    out.extend(0u16.to_le_bytes());
    let header_len = match spec.version {
        8 | 9 => 43,
        10 => 45,
        _ => unreachable!("tests encode v8+ headers"),
    };
    out.truncate(header_len);
    out.extend(spec.name.bytes());
    out.extend(body);
    out
}

/// A signature with one root child per module. The four bytes at a
/// module's reference offset are variant, as `sigmake` marks relocations.
pub(crate) fn encode_flat(modules: &[(&[u8], &'static str, Option<(i32, &'static str)>)]) -> Vec<u8> {
    let children = modules
        .iter()
        .map(|&(bytes, name, reference)| {
            let mut pattern = fixed(bytes);
            if let Some((offset, _)) = reference {
                let start = offset as usize;
                for b in &mut pattern[start..start + 4] {
                    *b = None;
                }
            }
            let module = TModule {
                reference,
                ..TModule::named(name, bytes.len() as u32)
            };
            (pattern, TNode::Leaf(vec![module]))
        })
        .collect();
    encode(&Spec::default(), &TNode::Inner(children))
}

fn fixed(bytes: &[u8]) -> Vec<Option<u8>> {
    bytes.iter().copied().map(Some).collect()
}

fn names_at<'a>(sig: &'a SigFile, cx: &MatchContext<'_>, ea: u64) -> Option<&'a str> {
    sig.match_at(cx, ea)
        .and_then(|m| m.module.function_name())
        .map(|n| n.name.as_str())
}

const BASE: u64 = 0x1000;

/// `strlen`: `mov rax, rdi; cmp byte [rax], 0; jz done; inc rax; jmp loop;
/// done: sub rax, rdi; ret`.
const STRLEN: &[u8] = &[
    0x48, 0x89, 0xF8, 0x80, 0x38, 0x00, 0x74, 0x05, 0x48, 0xFF, 0xC0, 0xEB, 0xF6, 0x48, 0x29,
    0xF8, 0xC3,
];

/// `memcpy`: `mov rax, rdi; mov rcx, rdx; rep movsb; ret`.
const MEMCPY: &[u8] = &[0x48, 0x89, 0xF8, 0x48, 0x89, 0xD1, 0xF3, 0xA4, 0xC3];

#[test]
fn crc16_matches_libida() {
    // CRC-16/X-25 of "123456789" is 0x906E; FLIRT stores it byte-swapped.
    assert_eq!(crc16(b"123456789"), 0x6E90);
    assert_eq!(crc16(b""), 0);
}

#[test]
fn decodes_header_and_names() {
    let root = TNode::Inner(vec![(
        fixed(STRLEN),
        TNode::Leaf(vec![TModule::named("strlen", STRLEN.len() as u32)]),
    )]);
    let sig = SigFile::parse(&encode(&Spec::default(), &root)).unwrap();
    assert_eq!(sig.header.version, 10);
    assert_eq!(sig.header.library_name, "test libc");
    assert_eq!(sig.header.pattern_size, 32);
    assert_eq!(sig.modules().len(), 1);
    assert_eq!(sig.modules()[0].function_name().unwrap().name, "strlen");
}

#[test]
fn rejects_bad_magic_and_trailing_bytes() {
    assert!(SigFile::parse(b"NOTASIG_____________________________________________").is_err());
    let root = TNode::Inner(vec![(
        fixed(MEMCPY),
        TNode::Leaf(vec![TModule::named("memcpy", MEMCPY.len() as u32)]),
    )]);
    let spec = Spec {
        features: 0,
        ..Spec::default()
    };
    let mut bytes = encode(&spec, &root);
    bytes.push(0);
    let err = SigFile::parse(&bytes).unwrap_err();
    assert!(err.to_string().contains("trailing"), "{err}");
}

#[test]
fn matches_libc_functions_with_wildcards_and_shared_prefix() {
    // `memset`: `mov rax, rdi; mov r8, <imm32>; ...` with a variant imm32.
    let memset: Vec<u8> = vec![
        0x48, 0x89, 0xF8, 0x49, 0xC7, 0xC0, 0x11, 0x22, 0x33, 0x44, 0x48, 0x89, 0xD1, 0xF3, 0xAA,
        0xC3,
    ];
    let mut memset_pattern = fixed(&memset[3..]);
    for b in &mut memset_pattern[3..7] {
        *b = None;
    }
    // memcpy, memset and strlen share the `mov rax, rdi` prefix.
    let root = TNode::Inner(vec![(
        fixed(&[0x48, 0x89, 0xF8]),
        TNode::Inner(vec![
            (
                fixed(&MEMCPY[3..]),
                TNode::Leaf(vec![TModule::named("memcpy", MEMCPY.len() as u32)]),
            ),
            (
                memset_pattern,
                TNode::Leaf(vec![TModule::named("memset", memset.len() as u32)]),
            ),
            (
                fixed(&STRLEN[3..]),
                TNode::Leaf(vec![TModule::named("strlen", STRLEN.len() as u32)]),
            ),
        ]),
    )]);
    let sig = SigFile::parse(&encode(&Spec::default(), &root)).unwrap();

    let mut image = Vec::new();
    let memcpy_at = BASE;
    image.extend(MEMCPY);
    let memset_at = BASE + image.len() as u64;
    let mut other_memset = memset.clone();
    other_memset[6..10].copy_from_slice(&[0xAA, 0xBB, 0xCC, 0xDD]);
    image.extend(&other_memset);
    let strlen_at = BASE + image.len() as u64;
    image.extend(STRLEN);
    let names = BTreeMap::new();
    let cx = MatchContext {
        arch: ArchId::X86_64,
        code: CodeWindow::new(BASE, &image),
        names: &names,
    };
    assert_eq!(names_at(&sig, &cx, memcpy_at), Some("memcpy"));
    assert_eq!(names_at(&sig, &cx, memset_at), Some("memset"));
    assert_eq!(names_at(&sig, &cx, strlen_at), Some("strlen"));
    assert_eq!(names_at(&sig, &cx, strlen_at + 1), None);
}

/// 32 identical leading bytes: only the CRC16 and tail bytes of what
/// follows tell `strcpy` and `strcat` apart.
#[test]
fn crc_and_tail_bytes_separate_identical_prefixes() {
    let prefix: Vec<u8> = (0..32u8).map(|i| 0x40 | (i & 0x0F)).collect();
    let tail_a = [0x01, 0x02, 0x03, 0x04, 0xC3];
    let tail_b = [0x05, 0x06, 0x07, 0x08, 0xC3];
    let tail_c = [0x05, 0x06, 0x07, 0x08, 0xCC];
    let module = |name, tail: &[u8], tails: Vec<(u32, u8)>| TModule {
        length: 37,
        crc_len: 4,
        crc16: crc16(&tail[..4]),
        names: vec![(0, name, 0)],
        tails,
        reference: None,
    };
    let root = TNode::Inner(vec![(
        fixed(&prefix),
        TNode::Leaf(vec![
            module("strcpy", &tail_a, Vec::new()),
            module("strcat", &tail_b, vec![(0, 0xC3)]),
            module("strncat", &tail_c, vec![(0, 0xCC)]),
        ]),
    )]);
    let sig = SigFile::parse(&encode(&Spec::default(), &root)).unwrap();
    let names = BTreeMap::new();
    for (tail, expected) in [(&tail_a, "strcpy"), (&tail_b, "strcat"), (&tail_c, "strncat")] {
        let mut image = prefix.clone();
        image.extend(tail);
        let cx = MatchContext {
            arch: ArchId::X86_64,
            code: CodeWindow::new(BASE, &image),
            names: &names,
        };
        assert_eq!(names_at(&sig, &cx, BASE), Some(expected));
    }
}

#[test]
fn reference_must_resolve_to_the_named_symbol() {
    // `_wremove`-style wrapper: `sub rsp, 28h; call [rip+X]; add rsp, 28h; ret`.
    let mut code = vec![0x48, 0x83, 0xEC, 0x28, 0xFF, 0x15, 0, 0, 0, 0, 0x48, 0x83, 0xC4, 0x28, 0xC3];
    let site = BASE + 6;
    let iat_slot = 0x9000u64;
    let disp = (iat_slot as i64 - (site as i64 + 4)) as i32;
    code[6..10].copy_from_slice(&disp.to_le_bytes());
    let mut pattern = fixed(&code);
    for b in &mut pattern[6..10] {
        *b = None;
    }
    let module = TModule {
        reference: Some((6, "__imp_DeleteFileW")),
        ..TModule::named("_wremove", code.len() as u32)
    };
    let root = TNode::Inner(vec![(pattern, TNode::Leaf(vec![module]))]);
    let sig = SigFile::parse(&encode(&Spec::default(), &root)).unwrap();
    let window = CodeWindow::new(BASE, &code);

    let lookup = |names: &BTreeMap<u64, String>| {
        let cx = MatchContext {
            arch: ArchId::X86_64,
            code: window,
            names,
        };
        names_at(&sig, &cx, BASE).map(str::to_owned)
    };
    let mut names = BTreeMap::new();
    assert_eq!(lookup(&names), None, "unresolved reference");
    names.insert(iat_slot, "KERNEL32.dll!DeleteFileA".to_string());
    assert_eq!(lookup(&names), None, "wrong import");
    names.insert(iat_slot, "KERNEL32.dll!DeleteFileW".to_string());
    assert_eq!(lookup(&names).as_deref(), Some("_wremove"));
}

#[test]
fn unnamed_and_label_modules_give_no_function_name() {
    let code = [0x31, 0xC0, 0xC3, 0x90];
    let root = TNode::Inner(vec![(
        fixed(&code),
        TNode::Leaf(vec![TModule {
            names: vec![(0, "?", 0x08), (2, "__label", 0x01)],
            ..TModule::named("", 4)
        }]),
    )]);
    let sig = SigFile::parse(&encode(&Spec::default(), &root)).unwrap();
    let names = BTreeMap::new();
    let cx = MatchContext {
        arch: ArchId::X86_64,
        code: CodeWindow::new(BASE, &code),
        names: &names,
    };
    let hit = sig.match_at(&cx, BASE).unwrap();
    assert_eq!(hit.module.names[1].offset, 2);
    assert!(hit.module.function_name().is_none());
}

#[test]
fn negative_offsets_round_trip() {
    let code = [0x55, 0x48, 0x89, 0xE5, 0x5D, 0xC3];
    let root = TNode::Inner(vec![(
        fixed(&code),
        TNode::Leaf(vec![TModule {
            names: vec![(0, "f", 0), (-16, "g", 0)],
            reference: Some((-8, "h")),
            ..TModule::named("", 6)
        }]),
    )]);
    let sig = SigFile::parse(&encode(&Spec::default(), &root)).unwrap();
    let module = &sig.modules()[0];
    assert_eq!(module.names[1].offset, -16);
    assert_eq!(module.reference.as_ref().unwrap().offset, -8);
    assert_eq!(module.reference.as_ref().unwrap().name, "h");
}

#[test]
fn version_8_uses_short_offsets_and_byte_lengths() {
    let root = TNode::Inner(vec![(
        fixed(STRLEN),
        TNode::Leaf(vec![TModule {
            tails: vec![(3, 0xC3)],
            ..TModule::named("strlen", 300)
        }]),
    )]);
    let spec = Spec {
        version: 8,
        ..Spec::default()
    };
    let sig = SigFile::parse(&encode(&spec, &root)).unwrap();
    assert_eq!(sig.modules()[0].length, 300);
    assert_eq!(sig.modules()[0].tail_bytes, vec![TailByte { offset: 3, value: 0xC3 }]);
}

#[test]
fn header_bitness_limits_the_architecture() {
    let root = TNode::Inner(vec![(
        fixed(MEMCPY),
        TNode::Leaf(vec![TModule::named("memcpy", 9)]),
    )]);
    let spec = Spec {
        app_types: SigHeader::APPT_64BIT,
        ..Spec::default()
    };
    let sig = SigFile::parse(&encode(&spec, &root)).unwrap();
    assert!(sig.header.applies_to(ArchId::X86_64));
    assert!(!sig.header.applies_to(ArchId::X86));
    assert!(!sig.header.applies_to(ArchId::AArch64));
}

fn ida_samples() -> Option<PathBuf> {
    let dir = PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../research/ida-sig-til-samples");
    dir.is_dir().then_some(dir)
}

/// Every signature shipped with IDA 9 decodes and is consumed exactly.
#[test]
fn decodes_every_ida_signature() {
    let Some(dir) = ida_samples() else {
        eprintln!("skip: research/ida-sig-til-samples not present");
        return;
    };
    let mut decoded = 0;
    for sub in ["sig_pc", "sig_arm"] {
        let Ok(entries) = std::fs::read_dir(dir.join(sub)) else {
            continue;
        };
        for entry in entries {
            let path = entry.unwrap().path();
            if path.extension().is_some_and(|ext| ext == "sig") {
                let sig = SigFile::load(&path)
                    .unwrap_or_else(|e| panic!("{}: {e}", path.display()));
                assert!(!sig.modules().is_empty(), "{}", path.display());
                decoded += 1;
            }
        }
    }
    assert!(decoded > 0);
}

#[test]
fn ida_vc64ucrt_header_and_known_names() {
    let Some(dir) = ida_samples() else {
        eprintln!("skip: research/ida-sig-til-samples not present");
        return;
    };
    let sig = SigFile::load(dir.join("sig_pc/vc64ucrt.sig")).unwrap();
    assert_eq!(sig.header.arch, SigArch::X86);
    assert!(sig.header.applies_to(ArchId::X86_64));
    assert!(!sig.header.applies_to(ArchId::X86));
    let names: std::collections::BTreeSet<&str> = sig
        .modules()
        .iter()
        .filter_map(|m| m.function_name())
        .map(|n| n.name.as_str())
        .collect();
    for expected in ["strlen", "strcmp", "fwrite", "qsort", "_errno"] {
        assert!(names.contains(expected), "{expected} missing");
    }
}
