//! `unlace sbom` — a software bill of materials for one binary.
//!
//! ```text
//!   unlace sbom <binary> [--json] [--format cyclonedx|spdx] [-o FILE] [--slice ARCH]
//! ```
//!
//! Lists what the image itself records about its components, without loading
//! it into the engine: the shared libraries it loads (ELF `DT_NEEDED` with the
//! highest symbol version each is required at, Mach-O `LC_*_DYLIB` with their
//! versions, PE imports), the Go modules of its build info, the Rust crates of
//! its cargo-auditable data and registry source paths, the version banners of
//! libraries linked into it (OpenSSL, zlib, ...), and the toolchain, build
//! identity and PE version resource. `--json` writes a CycloneDX 1.5 document,
//! or SPDX 2.3 with `--format spdx`.

mod collect;
mod pever;
mod purl;
#[cfg(test)]
mod tests;

use serde_json::{Value, json};
use sha2::{Digest, Sha256};

use crate::args::take_value as take;
use collect::{Component, Inventory};

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) enum Format {
    CycloneDx,
    Spdx,
}

impl Format {
    fn parse(s: &str) -> Result<Format, String> {
        match s {
            "cyclonedx" | "cdx" => Ok(Format::CycloneDx),
            "spdx" => Ok(Format::Spdx),
            other => Err(format!(
                "unknown --format {other:?} (expected cyclonedx or spdx)"
            )),
        }
    }
}

pub(crate) struct SbomArgs {
    binary: String,
    json: bool,
    format: Format,
    output: Option<String>,
    slice: Option<String>,
}

/// The facts one document is rendered from.
pub(crate) struct Document {
    pub name: String,
    pub sha256: String,
    pub size: u64,
    /// The selected image's own hash, when it is not the whole file (a fat
    /// Mach-O slice, a dyld-cache image).
    pub image_sha256: Option<String>,
    pub created: String,
    pub inventory: Inventory,
}

fn usage() {
    eprintln!(
        "usage: unlace sbom <binary> [--json] [--format cyclonedx|spdx] [-o FILE] [--slice ARCH]\n\
         \n\
         A software bill of materials for one image, from what the image records:\n\
         shared libraries it loads (ELF DT_NEEDED with the highest symbol version\n\
         required, Mach-O LC_*_DYLIB with versions, PE imports), Go modules (build\n\
         info), Rust crates (cargo-auditable .dep-v0, registry source paths), the\n\
         version banners of libraries linked in (OpenSSL, zlib, libpng, curl, ...),\n\
         the toolchain, the build identity and the PE version resource.\n\
         \n\
         Without --json: one line per component (kind, name, version, evidence).\n\
         --json emits the document: CycloneDX 1.5 by default, an object\n\
         {{bomFormat,specVersion,serialNumber,version,metadata,components,dependencies}};\n\
         --format spdx emits SPDX 2.3, an object\n\
         {{spdxVersion,dataLicense,SPDXID,name,documentNamespace,creationInfo,packages,relationships}}.\n\
         -o FILE writes the JSON document to FILE instead of stdout.\n\
         --slice ARCH picks a fat Mach-O slice.  SOURCE_DATE_EPOCH, when set, fixes\n\
         the document timestamp."
    );
}

/// `unlace sbom` entry point.
pub fn run(argv: &[String]) -> i32 {
    let args = match parse_args(argv) {
        Ok(Some(a)) => a,
        Ok(None) => {
            usage();
            return 0;
        }
        Err(e) => {
            eprintln!("error: {e}");
            usage();
            return 2;
        }
    };
    let text = match query(&args) {
        Ok(text) => text,
        Err(e) => {
            eprintln!("error: {e}");
            return 1;
        }
    };
    match &args.output {
        Some(path) => match std::fs::write(path, &text) {
            Ok(()) => 0,
            Err(e) => {
                eprintln!("error: {path}: {e}");
                1
            }
        },
        None => crate::output::emit_with_status(&text, 0),
    }
}

