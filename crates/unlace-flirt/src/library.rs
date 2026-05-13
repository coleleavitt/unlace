//! Bundled signature library loading.
//!
//! Ships pre-built FLIRT pattern databases for common runtime libraries
//! (glibc, musl, MSVCRT, mingw, dietlibc, Go runtime, Rust libcore) so
//! that binaries linked against these libraries can have library functions
//! identified without requiring the user to provide their own `.sig` files.

use crate::{FlirtDb, FlirtError, load_patterns_from_toml_str};

/// Identifies a bundled signature library that can be loaded.
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub enum SignatureLibrary {
    /// GNU C Library (glibc) — x86-64
    GlibcX86_64,
    /// musl libc — x86-64
    MuslX86_64,
    /// Microsoft Visual C++ Runtime — x86-64
    MsvcrtX86_64,
    /// MinGW (GCC on Windows) — x86-64
    MingwX86_64,
    /// dietlibc — x86-64
    DietlibcX86_64,
    /// Go runtime — x86-64
    GoRuntimeX86_64,
    /// Rust libcore/std — x86-64
    RustLibcoreX86_64,
}

impl SignatureLibrary {
    /// All available bundled signature libraries.
    pub const ALL: &'static [SignatureLibrary] = &[
        SignatureLibrary::GlibcX86_64,
        SignatureLibrary::MuslX86_64,
        SignatureLibrary::MsvcrtX86_64,
        SignatureLibrary::MingwX86_64,
        SignatureLibrary::DietlibcX86_64,
        SignatureLibrary::GoRuntimeX86_64,
        SignatureLibrary::RustLibcoreX86_64,
    ];

    /// Human-readable name for this signature library.
    pub fn name(self) -> &'static str {
        match self {
            Self::GlibcX86_64 => "glibc (x86-64)",
            Self::MuslX86_64 => "musl (x86-64)",
            Self::MsvcrtX86_64 => "MSVCRT (x86-64)",
            Self::MingwX86_64 => "MinGW (x86-64)",
            Self::DietlibcX86_64 => "dietlibc (x86-64)",
            Self::GoRuntimeX86_64 => "Go runtime (x86-64)",
            Self::RustLibcoreX86_64 => "Rust libcore (x86-64)",
        }
    }

    /// Short identifier suitable for use in CLI flags or config keys.
    pub fn id(self) -> &'static str {
        match self {
            Self::GlibcX86_64 => "glibc_x86_64",
            Self::MuslX86_64 => "musl_x86_64",
            Self::MsvcrtX86_64 => "msvcrt_x86_64",
            Self::MingwX86_64 => "mingw_x86_64",
            Self::DietlibcX86_64 => "dietlibc_x86_64",
            Self::GoRuntimeX86_64 => "go_runtime_x86_64",
            Self::RustLibcoreX86_64 => "rust_libcore_x86_64",
        }
    }

    /// Parse a library identifier (as returned by [`Self::id`]).
    pub fn from_id(id: &str) -> Option<Self> {
        match id {
            "glibc_x86_64" => Some(Self::GlibcX86_64),
            "musl_x86_64" => Some(Self::MuslX86_64),
            "msvcrt_x86_64" => Some(Self::MsvcrtX86_64),
            "mingw_x86_64" => Some(Self::MingwX86_64),
            "dietlibc_x86_64" => Some(Self::DietlibcX86_64),
            "go_runtime_x86_64" => Some(Self::GoRuntimeX86_64),
            "rust_libcore_x86_64" => Some(Self::RustLibcoreX86_64),
            _ => None,
        }
    }

    /// Return the raw TOML source for this library's patterns.
    pub fn toml_source(self) -> &'static str {
        match self {
            Self::GlibcX86_64 => include_str!("../patterns/glibc_x86_64.toml"),
            Self::MuslX86_64 => include_str!("../patterns/musl_x86_64.toml"),
            Self::MsvcrtX86_64 => include_str!("../patterns/msvcrt_x86_64.toml"),
            Self::MingwX86_64 => include_str!("../patterns/mingw_x86_64.toml"),
            Self::DietlibcX86_64 => include_str!("../patterns/dietlibc_x86_64.toml"),
            Self::GoRuntimeX86_64 => include_str!("../patterns/go_runtime_x86_64.toml"),
            Self::RustLibcoreX86_64 => include_str!("../patterns/rust_libcore_x86_64.toml"),
        }
    }

    /// Load and parse the signature database for this library.
    pub fn load(self) -> Result<FlirtDb, FlirtError> {
        load_patterns_from_toml_str(self.toml_source())
    }
}

/// Load a single bundled signature library by its string identifier.
///
/// Returns `None` if the identifier is not recognized.
///
/// # Example
/// ```
/// # use unlace_flirt::load_bundled_library;
/// let db = load_bundled_library("glibc_x86_64").unwrap().unwrap();
/// assert!(db.patterns.len() > 0);
/// ```
pub fn load_bundled_library(id: &str) -> Option<Result<FlirtDb, FlirtError>> {
    SignatureLibrary::from_id(id).map(|lib| lib.load())
}

