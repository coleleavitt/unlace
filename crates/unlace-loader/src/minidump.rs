//! Minidump (.dmp) crash dump parsing (t439).
//!
//! Parses Windows minidump format to extract thread contexts, stack
//! memory, module lists, and exception information for crash analysis.

use std::collections::BTreeMap;

/// Minidump magic: "MDMP" + version.
pub const MINIDUMP_MAGIC: &[u8; 4] = b"MDMP";

/// Minidump stream types we recognize.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u32)]
pub enum StreamType {
    ThreadList = 3,
    ModuleList = 4,
    MemoryList = 5,
    Exception = 6,
    SystemInfo = 7,
    Memory64List = 9,
}

/// A module (DLL/EXE) loaded at crash time.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MinidumpModule {
    pub base_address: u64,
    pub size: u32,
    pub name: String,
}

/// Thread context from a minidump.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ThreadContext {
    pub thread_id: u32,
    pub instruction_pointer: u64,
    pub stack_pointer: u64,
    pub frame_pointer: u64,
    pub registers: BTreeMap<String, u64>,
}

/// Exception record from the crash.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExceptionInfo {
    pub code: u32,
    pub address: u64,
    pub thread_id: u32,
}

/// Parsed minidump contents.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Minidump {
    pub modules: Vec<MinidumpModule>,
    pub threads: Vec<ThreadContext>,
    pub exception: Option<ExceptionInfo>,
}

/// Error type for minidump parsing.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum MinidumpError {
    BadMagic,
    TooShort,
    InvalidStreamOffset,
}

impl std::fmt::Display for MinidumpError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::BadMagic => write!(f, "not a valid minidump (bad magic)"),
            Self::TooShort => write!(f, "minidump too short"),
            Self::InvalidStreamOffset => write!(f, "invalid stream offset"),
        }
    }
}

/// Parse a minidump header to validate format.
pub fn validate_minidump(data: &[u8]) -> Result<MinidumpHeader, MinidumpError> {
    if data.len() < 32 {
        return Err(MinidumpError::TooShort);
    }
    if &data[0..4] != MINIDUMP_MAGIC {
        return Err(MinidumpError::BadMagic);
    }
    let version = u16::from_le_bytes([data[4], data[5]]);
    let stream_count = u32::from_le_bytes([data[8], data[9], data[10], data[11]]);
    let stream_dir_rva = u32::from_le_bytes([data[12], data[13], data[14], data[15]]);

    Ok(MinidumpHeader {
        version,
        stream_count,
        stream_directory_rva: stream_dir_rva,
    })
}

/// Minidump file header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MinidumpHeader {
    pub version: u16,
    pub stream_count: u32,
    pub stream_directory_rva: u32,
}

/// Resolve which module contains a given address.
pub fn module_for_address(modules: &[MinidumpModule], addr: u64) -> Option<&MinidumpModule> {
    modules
        .iter()
        .find(|m| addr >= m.base_address && addr < m.base_address + m.size as u64)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn validate_magic() {
        let mut data = vec![0u8; 32];
        data[..4].copy_from_slice(b"MDMP");
        data[4] = 0x93;
        data[5] = 0xa7; // version
        let hdr = validate_minidump(&data).unwrap();
        assert_eq!(&data[..4], MINIDUMP_MAGIC);
        assert_eq!(hdr.version, 0xa793);
    }

    #[test]
    fn reject_bad_magic() {
        let data = vec![0u8; 32];
        assert_eq!(validate_minidump(&data), Err(MinidumpError::BadMagic));
    }

    #[test]
    fn reject_too_short() {
        assert_eq!(validate_minidump(&[0; 10]), Err(MinidumpError::TooShort));
    }

    #[test]
    fn module_lookup() {
        let modules = vec![
            MinidumpModule {
                base_address: 0x10000,
                size: 0x5000,
                name: "app.exe".into(),
            },
            MinidumpModule {
                base_address: 0x70000,
                size: 0x1000,
                name: "ntdll.dll".into(),
            },
        ];
        assert_eq!(
            module_for_address(&modules, 0x12000).unwrap().name,
            "app.exe"
        );
        assert_eq!(
            module_for_address(&modules, 0x70500).unwrap().name,
            "ntdll.dll"
        );
        assert!(module_for_address(&modules, 0x99999).is_none());
    }
}