/// The parsed arguments, or `None` when help was asked for.
pub(crate) fn parse_args(argv: &[String]) -> Result<Option<SbomArgs>, String> {
    let mut binary = None;
    let mut json = false;
    let mut format = Format::CycloneDx;
    let mut output = None;
    let mut slice = None;
    let mut i = 0;
    while i < argv.len() {
        let a = argv[i].as_str();
        match a {
            "--json" => json = true,
            "--format" => format = Format::parse(&take(argv, &mut i, "--format")?)?,
            "-o" | "--output" => output = Some(take(argv, &mut i, a)?),
            "--slice" => slice = Some(take(argv, &mut i, "--slice")?),
            "-h" | "--help" => return Ok(None),
            s if s.starts_with('-') && s.len() > 1 => return Err(format!("unknown option {s}")),
            _ if binary.is_none() => binary = Some(a.to_string()),
            _ => return Err(format!("unexpected argument {a:?}")),
        }
        i += 1;
    }
    let binary = binary.ok_or("sbom requires <binary>")?;
    Ok(Some(SbomArgs {
        binary,
        json: json || output.is_some(),
        format,
        output,
        slice,
    }))
}

fn query(args: &SbomArgs) -> Result<String, String> {
    let file = std::fs::read(&args.binary).map_err(|e| format!("{}: {e}", args.binary))?;
    let image = crate::image::image_bytes(
        &args.binary,
        unlace_analysis::loader::macho_fat::slice_pref(args.slice.as_deref(), None),
    )?;
    let inventory = collect::collect(&image).map_err(|e| format!("{}: {e}", args.binary))?;
    let sha256 = sha256_hex(&file);
    let image_sha256 = (image != file).then(|| sha256_hex(&image));
    let name = std::path::Path::new(&args.binary)
        .file_name()
        .map(|n| n.to_string_lossy().into_owned())
        .unwrap_or_else(|| args.binary.clone());
    let doc = Document {
        name,
        sha256,
        size: file.len() as u64,
        image_sha256,
        created: timestamp(),
        inventory,
    };
    Ok(if args.json {
        let value = match args.format {
            Format::CycloneDx => cyclonedx(&doc),
            Format::Spdx => spdx(&doc),
        };
        let mut text = serde_json::to_string_pretty(&value).map_err(|e| e.to_string())?;
        text.push('\n');
        text
    } else {
        summary(&doc)
    })
}

pub(crate) fn sha256_hex(bytes: &[u8]) -> String {
    Sha256::digest(bytes)
        .iter()
        .map(|byte| format!("{byte:02x}"))
        .collect()
}

fn tool_version() -> &'static str {
    option_env!("UNLACE_VERSION").unwrap_or(env!("CARGO_PKG_VERSION"))
}

/// RFC 3339 UTC time: `SOURCE_DATE_EPOCH` when set, else now.
fn timestamp() -> String {
    let secs = std::env::var("SOURCE_DATE_EPOCH")
        .ok()
        .and_then(|s| s.trim().parse::<i64>().ok())
        .unwrap_or_else(|| {
            std::time::SystemTime::now()
                .duration_since(std::time::UNIX_EPOCH)
                .map(|d| i64::try_from(d.as_secs()).unwrap_or(0))
                .unwrap_or(0)
        });
    rfc3339(secs)
}

/// Seconds since the epoch as `YYYY-MM-DDTHH:MM:SSZ` (Howard Hinnant's
/// civil-from-days).
pub(crate) fn rfc3339(secs: i64) -> String {
    let days = secs.div_euclid(86_400);
    let rem = secs.rem_euclid(86_400);
    let z = days + 719_468;
    let era = z.div_euclid(146_097);
    let doe = z.rem_euclid(146_097);
    let yoe = (doe - doe / 1460 + doe / 36_524 - doe / 146_096) / 365;
    let doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
    let mp = (5 * doy + 2) / 153;
    let day = doy - (153 * mp + 2) / 5 + 1;
    let month = if mp < 10 { mp + 3 } else { mp - 9 };
    let year = yoe + era * 400 + i64::from(month <= 2);
    format!(
        "{year:04}-{month:02}-{day:02}T{:02}:{:02}:{:02}Z",
        rem / 3600,
        (rem % 3600) / 60,
        rem % 60
    )
}

/// A UUID-shaped serial derived from the file hash (version 5 and RFC 4122
/// variant bits set), so one binary always gets the same serial.
pub(crate) fn serial(sha256: &str) -> String {
    let mut h: Vec<char> = sha256.chars().take(32).collect();
    h.resize(32, '0');
    h[12] = '5';
    let variant = h[16].to_digit(16).unwrap_or(0);
    h[16] = char::from_digit((variant & 0x3) | 0x8, 16).unwrap_or('8');
    let s: String = h.into_iter().collect();
    format!(
        "urn:uuid:{}-{}-{}-{}-{}",
        &s[0..8],
        &s[8..12],
        &s[12..16],
        &s[16..20],
        &s[20..32]
    )
}