/// Load all bundled signature libraries and merge them into a single database.
///
/// This is useful for best-effort identification when the target's C library
/// is unknown. Patterns from all libraries are concatenated; matching is
/// first-come-first-served so library order matters for name disambiguation.
///
/// # Example
/// ```
/// # use unlace_flirt::load_all_bundled;
/// let db = load_all_bundled().unwrap();
/// assert!(db.patterns.len() > 100);
/// ```
pub fn load_all_bundled() -> Result<FlirtDb, FlirtError> {
    let mut merged = FlirtDb::default();
    for lib in SignatureLibrary::ALL {
        let db = lib.load()?;
        merged.patterns.extend(db.patterns);
    }
    Ok(merged)
}

/// Load multiple bundled signature libraries by identifier and merge them.
///
/// Unrecognized identifiers are silently skipped. Returns the merged database.
///
/// # Example
/// ```
/// # use unlace_flirt::load_bundled_libraries;
/// let db = load_bundled_libraries(&["glibc_x86_64", "musl_x86_64"]).unwrap();
/// assert!(db.patterns.len() > 30);
/// ```
pub fn load_bundled_libraries(ids: &[&str]) -> Result<FlirtDb, FlirtError> {
    let mut merged = FlirtDb::default();
    for &id in ids {
        if let Some(lib) = SignatureLibrary::from_id(id) {
            let db = lib.load()?;
            merged.patterns.extend(db.patterns);
        }
    }
    Ok(merged)
}

/// List all available bundled signature library identifiers.
pub fn list_bundled_libraries() -> Vec<&'static str> {
    SignatureLibrary::ALL.iter().map(|lib| lib.id()).collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn all_libraries_parse_successfully() {
        for lib in SignatureLibrary::ALL {
            let db = lib.load().unwrap_or_else(|e| {
                panic!("failed to parse {}: {e}", lib.name());
            });
            assert!(!db.patterns.is_empty(), "{} loaded 0 patterns", lib.name());
        }
    }

    #[test]
    fn load_by_id_round_trips() {
        for lib in SignatureLibrary::ALL {
            let parsed = SignatureLibrary::from_id(lib.id());
            assert_eq!(parsed, Some(*lib), "round-trip failed for {}", lib.id());
        }
    }

    #[test]
    fn unknown_id_returns_none() {
        assert!(SignatureLibrary::from_id("nonexistent").is_none());
        assert!(load_bundled_library("bogus").is_none());
    }

    #[test]
    fn load_all_bundled_merges_all_libraries() {
        let db = load_all_bundled().unwrap();
        assert!(db.patterns.len() >= 35, "expected >=35, got {}", db.patterns.len());
    }

    #[test]
    fn load_bundled_libraries_selective() {
        let db = load_bundled_libraries(&["glibc_x86_64", "musl_x86_64"]).unwrap();
        assert!(db.patterns.len() > 30);
    }

    #[test]
    fn load_bundled_libraries_skips_unknown() {
        let db = load_bundled_libraries(&["glibc_x86_64", "not_real", "musl_x86_64"]).unwrap();
        assert!(db.patterns.len() > 30);
    }

    #[test]
    fn list_bundled_libraries_returns_all() {
        let ids = list_bundled_libraries();
        assert_eq!(ids.len(), SignatureLibrary::ALL.len());
        assert!(ids.contains(&"glibc_x86_64"));
        assert!(ids.contains(&"go_runtime_x86_64"));
        assert!(ids.contains(&"rust_libcore_x86_64"));
    }

    #[test]
    fn glibc_has_expected_functions() {
        let db = SignatureLibrary::GlibcX86_64.load().unwrap();
        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        for expected in ["strlen", "strcpy", "memcpy", "malloc", "free", "printf"] {
            assert!(names.contains(&expected), "glibc missing {expected}");
        }
    }

    #[test]
    fn go_runtime_has_expected_functions() {
        let db = SignatureLibrary::GoRuntimeX86_64.load().unwrap();
        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        for expected in ["runtime.morestack_noctxt", "runtime.mallocgc", "runtime.gopanic"] {
            assert!(names.contains(&expected), "Go runtime missing {expected}");
        }
    }

    #[test]
    fn rust_libcore_has_expected_functions() {
        let db = SignatureLibrary::RustLibcoreX86_64.load().unwrap();
        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        for expected in ["core::panicking::panic", "alloc::alloc::__rust_alloc", "std::process::exit"] {
            assert!(names.contains(&expected), "Rust libcore missing {expected}");
        }
    }

    #[test]
    fn msvcrt_has_expected_functions() {
        let db = SignatureLibrary::MsvcrtX86_64.load().unwrap();
        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        for expected in ["strlen", "malloc", "free", "ExitProcess", "operator new"] {
            assert!(names.contains(&expected), "MSVCRT missing {expected}");
        }
    }
}
