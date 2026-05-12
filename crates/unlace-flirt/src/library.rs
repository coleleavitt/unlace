//! Shipped FLIRT signature-library catalogue.
//!
//! Task t265/t270 ships a curated set of `.sig` files for the C libraries and
//! language runtimes that show up most often in stripped binaries.  The files
//! live under `crates/unlace-flirt/signatures/` and intentionally use the same
//! TOML pattern format accepted by [`crate::load_patterns_from_toml`]; keeping
//! them as standalone `.sig` assets makes the library auditable and lets
//! downstream packagers install or replace individual libraries without touching
//! Rust code.

use crate::{FlirtDb, FlirtError, load_patterns_from_toml_str};

/// Metadata plus embedded contents for one shipped `.sig` library.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ShippedSignatureLibrary {
    /// Stable identifier used by CLIs/config files.
    pub id: &'static str,
    /// Human-readable library/runtime name.
    pub name: &'static str,
    /// Version covered by this signature pack.
    pub version: &'static str,
    /// Target OS/ABI family.
    pub abi: &'static str,
    /// Target architecture family.
    pub arch: &'static str,
    /// Repository-relative path to the shipped `.sig` file.
    pub path: &'static str,
    /// Embedded `.sig` contents.
    pub contents: &'static str,
}

const GLIBC_234: &str = include_str!("../signatures/glibc-2.34-x86_64.sig");
const GLIBC_239: &str = include_str!("../signatures/glibc-2.39-x86_64.sig");
const MUSL_12X: &str = include_str!("../signatures/musl-1.2.x-x86_64.sig");
const MSVCRT_14X: &str = include_str!("../signatures/msvcrt-14.x-x64.sig");
const MINGW_W64: &str = include_str!("../signatures/mingw-w64-x86_64.sig");
const DIETLIBC: &str = include_str!("../signatures/dietlibc-x86_64.sig");
const ULIBC: &str = include_str!("../signatures/ulibc-ng-x86_64.sig");
const GOLANG_RUNTIME: &str = include_str!("../signatures/golang-runtime-amd64.sig");
const RUST_LIBCORE: &str = include_str!("../signatures/rust-libcore-x86_64.sig");

/// All signature packs shipped with this crate.
pub const SHIPPED_SIGNATURE_LIBRARIES: &[ShippedSignatureLibrary] = &[
    ShippedSignatureLibrary {
        id: "glibc-2.34-x86_64",
        name: "glibc",
        version: "2.34",
        abi: "linux-gnu",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/glibc-2.34-x86_64.sig",
        contents: GLIBC_234,
    },
    ShippedSignatureLibrary {
        id: "glibc-2.39-x86_64",
        name: "glibc",
        version: "2.39",
        abi: "linux-gnu",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/glibc-2.39-x86_64.sig",
        contents: GLIBC_239,
    },
    ShippedSignatureLibrary {
        id: "musl-1.2.x-x86_64",
        name: "musl",
        version: "1.2.x",
        abi: "linux-musl",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/musl-1.2.x-x86_64.sig",
        contents: MUSL_12X,
    },
    ShippedSignatureLibrary {
        id: "msvcrt-14.x-x64",
        name: "MSVCRT/UCRT",
        version: "14.x",
        abi: "windows-msvc",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/msvcrt-14.x-x64.sig",
        contents: MSVCRT_14X,
    },
    ShippedSignatureLibrary {
        id: "mingw-w64-x86_64",
        name: "mingw-w64 CRT",
        version: "runtime 10+",
        abi: "windows-gnu",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/mingw-w64-x86_64.sig",
        contents: MINGW_W64,
    },
    ShippedSignatureLibrary {
        id: "dietlibc-x86_64",
        name: "dietlibc",
        version: "0.34+",
        abi: "linux",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/dietlibc-x86_64.sig",
        contents: DIETLIBC,
    },
    ShippedSignatureLibrary {
        id: "ulibc-ng-x86_64",
        name: "uClibc-ng/ulibc",
        version: "1.0.x",
        abi: "linux-uclibc",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/ulibc-ng-x86_64.sig",
        contents: ULIBC,
    },
    ShippedSignatureLibrary {
        id: "golang-runtime-amd64",
        name: "Go runtime",
        version: "1.20+",
        abi: "multi",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/golang-runtime-amd64.sig",
        contents: GOLANG_RUNTIME,
    },
    ShippedSignatureLibrary {
        id: "rust-libcore-x86_64",
        name: "Rust libcore",
        version: "1.70+",
        abi: "multi",
        arch: "x86_64",
        path: "crates/unlace-flirt/signatures/rust-libcore-x86_64.sig",
        contents: RUST_LIBCORE,
    },
];

