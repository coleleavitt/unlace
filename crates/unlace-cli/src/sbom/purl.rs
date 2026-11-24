//! Package URLs (https://github.com/package-url/purl-spec) for the components
//! an SBOM names: `pkg:cargo`, `pkg:golang` and `pkg:generic`.

/// Percent-encode everything outside the purl unreserved set.
pub(crate) fn encode(segment: &str) -> String {
    let mut out = String::with_capacity(segment.len());
    for b in segment.bytes() {
        if b.is_ascii_alphanumeric() || matches!(b, b'-' | b'.' | b'_' | b'~') {
            out.push(char::from(b));
        } else {
            out.push_str(&format!("%{b:02X}"));
        }
    }
    out
}

fn with_version(base: String, version: Option<&str>) -> String {
    match version.filter(|v| !v.is_empty()) {
        Some(v) => format!("{base}@{}", encode(v)),
        None => base,
    }
}

/// `pkg:cargo/<name>@<version>`.
pub(crate) fn cargo(name: &str, version: &str) -> String {
    with_version(format!("pkg:cargo/{}", encode(name)), Some(version))
}

/// `pkg:golang/<namespace>/<name>@<version>`: the module path's segments, each
/// encoded, joined by `/`.
pub(crate) fn golang(path: &str, version: Option<&str>) -> String {
    let segments: Vec<String> = path
        .split('/')
        .filter(|s| !s.is_empty())
        .map(encode)
        .collect();
    with_version(format!("pkg:golang/{}", segments.join("/")), version)
}

/// `pkg:generic/<name>@<version>`.
pub(crate) fn generic(name: &str, version: &str) -> String {
    with_version(format!("pkg:generic/{}", encode(name)), Some(version))
}
