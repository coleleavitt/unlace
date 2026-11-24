//! API-hash resolver (ported from the archived research decompiler's `api_hash_resolve`).
//!
//! Malware resolves WinAPI imports at runtime by hashing each export name
//! (ROR13, DJB2, CRC32) and comparing against a hard-coded constant, hiding the
//! imports from static analysis. [`hash_name`] computes those hashes and
//! [`resolve_hash`] brute-forces a recovered constant back to a name from a
//! candidate list. Both are pure functions with no effect on decompiled output;
//! the hash-loop recognizer that feeds them is a later step.

/// A name-hashing algorithm used by runtime import resolvers.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum HashAlgo {
    /// Sum with rotate-right-13 accumulation (classic shellcode hash).
    Ror13,
    /// `hash = hash * 33 + c`, seed 5381.
    Djb2,
    /// CRC-32 (reflected, polynomial 0xEDB88320).
    Crc32,
}

/// A small roster of WinAPI names commonly resolved by hash. Sufficient to
/// recover the typical shellcode import set; extend as needed.
pub const API_NAMES: &[&str] = &[
    "LoadLibraryA",
    "LoadLibraryW",
    "LoadLibraryExA",
    "GetProcAddress",
    "GetModuleHandleA",
    "GetModuleHandleW",
    "VirtualAlloc",
    "VirtualAllocEx",
    "VirtualProtect",
    "VirtualFree",
    "CreateProcessA",
    "CreateProcessW",
    "CreateThread",
    "CreateRemoteThread",
    "WriteProcessMemory",
    "ReadProcessMemory",
    "OpenProcess",
    "WinExec",
    "ExitProcess",
    "ExitThread",
    "GetCurrentProcess",
    "TerminateProcess",
    "CloseHandle",
    "WaitForSingleObject",
    "CreateFileA",
    "WriteFile",
    "ReadFile",
    "RtlMoveMemory",
    "GetTempPathA",
    "ShellExecuteA",
    "URLDownloadToFileA",
    "InternetOpenA",
    "InternetConnectA",
    "HttpOpenRequestA",
    "send",
    "recv",
    "connect",
    "socket",
    "WSAStartup",
];

/// Compute the `algo` hash of `name`.
pub fn hash_name(algo: HashAlgo, name: &str) -> u32 {
    match algo {
        HashAlgo::Ror13 => {
            let mut hash: u32 = 0;
            for &b in name.as_bytes() {
                hash = hash.rotate_right(13).wrapping_add(b as u32);
            }
            hash
        }
        HashAlgo::Djb2 => {
            let mut hash: u32 = 5381;
            for &b in name.as_bytes() {
                hash = hash.wrapping_mul(33).wrapping_add(b as u32);
            }
            hash
        }
        HashAlgo::Crc32 => {
            let mut crc: u32 = 0xFFFF_FFFF;
            for &b in name.as_bytes() {
                crc ^= b as u32;
                for _ in 0..8 {
                    let mask = (crc & 1).wrapping_neg();
                    crc = (crc >> 1) ^ (0xEDB8_8320 & mask);
                }
            }
            !crc
        }
    }
}

/// Resolve a hash constant back to an API name by brute-forcing `names`.
/// Returns the first matching name in roster order, or `None`.
pub fn resolve_hash(algo: HashAlgo, target: u32, names: &[&str]) -> Option<String> {
    names
        .iter()
        .find(|n| hash_name(algo, n) == target)
        .map(|n| n.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn djb2_seed_and_round_trip() {
        assert_eq!(hash_name(HashAlgo::Djb2, ""), 5381);
        for &name in &["LoadLibraryA", "GetProcAddress", "VirtualAlloc"] {
            let h = hash_name(HashAlgo::Djb2, name);
            assert_eq!(
                resolve_hash(HashAlgo::Djb2, h, API_NAMES).as_deref(),
                Some(name)
            );
        }
    }

    #[test]
    fn ror13_and_crc32_round_trip() {
        for algo in [HashAlgo::Ror13, HashAlgo::Crc32] {
            let h = hash_name(algo, "WriteProcessMemory");
            assert_eq!(
                resolve_hash(algo, h, API_NAMES).as_deref(),
                Some("WriteProcessMemory")
            );
        }
        assert!(resolve_hash(HashAlgo::Ror13, 0xDEAD_BEEF, API_NAMES).is_none());
    }

    #[test]
    fn crc32_known_vector() {
        assert_eq!(hash_name(HashAlgo::Crc32, "123456789"), 0xCBF4_3926);
    }
}
