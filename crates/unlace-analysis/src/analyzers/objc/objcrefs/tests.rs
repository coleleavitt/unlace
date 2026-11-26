use super::*;

/// The two-instruction pair of an `-objc_stubs_fast` entry at `0x1000008a0`
/// (`adrp x1, 0x100008000; ldr x1, [x1, #0x210]`), followed by the
/// `objc_msgSend` jump words that must not match, then a second stub.
#[test]
fn arm64_stub_pairs_resolve_their_selref_slot() {
    let words: [u32; 16] = [
        0x9000_0041,
        0xF941_0821,
        0x9000_0030,
        0xF940_0210,
        0xD61F_0200,
        0xD420_0020,
        0xD420_0020,
        0xD420_0020,
        0x9000_0041,
        0xF941_0C21,
        0x9000_0030,
        0xF940_0210,
        0xD61F_0200,
        0xD420_0020,
        0xD420_0020,
        0xD420_0020,
    ];
    let data: Vec<u8> = words.iter().flat_map(|w| w.to_le_bytes()).collect();
    assert_eq!(
        stubs(object::Architecture::Aarch64, 0x1000008a0, &data),
        vec![(0x1000008a0, 0x100008210), (0x1000008c0, 0x100008218)]
    );
}

#[test]
fn x86_64_stub_pairs_resolve_their_selref_slot() {
    let mut data = vec![
        0x48, 0x8b, 0x35, 0x10, 0x00, 0x00, 0x00, 0xff, 0x25, 0, 0, 0, 0, 0xcc, 0xcc, 0xcc,
    ];
    data.extend_from_slice(&[
        0x48, 0x8b, 0x35, 0xf0, 0xff, 0xff, 0xff, 0xe9, 0, 0, 0, 0, 0xcc, 0xcc, 0xcc, 0xcc,
    ]);
    assert_eq!(
        stubs(object::Architecture::X86_64, 0x1000, &data),
        vec![(0x1000, 0x1017), (0x1010, 0x1007)]
    );
}

/// The whole walk over the `macho_objc_refs_arm64` fixture: six selref slots,
/// one superref, two classrefs (one a bind), three stubs; the rebase slots of
/// the three sections are the constant ranges, the bind slot is not.
#[test]
fn walks_macho_objc_refs_fixture() {
    use crate::loader::format::macho::resolve_chained_fixups;
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_refs_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));

    assert_eq!(
        img.rebase_ptr(0x1000081f0),
        Some(0x100008050),
        "superref → class_t Derived"
    );
    assert_eq!(
        img.rebase_ptr(0x100008230),
        None,
        "a bind slot has no pointer"
    );
    assert_eq!(img.bind_name(0x100008230), Some("_OBJC_CLASS_$_Remote"));

    let sec = file.section_by_name(SEC_STUBS).expect("__objc_stubs");
    let found = stubs(file.architecture(), sec.address(), sec.data().unwrap());
    assert_eq!(found.len(), 3);
    assert_eq!(found[0], (0x1000008c0, 0x100008210));
    let sel = img.read_cstr(img.rebase_ptr(found[0].1).unwrap()).unwrap();
    assert_eq!(sel, "count");

    let mut slots = Vec::new();
    for va in section_slots(&file, SEC_SELREFS, 8) {
        push_slot(&mut slots, va, 8);
    }
    assert_eq!(
        slots,
        vec![(0x1000081f8, 0x100008228)],
        "six adjacent selref slots merge"
    );
}

/// On a bind-only chained image the packed bind word is not a pointer.
#[test]
fn bind_only_chained_image_has_no_rebase_pointer() {
    use crate::loader::format::macho::resolve_chained_fixups;
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_bind_only_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    assert!(img.chained());
    assert_eq!(img.rebase_ptr(0x100004000), None);
    assert_eq!(img.bind_name(0x100004000), Some("_ext"));
}

