//! PS-X EXE, N64 ROM, a.out, Amiga hunk, PEF and NE executables and OMF
//! objects and libraries load without `--raw-image`: each header supplies the
//! language, base, entry and names. The retro fixtures are one program
//! (`tests/fixtures/retro-formats/retro.c`); the NE and OMF ones are built by
//! `tests/fixtures/win16-omf/build.py`.

use crate::common;

fn fixture(name: &str) -> String {
    common::repo_root()
        .join("tests/fixtures/retro-formats")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

fn unlace(args: &[&str]) -> String {
    let (stdout, stderr, code) = common::run_unlace(args);
    assert_eq!(code, 0, "kuna {args:?}: {stderr}");
    stdout
}

/// The `functions` inventory as `(address, name)` rows; an entry's aliases,
/// which follow its name on the same line, are dropped.
fn functions(name: &str) -> Vec<(u64, String)> {
    unlace(&["functions", &fixture(name)])
        .lines()
        .map(|line| {
            let (address, rest) = line.split_once('\t').expect("address<TAB>name");
            let name = rest.split('\t').next().unwrap_or(rest);
            (
                u64::from_str_radix(address.trim_start_matches("0x"), 16).unwrap(),
                name.to_owned(),
            )
        })
        .collect()
}

fn names(name: &str) -> Vec<String> {
    functions(name).into_iter().map(|(_, name)| name).collect()
}

#[test]
fn a_psx_exe_loads_at_t_addr_with_gp_set() {
    let found = functions("hello.psx");
    assert!(
        found
            .iter()
            .all(|(address, _)| (0x8001_0000..0x8001_0800).contains(address)),
        "{found:?}"
    );
    assert_eq!(
        found.len(),
        3,
        "pc0 and the two functions it reaches by direct calls: {found:?}"
    );
    let main = format!("{:#x}", found.last().unwrap().0);
    let code = unlace(&["decompile", &fixture("hello.psx"), &main, "--addr"]);
    assert!(
        code.contains(",5)"),
        "main passes the string length to its checksum call:\n{code}"
    );
    let sum = format!("{:#x}", found[1].0);
    let code = unlace(&["decompile", &fixture("hello.psx"), &sum, "--addr"]);
    assert!(
        !code.contains("gp"),
        "gp-relative data resolves to addresses:\n{code}"
    );
    assert!(code.contains("dat_8001"), "{code}");
}

#[test]
fn an_n64_rom_maps_its_boot_segment_at_the_header_entry() {
    let found = functions("hello.z64");
    assert_eq!(found[0].0, 0x8000_0400, "{found:?}");
    let code = unlace(&["decompile", &fixture("hello.z64"), "0x80000400", "--addr"]);
    assert!(code.contains("sub_8000") && code.contains(",5)"), "{code}");
    let listing = unlace(&[
        "disassemble",
        &fixture("hello.z64"),
        "0x80000400",
        "--addr",
        "--count",
        "1",
    ]);
    assert!(listing.contains("0x80000400"), "{listing}");
}

#[test]
fn an_aout_executable_loads_with_its_symbols() {
    assert_eq!(
        names("hello-m68k.aout"),
        ["checksum", "main", "scale", "sum"]
    );
    let code = unlace(&["decompile", &fixture("hello-m68k.aout"), "sum"]);
    assert!(code.contains("scratch = a0;"), "{code}");
    assert!(code.contains("(*handler)(a0)"), "{code}");
    assert!(code.contains("table"), "{code}");
}

#[test]
fn an_aout_object_resolves_its_external_calls() {
    assert_eq!(
        names("hello-i386.aout"),
        ["scale", "checksum", "sum", "main", "puts"]
    );
    let code = unlace(&["decompile", &fixture("hello-i386.aout"), "main"]);
    assert!(code.contains("puts("), "{code}");
    assert!(
        code.contains("sum(") && code.contains("checksum("),
        "{code}"
    );
    assert!(
        code.contains("scratch") && code.contains("counter"),
        "{code}"
    );
}

#[test]
fn an_amiga_hunk_file_is_relocated_across_its_hunks() {
    let found = functions("hello.hunk");
    assert_eq!(
        found[0],
        (0x10000, "main".to_owned()),
        "the first hunk's first byte is the entry"
    );
    assert_eq!(names("hello.hunk"), ["main", "checksum", "scale", "sum"]);
    let code = unlace(&["decompile", &fixture("hello.hunk"), "sum"]);
    assert!(
        code.contains("scratch = a0;"),
        "a code-to-bss reference is an address:\n{code}"
    );
    assert!(code.contains("(*handler)(a0)"), "{code}");
}

#[test]
fn a_pef_fragment_loads_with_its_toc_exports_and_imports() {
    assert_eq!(
        names("hello.pef"),
        ["scale", "checksum", "sum", "main", "puts"]
    );
    let code = unlace(&["decompile", &fixture("hello.pef"), "scale"]);
    assert!(!code.contains("r2"), "the TOC is known at entry:\n{code}");
    assert!(code.contains("a0 * 3"), "{code}");
    let code = unlace(&["decompile", &fixture("hello.pef"), "main"]);
    assert!(
        code.contains("puts(") && code.contains("checksum("),
        "{code}"
    );
}

#[test]
fn an_explicit_target_overrides_the_container_language() {
    let code = unlace(&[
        "decompile",
        &fixture("hello.hunk"),
        "scale",
        "--target",
        "68000:BE:32:MC68020",
    ]);
    assert!(code.contains("counter"), "{code}");
}

#[test]
fn object_view_commands_refuse_with_the_capability_error() {
    for name in [
        "hello.psx",
        "hello.z64",
        "hello-m68k.aout",
        "hello.hunk",
        "hello.pef",
    ] {
        let (_, stderr, code) = common::run_unlace(&["strings", &fixture(name)]);
        assert_ne!(code, 0, "{name}");
        assert!(stderr.contains("no object-file view"), "{name}: {stderr}");
    }
}

#[test]
fn a_malformed_container_is_named_in_its_error() {
    let mut bytes = std::fs::read(fixture("hello.psx")).unwrap();
    bytes[0x10..0x14].copy_from_slice(&0u32.to_le_bytes());
    let path = common::scratch_file("bad-pc0", "psx");
    std::fs::write(&path, bytes).unwrap();
    let (_, stderr, code) = common::run_unlace(&["functions", path.to_str().unwrap()]);
    assert_ne!(code, 0);
    assert!(
        stderr.contains("invalid PS-X EXE image: pc0 is outside the text"),
        "{stderr}"
    );
}

fn win16(name: &str) -> String {
    common::repo_root()
        .join("tests/fixtures/win16-omf")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

/// A Win16 NE executable loads under the 16-bit protected-mode language:
/// its exports and imports are named functions and every far call reaches one.
#[test]
fn a_win16_ne_executable_names_its_exports_and_imports() {
    let listed = unlace(&["functions", &win16("hello.exe")]);
    for name in ["START", "HELPER", "KERNEL_91", "MESSAGEBOX"] {
        assert!(listed.contains(name), "{name}:\n{listed}");
    }
    let code = unlace(&["decompile", &win16("hello.exe"), "0x10000", "--addr"]);
    for call in ["KERNEL_91(", "MESSAGEBOX(", "HELPER("] {
        assert!(code.contains(call), "{call}:\n{code}");
    }
}

/// An OMF object and a library of two: publics are functions, externals
/// named slots, and a library's modules call each other.
#[test]
fn omf_objects_and_libraries_load_with_their_names() {
    let code = unlace(&["decompile", &win16("hello16.obj"), "0x1000b", "--addr"]);
    for call in ["_sum(", "_puts(", "far_helper("] {
        assert!(code.contains(call), "{call}:\n{code}");
    }
    let listed = unlace(&["functions", &win16("hello.lib")]);
    assert!(listed.contains("0x10040\tfar_helper"), "{listed}");
    let code = unlace(&["decompile", &win16("hello32.obj"), "0x40000d", "--addr"]);
    for call in ["_add3(", "_printf("] {
        assert!(code.contains(call), "{call}:\n{code}");
    }
}