fn prop(name: impl Into<String>, value: impl Into<String>) -> Value {
    json!({"name": name.into(), "value": value.into()})
}

/// The binary's own properties, shared by both formats.
fn binary_properties(doc: &Document) -> Vec<(String, String)> {
    let inv = &doc.inventory;
    let mut out = vec![
        ("unlace:format".to_string(), inv.format.clone()),
        ("unlace:architecture".to_string(), inv.architecture.clone()),
        ("unlace:bits".to_string(), inv.bits.to_string()),
        ("unlace:endian".to_string(), inv.endian.to_string()),
        ("unlace:entry".to_string(), format!("{:#x}", inv.entry)),
        ("unlace:compiler".to_string(), inv.compiler.to_string()),
        ("unlace:size".to_string(), doc.size.to_string()),
    ];
    if let Some(h) = &doc.image_sha256 {
        out.push(("unlace:image-sha256".into(), h.clone()));
    }
    if let Some(m) = &inv.main {
        out.push(("unlace:module".into(), m.name.clone()));
    }
    for (k, v) in &inv.identity {
        out.push((format!("unlace:{k}"), v.clone()));
    }
    for t in &inv.toolchain {
        out.push(("unlace:toolchain".into(), t.clone()));
    }
    for (k, v) in &inv.version_info {
        out.push((format!("unlace:version-info:{k}"), v.clone()));
    }
    out
}

/// The binary's version: its module's, else the PE resource's product or
/// file version.
fn binary_version(inv: &Inventory) -> Option<String> {
    inv.main
        .as_ref()
        .and_then(|m| m.version.clone())
        .or_else(|| inv.version_info.get("ProductVersion").cloned())
        .or_else(|| inv.version_info.get("FileVersion").cloned())
}

fn component_properties(c: &Component) -> Vec<(String, String)> {
    let mut out = vec![
        ("unlace:kind".to_string(), c.kind.as_str().to_string()),
        ("unlace:evidence".to_string(), c.evidence.clone()),
    ];
    out.extend(c.properties.iter().cloned());
    out
}

/// The CycloneDX 1.5 document.
pub(crate) fn cyclonedx(doc: &Document) -> Value {
    let inv = &doc.inventory;
    let properties: Vec<Value> = binary_properties(doc)
        .into_iter()
        .map(|(k, v)| prop(k, v))
        .collect();
    let mut root = json!({
        "type": inv.role,
        "bom-ref": "binary",
        "name": doc.name,
        "hashes": [{"alg": "SHA-256", "content": doc.sha256}],
        "properties": properties,
    });
    if let Some(v) = binary_version(inv) {
        root["version"] = json!(v);
    }
    if let Some(p) = inv.main.as_ref().and_then(|m| m.purl.clone()) {
        root["purl"] = json!(p);
    }
    let components: Vec<Value> = inv
        .components
        .iter()
        .map(|c| {
            let properties: Vec<Value> = component_properties(c)
                .into_iter()
                .map(|(k, v)| prop(k, v))
                .collect();
            let mut v = json!({
                "type": "library",
                "bom-ref": c.bom_ref(),
                "name": c.name,
                "scope": "required",
                "properties": properties,
            });
            if let Some(ver) = &c.version {
                v["version"] = json!(ver);
            }
            if let Some(p) = &c.purl {
                v["purl"] = json!(p);
            }
            v
        })
        .collect();
    let refs: Vec<String> = inv.components.iter().map(Component::bom_ref).collect();
    json!({
        "bomFormat": "CycloneDX",
        "specVersion": "1.5",
        "serialNumber": serial(&doc.sha256),
        "version": 1,
        "metadata": {
            "timestamp": doc.created,
            "tools": {"components": [{
                "type": "application",
                "name": "unlace",
                "version": tool_version(),
            }]},
            "component": root,
        },
        "components": components,
        "dependencies": [{"ref": "binary", "dependsOn": refs}],
    })
}

/// SPDX identifiers allow letters, digits, `.` and `-`.
fn spdx_id(n: usize) -> String {
    format!("SPDXRef-Component-{n}")
}

