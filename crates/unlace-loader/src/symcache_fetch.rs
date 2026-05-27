//! Symbol-server HTTP fetcher.
//!
//! Wraps the URL builders in [`crate::symcache`] with a streaming
//! download that writes to a temp file and atomically renames into the
//! cache layout. Gated behind the `http-symfetch` cargo feature so
//! workspace builds stay offline by default.
//!
//! ```text
//! ~/.cache/unlace/symcache/
//!   msft/<pdb-name>/<guid+age>/<pdb-name>
//!   debuginfod/<buildid>/debuginfo
//! ```
//!
//! All routines are offline-testable: [`fetch_to_path`] takes a
//! pre-resolved URL plus the destination path so tests can stand up an
//! `httpmock`-style server and pass the resulting URL in.

#[cfg(feature = "http-symfetch")]
use std::io::Write;
use std::path::{Path, PathBuf};

use thiserror::Error;

use crate::symcache;

#[derive(Debug, Error)]
pub enum FetchError {
    #[error("HTTP {status}: {url}")]
    Http { status: u16, url: String },
    #[error("network: {0}")]
    Network(String),
    #[error("I/O: {0}")]
    Io(#[from] std::io::Error),
    #[cfg(not(feature = "http-symfetch"))]
    #[error("symfetch was built without the `http-symfetch` feature")]
    Disabled,
}

/// Result of a successful fetch.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FetchReport {
    pub url: String,
    pub bytes_written: u64,
    pub destination: PathBuf,
}

/// Build the MSFT URL + cache path for a PDB and download to it.
///
/// On success returns the local file path. On 404 returns
/// [`FetchError::Http`].
pub fn fetch_msft_pdb(
    pdb_name: &str,
    guid: &[u8; 16],
    age: u32,
    cache_dir: &Path,
) -> Result<FetchReport, FetchError> {
    let url = symcache::msft_symbol_server_url(pdb_name, guid, age);
    let path = symcache::msft_cache_path(cache_dir, pdb_name, guid, age);
    fetch_to_path(&url, &path)
}

/// Build the debuginfod URL + cache path and download to it.
pub fn fetch_debuginfod(
    server: &str,
    buildid: &[u8],
    cache_dir: &Path,
) -> Result<FetchReport, FetchError> {
    let url = symcache::debuginfod_url(server, buildid);
    let path = symcache::debuginfod_cache_path(cache_dir, buildid);
    fetch_to_path(&url, &path)
}

/// Download `url` to `destination`, writing through a `.part` file and
/// atomic-renaming on success. Returns the byte count + final path.
#[cfg(feature = "http-symfetch")]
pub fn fetch_to_path(url: &str, destination: &Path) -> Result<FetchReport, FetchError> {
    if let Some(parent) = destination.parent() {
        std::fs::create_dir_all(parent)?;
    }
    let resp = ureq::get(url).call().map_err(|e| match e {
        ureq::Error::Status(code, _) => FetchError::Http {
            status: code,
            url: url.to_string(),
        },
        ureq::Error::Transport(t) => FetchError::Network(t.to_string()),
    })?;
    let mut reader = resp.into_reader();
    let mut bytes = Vec::new();
    std::io::copy(&mut reader, &mut bytes)?;
    let tmp = destination.with_extension("part");
    let mut f = std::fs::File::create(&tmp)?;
    f.write_all(&bytes)?;
    f.sync_all()?;
    std::fs::rename(&tmp, destination)?;
    Ok(FetchReport {
        url: url.to_string(),
        bytes_written: bytes.len() as u64,
        destination: destination.to_path_buf(),
    })
}

/// Stub fetch path used when the `http-symfetch` feature is off.
#[cfg(not(feature = "http-symfetch"))]
pub fn fetch_to_path(_url: &str, _destination: &Path) -> Result<FetchReport, FetchError> {
    Err(FetchError::Disabled)
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::path::PathBuf;

    fn tmp_cache(name: &str) -> PathBuf {
        let mut p = std::env::temp_dir();
        p.push(format!(
            "unlace_symcache_test_{}_{}",
            name,
            std::process::id()
        ));
        let _ = std::fs::remove_dir_all(&p);
        p
    }

    #[test]
    fn test_msft_path_layout() {
        let guid = [0x42u8; 16];
        let p = symcache::msft_cache_path(Path::new("/x"), "foo.pdb", &guid, 3);
        let s = p.to_string_lossy();
        assert!(s.contains("msft"));
        assert!(s.contains("foo.pdb"));
        assert!(s.ends_with("foo.pdb"));
    }

    #[test]
    fn test_debuginfod_path_layout() {
        let buildid = [0xDE, 0xAD, 0xBE, 0xEF];
        let p = symcache::debuginfod_cache_path(Path::new("/x"), &buildid);
        let s = p.to_string_lossy();
        assert!(s.ends_with("debuginfo"));
        assert!(s.contains("deadbeef"));
    }

    #[test]
    fn test_fetch_disabled_path_returns_disabled_error() {
        // When the feature is off, fetch_to_path must error with
        // FetchError::Disabled; when on it should reach the network
        // layer (we use a guaranteed-404 URL so we don't depend on
        // any real server but still exercise the call path).
        let cache = tmp_cache("disabled");
        let result = fetch_to_path("http://127.0.0.1:1/never", &cache.join("x"));
        match result {
            #[cfg(feature = "http-symfetch")]
            Err(FetchError::Http { .. }) | Err(FetchError::Network(_)) => {}
            #[cfg(feature = "http-symfetch")]
            Err(FetchError::Io(_)) => {}
            #[cfg(not(feature = "http-symfetch"))]
            Err(FetchError::Disabled) => {}
            other => panic!("unexpected result {:?}", other),
        }
        let _ = std::fs::remove_dir_all(&cache);
    }

    #[test]
    fn test_fetch_msft_uses_correct_url_format() {
        // Don't actually fetch — just verify the URL it would request.
        let guid = [
            0xC0, 0x52, 0x90, 0x12, 0x34, 0x56, 0x78, 0x9A, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
            0x07, 0x08,
        ];
        let url = symcache::msft_symbol_server_url("kernel32.pdb", &guid, 1);
        assert!(url.starts_with("https://msdl.microsoft.com/"));
        assert!(url.contains("kernel32.pdb"));
        assert!(url.contains("129052C0"));
    }

    #[test]
    fn test_fetch_debuginfod_uses_correct_url_format() {
        let buildid = [0xAB, 0xCD, 0xEF, 0x01];
        let url = symcache::debuginfod_url("https://debuginfod.elfutils.org/", &buildid);
        assert!(url.starts_with("https://debuginfod.elfutils.org/"));
        assert!(url.contains("abcdef01"));
        assert!(url.ends_with("/debuginfo"));
    }

    #[test]
    fn test_fetch_report_struct() {
        // Compile-time check that the report fields are reachable.
        let r = FetchReport {
            url: "u".into(),
            bytes_written: 1,
            destination: PathBuf::from("/x"),
        };
        assert_eq!(r.bytes_written, 1);
        assert_eq!(r.url, "u");
    }
}
