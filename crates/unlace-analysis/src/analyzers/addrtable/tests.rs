use super::*;

/// The `switchtab_x86_64` fixture's absolute jump table, read off
/// `readelf -x .rodata` / `objdump -d` at fixture-build time and pinned here
/// (addresses shift across toolchains — never re-derive). The 8-entry table
/// sits at vma `0x402008` (the `jmp *0x402008(,%rdi,8)` target); the 8-byte
/// prefix at `0x402000` is the switch's bounds word, not part of the table.
const EXPECTED_TABLE_VMA: u64 = 0x402008;
/// The 8 case targets, all inside `.text` (`0x401020..0x401159`).
const EXPECTED_ELEMENTS: [u64; 8] = [
    0x401149, 0x401119, 0x40111f, 0x401125, 0x40112b, 0x401131, 0x401137, 0x40113d,
];

fn load(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|e| panic!("read fixture {path}: {e}"))
}

#[test]
fn finds_the_8_entry_table_in_switchtab() {
    // The headline: the scanner FINDS the 8-entry absolute table at 0x402008
    // when invoked directly (NOT via default_passes — the pass is disabled).
    let bytes = load("switchtab_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse switchtab");
    assert!(file.is_64(), "fixture is ELFCLASS64");

    let tables = scan_address_tables(&file, /*min_run=*/ 2, /*ptr_size=*/ 8);

    let hit = tables
        .iter()
        .find(|t| t.addr == EXPECTED_TABLE_VMA)
        .unwrap_or_else(|| panic!("no table at {EXPECTED_TABLE_VMA:#x}; found: {tables:?}"));
    assert!(
        hit.len >= 8,
        "table at {EXPECTED_TABLE_VMA:#x} has {} slots, want >= 8",
        hit.len
    );
    // The first 8 decoded targets are the known case bodies, in order.
    assert_eq!(
        &hit.elements[..8],
        &EXPECTED_ELEMENTS,
        "table elements differ"
    );
}

#[test]
fn every_element_points_inside_an_executable_section() {
    let bytes = load("switchtab_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse switchtab");
    let tables = scan_address_tables(&file, 2, 8);
    assert!(!tables.is_empty(), "expected at least one table");
    for t in &tables {
        for &e in &t.elements {
            assert!(
                in_exec_section(&file, e),
                "element {e:#x} not in an exec section"
            );
        }
    }
}

#[test]
fn pass_marks_a_read_only_table_and_types_a_writable_one() {
    // The pure `emit_facts` over the scanned tables, the path `run` takes. The
    // `.rodata` table only becomes read-only; the same table in writable data
    // is a named `code *[8]`; neither makes a function entry.
    let bytes = load("switchtab_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse switchtab");
    let tables = scan_address_tables(&file, 2, 8);
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    let _ = types.cache_core_types();

    let out = emit_facts(&tables, 8, Some(&types), &BTreeMap::new());
    assert!(out.data_objects.is_empty() && out.typed_data.is_empty());
    assert!(out.entries.is_empty() && out.symbols.is_empty());
    assert!(
        out.readonly
            .iter()
            .any(|&(a, e)| a == EXPECTED_TABLE_VMA && e >= a + 64)
    );

    let writable: Vec<AddrTable> = tables
        .iter()
        .map(|t| AddrTable {
            read_only: false,
            ..t.clone()
        })
        .collect();
    let names = BTreeMap::from([(EXPECTED_TABLE_VMA, "jump_targets".to_string())]);
    let out = emit_facts(&writable, 8, Some(&types), &names);
    assert!(out.readonly.is_empty(), "a writable table is not read-only");
    let typed = out
        .typed_data
        .iter()
        .find(|d| d.name == "jump_targets")
        .expect("the image's own name wins");
    assert!(typed.type_.get_size() >= 64);
}

#[test]
fn fauxware_has_no_pointer_table_over_its_real_data() {
    // Negative/over-acceptance guard: fauxware (non-PIE, no dense switch) has no
    // run of consecutive in-.text pointers in .rodata/.data, so the scanner must
    // not invent a table over its real string data. The fauxware string literals
    // ("Username: " @ 0x400915, …) are NOT runs of in-.text 8-byte values, so the
    // in-exec + min-run checks reject them even with the reloc guard off (EXEC).
    let bytes = load("fauxware");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let tables = scan_address_tables(&file, /*min_run=*/ 2, 8);
    // No table may start inside the .rodata string region the strings test
    // pins (0x4008d0..0x400930), which is plain text, not pointers.
    assert!(
        !tables
            .iter()
            .any(|t| (0x4008d0..0x400930).contains(&t.addr)),
        "spurious table over fauxware string data: {tables:?}"
    );
}

#[test]
fn short_run_below_min_is_rejected() {
    // A run shorter than min_run must not be accepted as a table. With a huge
    // min_run, the real 8-entry table is also rejected (guards the threshold).
    let bytes = load("switchtab_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse switchtab");
    let tables = scan_address_tables(&file, /*min_run=*/ 64, 8);
    assert!(
        !tables.iter().any(|t| t.addr == EXPECTED_TABLE_VMA),
        "an 8-entry table must be rejected when min_run=64"
    );
}

#[test]
fn scan_runs_over_pe_and_macho() {
    // PR-10: the scanner is format-agnostic — `exec_ranges` finds the PE
    // `.text` (`IMAGE_SCN_MEM_EXECUTE`) and the searchable `.rdata`/`.data`,
    // and the scan completes (no ELF early return, no panic). We do not pin a
    // specific table (the pass is off by default and these fixtures carry no
    // dense pointer table); we prove the per-format flag arms resolve.
    let pe = load("pe_imports.exe");
    let pe_file = object::File::parse(pe.as_slice()).expect("parse pe");
    assert_eq!(pe_file.format(), object::BinaryFormat::Pe);
    let pe_exec = exec_ranges(&pe_file);
    assert!(
        !pe_exec.is_empty(),
        "PE .text must be found as an exec range"
    );
    // The scan runs to completion over the PE (the old gate returned early).
    let _ = scan_address_tables(&pe_file, 2, ptr_width(&pe_file));

    let mo = load("macho_imports");
    let mo_file = object::File::parse(mo.as_slice()).expect("parse macho");
    assert_eq!(mo_file.format(), object::BinaryFormat::MachO);
    let mo_exec = exec_ranges(&mo_file);
    assert!(
        !mo_exec.is_empty(),
        "Mach-O __text must be found as an exec range"
    );
    let _ = scan_address_tables(&mo_file, 2, ptr_width(&mo_file));
}

#[test]
fn read_ptr_endianness() {
    let le = [0x08, 0x20, 0x40, 0, 0, 0, 0, 0];
    assert_eq!(read_ptr(&le, 0, 8, true), Some(0x402008));
    let be = [0, 0, 0, 0, 0, 0x40, 0x20, 0x08];
    assert_eq!(read_ptr(&be, 0, 8, false), Some(0x402008));
    // too-short slice
    assert_eq!(read_ptr(&[0u8; 3], 0, 8, true), None);
}

#[test]
fn string_guard_rejects_printable_runs() {
    // "AAAAAAAA" is 8 printable bytes — guarded as a would-be string, not a
    // table slot.
    let s = b"AAAAAAAA";
    assert!(looks_like_string(s, 0, 8));
    // a slot full of zero bytes is not printable text
    assert!(!looks_like_string(&[0u8; 8], 0, 8));
}
