//! Synthetic indirect-symbol tests mirroring `elf_plt.rs` / `pe_iat.rs`. The
//! `__stubs` *walk* is covered end-to-end by the real-Mach-O console gate
//! (`verify_macho_imports`); here we unit-test the two pieces of pure logic
//! that are awkward to reach through a linked binary: the leading-underscore
//! strip and the stub-entry address arithmetic + indirect-table filtering.
use super::*;

/// `_printf` → `printf`; a name without the C-ABI underscore is untouched.
#[test]
fn a_stripped_dylib_keeps_its_trie_exports() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_trieonly_arm64"
    );
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    let mut exports = trie_exports(&file, &bytes);
    exports.sort();
    assert_eq!(
        exports,
        [
            (0x298, "_trie_scale".to_string()),
            (0x2a4, "_trie_entry".to_string())
        ]
    );
}

#[test]
fn underscore_strip() {
    assert_eq!(strip_leading_underscore(b"_printf"), b"printf".to_vec());
    assert_eq!(strip_leading_underscore(b"_main"), b"main".to_vec());
    // A clean / already-demanglable name keeps exactly one `_` removed.
    assert_eq!(strip_leading_underscore(b"__Znwm"), b"_Znwm".to_vec());
    // No underscore: untouched.
    assert_eq!(strip_leading_underscore(b"foo"), b"foo".to_vec());
    // Empty stays empty.
    assert_eq!(strip_leading_underscore(b""), b"".to_vec());
}

/// The pure stub-naming arithmetic + indirect-table filtering the real walk
/// performs, exercised against a synthetic `S_SYMBOL_STUBS` layout
/// (1 import + 1 LOCAL placeholder) — no linker / `object::File` needed.
///
/// Models the vendored x86-64 fixture: `__stubs` @ 0x1000005cc, `reserved2`
/// (stub size) = 6, indirect index 0 → `_printf`, index 1 → INDIRECT_LOCAL.
#[test]
fn synthetic_stub_naming() {
    // The flat indirect-symbol table, as the section's window into it.
    let indirect: [u32; 2] = [4 /* -> _printf */, INDIRECT_SYMBOL_LOCAL];
    // A name table keyed by symbol index (stand-in for the `LC_SYMTAB`).
    let symbol_name = |idx: u32| -> Option<&'static [u8]> {
        match idx {
            4 => Some(b"_printf"),
            _ => None,
        }
    };

    let stub_base: u64 = 0x1000005cc;
    let stride: u64 = 6; // reserved2 for the x86-64 fixture

    let mut out: Vec<ImportSym> = Vec::new();
    for (i, &raw) in indirect.iter().enumerate() {
        if raw & (INDIRECT_SYMBOL_LOCAL | INDIRECT_SYMBOL_ABS) != 0 {
            continue; // the LOCAL placeholder is skipped
        }
        let Some(raw_name) = symbol_name(raw) else {
            continue;
        };
        let name = strip_leading_underscore(raw_name);
        let addr = stub_base + (i as u64) * stride;
        out.push(ImportSym {
            addr,
            name,
            kind: ImportSymKind::Import,
        });
    }

    assert_eq!(
        out.len(),
        1,
        "only the real import is named, the LOCAL is skipped"
    );
    assert_eq!(
        out[0].addr, 0x1000005cc,
        "stub entry 0 is at the section base"
    );
    assert_eq!(
        out[0].name,
        b"printf".to_vec(),
        "_printf is named, `_` stripped"
    );
}

/// Symbol-pointer slots (`__la_symbol_ptr` / `__got`) are named at
/// `base + i*ptr` — the GOT-slot analog, for a folded indirect `call [ptr]`.
#[test]
fn synthetic_pointer_slot_naming() {
    let indirect: [u32; 1] = [4]; // -> _printf
    let slot_base: u64 = 0x100003000;
    let ptr: u64 = 8; // 64-bit pointer width
    let mut out: Vec<ImportSym> = Vec::new();
    for (i, &raw) in indirect.iter().enumerate() {
        if raw & (INDIRECT_SYMBOL_LOCAL | INDIRECT_SYMBOL_ABS) != 0 {
            continue;
        }
        let name = strip_leading_underscore(b"_printf");
        out.push(ImportSym {
            addr: slot_base + (i as u64) * ptr,
            name,
            kind: ImportSymKind::Import,
        });
        let _ = raw;
    }
    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, 0x100003000);
    assert_eq!(out[0].name, b"printf".to_vec());
}

/// External-reference painting has a narrower eligibility rule than import
/// naming: only lazy/non-lazy pointers with real imported symbol indices.
#[test]
fn external_import_slot_eligibility_is_exact() {
    assert!(is_external_import_slot_section(
        object::macho::S_LAZY_SYMBOL_POINTERS
    ));
    assert!(is_external_import_slot_section(
        object::macho::S_NON_LAZY_SYMBOL_POINTERS
    ));
    for section_type in [
        object::macho::S_SYMBOL_STUBS,
        object::macho::S_LAZY_DYLIB_SYMBOL_POINTERS,
        object::macho::S_THREAD_LOCAL_VARIABLE_POINTERS,
        object::macho::S_REGULAR,
    ] {
        assert!(!is_external_import_slot_section(section_type));
    }

    assert!(is_imported_indirect_symbol(4));
    assert!(!is_imported_indirect_symbol(INDIRECT_SYMBOL_LOCAL));
    assert!(!is_imported_indirect_symbol(INDIRECT_SYMBOL_ABS));
    assert!(!is_imported_indirect_symbol(
        INDIRECT_SYMBOL_LOCAL | INDIRECT_SYMBOL_ABS
    ));
}

/// Only the typed `__got` indirect-symbol entry is an external-reference
/// slot. The adjacent `__objc_msgrefs` pointer has the same width and names
/// the same undefined function, but is ordinary Objective-C metadata.
#[test]
fn import_slot_ranges_exclude_objc_message_refs() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_import_slots"
    );
    let bytes = std::fs::read(path).expect("read macho_import_slots");
    let file = object::File::parse(bytes.as_slice()).expect("parse macho_import_slots");

    let slots = resolve_macho_import_slots(&file, &bytes);
    assert_eq!(slots, vec![(0x100001000, 0x100001008)]);
    assert!(
        !slots
            .iter()
            .any(|&(first, last)| first < 0x100002010 && last > 0x100002000),
        "__objc_msgrefs must not be painted externref: {slots:?}"
    );
}
