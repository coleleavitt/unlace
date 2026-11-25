//! (unlace `flirt` C runtime) The C runtime an ELF image's compiler ships, read
//! from its `.comment` records.
//!
//! GCC stamps `GCC: (GNU) 15.2.0` and clang `clang version 18.1.3 ...` into
//! `.comment`. Each compiler ships its own runtime (libgcc and libstdc++ for GCC,
//! compiler-rt and libc++ for clang), so the signature files of that family are
//! the ones an image of that compiler can link. [`super::load_sigs_for`] applies
//! them first and reports when signature files were given but none is that
//! runtime. Only the family is known: a signature header records no release, so
//! a release mismatch inside the family is not detected. An image with a
//! `rustc version` record is left alone, since its C-style records are linker
//! stamps and its std signatures come from [`super::ruststdsigs`].

use std::path::Path;

use flirt_sig::Signature;
use object::read::{Object, ObjectSection};

/// The C compiler named by a `.comment` record.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum CCompiler {
    Gcc,
    Clang,
}

impl CCompiler {
    /// The compiler's name as its `.comment` record spells it.
    pub fn name(self) -> &'static str {
        match self {
            Self::Gcc => "GCC",
            Self::Clang => "clang",
        }
    }

    /// Lower-case words that a signature file of this compiler's runtime carries in
    /// its file name or its header library name.
    fn runtime_words(self) -> &'static [&'static str] {
        match self {
            Self::Gcc => &["libgcc", "libstdc", "gcc"],
            Self::Clang => &["compiler-rt", "libc++", "clang"],
        }
    }
}

/// The compiler of an image and the release it reports.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CRuntime {
    pub compiler: CCompiler,
    /// The dotted release number (`15.2.0`).
    pub version: String,
}

/// The C compiler named by the first C-style record of an ELF image's `.comment`.
pub fn comment_c_compiler(file: &object::File) -> Option<CRuntime> {
    let data = file.section_by_name(".comment")?.data().ok()?;
    if data
        .split(|&b| b == 0)
        .any(|r| r.starts_with(b"rustc version "))
    {
        return None;
    }
    data.split(|&b| b == 0).find_map(record_runtime)
}

/// The compiler a single `.comment` record names, if it is a GCC or clang record.
fn record_runtime(record: &[u8]) -> Option<CRuntime> {
    let text = String::from_utf8_lossy(record);
    let text = text.trim();
    let (compiler, rest) = match text.strip_prefix("GCC: ") {
        Some(rest) => (CCompiler::Gcc, rest),
        None => {
            let at = text.find("clang version ")?;
            (CCompiler::Clang, &text[at + "clang version ".len()..])
        }
    };
    Some(CRuntime {
        compiler,
        version: version_token(rest)?,
    })
}

/// The first whitespace-separated word that starts with a digit, cut at its first
/// character that is neither a digit nor a dot.
fn version_token(text: &str) -> Option<String> {
    let token = text
        .split_whitespace()
        .find(|t| t.starts_with(|c: char| c.is_ascii_digit()))?;
    let version = token
        .split(|c: char| !(c.is_ascii_digit() || c == '.'))
        .next()?;
    (!version.is_empty()).then(|| version.to_string())
}

/// Whether a signature file (`path`, parsed as `sig`) belongs to the runtime of
/// `compiler`, by its file name or its header library name.
pub fn is_runtime_of(path: &Path, sig: &Signature, compiler: CCompiler) -> bool {
    let name = path
        .file_name()
        .and_then(|n| n.to_str())
        .unwrap_or_default()
        .to_ascii_lowercase();
    let library = sig.header.library_name.to_ascii_lowercase();
    compiler
        .runtime_words()
        .iter()
        .any(|w| name.contains(w) || library.contains(w))
}

#[cfg(test)]
mod tests;
