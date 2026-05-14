//! Solana BPF (SBPF) and EVM bytecode loader stubs.
//!
//! Provides header detection and section extraction for Solana sBPF programs
//! (ELF-based with custom sections) and Ethereum Virtual Machine (EVM)
//! bytecode containers (raw deploy code + runtime code split).

use crate::error::LoadError;
use crate::image::{ArchId, BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind};

/// Solana BPF ELF magic detection.
pub const SBPF_SECTION: &str = ".text.entrypoint";

/// EVM bytecode starts with PUSH-based deploy prefix.
pub const EVM_PUSH_OPCODES: &[u8] = &[0x60, 0x61, 0x62, 0x63, 0x64, 0x65];

/// Result of SBPF detection.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SbpfInfo {
    /// Entry point offset within the ELF.
    pub entrypoint: u64,
    /// Whether the program uses the v2 SBPF instruction set.
    pub is_v2: bool,
    /// Program ID (if found in .solana.program-id section).
    pub program_id: Option<[u8; 32]>,
}

/// EVM bytecode container info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EvmBytecodeInfo {
    /// Deploy code (constructor) bytes.
    pub deploy_code: Vec<u8>,
    /// Runtime code bytes (actual contract logic).
    pub runtime_code: Vec<u8>,
    /// Total size in bytes.
    pub total_size: usize,
}

/// Detect whether bytes look like Solana BPF (must be valid ELF with sBPF sections).
pub fn detect_sbpf(data: &[u8]) -> bool {
    // Solana BPF is ELF-based with specific section names.
    data.len() > 16 && data[0..4] == [0x7f, b'E', b'L', b'F'] && {
        // Quick heuristic: check for sBPF-specific section names.
        data.windows(SBPF_SECTION.len())
            .any(|w| w == SBPF_SECTION.as_bytes())
    }
}

/// Parse EVM bytecode, splitting into deploy and runtime portions.
///
/// EVM deploy code typically starts with PUSH instructions that encode the
/// runtime code offset and length, followed by CODECOPY + RETURN. The
/// runtime code is the remainder after the deploy prefix.
pub fn parse_evm_bytecode(data: &[u8]) -> Option<EvmBytecodeInfo> {
    if data.is_empty() || !EVM_PUSH_OPCODES.contains(&data[0]) {
        return None;
    }

    // Simple heuristic: find the CODECOPY (0x39) opcode followed by RETURN (0xf3).
    // The runtime code starts after that sequence.
    let split_point = data
        .windows(2)
        .position(|w| w[0] == 0x39 && w[1] == 0xf3)
        .map(|pos| pos + 2)
        .unwrap_or(0);

    if split_point == 0 || split_point >= data.len() {
        // Treat entire thing as runtime code.
        return Some(EvmBytecodeInfo {
            deploy_code: Vec::new(),
            runtime_code: data.to_vec(),
            total_size: data.len(),
        });
    }

    Some(EvmBytecodeInfo {
        deploy_code: data[..split_point].to_vec(),
        runtime_code: data[split_point..].to_vec(),
        total_size: data.len(),
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_evm_bytecode_detection() {
        // Simulated EVM deploy: PUSH1 0x20 ... CODECOPY RETURN ... runtime
        let mut data = vec![0x60, 0x20, 0x60, 0x00, 0x39, 0xf3];
        data.extend_from_slice(&[0x60, 0x01, 0x60, 0x02, 0x01]); // runtime: PUSH1 1 PUSH1 2 ADD
        let info = parse_evm_bytecode(&data).unwrap();
        assert_eq!(info.deploy_code.len(), 6);
        assert_eq!(info.runtime_code.len(), 5);
    }

    #[test]
    fn test_non_evm_rejected() {
        let data = vec![0x00, 0x01, 0x02]; // Not a PUSH opcode start.
        assert!(parse_evm_bytecode(&data).is_none());
    }

    #[test]
    fn test_sbpf_detection() {
        let mut data = vec![0x7f, b'E', b'L', b'F'];
        data.extend_from_slice(&[0; 100]);
        // Not SBPF without the section name.
        assert!(!detect_sbpf(&data));
        // With the section name embedded.
        data.extend_from_slice(SBPF_SECTION.as_bytes());
        assert!(detect_sbpf(&data));
    }
}
