//! Unit tests over synthetic bytes: each reader on the structure it parses,
//! and both document formats on a hand-built inventory.

use std::collections::BTreeMap;
use std::io::Write;

use super::collect::{self, Component, Inventory, Kind, MainModule};
use super::*;

fn le32(v: u32) -> [u8; 4] {
    v.to_le_bytes()
}

#[test]
fn purls_encode_their_segments() {
    assert_eq!(purl::cargo("serde", "1.0.219"), "pkg:cargo/serde@1.0.219");
    assert_eq!(
        purl::cargo("libz-sys", "1.1.8+zlib.1.2.12"),
        "pkg:cargo/libz-sys@1.1.8%2Bzlib.1.2.12"
    );
    assert_eq!(
        purl::golang("github.com/pkg/errors", Some("v0.9.1")),
        "pkg:golang/github.com/pkg/errors@v0.9.1"
    );
    assert_eq!(
        purl::golang("example.com/shapes", None),
        "pkg:golang/example.com/shapes"
    );
    assert_eq!(
        purl::golang("golang.org/x/sys", Some("v0.0.0+incompatible")),
        "pkg:golang/golang.org/x/sys@v0.0.0%2Bincompatible"
    );
    assert_eq!(
        purl::generic("openssl", "3.0.2"),
        "pkg:generic/openssl@3.0.2"
    );
    assert_eq!(purl::encode("a b@c/d"), "a%20b%40c%2Fd");
}

#[test]
fn modinfo_keeps_deps_replacements_and_settings() {
    let body = "path\texample.com/app\n\
                mod\texample.com/app\tv1.2.3\th1:abc=\n\
                dep\tgithub.com/a/b\tv0.1.0\th1:x=\n\
                dep\tgithub.com/c/d\tv1.0.0\th1:y=\n\
                =>\tgithub.com/fork/d\tv1.0.1\th1:z=\n\
                build\tGOOS=linux\n";
    let wrapped = format!("{}{body}{}", "0".repeat(16), "1".repeat(16));
    for text in [body.to_string(), wrapped] {
        let info = collect::parse_modinfo(&text);
        assert_eq!(info.path.as_deref(), Some("example.com/app"));
        assert_eq!(
            info.main,
            Some(("example.com/app".to_string(), "v1.2.3".to_string()))
        );
        assert_eq!(info.deps.len(), 2);
        assert_eq!(info.deps[0].path, "github.com/a/b");
        assert_eq!(info.deps[0].sum.as_deref(), Some("h1:x="));
        assert_eq!(info.deps[0].replaced_by, None);
        assert_eq!(
            info.deps[1].replaced_by,
            Some(("github.com/fork/d".to_string(), "v1.0.1".to_string()))
        );
        assert_eq!(
            info.settings,
            vec![("GOOS".to_string(), "linux".to_string())]
        );
    }
}

#[test]
fn inline_buildinfo_yields_version_and_modinfo() {
    let mut blob = b"\xff Go buildinf:".to_vec();
    blob.extend([8u8, 2]);
    blob.resize(32, 0);
    for s in ["go1.22.5", "path\tcmd/x\n"] {
        blob.push(u8::try_from(s.len()).unwrap());
        blob.extend_from_slice(s.as_bytes());
    }
    assert_eq!(
        collect::buildinfo_strings(&blob),
        Some(("go1.22.5".to_string(), "path\tcmd/x\n".to_string()))
    );
    let mut pointer_form = blob.clone();
    pointer_form[15] = 0;
    assert_eq!(collect::buildinfo_strings(&pointer_form), None);
    assert_eq!(collect::buildinfo_strings(&blob[..20]), None);
}

#[test]
fn the_highest_symbol_version_wins_numerically() {
    let v = |s: &[&str]| s.iter().map(|x| x.to_string()).collect::<Vec<_>>();
    assert_eq!(
        collect::highest_version(&v(&["GLIBC_2.2.5", "GLIBC_2.34", "GLIBC_2.4"])),
        Some("GLIBC_2.34".to_string())
    );
    assert_eq!(
        collect::highest_version(&v(&["GLIBC_PRIVATE", "GLIBC_2.3"])),
        Some("GLIBC_2.3".to_string())
    );
    assert_eq!(collect::highest_version(&v(&["GLIBC_PRIVATE"])), None);
}

