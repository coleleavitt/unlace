//! TE (terse executable) images.

use super::*;

/// The entry's direct callees, and theirs, are functions of a TE image too.
#[test]
fn te_image_discovers_the_entrys_call_closure() {
    let code = [
        0xe8, 0x0b, 0x00, 0x00, 0x00, 0xe8, 0x16, 0x00, 0x00, 0x00, 0xc3, 0xcc, 0xcc, 0xcc, 0xcc,
        0xcc, 0xb8, 0x01, 0x00, 0x00, 0x00, 0xc3, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
        0xcc, 0xcc, 0xe8, 0xeb, 0xff, 0xff, 0xff, 0x83, 0xc0, 0x01, 0xc3,
    ];
    let bytes = unlace_analysis::loadimage_te::synthetic::TeImage::arm(&code)
        .machine(object::pe::IMAGE_FILE_MACHINE_AMD64)
        .build();
    let path = common::scratch_file("cli-calls", "te");
    std::fs::write(&path, bytes).unwrap();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();

    let (stdout, stderr, ok) = run_unlace(&["functions", &binary, "--sleighpath", &sp]);
    assert!(ok, "TE functions failed: {stderr}");
    for entry in ["0x401000", "0x401010", "0x401020"] {
        assert!(stdout.contains(entry), "{entry} missing:\n{stdout}");
    }

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--option",
        "objectview",
        "off",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "TE functions without the PE view failed: {stderr}");
    for entry in ["0x401000", "0x401010", "0x401020"] {
        assert!(
            stdout.contains(entry),
            "{entry} missing from the discovery inventory:\n{stdout}"
        );
    }
}

#[test]
fn te_image_auto_detects_entry_mapping_and_thumb_context() {
    let path = write_thumb_te();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();

    let (stdout, stderr, ok) = run_unlace(&["functions", &binary, "--json", "--sleighpath", &sp]);
    assert!(ok, "TE functions failed: {stderr}");
    assert!(stdout.contains("\"count\": 1"), "{stdout}");
    assert!(stdout.contains("\"address_hex\": \"0x401000\""), "{stdout}");
    assert!(!stderr.contains("[unlace te]"), "{stderr}");

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--target",
        "default",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "TE --target default failed: {stderr}");
    assert!(stdout.contains("\"address_hex\": \"0x401000\""), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--option",
        "namestyle",
        "ghidra",
        "--filter",
        "^func_",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "TE functions with ghidra names failed: {stderr}");
    assert!(stdout.contains("\"count\": 1"), "{stdout}");
    assert!(stdout.contains("\"func_0x00401000\""), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "read",
        &binary,
        "0x401003",
        "--addr",
        "--bytes",
        "16",
        "--json",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "TE boundary read failed: {stderr}");
    assert!(stdout.contains("\"end\": 4198404"), "{stdout}");
    assert!(stdout.contains("\"bytes\": 1"), "{stdout}");
    assert!(stdout.contains("\"hex\": \"47\""), "{stdout}");

    // `--slice` names a Mach-O fat slice; a thin image ignores it, and a TE is
    // a thin image, so it is accepted on every surface rather than rejected on
    // some.
    let (stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--json",
        "--slice",
        "arm64",
        "--sleighpath",
        &sp,
    ]);
    assert!(
        ok,
        "TE --slice must be ignored like any thin image: {stderr}"
    );
    assert!(stdout.contains("\"count\": 1"), "{stdout}");

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--addr",
        "0x401001",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "TE decompile failed: {stderr}");
    assert!(
        stdout.contains("return 7;"),
        "unexpected TE body:\n{stdout}"
    );

    let (stdout, stderr, ok) = run_unlace(&[
        "decompile-all",
        &binary,
        "--addr",
        "0x401001",
        "--assert",
        "bytes 0x401000 2a207047",
        "--assert-strict",
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "strict TE byte overlay failed: {stderr}");
    assert!(
        stdout.contains("return 0x2a;"),
        "TE decompiled stale image bytes:\n{stdout}"
    );

    let project_dir = common::scratch_file("te-project", "dir");
    let (_stdout, stderr, ok) = run_unlace(&[
        "decompile-project",
        &binary,
        "-o",
        project_dir.to_str().unwrap(),
        "--sleighpath",
        &sp,
    ]);
    assert!(ok, "TE project export failed: {stderr}");
    let readme = std::fs::read_to_string(project_dir.join("README.md")).unwrap();
    assert!(
        readme.contains("| Entry point | `0x401000` |"),
        "TE README omitted its entry point:\n{readme}"
    );
    assert!(
        readme.contains("## Sections"),
        "TE README omitted its sections:\n{readme}"
    );
    assert!(
        readme.contains("| `.text` | `0x401000` | `0x4` | Text |"),
        "TE README omitted its named code section:\n{readme}"
    );
    std::fs::remove_dir_all(project_dir).unwrap();

    std::fs::remove_file(path).unwrap();
}

