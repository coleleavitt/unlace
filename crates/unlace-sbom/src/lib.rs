//! CycloneDX-style JSON SBOM generator for the `unlace` workspace.
//!
//! Walks `Cargo.lock` entries and synthesizes a minimal CycloneDX 1.4
//! Software Bill of Materials. Only the fields required by the task are
//! emitted; license information is left as `None` because `Cargo.lock`
//! does not record per-package licenses.

use serde::{Deserialize, Serialize};

/// Top-level CycloneDX 1.4 BOM document.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Sbom {
    #[serde(rename = "bomFormat")]
    pub bom_format: String,
    #[serde(rename = "specVersion")]
    pub spec_version: String,
    pub version: u32,
    pub components: Vec<SbomComponent>,
}

impl Sbom {
    /// Construct an empty CycloneDX 1.4 BOM with no components.
    pub fn empty() -> Self {
        Self {
            bom_format: "CycloneDX".to_string(),
            spec_version: "1.4".to_string(),
            version: 1,
            components: Vec::new(),
        }
    }
}

/// A single CycloneDX component entry (a Rust crate from `Cargo.lock`).
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct SbomComponent {
    pub name: String,
    pub version: String,
    pub purl: String,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub license: Option<String>,
}

/// Build a CycloneDX SBOM by walking the workspace `Cargo.lock`.
///
/// The lockfile is located by walking up from `CARGO_MANIFEST_DIR` until a
/// `Cargo.lock` is found; if the env var isn't set (e.g. tests running from
/// an unusual cwd) the current directory and its ancestors are searched.
pub fn generate_sbom() -> Sbom {
    let lock_contents = read_workspace_cargo_lock();
    let components = parse_lock(&lock_contents);
    Sbom {
        bom_format: "CycloneDX".to_string(),
        spec_version: "1.4".to_string(),
        version: 1,
        components,
    }
}

/// Serialize an SBOM to pretty-printed JSON.
pub fn to_json(sbom: &Sbom) -> String {
    serde_json::to_string_pretty(sbom).expect("Sbom serialization is infallible")
}

// -----------------------------------------------------------------------
// Cargo.lock parsing
// -----------------------------------------------------------------------

fn read_workspace_cargo_lock() -> String {
    let start = std::env::var_os("CARGO_MANIFEST_DIR")
        .map(std::path::PathBuf::from)
        .or_else(|| std::env::current_dir().ok())
        .unwrap_or_else(|| std::path::PathBuf::from("."));

    let mut cursor: Option<&std::path::Path> = Some(start.as_path());
    while let Some(dir) = cursor {
        let candidate = dir.join("Cargo.lock");
        if candidate.is_file() {
            if let Ok(text) = std::fs::read_to_string(&candidate) {
                return text;
            }
        }
        cursor = dir.parent();
    }
    String::new()
}

/// Minimal TOML-like parser for `Cargo.lock` `[[package]]` entries.
///
/// We only need `name`, `version`, and `source` — a tiny line-oriented
/// scanner is sufficient and avoids pulling in a TOML dependency.
fn parse_lock(text: &str) -> Vec<SbomComponent> {
    let mut components = Vec::new();
    let mut cur_name: Option<String> = None;
    let mut cur_version: Option<String> = None;
    let mut cur_source: Option<String> = None;
    let mut in_package = false;

    let flush = |components: &mut Vec<SbomComponent>,
                 name: &mut Option<String>,
                 version: &mut Option<String>,
                 source: &mut Option<String>| {
        if let (Some(n), Some(v)) = (name.take(), version.take()) {
            let purl = build_purl(&n, &v, source.as_deref());
            components.push(SbomComponent {
                name: n,
                version: v,
                purl,
                license: None,
            });
        }
        *source = None;
    };

    for raw in text.lines() {
        let line = raw.trim();
        if line == "[[package]]" {
            flush(
                &mut components,
                &mut cur_name,
                &mut cur_version,
                &mut cur_source,
            );
            in_package = true;
            continue;
        }
        if line.starts_with('[') {
            // Some other table header — end of any in-flight package.
            flush(
                &mut components,
                &mut cur_name,
                &mut cur_version,
                &mut cur_source,
            );
            in_package = false;
            continue;
        }
        if !in_package {
            continue;
        }
        if let Some(val) = strip_kv(line, "name") {
            cur_name = Some(val);
        } else if let Some(val) = strip_kv(line, "version") {
            cur_version = Some(val);
        } else if let Some(val) = strip_kv(line, "source") {
            cur_source = Some(val);
        }
    }
    flush(
        &mut components,
        &mut cur_name,
        &mut cur_version,
        &mut cur_source,
    );
    components
}

/// If `line` matches `key = "value"`, return the unquoted value.
fn strip_kv(line: &str, key: &str) -> Option<String> {
    let rest = line.strip_prefix(key)?.trim_start();
    let rest = rest.strip_prefix('=')?.trim_start();
    let rest = rest.strip_prefix('"')?;
    let end = rest.rfind('"')?;
    Some(rest[..end].to_string())
}

