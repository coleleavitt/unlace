use super::*;
use crate::loader::reloc_object::RELOC_BASE;

/// The gate is a process-global env var, so the test that toggles it and the
/// tests that read it must not run concurrently.
static GATE: std::sync::Mutex<()> = std::sync::Mutex::new(());

fn serial() -> std::sync::MutexGuard<'static, ()> {
    GATE.lock().unwrap_or_else(|e| e.into_inner())
}

fn fixture(name: &str) -> Vec<u8> {
    let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures")
        .join(name);
    std::fs::read(&path).unwrap_or_else(|e| panic!("read {}: {e}", path.display()))
}

/// Every laid-out section, symbol and `.eh_frame` FDE of an ELF `ET_REL`
/// lands in the loaded image's address space after the rebase.
#[test]
fn et_rel_sections_and_symbols_are_rebased() {
    let _serial = serial();
    let bytes = fixture("ptx.o");
    let file = object::File::parse(&*bytes).expect("parse ptx.o");
    let view = rebased_view(&file, &bytes).expect("ptx.o is synthetically laid out");
    let rebased = object::File::parse(&*view.bytes).expect("patched image still parses");

    let text = rebased.section_by_name(".text").expect(".text");
    assert_eq!(text.address(), RELOC_BASE, ".text at the layout base");
    let startup = rebased
        .section_by_name(".text.startup")
        .expect(".text.startup");
    assert!(
        startup.address() > RELOC_BASE,
        ".text.startup laid out above .text"
    );

    let sym = |name: &str| {
        rebased
            .symbols()
            .find(|s| s.name() == Ok(name))
            .unwrap_or_else(|| panic!("symbol {name}"))
            .address()
    };
    assert_eq!(sym("to_uchar"), RELOC_BASE, ".text+0 symbol rebased");
    assert_eq!(
        sym("main"),
        startup.address(),
        ".text.startup+0 symbol rebased"
    );

    // The `.eh_frame` FDE oracle used to report the FDE's own section offset
    // (0x20, 0x34, …) because `initial_location` is a PC-relative field the
    // linker had not resolved. Every start must now be a real code address.
    let starts = crate::entry::scan_eh_frame_starts(&rebased);
    assert!(!starts.is_empty(), "ptx.o has FDEs");
    for start in &starts {
        assert!(
            view.contains(*start),
            "FDE start {start:#x} outside the loaded image"
        );
    }
    assert!(
        starts.contains(&RELOC_BASE),
        "the .text+0 FDE resolves to the layout base"
    );
}

/// A big-endian object's headers, symbols and debug fields are patched in
/// its own byte order, so its sections, symbols and DWARF read at the
/// addresses the loader gives them, as a little-endian object's do.
#[test]
fn big_endian_et_rel_is_rebased_in_its_own_byte_order() {
    let _serial = serial();
    for name in ["relocrebase_be_armeb.o", "relocrebase_be_ppc32.o"] {
        let bytes = fixture(name);
        let file = object::File::parse(&*bytes).expect("parse");
        assert!(!file.is_little_endian(), "{name} is big-endian");
        let view = rebased_view(&file, &bytes).unwrap_or_else(|| panic!("{name} is rebased"));
        let rebased = object::File::parse(&*view.bytes).expect("patched image still parses");
        let text = rebased.section_by_name(".text").expect(".text");
        assert_eq!(
            text.address(),
            RELOC_BASE,
            "{name}: .text at the layout base"
        );
        let sym = |n: &str| {
            rebased
                .symbols()
                .find(|s| s.name() == Ok(n))
                .map(|s| s.address())
        };
        assert_eq!(sym("scale"), Some(RELOC_BASE), "{name}: scale rebased");
        assert!(
            sym("greet").is_some_and(|a| view.contains(a) && a > RELOC_BASE),
            "{name}: greet rebased"
        );
        // DWARF 5 keeps the code addresses in `.debug_addr`, big-endian.
        let addrs = rebased
            .section_by_name(".debug_addr")
            .unwrap()
            .data()
            .unwrap();
        let words: Vec<u32> = addrs[8..]
            .chunks_exact(4)
            .map(|w| u32::from_be_bytes(w.try_into().unwrap()))
            .collect();
        assert!(
            words.contains(&(RELOC_BASE as u32)),
            "{name}: .debug_addr names .text at its load VMA: {words:x?}"
        );
    }
}