#[test]
fn dynamic_and_verneed_tables_are_read() {
    let dynstr = b"\0libc.so.6\0libm.so.6\0GLIBC_2.2.5\0GLIBC_2.34\0".to_vec();
    let off = |s: &str| {
        let pos = dynstr
            .windows(s.len())
            .position(|w| w == s.as_bytes())
            .unwrap();
        u64::try_from(pos).unwrap()
    };
    let mut dynamic = Vec::new();
    for (tag, val) in [
        (1u64, off("libc.so.6")),
        (14, off("libm.so.6")),
        (1, off("libm.so.6")),
        (0, 0),
        (1, off("libc.so.6")),
    ] {
        dynamic.extend(tag.to_le_bytes());
        dynamic.extend(val.to_le_bytes());
    }
    assert_eq!(
        collect::dt_needed(&dynamic, &dynstr, 8, true),
        vec!["libc.so.6".to_string(), "libm.so.6".to_string()]
    );
    let mut dynamic32 = Vec::new();
    for (tag, val) in [(1u32, off("libm.so.6")), (0, 0)] {
        dynamic32.extend(tag.to_be_bytes());
        dynamic32.extend(u32::try_from(val).unwrap().to_be_bytes());
    }
    assert_eq!(
        collect::dt_needed(&dynamic32, &dynstr, 4, false),
        vec!["libm.so.6".to_string()]
    );
    let to32 = |v: u64| u32::try_from(v).unwrap();
    let mut verneed = Vec::new();
    verneed.extend(1u16.to_le_bytes());
    verneed.extend(2u16.to_le_bytes());
    verneed.extend(le32(to32(off("libc.so.6"))));
    verneed.extend(le32(16));
    verneed.extend(le32(0));
    for (name, next) in [("GLIBC_2.2.5", 16u32), ("GLIBC_2.34", 0)] {
        verneed.extend(le32(0));
        verneed.extend(0u16.to_le_bytes());
        verneed.extend(0u16.to_le_bytes());
        verneed.extend(le32(to32(off(name))));
        verneed.extend(le32(next));
    }
    let needs = collect::verneed(&verneed, &dynstr, true);
    assert_eq!(
        needs.get("libc.so.6"),
        Some(&vec!["GLIBC_2.2.5".to_string(), "GLIBC_2.34".to_string()])
    );
    let _ = collect::verneed(&verneed[..10], &dynstr, true);
    let _ = collect::dt_needed(&dynamic[..5], &dynstr, 8, true);
}

/// A 64-bit little-endian Mach-O header followed by `cmds`.
fn macho(cmds: &[Vec<u8>]) -> Vec<u8> {
    let mut b = Vec::new();
    for w in [0xfeed_facfu32, 0x0100_0007, 3, 2] {
        b.extend(le32(w));
    }
    b.extend(le32(u32::try_from(cmds.len()).unwrap()));
    b.extend(le32(
        u32::try_from(cmds.iter().map(Vec::len).sum::<usize>()).unwrap(),
    ));
    b.extend(le32(0));
    b.extend(le32(0));
    for c in cmds {
        b.extend(c);
    }
    b
}

fn dylib_cmd(cmd: u32, name: &str, cur: u32, compat: u32) -> Vec<u8> {
    let mut c = Vec::new();
    for w in [cmd, 0, 24, 2, cur, compat] {
        c.extend(le32(w));
    }
    c.extend(name.as_bytes());
    c.push(0);
    while c.len() % 8 != 0 {
        c.push(0);
    }
    let size = u32::try_from(c.len()).unwrap();
    c[4..8].copy_from_slice(&le32(size));
    c
}

#[test]
fn macho_dylibs_and_build_version_are_read() {
    let mut build = Vec::new();
    for w in [0x32u32, 32, 1, 0x000e_0000, 0x000e_0200, 1, 3, 0x0397_0000] {
        build.extend(le32(w));
    }
    let image = macho(&[
        dylib_cmd(0xc, "/usr/lib/libSystem.B.dylib", 0x051f_0000, 0x0001_0000),
        dylib_cmd(
            0x8000_0018,
            "@rpath/Foo.framework/Foo",
            0x0002_0103,
            0x0001_0000,
        ),
        build,
    ]);
    let mut inv = Inventory::default();
    let mut comps = Vec::new();
    collect::macho_commands(&image, &mut inv, &mut comps);
    assert_eq!(comps.len(), 2);
    assert_eq!(comps[0].name, "/usr/lib/libSystem.B.dylib");
    assert_eq!(comps[0].version.as_deref(), Some("1311.0.0"));
    assert_eq!(comps[0].evidence, "LC_LOAD_DYLIB");
    assert_eq!(comps[1].evidence, "LC_LOAD_WEAK_DYLIB");
    assert_eq!(comps[1].version.as_deref(), Some("2.1.3"));
    assert_eq!(
        inv.toolchain,
        vec![
            "macos 14.0.0 (sdk 14.2.0)".to_string(),
            "ld 919.0.0".to_string()
        ]
    );
    let mut truncated = image.clone();
    truncated.truncate(40);
    collect::macho_commands(&truncated, &mut Inventory::default(), &mut Vec::new());
}