/// A ref section whose header claims far more bytes than the file holds
/// yields no slots instead of one allocation per claimed slot.
#[test]
fn oversized_ref_section_header_is_bounded_by_file_data() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_refs_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    for size in [0x0800_0000_0000_0000u64, 1 << 30, u64::MAX] {
        let patched = with_section_size(bytes.clone(), SEC_SELREFS, size);
        let file = object::File::parse(patched.as_slice()).expect("parse Mach-O");
        assert!(
            section_slots(&file, SEC_SELREFS, 8).len() <= 6,
            "size {size:#x}"
        );
    }
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert_eq!(section_slots(&file, SEC_SELREFS, 8).len(), 6);
}

/// AAPCS64 spreads a homogeneous aggregate of up to four doubles and passes
/// a larger one by pointer; System V stops at two eightbytes and passes
/// anything larger on the stack, which no register pin can state.
#[test]
fn struct_passing_follows_each_convention() {
    use object::Architecture::{Aarch64, X86_64};
    let codes = |c: &str, n: usize| vec![c.to_string(); n];
    let rect = codes("d", 4);
    let size = codes("d", 2);
    let transform = codes("d", 6);
    let range = codes("Q", 2);
    assert!(matches!(struct_passing(Aarch64, &rect), StructPass::Spread));
    assert!(matches!(
        struct_passing(Aarch64, &transform),
        StructPass::ByReference
    ));
    assert!(matches!(
        struct_passing(Aarch64, &range),
        StructPass::Spread
    ));
    assert!(matches!(
        struct_passing(Aarch64, &codes("f", 2)),
        StructPass::Unmodelled
    ));
    assert!(matches!(
        struct_passing(X86_64, &rect),
        StructPass::Unmodelled
    ));
    assert!(matches!(
        struct_passing(X86_64, &transform),
        StructPass::Unmodelled
    ));
    assert!(matches!(struct_passing(X86_64, &size), StructPass::Spread));
    assert!(matches!(struct_passing(X86_64, &range), StructPass::Spread));
    assert!(matches!(
        struct_passing(X86_64, &codes("q", 3)),
        StructPass::Unmodelled
    ));
}

/// A stub section mapped at the top of the address space wraps instead of
/// overflowing.
#[test]
fn stub_scan_wraps_at_the_top_of_the_address_space() {
    let arm: Vec<u8> = [0x9000_0041u32, 0xF941_0821]
        .iter()
        .flat_map(|w| w.to_le_bytes())
        .collect();
    assert_eq!(
        stubs(
            object::Architecture::Aarch64,
            u64::MAX - 3,
            &[[0u8; 4].as_slice(), &arm].concat()
        )
        .len(),
        1
    );
    let x86 = [0, 0x48, 0x8b, 0x35, 0x10, 0x00, 0x00, 0x00, 0xff, 0x25];
    assert_eq!(
        stubs(object::Architecture::X86_64, u64::MAX, &x86),
        vec![(0, 0x17)]
    );
}

#[test]
fn adjacent_slots_merge() {
    let mut r = Vec::new();
    push_slot(&mut r, 0x100, 8);
    push_slot(&mut r, 0x108, 8);
    push_slot(&mut r, 0x118, 8);
    assert_eq!(r, vec![(0x100, 0x110), (0x118, 0x120)]);
}

/// A hostile spelling reaches `split_method` through [`shape`]: it is
/// refused at the depth cap and compared as text, not recursed.
#[test]
fn record_survives_a_hostile_spelling() {
    let deep = format!("v@:{}i", "^".repeat(1_000_000));
    let mut sel = Selectors::default();
    sel.record("x", Some("v16@0:8"));
    sel.record("x", Some(&deep));
    assert_eq!(sel.encoding("x"), None);
    sel.record("y", Some(&deep));
    sel.record("y", Some(&deep));
    assert_eq!(sel.encoding("y"), Some(deep.as_str()));
}