/// A big-endian MIPS PIC object's functions sit at their load addresses in
/// the rebased view, which is where the `t9 = entry` seed of a PIC prologue
/// (`addu gp,gp,t9`) must point.
#[test]
fn big_endian_mips_pic_object_is_rebased() {
    let _serial = serial();
    let bytes = fixture("relocrebase_be_mips.o");
    let file = object::File::parse(&*bytes).expect("parse");
    let view = rebased_view(&file, &bytes).expect("rebased");
    let rebased = object::File::parse(&*view.bytes).expect("patched image still parses");
    let sym = |n: &str| {
        rebased
            .symbols()
            .find(|s| s.name() == Ok(n))
            .map(|s| s.address())
    };
    assert_eq!(
        rebased.section_by_name(".text").map(|s| s.address()),
        Some(RELOC_BASE)
    );
    assert_eq!(sym("scale"), Some(RELOC_BASE));
    assert_eq!(sym("greet"), Some(RELOC_BASE + 8));
}

/// The DWARF pass's `DW_AT_low_pc` and `DW_FORM_strp` fields need their
/// `.debug_info` relocations applied: unrebased, every subprogram reads
/// address 0 and every name reads `.debug_str`+0.
#[test]
fn et_rel_debug_sections_are_relocated() {
    let _serial = serial();
    let bytes = fixture("ptx.o");
    let file = object::File::parse(&*bytes).expect("parse ptx.o");
    let view = rebased_view(&file, &bytes).expect("synthetically laid out");
    let raw = file
        .section_by_name(".debug_info")
        .expect(".debug_info")
        .data()
        .unwrap();
    let rebased = object::File::parse(&*view.bytes).unwrap();
    let patched = rebased
        .section_by_name(".debug_info")
        .unwrap()
        .data()
        .unwrap();
    assert_ne!(raw, patched, ".debug_info relocations applied");
}

/// A `.debug_info` stored compressed (`SHF_COMPRESSED`, zstd here) reads
/// back, relocated and uncompressed, exactly as the plain object's does.
#[test]
fn compressed_debug_sections_are_inflated_then_relocated() {
    let _serial = serial();
    let debug_info = |name: &str| {
        let bytes = fixture(name);
        let file = object::File::parse(&*bytes).expect("parse");
        let view = rebased_view(&file, &bytes).expect("synthetically laid out");
        let rebased = object::File::parse(&*view.bytes).expect("patched image still parses");
        let sec = rebased.section_by_name(".debug_info").expect(".debug_info");
        assert!(!is_gabi_compressed(&sec), "{name}: stored uncompressed");
        sec.data().unwrap().to_vec()
    };
    let plain = debug_info("ptx.o");
    assert_eq!(debug_info("ptx_zstd.o"), plain);
}

/// A COFF `.obj` takes the same treatment through its `VirtualAddress` field.
#[test]
fn coff_obj_sections_are_rebased() {
    let _serial = serial();
    for name in ["coff_obj.obj", "coff_comdat_i386.obj"] {
        let bytes = fixture(name);
        let file = object::File::parse(&*bytes).expect("parse obj");
        let view = rebased_view(&file, &bytes).expect("obj is synthetically laid out");
        let rebased = object::File::parse(&*view.bytes).expect("patched obj still parses");
        let mut any = false;
        for sec in rebased.sections() {
            if sec.size() == 0 {
                continue;
            }
            if sec.address() == 0 {
                continue; // a link-time-only section keeps no address
            }
            any = true;
            assert!(
                view.contains(sec.address()),
                "{name}: section {:?} at {:#x} outside the loaded image",
                sec.name(),
                sec.address()
            );
        }
        assert!(any, "{name}: no section was rebased");
    }
}

/// A linked executable is never touched (the whole feature is a strict no-op
/// off the relocatable-object path).
#[test]
fn linked_image_is_untouched() {
    let _serial = serial();
    let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../tests/bug-repro/grep");
    let Ok(bytes) = std::fs::read(&path) else {
        return;
    };
    let file = object::File::parse(&*bytes).expect("parse grep");
    assert!(
        rebased_view(&file, &bytes).is_none(),
        "a linked ELF is not rebased"
    );
}
