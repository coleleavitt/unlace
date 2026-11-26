//! (unlace `flirt` autoload) The type libraries a FLIRT signature autoloads.
//!
//! IDA reads the `ids` and `idsnames` files beside the signatures: a line
//! `<signature> <library>` says that applying `<signature>.sig` also loads
//! `<library>.til` (`sub_6849A0`, "%s.sig autoloads %s.til"). A `;` starts a
//! comment, and the signature name is compared without regard to case.

use std::path::Path;

/// The files beside a signature that name the libraries it autoloads.
pub const IDS_FILES: [&str; 2] = ["ids", "idsnames"];

/// The library names (without `.til`) that the `ids` files beside `sig` give its
/// signature, in file order. A missing or unreadable file contributes nothing.
pub fn autoloads(sig: &Path) -> Vec<String> {
    let (Some(dir), Some(stem)) = (sig.parent(), sig.file_stem().and_then(|s| s.to_str())) else {
        return Vec::new();
    };
    let mut out = Vec::new();
    for file in IDS_FILES {
        if let Ok(text) = std::fs::read_to_string(dir.join(file)) {
            out.extend(libraries_for(&text, stem));
        }
    }
    out
}

/// The library each line of `text` names for the signature `stem`: the line's
/// first word is the signature and the rest of it the library.
fn libraries_for(text: &str, stem: &str) -> Vec<String> {
    text.lines()
        .filter_map(|line| {
            let line = line.split(';').next()?.trim();
            let (name, library) = line.split_once(char::is_whitespace)?;
            let library = library.trim();
            let library = library.strip_suffix(".til").unwrap_or(library);
            (name.eq_ignore_ascii_case(stem) && !library.is_empty()).then(|| library.to_string())
        })
        .collect()
}

#[cfg(test)]
mod tests;