fn spdx_purl(purl: &Option<String>) -> Option<Value> {
    purl.as_ref().map(|p| {
        json!([{
            "referenceCategory": "PACKAGE-MANAGER",
            "referenceType": "purl",
            "referenceLocator": p,
        }])
    })
}

/// The SPDX 2.3 document.
pub(crate) fn spdx(doc: &Document) -> Value {
    let inv = &doc.inventory;
    let comment = binary_properties(doc)
        .into_iter()
        .map(|(k, v)| format!("{k}={v}"))
        .collect::<Vec<_>>()
        .join("\n");
    let purpose = if inv.role == "library" {
        "LIBRARY"
    } else {
        "APPLICATION"
    };
    let mut root = json!({
        "name": doc.name,
        "SPDXID": "SPDXRef-Binary",
        "downloadLocation": "NOASSERTION",
        "filesAnalyzed": false,
        "primaryPackagePurpose": purpose,
        "checksums": [{"algorithm": "SHA256", "checksumValue": doc.sha256}],
        "comment": comment,
    });
    if let Some(v) = binary_version(inv) {
        root["versionInfo"] = json!(v);
    }
    if let Some(refs) = spdx_purl(&inv.main.as_ref().and_then(|m| m.purl.clone())) {
        root["externalRefs"] = refs;
    }
    let mut packages = vec![root];
    let mut relationships = vec![json!({
        "spdxElementId": "SPDXRef-DOCUMENT",
        "relationshipType": "DESCRIBES",
        "relatedSpdxElement": "SPDXRef-Binary",
    })];
    for (i, c) in inv.components.iter().enumerate() {
        let id = spdx_id(i + 1);
        let comment = component_properties(c)
            .into_iter()
            .map(|(k, v)| format!("{k}={v}"))
            .collect::<Vec<_>>()
            .join("\n");
        let mut p = json!({
            "name": c.name,
            "SPDXID": id,
            "downloadLocation": "NOASSERTION",
            "filesAnalyzed": false,
            "primaryPackagePurpose": "LIBRARY",
            "comment": comment,
        });
        if let Some(v) = &c.version {
            p["versionInfo"] = json!(v);
        }
        if let Some(refs) = spdx_purl(&c.purl) {
            p["externalRefs"] = refs;
        }
        packages.push(p);
        let relation = if c.kind.is_linked_in() {
            "CONTAINS"
        } else {
            "DEPENDS_ON"
        };
        relationships.push(json!({
            "spdxElementId": "SPDXRef-Binary",
            "relationshipType": relation,
            "relatedSpdxElement": id,
        }));
    }
    let name = format!("{} SBOM", doc.name);
    let namespace = format!(
        "https://unlace.invalid/spdx/{}-{}",
        purl::encode(&doc.name),
        doc.sha256
    );
    let creator = format!("Tool: unlace-{}", tool_version());
    json!({
        "spdxVersion": "SPDX-2.3",
        "dataLicense": "CC0-1.0",
        "SPDXID": "SPDXRef-DOCUMENT",
        "name": name,
        "documentNamespace": namespace,
        "creationInfo": {
            "created": doc.created,
            "creators": [creator],
        },
        "packages": packages,
        "relationships": relationships,
    })
}

/// The text surface: a header, then `kind name version evidence` per component.
pub(crate) fn summary(doc: &Document) -> String {
    use std::fmt::Write as _;
    let inv = &doc.inventory;
    let mut out = String::new();
    let _ = writeln!(
        out,
        "# {} sha256={} format={} arch={} role={} compiler={}",
        doc.name, doc.sha256, inv.format, inv.architecture, inv.role, inv.compiler
    );
    if let Some(m) = &inv.main {
        let _ = writeln!(
            out,
            "# module {} {}",
            m.name,
            m.version.as_deref().unwrap_or("-")
        );
    }
    for t in &inv.toolchain {
        let _ = writeln!(out, "# toolchain {t}");
    }
    for (k, v) in &inv.identity {
        let _ = writeln!(out, "# {k} {v}");
    }
    for (k, v) in &inv.version_info {
        let _ = writeln!(out, "# version-info {k} {v}");
    }
    let _ = writeln!(out, "# kind\tname\tversion\tevidence");
    for c in &inv.components {
        let _ = writeln!(
            out,
            "{}\t{}\t{}\t{}",
            c.kind.as_str(),
            c.name,
            c.version.as_deref().unwrap_or("-"),
            c.evidence
        );
    }
    out
}
