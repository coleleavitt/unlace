//! Integration tests for `unlace sbom` on vendored fixtures: one ELF, Mach-O,
//! PE, Go and Rust image each, in both document formats.

use serde_json::Value as Json;
use std::process::Command;

use crate::common;
use common::{fixture, repo_root, run_unlace};

fn sbom_json(argv: &[&str]) -> Json {
    let (stdout, stderr, code) = run_unlace(&[&["sbom"][..], argv].concat());
    assert_eq!(code, 0, "unlace sbom {argv:?}: {stderr}");
    serde_json::from_str(&stdout).expect("JSON document")
}

fn components(doc: &Json) -> &Vec<Json> {
    doc["components"].as_array().expect("components array")
}

fn named<'a>(doc: &'a Json, name: &str) -> &'a Json {
    components(doc)
        .iter()
        .find(|c| c["name"] == name)
        .unwrap_or_else(|| panic!("no component {name}: {doc}"))
}

fn property<'a>(item: &'a Json, name: &str) -> Option<&'a str> {
    item["properties"]
        .as_array()?
        .iter()
        .find(|p| p["name"] == name)
        .and_then(|p| p["value"].as_str())
}

#[test]
fn an_elf_lists_its_needed_libraries() {
    let doc = sbom_json(&[&fixture("fauxware"), "--json"]);
    assert_eq!(doc["bomFormat"], "CycloneDX");
    assert_eq!(doc["specVersion"], "1.5");
    let root = &doc["metadata"]["component"];
    assert_eq!(root["name"], "fauxware");
    assert_eq!(root["type"], "application");
    let sha = root["hashes"][0]["content"].as_str().unwrap();
    assert_eq!(sha.len(), 64);
    assert_eq!(property(root, "unlace:format"), Some("elf"));
    assert_eq!(property(root, "unlace:compiler"), Some("gcc"));
    let libc = named(&doc, "libc.so.6");
    assert_eq!(property(libc, "unlace:evidence"), Some("DT_NEEDED"));
    assert_eq!(property(libc, "unlace:kind"), Some("shared-library"));
    let refs = doc["dependencies"][0]["dependsOn"].as_array().unwrap();
    assert!(refs.contains(&libc["bom-ref"]));
}

#[test]
fn the_text_surface_has_one_row_per_component() {
    let (stdout, stderr, code) = run_unlace(&["sbom", &fixture("fauxware")]);
    assert_eq!(code, 0, "{stderr}");
    assert!(stdout.starts_with("# fauxware sha256="), "{stdout}");
    assert!(stdout.contains("# toolchain GCC: "), "{stdout}");
    assert!(
        stdout.contains("shared-library\tlibc.so.6\t-\tDT_NEEDED"),
        "{stdout}"
    );
}

#[test]
fn a_macho_lists_its_dylibs_with_versions() {
    let doc = sbom_json(&[&fixture("address_taken_stack_buffers_macho"), "--json"]);
    let sys = named(&doc, "/usr/lib/libSystem.B.dylib");
    assert_eq!(sys["version"], "1311.0.0");
    assert_eq!(property(sys, "unlace:evidence"), Some("LC_LOAD_DYLIB"));
    assert_eq!(property(sys, "unlace:compatibility-version"), Some("1.0.0"));
}

#[test]
fn a_pe_lists_imports_and_its_version_resource() {
    let doc = sbom_json(&[&fixture("explicit_branch_assertion_pe_i386.exe"), "--json"]);
    let k32 = named(&doc, "KERNEL32.dll");
    assert_eq!(property(k32, "unlace:evidence"), Some("PE import"));
    let root = &doc["metadata"]["component"];
    assert_eq!(
        property(root, "unlace:version-info:ProductName"),
        Some("Anwendung crackme")
    );
    assert_eq!(
        property(root, "unlace:version-info:OriginalFilename"),
        Some("crackme.EXE")
    );
    assert_eq!(root["version"], "1, 0, 0, 1");
}

#[test]
fn a_go_image_names_its_module_and_toolchain() {
    let image = repo_root().join("tests/fixtures/go-type-names/go1.26.2-amd64");
    let doc = sbom_json(&[image.to_str().unwrap(), "--json"]);
    let root = &doc["metadata"]["component"];
    assert_eq!(property(root, "unlace:module"), Some("example.com/shapes"));
    assert_eq!(property(root, "unlace:compiler"), Some("go"));
    assert_eq!(root["purl"], "pkg:golang/example.com/shapes");
    let tools: Vec<&str> = root["properties"]
        .as_array()
        .unwrap()
        .iter()
        .filter(|p| p["name"] == "unlace:toolchain")
        .filter_map(|p| p["value"].as_str())
        .collect();
    assert!(tools.contains(&"go1.26.2-X:nodwarf5"), "{tools:?}");
    assert_eq!(property(root, "unlace:go-build:GOOS"), Some("linux"));
}

#[test]
fn a_rust_image_names_its_registry_crates() {
    let doc = sbom_json(&[&fixture("rust_crate_paths_x86_64"), "--json"]);
    let arrayvec = named(&doc, "arrayvec");
    assert_eq!(arrayvec["version"], "0.7.6");
    assert_eq!(arrayvec["purl"], "pkg:cargo/arrayvec@0.7.6");
    assert_eq!(property(arrayvec, "unlace:kind"), Some("rust-crate"));
}

#[test]
fn spdx_is_the_other_format() {
    let out = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(["sbom", &fixture("fauxware"), "--json", "--format", "spdx"])
        .env("SOURCE_DATE_EPOCH", "0")
        .output()
        .expect("spawn unlace");
    assert_eq!(
        out.status.code(),
        Some(0),
        "{}",
        String::from_utf8_lossy(&out.stderr)
    );
    let doc: Json = serde_json::from_slice(&out.stdout).expect("JSON document");
    assert_eq!(doc["spdxVersion"], "SPDX-2.3");
    assert_eq!(doc["creationInfo"]["created"], "1970-01-01T00:00:00Z");
    let packages = doc["packages"].as_array().unwrap();
    assert_eq!(packages[0]["SPDXID"], "SPDXRef-Binary");
    let libc = packages
        .iter()
        .find(|p| p["name"] == "libc.so.6")
        .expect("libc package");
    let rel = doc["relationships"]
        .as_array()
        .unwrap()
        .iter()
        .find(|r| r["relatedSpdxElement"] == libc["SPDXID"])
        .expect("libc relationship");
    assert_eq!(rel["relationshipType"], "DEPENDS_ON");
}

#[test]
fn the_document_is_stable_for_a_fixed_epoch() {
    let run = || {
        Command::new(env!("CARGO_BIN_EXE_unlace"))
            .args(["sbom", &fixture("fauxware"), "--json"])
            .env("SOURCE_DATE_EPOCH", "1700000000")
            .output()
            .expect("spawn unlace")
            .stdout
    };
    assert_eq!(run(), run());
}

#[test]
fn bad_invocations_are_refused() {
    let (_, stderr, code) = run_unlace(&["sbom"]);
    assert_eq!(code, 2, "{stderr}");
    let (_, stderr, code) = run_unlace(&["sbom", &fixture("fauxware"), "--format", "xml"]);
    assert_eq!(code, 2, "{stderr}");
    assert!(stderr.contains("--format"), "{stderr}");
    let (_, stderr, code) = run_unlace(&["sbom", "/nonexistent/binary"]);
    assert_eq!(code, 1, "{stderr}");
}
