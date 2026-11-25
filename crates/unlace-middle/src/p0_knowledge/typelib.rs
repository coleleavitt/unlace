//! (unlace `typelib`) Which prebuilt type library a load reads.
//!
//! A type library carries the declarations of a platform's C library: every
//! function with its prototype, and every record with the size, alignment and
//! member offsets the platform's compiler gives it. `auto` reads the library
//! built into unlace for the image's target (an x86-64 Linux ELF linked against
//! glibc or musl, or an x86 or x64 PE, which reads the Windows API library; no
//! other target has one, so the option is inert there),
//! `off` reads none, and a path, or a `:`-separated list of paths, reads
//! library files instead of the built-in one: the text format, or an IDA type
//! library (`.til`), which is read for an image of any target. Under `auto` a
//! PE also reads the IDA Windows type libraries of the directory
//! `UNLACE_TIL_DIR` names, chosen the way IDA chooses them. The library is consulted when the analysis facts are committed, which
//! is after the `option` lines, so the choice is an ordinary field of the
//! [`Architecture`](crate::architecture::Architecture) and needs no load-time
//! bridge.

use std::io::Read;
use std::path::PathBuf;

/// The first line of every library file this build reads.
pub const MAGIC: &str = "typelib 1\n";

/// The first bytes of an IDA type library (`.til`), the other file a path may name.
pub const TIL_MAGIC: &[u8; 6] = b"IDATIL";

/// The value of the `typelib` option.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub enum TypeLib {
    /// The library built in for the image's target, when there is one.
    #[default]
    Auto,
    /// No library.
    Off,
    /// The libraries in these files, the first one that declares a name
    /// winning: a text library for an image of the target it names, or an IDA
    /// type library for any image. Spelled `a.til:b.til`.
    Files(Vec<PathBuf>),
}

impl TypeLib {
    /// Parse an option value: `auto`, `off`, or a `:`-separated list of
    /// library files. A path that is not a library file is refused.
    pub fn parse(value: &str) -> Result<TypeLib, String> {
        let v = value.trim();
        if v.eq_ignore_ascii_case("auto") {
            return Ok(TypeLib::Auto);
        }
        if v.eq_ignore_ascii_case("off") {
            return Ok(TypeLib::Off);
        }
        let paths = v
            .split(':')
            .map(str::trim)
            .filter(|p| !p.is_empty())
            .map(Self::library_file)
            .collect::<Result<Vec<_>, _>>()?;
        if paths.is_empty() {
            return Err(format!(
                "typelib: expected `auto`, `off` or a library file, got {v:?}"
            ));
        }
        Ok(TypeLib::Files(paths))
    }

    /// One path of the list, refused unless it opens as a library.
    fn library_file(v: &str) -> Result<PathBuf, String> {
        let path = PathBuf::from(v);
        if !path.is_file() {
            return Err(format!(
                "typelib: expected `auto`, `off` or a library file, got {v:?}"
            ));
        }
        let mut magic = [0u8; MAGIC.len()];
        let mut head = Vec::new();
        let read = std::fs::File::open(&path)
            .and_then(|f| f.take(magic.len() as u64).read_to_end(&mut head));
        let n = head.len().min(magic.len());
        magic[..n].copy_from_slice(&head[..n]);
        let text = n == magic.len() && magic == *MAGIC.as_bytes();
        let til = head.starts_with(TIL_MAGIC);
        if read.is_err() || !(text || til) {
            return Err(format!(
                "typelib: {v} is not a type library (no `{}` first line and no IDATIL header)",
                MAGIC.trim_end()
            ));
        }
        Ok(path)
    }

    /// The value as the option spells it.
    pub fn as_str(&self) -> String {
        match self {
            TypeLib::Auto => "auto".to_string(),
            TypeLib::Off => "off".to_string(),
            TypeLib::Files(paths) => paths
                .iter()
                .map(|p| p.display().to_string())
                .collect::<Vec<_>>()
                .join(":"),
        }
    }
}

impl crate::optionset::UnlaceOption for TypeLib {
    const NAME: &'static str = "typelib";
    crate::unlace_option_id!();

    fn unset() -> Self {
        TypeLib::Auto
    }

    fn shipped() -> Self {
        TypeLib::Auto
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let choice = TypeLib::parse(value).map_err(unlace_base::error::UnlaceError::parse)?;
        let msg = format!("Type library set to {}", choice.as_str());
        Ok((choice, msg))
    }
}

#[cfg(test)]
mod tests;