#[test]
fn version_banners_are_found_in_strings() {
    let bytes =
        b"\0\x01OpenSSL 3.0.2 15 Mar 2022\0deflate 1.2.13 Copyright 1995-2022 Jean-loup Gailly\0\
                  libpng version 1.6.37\0nothing here\0OpenSSL support\0";
    let found = collect::banners_in(collect::ascii_runs(bytes));
    let pairs: Vec<(&str, &str)> = found
        .iter()
        .map(|(n, v, _)| (n.as_str(), v.as_str()))
        .collect();
    assert_eq!(
        pairs,
        vec![
            ("openssl", "3.0.2"),
            ("zlib", "1.2.13"),
            ("libpng", "1.6.37")
        ]
    );
}

#[test]
fn cargo_auditable_packages_inflate() {
    let doc = br#"{"packages":[
        {"name":"app","version":"0.1.0","source":"local","root":true},
        {"name":"serde","version":"1.0.219","source":"crates.io","dependencies":[]},
        {"name":"cc","version":"1.0.0","source":"crates.io","kind":"build"}]}"#;
    let mut enc = flate2::write::ZlibEncoder::new(Vec::new(), flate2::Compression::default());
    enc.write_all(doc).unwrap();
    let packed = enc.finish().unwrap();
    let pkgs = collect::auditable_packages(&packed);
    assert_eq!(pkgs.len(), 3);
    assert!(pkgs[0].root);
    assert_eq!(pkgs[1].name, "serde");
    assert_eq!(pkgs[1].source.as_deref(), Some("crates.io"));
    assert_eq!(pkgs[2].kind.as_deref(), Some("build"));
    assert!(collect::auditable_packages(b"not zlib").is_empty());
}

fn component(kind: Kind, name: &str, version: Option<&str>, purl: Option<&str>) -> Component {
    Component {
        kind,
        name: name.to_string(),
        version: version.map(str::to_string),
        purl: purl.map(str::to_string),
        evidence: "test".to_string(),
        properties: Vec::new(),
    }
}

#[test]
fn duplicate_sightings_merge_their_evidence() {
    let mut a = component(Kind::RustCrate, "serde", Some("1.0.0"), None);
    a.evidence = "cargo-auditable".into();
    let mut b = a.clone();
    b.evidence = "registry source path".into();
    let c = component(Kind::SharedLibrary, "libc.so.6", None, None);
    let merged = collect::dedup(vec![a.clone(), b, a, c]);
    assert_eq!(merged.len(), 2);
    assert_eq!(merged[0].kind, Kind::SharedLibrary);
    assert_eq!(merged[1].evidence, "cargo-auditable, registry source path");
}

fn document() -> Document {
    let mut version_info = BTreeMap::new();
    version_info.insert("ProductVersion".to_string(), "2.0".to_string());
    Document {
        name: "app".into(),
        sha256: "ab".repeat(32),
        size: 1234,
        image_sha256: None,
        created: rfc3339(0),
        inventory: Inventory {
            format: "elf".into(),
            architecture: "x86_64".into(),
            bits: 64,
            endian: "little",
            role: "application",
            entry: 0x1000,
            compiler: "go",
            identity: vec![("build-id".into(), "deadbeef".into())],
            toolchain: vec!["go1.22.5".into()],
            main: Some(MainModule {
                name: "example.com/app".into(),
                version: Some("v1.2.3".into()),
                purl: Some(purl::golang("example.com/app", Some("v1.2.3"))),
            }),
            version_info,
            components: vec![
                component(Kind::SharedLibrary, "libc.so.6", None, None),
                component(
                    Kind::GoModule,
                    "github.com/a/b",
                    Some("v0.1.0"),
                    Some("pkg:golang/github.com/a/b@v0.1.0"),
                ),
            ],
        },
    }
}