/// Iterate over the shipped `.sig` library metadata.
pub fn shipped_signature_libraries() -> &'static [ShippedSignatureLibrary] {
    SHIPPED_SIGNATURE_LIBRARIES
}

/// Look up a shipped signature pack by stable id.
pub fn shipped_signature_library(id: &str) -> Option<&'static ShippedSignatureLibrary> {
    SHIPPED_SIGNATURE_LIBRARIES.iter().find(|lib| lib.id == id)
}

/// Parse a single shipped `.sig` library into a [`FlirtDb`].
pub fn load_shipped_signature_library(id: &str) -> Result<Option<FlirtDb>, FlirtError> {
    shipped_signature_library(id)
        .map(|lib| load_patterns_from_toml_str(lib.contents))
        .transpose()
}

/// Parse and merge every shipped `.sig` library into one database.
pub fn load_all_shipped_signature_libraries() -> Result<FlirtDb, FlirtError> {
    let mut db = FlirtDb::new();
    for lib in SHIPPED_SIGNATURE_LIBRARIES {
        db.extend(load_patterns_from_toml_str(lib.contents)?);
    }
    Ok(db)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn catalogue_covers_t265_required_runtimes() {
        let ids: Vec<&str> = shipped_signature_libraries()
            .iter()
            .map(|lib| lib.id)
            .collect();
        for required in [
            "glibc-2.34-x86_64",
            "glibc-2.39-x86_64",
            "musl-1.2.x-x86_64",
            "msvcrt-14.x-x64",
            "mingw-w64-x86_64",
            "dietlibc-x86_64",
            "ulibc-ng-x86_64",
            "golang-runtime-amd64",
            "rust-libcore-x86_64",
        ] {
            assert!(
                ids.contains(&required),
                "missing shipped signature pack {required}"
            );
        }
    }

    #[test]
    fn every_shipped_sig_parses_and_has_patterns() {
        for lib in shipped_signature_libraries() {
            assert!(
                lib.path.ends_with(".sig"),
                "{} is not a .sig asset",
                lib.path
            );
            let db = load_shipped_signature_library(lib.id)
                .expect("parse shipped sig")
                .expect("library exists");
            assert!(
                !db.patterns.is_empty(),
                "{} parsed but had no signatures",
                lib.id
            );
        }
    }

    #[test]
    fn merged_database_contains_expected_symbols() {
        let db = load_all_shipped_signature_libraries().unwrap();
        assert!(
            db.patterns.len() >= 90,
            "expected broad shipped coverage, got {}",
            db.patterns.len()
        );
        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        for required in [
            "glibc-2.34::memcpy",
            "glibc-2.39::malloc",
            "musl-1.2.x::strlen",
            "msvcrt-14.x::memcpy",
            "mingw-w64::__main",
            "dietlibc::write",
            "ulibc-ng::__uClibc_main",
            "go-runtime::runtime.morestack_noctxt",
            "rust-libcore::core::panicking::panic_fmt",
        ] {
            assert!(names.contains(&required), "missing symbol {required}");
        }
    }
}
