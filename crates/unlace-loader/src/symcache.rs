//! Symbol-server URL builders and cache layout.
//!
//! Implements the URL construction rules for the major public symbol
//! servers. The actual HTTP fetch is left to the caller (so this module
//! stays offline-testable and has no async runtime dependency).
//!
//! Supported servers:
//!
//! - Microsoft Symbol Server (PE): `https://msdl.microsoft.com/download/symbols/`
//! - debuginfod (ELF / Linux):    `https://debuginfod.elfutils.org/`
//! - dSYM (Mach-O, local-only):    Spotlight-based, no URL
//!
//! Cache layout:
//! ```text
//! ~/.cache/unlace/symcache/
//!   msft/<pdb-name>/<guid+age>/<pdb-name>
//!   debuginfod/<buildid>/debuginfo
//!   dsym/<uuid>/<bundle.dSYM>
//! ```
//!
//! References:
//! - research/ida-hexrays-docs/changelogs/ida-9_0.txt — IDA 9.0 PDB module
//! - research/decompiled-references/ida/plugins/pdb/all/ (1421 fns) — IDA's PDB loader
//! - research/ida-hexrays-docs/changelogs/ida-9_3.txt — debuginfod support

use std::path::PathBuf;

/// Build the Microsoft Symbol Server URL for a given PDB.
///
/// Inputs come from the `RSDS` debug directory in a PE binary:
/// - `pdb_name`: e.g. `kernel32.pdb`
/// - `guid`: the 16-byte GUID from the CodeView record (formatted as
///   `<8>-<4>-<4>-<4>-<12>` lowercase hex, no dashes for the URL)
/// - `age`: the 32-bit age counter
pub fn msft_symbol_server_url(pdb_name: &str, guid: &[u8; 16], age: u32) -> String {
    // MSFT format: GUID is uppercase hex *with* a specific shuffle, then
    // append the age. Reference: docs.microsoft.com/symbol-server.
    let guid_hex = msft_guid_hex(guid);
    let age_hex = format!("{:x}", age);
    format!("https://msdl.microsoft.com/download/symbols/{pdb_name}/{guid_hex}{age_hex}/{pdb_name}")
}

/// Format a 16-byte GUID into MSFT's canonical uppercase no-dash form:
/// - bytes 0..4 little-endian → 8 hex chars
/// - bytes 4..6 little-endian → 4 hex chars
/// - bytes 6..8 little-endian → 4 hex chars
/// - bytes 8..10 big-endian   → 4 hex chars
/// - bytes 10..16 big-endian  → 12 hex chars
pub fn msft_guid_hex(guid: &[u8; 16]) -> String {
    let mut s = String::with_capacity(32);
    // Field 1: 4 bytes little-endian
    for i in (0..4).rev() {
        s.push_str(&format!("{:02X}", guid[i]));
    }
    // Field 2: 2 bytes little-endian
    for i in (4..6).rev() {
        s.push_str(&format!("{:02X}", guid[i]));
    }
    // Field 3: 2 bytes little-endian
    for i in (6..8).rev() {
        s.push_str(&format!("{:02X}", guid[i]));
    }
    // Fields 4 + 5: big-endian
    for byte in &guid[8..16] {
        s.push_str(&format!("{:02X}", byte));
    }
    s
}

/// Build the debuginfod URL for a Linux build-id.
pub fn debuginfod_url(server: &str, buildid: &[u8]) -> String {
    let hex: String = buildid.iter().map(|b| format!("{:02x}", b)).collect();
    let base = server.trim_end_matches('/');
    format!("{base}/buildid/{hex}/debuginfo")
}

/// Build the debuginfod URL for an executable (rather than the debug file).
pub fn debuginfod_executable_url(server: &str, buildid: &[u8]) -> String {
    let hex: String = buildid.iter().map(|b| format!("{:02x}", b)).collect();
    let base = server.trim_end_matches('/');
    format!("{base}/buildid/{hex}/executable")
}

/// Default symbol cache directory: `$HOME/.cache/unlace/symcache/`.
pub fn default_cache_dir() -> PathBuf {
    let home = std::env::var_os("HOME")
        .or_else(|| std::env::var_os("USERPROFILE"))
        .map(PathBuf::from)
        .unwrap_or_else(|| PathBuf::from("."));
    home.join(".cache").join("unlace").join("symcache")
}

