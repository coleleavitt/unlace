//! Raw-image seeds, bases and address units.

use super::*;

#[test]
fn raw_image_supported_surfaces_share_seed_and_base_semantics() {
    let path = common::scratch_file("raw thumb image", "bin");
    std::fs::write(&path, [0x07, 0x20, 0x70, 0x47]).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();
    let target = "ARM:LE:32:v4t:default";
    let spec = PathBuf::from(&sp).join("Ghidra/Processors/ARM/data/languages/ARM8_le.sla");
    assert!(
        unlace_slacomp::slacache::sla_path(&spec).is_ok(),
        "required processor spec missing; build specs before running integration tests"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x4000",
        "--entry",
        "0x4001",
        "--isa",
        "thumb",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw functions failed: {stderr}");
    assert!(stdout.contains("\"count\": 1"), "{stdout}");
    assert!(stdout.contains("\"address_hex\": \"0x4000\""), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x4000",
        "--entry",
        "0x4001",
        "--isa",
        "thumb",
        "--option",
        "namestyle",
        "ghidra",
        "--filter",
        "^func_",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw functions with ghidra names failed: {stderr}");
    assert!(stdout.contains("\"count\": 1"), "{stdout}");
    assert!(stdout.contains("\"name\": \"func_"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x4000",
        "--addr",
        "0x4001",
        "--isa",
        "thumb",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw decompile-all failed: {stderr}");
    assert!(
        stdout.contains("return 7;"),
        "unexpected raw body:\n{stdout}"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &binary,
        "0x4001",
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x4000",
        "--isa",
        "thumb",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw decompile --json failed: {stderr}");
    assert!(stdout.contains("\"address\": 16384"), "{stdout}");
    assert!(stdout.contains("return 7;"), "{stdout}");

    let out_dir = common::scratch_file("raw-project", "dir");
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-project",
        &binary,
        "-o",
        out_dir.to_str().unwrap(),
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x4000",
        "--entry",
        "0x4001",
        "--isa",
        "thumb",
        "--assert",
        "data 0x4001 char odd_data",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw project export failed: {stderr}");
    assert!(stdout.contains("functions: 1 ok, 0 failed"), "{stdout}");
    let artifacts: Vec<String> = std::fs::read_dir(&out_dir)
        .unwrap()
        .map(|entry| entry.unwrap().file_name().to_string_lossy().into_owned())
        .collect();
    assert!(
        artifacts.iter().any(|name| name.ends_with(".c")),
        "{artifacts:?}"
    );
    assert!(
        artifacts.iter().any(|name| name.ends_with(".asm")),
        "{artifacts:?}"
    );
    assert!(
        artifacts.iter().any(|name| name == "README.md"),
        "{artifacts:?}"
    );
    let asm_name = artifacts
        .iter()
        .find(|name| name.ends_with(".asm"))
        .unwrap();
    let asm = std::fs::read_to_string(out_dir.join(asm_name)).unwrap();
    let data_tail = asm
        .split("; --- data ---")
        .nth(1)
        .expect("project data tail");
    assert!(data_tail.contains("odd_data:  ; 0x4001"), "{data_tail}");
    assert!(data_tail.contains("  00004001:"), "{data_tail}");
    assert!(!data_tail.contains("odd_data:  ; 0x4000"), "{data_tail}");

    std::fs::remove_dir_all(out_dir).unwrap();
    std::fs::remove_file(path).unwrap();
}

/// (unlace `rawdiscover`) A headerless image's inventory is its seeds plus what
/// the executable bytes call, not just what the caller typed.
///
/// The fixture is 36 bytes of Cortus APS3 laid out so the two discovery halves
/// are distinguishable. `0x80000010` is reached by a direct call from the entry,
/// so the recursive descent alone would find it; `0x80000020` is called only
/// from `0x80000018`, which sits past the entry function's `ret` with nothing
/// branching to it, so only the linear call-target sweep reaches it. An
/// unfiltered `decompile-all` must then emit all three bodies, because on a raw
/// image `--entry` seeds the load without selecting.
#[test]
fn raw_image_discovers_called_functions_beyond_its_seeds() {
    let path = common::scratch_file("raw-aps3-calls", "bin");
    #[rustfmt::skip]
    let image: [u8; 36] = [
        0x04, 0x21,                          // 0x00 mov r2,1
        0x8b, 0x00, 0x00, 0x00,              // 0x02 call 0x80000010
        0xe1, 0xf0,                          // 0x06 ret
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x26, 0x22,                          // 0x10 add r2,r2
        0xe1, 0xf0,                          // 0x12 ret
        0x00, 0x00, 0x00, 0x00,
        0x0b, 0x01, 0x00, 0x00,              // 0x18 call 0x80000020 (no flow reaches here)
        0xe1, 0xf0,                          // 0x1c ret
        0x00, 0x00,
        0x04, 0x27,                          // 0x20 mov r2,7
        0xe1, 0xf0,                          // 0x22 ret
    ];
    std::fs::write(&path, image).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();
    let target = "Cortus:LE:32:APS3:default";
    let spec = PathBuf::from(&sp).join("Ghidra/Processors/Cortus/data/languages/aps3.sla");
    assert!(
        unlace_slacomp::slacache::sla_path(&spec).is_ok(),
        "required processor spec missing; build specs before running integration tests"
    );

    // The seed, its direct callee, and the sweep-only callee.
    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x80000000",
        "--entry",
        "0x80000000",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw functions failed: {stderr}");
    assert!(stdout.contains("\"count\": 3"), "{stdout}");
    assert!(
        stdout.contains("\"address_hex\": \"0x80000010\""),
        "{stdout}"
    );
    assert!(
        stdout.contains("\"address_hex\": \"0x80000020\""),
        "the sweep-only callee must be discovered:\n{stdout}"
    );

    // `--entry` seeds without selecting, so the whole inventory is decompiled.
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x80000000",
        "--entry",
        "0x80000000",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw decompile-all failed: {stderr}");
    assert!(stdout.contains("\"count\": 3"), "{stdout}");
    assert!(
        stdout.contains("return 7;"),
        "the sweep-only body must decompile:\n{stdout}"
    );
    // The default `protoorder` stays off on a raw image; named, it orders the
    // call graph the raw image's ELF view (`objectview`) gives it.
    assert!(
        !stderr.contains("protoorder"),
        "the default spoke on a raw image:\n{stderr}"
    );
    let (named, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x80000000",
        "--entry",
        "0x80000000",
        "--option",
        "protoorder",
        "types",
        "--sleighpath",
        &sp,
    ]);
    assert!(
        ok,
        "raw decompile-all --option protoorder types failed: {stderr}"
    );
    assert!(!stderr.contains("no call graph"), "{stderr}");
    assert!(
        named.contains("\"count\": 3") && named.contains("return 7;"),
        "{named}"
    );

    // `--addr` still narrows a raw run to the addresses named.
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0x80000000",
        "--addr",
        "0x80000020",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "raw decompile-all --addr failed: {stderr}");
    assert!(stdout.contains("\"count\": 1"), "{stdout}");
    assert!(stdout.contains("return 7;"), "{stdout}");

    std::fs::remove_file(path).unwrap();
}

#[test]
fn raw_image_decompile_scales_word_addressed_selector() {
    let path = common::scratch_file("raw-avr-return", "bin");
    std::fs::write(&path, [0, 0, 0x08, 0x95]).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();
    let spec = PathBuf::from(&sp).join("Ghidra/Processors/Atmel/data/languages/avr8.sla");
    assert!(
        unlace_slacomp::slacache::sla_path(&spec).is_ok(),
        "required processor spec missing; build specs before running integration tests"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--entry",
        "0x101",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw inventory failed: {stderr}");
    assert!(stdout.contains("\"address\": 257"), "{stdout}");
    assert!(stdout.contains("\"address_hex\": \"0x101\""), "{stdout}");
    assert!(!stdout.contains("\"address_hex\": \"0x202\""), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--entry",
        "0x101",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw text inventory failed: {stderr}");
    assert!(stdout.contains("0x101\tsub_101"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--entry",
        "0x101",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw selector failed: {stderr}");
    assert!(stdout.contains("sub_101"), "{stdout}");
    assert!(stdout.contains("@ 0x101"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &binary,
        "0x101",
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw text decompile failed: {stderr}");
    assert!(stdout.contains("sub_101"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &binary,
        "0x101",
        "--regions",
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw regions failed: {stderr}");
    assert!(stdout.contains("[0x101]"), "{stdout}");
    assert!(stdout.contains("region head=0x101"), "{stdout}");
    assert!(!stdout.contains("[0x202]"), "{stdout}");
    assert!(!stdout.contains("region head=0x202"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &binary,
        "0x101",
        "--json",
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw JSON decompile failed: {stderr}");
    assert!(stdout.contains("\"address\": 257"), "{stdout}");
    assert!(stdout.contains("\"address_hex\": \"0x101\""), "{stdout}");
    assert!(
        stdout.contains("\"addresses\": [\n            257"),
        "{stdout}"
    );

    let out_dir = common::scratch_file("raw-avr-project", "dir");
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-project",
        &binary,
        "-o",
        out_dir.to_str().unwrap(),
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--entry",
        "0x101",
        "--assert",
        "data 0x101 int foo",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw project failed: {stderr}");
    assert!(stdout.contains("functions: 1 ok, 0 failed"), "{stdout}");
    let files: Vec<_> = std::fs::read_dir(&out_dir)
        .unwrap()
        .map(|entry| entry.unwrap().path())
        .collect();
    let c_path = files
        .iter()
        .find(|path| path.extension().is_some_and(|ext| ext == "c"))
        .expect("project C file");
    let asm_path = files
        .iter()
        .find(|path| path.extension().is_some_and(|ext| ext == "asm"))
        .expect("project asm file");
    let c = std::fs::read_to_string(c_path).unwrap();
    let asm = std::fs::read_to_string(asm_path).unwrap();
    assert!(c.contains("// Function: sub_101 @ 0x101"), "{c}");
    assert!(asm.contains("sub_101:  ; 0x101"), "{asm}");
    assert!(asm.contains("00000101:"), "{asm}");
    let data_tail = asm
        .split("; --- data ---")
        .nth(1)
        .expect("project data tail");
    assert!(data_tail.contains("foo:  ; 0x101"), "{data_tail}");
    assert!(data_tail.contains("  00000101:"), "{data_tail}");
    assert!(!data_tail.contains("foo:  ; 0x202"), "{data_tail}");
    assert!(!data_tail.contains("  00000202:"), "{data_tail}");
    std::fs::remove_dir_all(out_dir).unwrap();
    std::fs::remove_file(path).unwrap();
}

#[test]
fn raw_project_preserves_byte_addressed_data_coordinates() {
    let path = common::scratch_file("raw-avr-data-reference", "bin");
    std::fs::write(&path, [0x80, 0x91, 0x00, 0x01, 0x08, 0x95]).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();
    let spec = PathBuf::from(&sp).join("Ghidra/Processors/Atmel/data/languages/avr8.sla");
    assert!(
        unlace_slacomp::slacache::sla_path(&spec).is_ok(),
        "required processor spec missing; build specs before running integration tests"
    );

    let out_dir = common::scratch_file("raw-avr-data-project", "dir");
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-project",
        &binary,
        "-o",
        out_dir.to_str().unwrap(),
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0",
        "--entry",
        "0",
        "--assert",
        "data 0x80 int foo",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw data project failed: {stderr}");
    assert!(stdout.contains("functions: 1 ok, 0 failed"), "{stdout}");
    let files: Vec<_> = std::fs::read_dir(&out_dir)
        .unwrap()
        .map(|entry| entry.unwrap().path())
        .collect();
    let c = std::fs::read_to_string(
        files
            .iter()
            .find(|path| path.extension().is_some_and(|ext| ext == "c"))
            .unwrap(),
    )
    .unwrap();
    let asm = std::fs::read_to_string(
        files
            .iter()
            .find(|path| path.extension().is_some_and(|ext| ext == "asm"))
            .unwrap(),
    )
    .unwrap();
    assert!(c.contains("dat_100"), "{c}");
    let data_tail = asm
        .split("; --- data ---")
        .nth(1)
        .expect("project data tail");
    assert!(data_tail.contains("foo:  ; 0x80"), "{data_tail}");
    assert!(data_tail.contains("dat_100:  ; 0x100"), "{data_tail}");
    assert!(data_tail.contains("  00000100:"), "{data_tail}");
    assert!(!data_tail.contains("foo:  ; 0x80 = dat_100"), "{data_tail}");
    assert!(!data_tail.contains("dat_100:  ; 0x80"), "{data_tail}");
    std::fs::remove_dir_all(out_dir).unwrap();
    std::fs::remove_file(path).unwrap();
}

#[test]
fn raw_address_directives_use_target_units() {
    let sp = specs();
    let avr_spec = PathBuf::from(&sp).join("Ghidra/Processors/Atmel/data/languages/avr8.sla");
    let arm_spec = PathBuf::from(&sp).join("Ghidra/Processors/ARM/data/languages/ARM8_le.sla");
    assert!(
        unlace_slacomp::slacache::sla_path(&avr_spec).is_ok()
            && unlace_slacomp::slacache::sla_path(&arm_spec).is_ok(),
        "required processor spec missing; build specs before running integration tests"
    );

    let avr_path = common::scratch_file("raw-avr-directives", "bin");
    std::fs::write(&avr_path, [0, 0, 0x08, 0x95]).unwrap();
    let avr = avr_path.to_string_lossy().into_owned();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &avr,
        "0x101",
        "--json",
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--define-function",
        "0x101-0x102=bounded",
        "--assert",
        "comment 0x101 WORD_COMMENT",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw directives failed: {stderr}");
    assert!(stdout.contains("\"name\": \"bounded\""), "{stdout}");
    assert!(stdout.contains("\"address\": 257"), "{stdout}");
    assert!(stdout.contains("\"size\": 2"), "{stdout}");
    assert!(stdout.contains("/* WORD_COMMENT */"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &avr,
        "0x101",
        "--raw-image",
        "--target",
        "avr8:LE:16:default",
        "--base",
        "0x100",
        "--define-function",
        "0x101-0x102=bounded",
        "--assert",
        "comment 0x101 WORD_COMMENT",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "word-addressed raw text directives failed: {stderr}");
    assert!(stdout.contains("bounded"), "{stdout}");
    assert!(stdout.contains("/* WORD_COMMENT */"), "{stdout}");
    std::fs::remove_file(avr_path).unwrap();

    let arm_path = common::scratch_file("raw-thumb-directives", "bin");
    std::fs::write(&arm_path, [0x07, 0x20, 0x70, 0x47]).unwrap();
    let arm = arm_path.to_string_lossy().into_owned();
    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &arm,
        "0x4001",
        "--json",
        "--raw-image",
        "--target",
        "ARM:LE:32:v4t:default",
        "--base",
        "0x4000",
        "--isa",
        "thumb",
        "--assert",
        "function 0x4001-0x4003=thumb_bounded",
        "--assert",
        "comment 0x4001 THUMB_COMMENT",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "odd-Thumb raw directives failed: {stderr}");
    assert!(stdout.contains("\"name\": \"thumb_bounded\""), "{stdout}");
    assert!(stdout.contains("\"address\": 16384"), "{stdout}");
    assert!(stdout.contains("\"size\": 2"), "{stdout}");
    assert!(stdout.contains("/* THUMB_COMMENT */"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &arm,
        "0x4001",
        "--raw-image",
        "--target",
        "ARM:LE:32:v4t:default",
        "--base",
        "0x4000",
        "--isa",
        "thumb",
        "--assert",
        "function 0x4001-0x4003=thumb_bounded",
        "--assert",
        "comment 0x4001 THUMB_COMMENT",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "odd-Thumb raw text directives failed: {stderr}");
    assert!(stdout.contains("thumb_bounded"), "{stdout}");
    assert!(stdout.contains("/* THUMB_COMMENT */"), "{stdout}");
    std::fs::remove_file(arm_path).unwrap();
}

#[test]
fn raw_text_decode_failure_is_not_reported_as_an_external() {
    let path = common::scratch_file("raw-truncated-x86", "bin");
    std::fs::write(&path, [0x90]).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();
    let spec = PathBuf::from(&sp).join("Ghidra/Processors/x86/data/languages/x86-64.sla");
    assert!(
        unlace_slacomp::slacache::sla_path(&spec).is_ok(),
        "required processor spec missing; build specs before running integration tests"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &binary,
        "0",
        "--raw-image",
        "--target",
        "x86:LE:64:default",
        "--base",
        "0",
        "--sleighpath",
        &sp,
    ]);
    assert!(!ok, "truncated mapped raw entry unexpectedly succeeded");
    assert!(!stdout.contains("external symbol"), "{stdout}");
    assert!(stderr.contains("Unable to load"), "{stderr}");
    std::fs::remove_file(path).unwrap();
}

#[test]
fn raw_text_unknown_format_hint_handles_a_leading_lt_byte() {
    let path = common::scratch_file("raw-leading-lt", "bin");
    std::fs::write(&path, [0x3c, 0x00, 0xc3]).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let (_stdout, stderr, ok) = run_unlace(&["decompile", &binary, "0"]);
    assert!(
        !ok,
        "headerless input without raw flags unexpectedly loaded"
    );
    assert!(
        stderr.contains("--raw-image") && stderr.contains("--target") && stderr.contains("--base"),
        "leading-< diagnostic omitted raw guidance: {stderr}"
    );
    std::fs::remove_file(path).unwrap();
}

#[test]
fn raw_image_rejects_missing_metadata_and_object_only_surfaces() {
    let path = common::scratch_file("raw-parser", "bin");
    std::fs::write(&path, [0x07, 0x20, 0x70, 0x47]).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let target = "ARM:LE:32:v4t:default";
    let cases: &[(&[&str], &str)] = &[
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--base",
                "0",
                "--entry",
                "0",
            ],
            "--raw-image requires --target",
        ),
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--target",
                target,
                "--entry",
                "0",
            ],
            "--raw-image requires --base",
        ),
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--target",
                target,
                "--base",
                "0",
                "--option",
                "funcstart_patterns",
                "off",
            ],
            "--raw-image with funcstart_patterns off requires at least one",
        ),
        (
            &["functions", &binary, "--base", "0"],
            "--base requires --raw-image",
        ),
        (
            &["functions", &binary, "--entry", "0"],
            "--entry requires --raw-image",
        ),
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--target",
                target,
                "--base",
                "0",
                "--functions",
                "main",
            ],
            "not --functions",
        ),
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--target",
                target,
                "--base",
                "0",
                "--addr",
                "main",
            ],
            "invalid address",
        ),
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--target",
                target,
                "--base",
                "0",
                "--addr",
                ".text+0",
            ],
            "raw image entries must be numeric",
        ),
        (
            &[
                "functions",
                &binary,
                "--raw-image",
                "--target",
                target,
                "--base",
                "0",
                "--entry",
                "0",
                "--slice",
                "arm",
            ],
            "--slice does not apply",
        ),
        (
            &[
                "disassemble",
                &binary,
                "0",
                "--raw-image",
                "--target",
                target,
                "--base",
                "0",
            ],
            "unknown option --raw-image",
        ),
    ];
    for (args, expected) in cases {
        let (_stdout, stderr, ok) = run_unlace(args);
        assert!(!ok, "{args:?} unexpectedly succeeded");
        assert!(
            stderr.contains(expected),
            "{args:?}: expected {expected:?}, got {stderr:?}"
        );
    }

    let (_stdout, stderr, ok) = run_unlace(&["functions", &binary]);
    assert!(
        !ok,
        "headerless input without raw flags unexpectedly loaded"
    );
    assert!(
        stderr.contains("--raw-image") && stderr.contains("--base"),
        "unknown-format diagnostic omitted raw guidance: {stderr}"
    );

    for args in [
        vec![
            "decompile-all",
            &binary,
            "--raw-image",
            "--target",
            target,
            "--base",
            "0",
            "--entry",
            "0",
            "--isa",
            "thumb",
            "--summary",
        ],
        vec![
            "functions",
            &binary,
            "--raw-image",
            "--target",
            target,
            "--base",
            "0",
            "--entry",
            "0",
            "--isa",
            "thumb",
            "--reachable-from",
            "0",
        ],
        vec![
            "decompile-graph",
            &binary,
            "--raw-image",
            "--target",
            target,
            "--base",
            "0",
            "--entry",
            "0",
            "--isa",
            "thumb",
        ],
        vec![
            "xrefs",
            &binary,
            "--raw-image",
            "--target",
            target,
            "--base",
            "0",
            "--entry",
            "0",
            "--isa",
            "thumb",
            "--from",
            "0",
        ],
        vec![
            "strings",
            &binary,
            "--raw-image",
            "--target",
            target,
            "--base",
            "0",
            "--entry",
            "0",
        ],
        vec![
            "crypto",
            &binary,
            "--raw-image",
            "--target",
            target,
            "--base",
            "0",
            "--entry",
            "0",
        ],
    ] {
        let (_stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "{args:?} read no ELF view: {stderr}");
    }

    let (_stdout, stderr, ok) = run_unlace(&[
        "decompile",
        &binary,
        "main",
        "--raw-image",
        "--target",
        target,
        "--base",
        "0",
    ]);
    assert!(!ok, "named raw decompile entry unexpectedly succeeded");
    assert!(stderr.contains("requires a numeric entry"), "{stderr}");
    std::fs::remove_file(path).unwrap();
}
