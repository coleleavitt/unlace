//! `unlace flirt inspect` through the built CLI: the header and names of a
//! `.sig` fixture (`tests/fixtures/flirt/callees.sig`), and a refusal of a file
//! that is neither a signature nor a type library.

use std::process::Command;

use crate::common;

#[test]
fn a_signature_file_reports_its_header_and_names() {
    let sig = common::repo_root().join("tests/fixtures/flirt/callees.sig");
    let out = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(["flirt", "inspect"])
        .arg(&sig)
        .args(["--json", "--limit", "2"])
        .output()
        .expect("run unlace flirt inspect");
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert_eq!(out.status.code(), Some(0), "{stderr}");
    let v: serde_json::Value =
        serde_json::from_slice(&out.stdout).expect("inspect --json prints one JSON document");
    assert_eq!(v["format"], "sig");
    assert_eq!(v["version"], 11);
    assert!(v["modules"].as_u64().unwrap() >= 4, "{v}");
    let names = v["names"].as_array().expect("names is an array");
    assert_eq!(names.len(), 2, "--limit 2 shows two names: {v}");
    assert!(v["names_total"].as_u64().unwrap() >= 4, "{v}");
}

#[test]
fn a_file_that_is_neither_signature_nor_type_library_is_refused() {
    let scratch = tempfile::tempdir().unwrap();
    let junk = scratch.path().join("junk.bin");
    std::fs::write(&junk, b"not an IDA file\n").unwrap();
    let out = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(["flirt", "inspect"])
        .arg(&junk)
        .output()
        .expect("run unlace flirt inspect");
    let stderr = String::from_utf8_lossy(&out.stderr);
    assert_eq!(out.status.code(), Some(1), "{stderr}");
    assert!(stderr.contains("neither an IDA signature"), "{stderr}");
}