#[test]
fn cyclonedx_document_has_the_required_shape() {
    let v = cyclonedx(&document());
    assert_eq!(v["bomFormat"], "CycloneDX");
    assert_eq!(v["specVersion"], "1.5");
    assert_eq!(v["version"], 1);
    let serial = v["serialNumber"].as_str().unwrap();
    assert!(serial.starts_with("urn:uuid:"), "{serial}");
    assert_eq!(serial.len(), "urn:uuid:".len() + 36);
    let root = &v["metadata"]["component"];
    assert_eq!(root["type"], "application");
    assert_eq!(root["bom-ref"], "binary");
    assert_eq!(root["version"], "v1.2.3");
    assert_eq!(root["purl"], "pkg:golang/example.com/app@v1.2.3");
    assert_eq!(root["hashes"][0]["alg"], "SHA-256");
    assert_eq!(v["metadata"]["timestamp"], "1970-01-01T00:00:00Z");
    let comps = v["components"].as_array().unwrap();
    assert_eq!(comps.len(), 2);
    assert_eq!(comps[0]["name"], "libc.so.6");
    assert!(comps[0].get("version").is_none());
    assert_eq!(comps[1]["purl"], "pkg:golang/github.com/a/b@v0.1.0");
    let deps = v["dependencies"][0]["dependsOn"].as_array().unwrap();
    assert_eq!(deps.len(), 2);
    for c in comps {
        assert!(deps.contains(&c["bom-ref"]));
    }
}

#[test]
fn spdx_document_has_the_required_shape() {
    let v = spdx(&document());
    assert_eq!(v["spdxVersion"], "SPDX-2.3");
    assert_eq!(v["dataLicense"], "CC0-1.0");
    assert_eq!(v["SPDXID"], "SPDXRef-DOCUMENT");
    assert_eq!(v["creationInfo"]["created"], "1970-01-01T00:00:00Z");
    let packages = v["packages"].as_array().unwrap();
    assert_eq!(packages.len(), 3);
    assert_eq!(packages[0]["SPDXID"], "SPDXRef-Binary");
    assert_eq!(packages[0]["checksums"][0]["algorithm"], "SHA256");
    let rels = v["relationships"].as_array().unwrap();
    assert_eq!(rels[0]["relationshipType"], "DESCRIBES");
    assert_eq!(rels[1]["relationshipType"], "DEPENDS_ON");
    assert_eq!(rels[2]["relationshipType"], "CONTAINS");
    assert_eq!(
        packages[2]["externalRefs"][0]["referenceLocator"],
        "pkg:golang/github.com/a/b@v0.1.0"
    );
}

#[test]
fn the_text_summary_lists_each_component() {
    let text = summary(&document());
    assert!(text.starts_with("# app sha256="), "{text}");
    assert!(text.contains("# module example.com/app v1.2.3"), "{text}");
    assert!(
        text.contains("shared-library\tlibc.so.6\t-\ttest"),
        "{text}"
    );
    assert!(
        text.contains("go-module\tgithub.com/a/b\tv0.1.0\ttest"),
        "{text}"
    );
}

#[test]
fn timestamps_and_serials_are_well_formed() {
    assert_eq!(rfc3339(0), "1970-01-01T00:00:00Z");
    assert_eq!(rfc3339(951_782_400), "2000-02-29T00:00:00Z");
    assert_eq!(rfc3339(1_700_000_000), "2023-11-14T22:13:20Z");
    let s = serial(&"f".repeat(64));
    assert_eq!(s, "urn:uuid:ffffffff-ffff-5fff-bfff-ffffffffffff");
}

#[test]
fn arguments_parse_and_refuse() {
    let argv = |a: &[&str]| a.iter().map(|s| s.to_string()).collect::<Vec<_>>();
    let a = parse_args(&argv(&["bin", "--format", "spdx", "--json"]))
        .unwrap()
        .unwrap();
    assert_eq!(a.binary, "bin");
    assert_eq!(a.format, Format::Spdx);
    assert!(a.json);
    let a = parse_args(&argv(&["bin", "-o", "out.json"]))
        .unwrap()
        .unwrap();
    assert!(a.json, "-o writes the JSON document");
    assert!(parse_args(&argv(&["--help"])).unwrap().is_none());
    assert!(parse_args(&argv(&[])).is_err());
    assert!(parse_args(&argv(&["bin", "--format", "xml"])).is_err());
    assert!(parse_args(&argv(&["bin", "--bogus"])).is_err());
    assert!(parse_args(&argv(&["a", "b"])).is_err());
}