#[test]
fn te_object_view_commands_read_the_pe_view() {
    let path = write_thumb_te();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();

    // Every object-view consumer reads the TE through its PE view.
    for (command, flag) in [
        ("functions", vec!["--summary"]),
        ("functions", vec!["--reachable-from", "0x401000"]),
        ("decompile-all", vec!["--summary"]),
        ("decompile-all", vec!["--reachable-from", "0x401000"]),
        ("xrefs", vec!["--to", "0x401000"]),
        ("decompile-graph", vec![]),
        ("strings", vec!["--no-xrefs"]),
    ] {
        let mut args = vec![command, &binary, "--sleighpath", &sp];
        args.extend(flag);
        let (_stdout, stderr, ok) = run_unlace(&args);
        assert!(ok, "TE {command} failed: {stderr}");
    }
    std::fs::remove_file(path).unwrap();
}

#[test]
fn te_input_errors_preserve_format_and_target_diagnostics() {
    let path = write_thumb_te();
    let binary = path.to_string_lossy().into_owned();
    let sp = specs();

    // A TE for a machine unlace has no binding for is still a TE: the user is
    // told which machine, not handed the headerless-image guidance.
    let ebc = common::scratch_file("ebc", "te");
    std::fs::write(
        &ebc,
        unlace_analysis::loadimage_te::synthetic::TeImage::thumb(&[0; 4])
            .machine(0x0ebc)
            .build(),
    )
    .unwrap();
    let ebc_path = ebc.to_string_lossy().into_owned();
    let (_stdout, stderr, ok) =
        run_unlace(&["functions", &ebc_path, "--json", "--sleighpath", &sp]);
    assert!(!ok, "an EBC TE unexpectedly loaded");
    assert!(
        stderr.contains("unsupported machine value 0x0ebc"),
        "an unsupported TE machine must be named: {stderr}"
    );
    std::fs::remove_file(ebc).unwrap();

    // A file that merely opens with the two signature letters is not a TE
    // image: it keeps the unrecognized-input guidance rather than being routed
    // into the TE parser or refused as one.
    let prose = common::scratch_file("not-a-te", "bin");
    std::fs::write(&prose, b"VZ: a note about the build, not a container").unwrap();
    let prose_path = prose.to_string_lossy().into_owned();
    let (_stdout, stderr, ok) =
        run_unlace(&["functions", &prose_path, "--json", "--sleighpath", &sp]);
    assert!(!ok, "a non-container unexpectedly loaded");
    assert!(
        stderr.contains("--raw-image") && !stderr.contains("TE"),
        "a `VZ`-prefixed non-container must keep the raw-image guidance: {stderr}"
    );
    let (_stdout, stderr, ok) = run_unlace(&["strings", &prose_path, "--no-xrefs"]);
    assert!(!ok, "a non-container unexpectedly scanned");
    assert!(
        !stderr.contains("UEFI TE"),
        "a `VZ`-prefixed non-container must not be diagnosed as TE: {stderr}"
    );
    std::fs::remove_file(prose).unwrap();

    let (_stdout, stderr, ok) = run_unlace(&[
        "functions",
        &binary,
        "--target",
        "ARM:BE:32:v4t:default",
        "--sleighpath",
        &sp,
    ]);
    assert!(!ok, "endianness-conflicting TE target unexpectedly loaded");
    assert!(stderr.contains("BE-endian") && stderr.contains("LE-endian"));
    std::fs::remove_file(path).unwrap();
}