/// Cache key for an MSFT PDB lookup.
pub fn msft_cache_path(
    cache_dir: &std::path::Path,
    pdb_name: &str,
    guid: &[u8; 16],
    age: u32,
) -> PathBuf {
    let guid_hex = msft_guid_hex(guid);
    let age_hex = format!("{:x}", age);
    cache_dir
        .join("msft")
        .join(pdb_name)
        .join(format!("{guid_hex}{age_hex}"))
        .join(pdb_name)
}

/// Cache key for a debuginfod lookup.
pub fn debuginfod_cache_path(cache_dir: &std::path::Path, buildid: &[u8]) -> PathBuf {
    let hex: String = buildid.iter().map(|b| format!("{:02x}", b)).collect();
    cache_dir.join("debuginfod").join(&hex).join("debuginfo")
}

/// Configuration values reachable via `unlace config set symcache.*`.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SymcacheConfig {
    pub path: PathBuf,
    pub timeout_secs: u64,
    pub servers: Vec<String>,
}

impl Default for SymcacheConfig {
    fn default() -> Self {
        Self {
            path: default_cache_dir(),
            timeout_secs: 30,
            servers: vec!["msft".into(), "debuginfod".into()],
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_msft_guid_hex_known_vector() {
        // Real-world example: kernel32.pdb GUID
        let guid = [
            0xC0, 0x52, 0x90, 0x12, // field1 (little-endian → "129052C0")
            0x34, 0x56, // field2 (little-endian → "5634")
            0x78, 0x9A, // field3 (little-endian → "9A78")
            0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, // fields 4+5 big-endian
        ];
        let hex = msft_guid_hex(&guid);
        assert_eq!(hex, "129052C056349A780102030405060708");
    }

    #[test]
    fn test_msft_url_format() {
        let guid = [
            0xC0, 0x52, 0x90, 0x12, 0x34, 0x56, 0x78, 0x9A, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
            0x07, 0x08,
        ];
        let url = msft_symbol_server_url("kernel32.pdb", &guid, 1);
        assert_eq!(
            url,
            "https://msdl.microsoft.com/download/symbols/kernel32.pdb/129052C056349A7801020304050607081/kernel32.pdb"
        );
    }

    #[test]
    fn test_debuginfod_url_format() {
        let buildid = [
            0xa5, 0x6c, 0x36, 0xb8, 0xd2, 0x66, 0xea, 0xd4, 0x6f, 0xb7, 0x71, 0xab, 0x84, 0xcd,
            0x73, 0xa7, 0xfc, 0xc1, 0xb6, 0x9d,
        ];
        let url = debuginfod_url("https://debuginfod.elfutils.org/", &buildid);
        assert_eq!(
            url,
            "https://debuginfod.elfutils.org/buildid/a56c36b8d266ead46fb771ab84cd73a7fcc1b69d/debuginfo"
        );
    }

    #[test]
    fn test_debuginfod_url_trims_trailing_slash() {
        let buildid = [0xAB, 0xCD];
        let with_slash = debuginfod_url("https://example.com/", &buildid);
        let without = debuginfod_url("https://example.com", &buildid);
        assert_eq!(with_slash, without);
    }

    #[test]
    fn test_default_cache_dir_under_home() {
        let path = default_cache_dir();
        let s = path.to_string_lossy();
        assert!(s.contains("unlace"));
        assert!(s.contains("symcache"));
    }

    #[test]
    fn test_msft_cache_path() {
        let guid = [0x42u8; 16];
        let p = msft_cache_path(std::path::Path::new("/cache"), "ntdll.pdb", &guid, 2);
        let s = p.to_string_lossy();
        assert!(s.contains("ntdll.pdb"));
        assert!(s.contains("/msft/"));
        assert!(s.ends_with("ntdll.pdb"));
    }

    #[test]
    fn test_debuginfod_cache_path() {
        let buildid = [0xCA, 0xFE, 0xBA, 0xBE];
        let p = debuginfod_cache_path(std::path::Path::new("/cache"), &buildid);
        let s = p.to_string_lossy();
        assert!(s.contains("cafebabe"));
        assert!(s.ends_with("debuginfo"));
    }

    #[test]
    fn test_symcache_config_default() {
        let cfg = SymcacheConfig::default();
        assert_eq!(cfg.timeout_secs, 30);
        assert!(cfg.servers.contains(&"msft".to_string()));
        assert!(cfg.servers.contains(&"debuginfod".to_string()));
    }
}