/// Build a Package URL (purl) per the spec at <https://github.com/package-url/purl-spec>.
///
/// For `cargo` packages the canonical form is `pkg:cargo/<name>@<version>`.
/// Path or git-sourced crates from a workspace get a `vcs_url` qualifier
/// when the source line indicates a non-crates.io origin.
fn build_purl(name: &str, version: &str, source: Option<&str>) -> String {
    let name_enc = percent_encode(name);
    let version_enc = percent_encode(version);
    let mut purl = format!("pkg:cargo/{name_enc}@{version_enc}");

    if let Some(src) = source
        && !src.starts_with("registry+")
    {
        // Preserve non-registry provenance (git+…, sparse+…, etc.) so the purl
        // remains unambiguous for vendored or git-pinned crates.
        let qualifier = percent_encode_qualifier(src);
        purl.push_str("?vcs_url=");
        purl.push_str(&qualifier);
    }
    purl
}

/// Percent-encode the small set of characters that must be escaped inside a
/// purl name/version segment per the spec (`#`, `?`, `@`, `/`, space, etc.).
fn percent_encode(input: &str) -> String {
    let mut out = String::with_capacity(input.len());
    for b in input.bytes() {
        let safe = b.is_ascii_alphanumeric() || matches!(b, b'-' | b'.' | b'_' | b'~');
        if safe {
            out.push(b as char);
        } else {
            out.push_str(&format!("%{b:02X}"));
        }
    }
    out
}

/// Slightly more permissive encoding for qualifier values: keep `:` and `/`
/// readable since git URLs and registry URLs are far more legible that way.
fn percent_encode_qualifier(input: &str) -> String {
    let mut out = String::with_capacity(input.len());
    for b in input.bytes() {
        let safe = b.is_ascii_alphanumeric()
            || matches!(b, b'-' | b'.' | b'_' | b'~' | b':' | b'/' | b'+' | b'=');
        if safe {
            out.push(b as char);
        } else {
            out.push_str(&format!("%{b:02X}"));
        }
    }
    out
}

// -----------------------------------------------------------------------
// Tests
// -----------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    /// An empty BOM serializes to a valid CycloneDX 1.4 document with
    /// the spec-mandated top-level fields and a zero-length component list.
    #[test]
    fn empty_bom_validates() {
        let bom = Sbom::empty();
        let json = to_json(&bom);
        let value: serde_json::Value = serde_json::from_str(&json).expect("valid JSON");

        assert_eq!(value["bomFormat"], "CycloneDX");
        assert_eq!(value["specVersion"], "1.4");
        assert_eq!(value["version"], 1);
        assert!(value["components"].is_array());
        assert_eq!(value["components"].as_array().unwrap().len(), 0);
    }

    /// A BOM containing a single component must survive a full
    /// serialize → deserialize round-trip without losing data.
    #[test]
    fn single_component_round_trips() {
        let original = Sbom {
            bom_format: "CycloneDX".to_string(),
            spec_version: "1.4".to_string(),
            version: 1,
            components: vec![SbomComponent {
                name: "serde".to_string(),
                version: "1.0.219".to_string(),
                purl: "pkg:cargo/serde@1.0.219".to_string(),
                license: Some("MIT OR Apache-2.0".to_string()),
            }],
        };

        let json = to_json(&original);
        let parsed: Sbom = serde_json::from_str(&json).expect("round-trip");
        assert_eq!(parsed, original);
    }

    /// The purl must use the `pkg:cargo/<name>@<version>` shape and
    /// encode reserved characters in `name` / `version` segments.
    #[test]
    fn purl_is_correctly_formed() {
        // Standard registry crate.
        assert_eq!(
            build_purl(
                "serde",
                "1.0.219",
                Some("registry+https://github.com/rust-lang/crates.io-index"),
            ),
            "pkg:cargo/serde@1.0.219",
        );

        // Workspace member with no `source` line.
        assert_eq!(
            build_purl("unlace-ir", "0.1.0", None),
            "pkg:cargo/unlace-ir@0.1.0",
        );

        // Pre-release versions contain `+` build metadata which must
        // be percent-encoded inside the version segment.
        let purl = build_purl("crate-x", "1.0.0+build.7", None);
        assert!(purl.starts_with("pkg:cargo/crate-x@1.0.0"));
        assert!(purl.contains("%2B"), "purl must encode '+': {purl}");

        // Git-sourced crate preserves provenance via `vcs_url`.
        let purl = build_purl(
            "weird",
            "0.1.0",
            Some("git+https://github.com/example/weird.git#abc123"),
        );
        assert!(purl.starts_with("pkg:cargo/weird@0.1.0?vcs_url="));
        assert!(purl.contains("git+https://github.com/example/weird.git"));
    }
}