#[test]
fn record_keeps_the_class_bearing_spelling_and_drops_disagreement() {
    let mut sel = Selectors::default();
    sel.record("inner", Some("@16@0:8"));
    sel.record("inner", Some("@\"Base\"@:"));
    assert_eq!(sel.encoding("inner"), Some("@\"Base\"@:"));
    sel.record("inner", Some("@16@0:8"));
    assert_eq!(
        sel.encoding("inner"),
        Some("@\"Base\"@:"),
        "a plain spelling does not replace a classed one"
    );
    sel.record("inner", Some("q16@0:8"));
    assert_eq!(
        sel.encoding("inner"),
        None,
        "a different shape drops the selector"
    );

    let mut sel = Selectors::default();
    sel.record_for_class("A", "view", "@\"UIView\"@:");
    sel.record_for_class("B", "view", "@\"NSView\"@:");
    assert_eq!(
        sel.encoding_for_class("B", "view"),
        Some("@\"NSView\"@:"),
        "each class keeps its own class"
    );
    assert_eq!(
        sel.encoding_for_class("C", "view"),
        None,
        "a class with no property takes no other class's spelling"
    );
    assert_eq!(sel.encoding_for_class("A", "view"), Some("@\"UIView\"@:"));
    assert_eq!(
        sel.encoding("view"),
        Some("@@:"),
        "two classes named: a stub takes neither"
    );
    sel.record("view", Some("@\"UIView\"16@0:8"));
    assert_eq!(
        sel.encoding("view"),
        Some("@@:"),
        "a later classed spelling does not bring a class back"
    );
}

#[test]
fn stub_encoding_needs_agreeing_declarations() {
    let sdk: HashMap<String, Option<String>> = [
        ("tag".to_string(), Some("q@:".to_string())),
        ("count".to_string(), Some("Q@:".to_string())),
        ("width".to_string(), None),
        ("depth".to_string(), None),
        ("index".to_string(), Some("Q@:".to_string())),
        ("alpha".to_string(), Some("d@:".to_string())),
    ]
    .into_iter()
    .collect();
    let mut sel = Selectors::with_sdk(sdk);
    sel.record_declared("length", Some("d16@0:8"));
    sel.record("tag", Some("d16@0:8"));
    sel.record("count", Some("Q16@0:8"));
    sel.record("width", Some("d16@0:8"));
    sel.record("size", Some("d16@0:8"));
    sel.record_declared("depth", Some("d16@0:8"));
    sel.record_declared("wave", Some("v16@0:8"));
    sel.record("index", Some("q16@0:8"));
    assert_eq!(
        sel.stub_encoding("length"),
        None,
        "a protocol-only double return the headers do not confirm"
    );
    assert_eq!(
        sel.stub_encoding("tag"),
        None,
        "the headers return an integer"
    );
    assert_eq!(
        sel.stub_encoding("count"),
        Some("Q16@0:8"),
        "the headers agree"
    );
    assert_eq!(
        sel.stub_encoding("width"),
        Some("d16@0:8"),
        "headers that cannot spell it leave an implemented one"
    );
    assert_eq!(
        sel.stub_encoding("depth"),
        None,
        "headers that cannot spell it confirm no protocol-only one"
    );
    assert_eq!(
        sel.stub_encoding("index"),
        Some("q16@0:8"),
        "signedness is the same register"
    );
    assert_eq!(
        sel.stub_encoding("wave"),
        Some("v16@0:8"),
        "a protocol-only void return"
    );
    assert_eq!(
        sel.stub_encoding("size"),
        Some("d16@0:8"),
        "implemented here, unknown to the headers"
    );
    assert_eq!(
        sel.stub_encoding("alpha"),
        Some("d@:"),
        "declared only by the headers"
    );
    sel.record_declared("count", Some("Q16@0:8"));
    assert_eq!(
        sel.stub_encoding("count"),
        Some("Q16@0:8"),
        "a protocol may repeat an implemented selector"
    );
}
