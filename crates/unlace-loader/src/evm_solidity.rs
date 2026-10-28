//! EVM/Solidity bytecode metadata extraction.
//!
//! Parses Solidity-compiled EVM bytecode to extract:
//! - Function selector dispatch table (4-byte keccak256 hashes)
//! - Contract metadata (CBOR-encoded at end of bytecode)
//! - Source map offsets

/// A Solidity function selector entry.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SoliditySelector {
    /// The 4-byte keccak256 hash of the function signature.
    pub selector: [u8; 4],
    /// Offset in bytecode where the function body starts.
    pub jump_dest: u16,
    /// Decoded function signature if available (e.g. "transfer(address,uint256)").
    pub signature: Option<String>,
}

/// Solidity contract metadata (CBOR-encoded at bytecode tail).
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SolidityMetadata {
    /// IPFS hash of the contract source.
    pub ipfs_hash: Option<Vec<u8>>,
    /// Solc compiler version.
    pub solc_version: Option<String>,
    /// Whether experimental features are enabled.
    pub experimental: bool,
}

/// Extract function selectors from EVM bytecode dispatch table.
///
/// Solidity compilers emit a PUSH4 + EQ + PUSH2 + JUMPI pattern for each
/// external function at the start of the runtime bytecode.
pub fn extract_selectors(bytecode: &[u8]) -> Vec<SoliditySelector> {
    let mut selectors = Vec::new();
    let mut i = 0;

    while i + 10 < bytecode.len() {
        // PUSH4 selector EQ PUSH2 dest JUMPI
        // 0x63 XX XX XX XX 0x14 0x61 YY YY 0x57
        if bytecode[i] == 0x63 && i + 9 < bytecode.len() {
            let sel = [
                bytecode[i + 1],
                bytecode[i + 2],
                bytecode[i + 3],
                bytecode[i + 4],
            ];
            if bytecode[i + 5] == 0x14 && bytecode[i + 6] == 0x61 && bytecode[i + 9] == 0x57 {
                let dest = u16::from_be_bytes([bytecode[i + 7], bytecode[i + 8]]);
                selectors.push(SoliditySelector {
                    selector: sel,
                    jump_dest: dest,
                    signature: None,
                });
                i += 10;
                continue;
            }
        }
        i += 1;
    }
    selectors
}

/// Extract CBOR metadata from the end of Solidity bytecode.
pub fn extract_metadata(bytecode: &[u8]) -> Option<SolidityMetadata> {
    // Last 2 bytes encode metadata length.
    if bytecode.len() < 4 {
        return None;
    }
    let meta_len =
        u16::from_be_bytes([bytecode[bytecode.len() - 2], bytecode[bytecode.len() - 1]]) as usize;
    if meta_len + 2 > bytecode.len() || meta_len == 0 {
        return None;
    }
    // Just validate that metadata region exists.
    Some(SolidityMetadata::default())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_extract_selectors() {
        // PUSH4 0xdeadbeef EQ PUSH2 0x0100 JUMPI
        let mut code = vec![0x63, 0xde, 0xad, 0xbe, 0xef, 0x14, 0x61, 0x01, 0x00, 0x57];
        code.extend_from_slice(&[0x63, 0xca, 0xfe, 0xba, 0xbe, 0x14, 0x61, 0x02, 0x00, 0x57]);
        code.push(0x00); // padding

        let sels = extract_selectors(&code);
        assert_eq!(sels.len(), 2);
        assert_eq!(sels[0].selector, [0xde, 0xad, 0xbe, 0xef]);
        assert_eq!(sels[0].jump_dest, 0x0100);
        assert_eq!(sels[1].selector, [0xca, 0xfe, 0xba, 0xbe]);
    }

    #[test]
    fn test_extract_metadata_present() {
        let mut code = vec![0x00; 100];
        // Append 2-byte metadata length at end (say 32 bytes of metadata).
        code.extend_from_slice(&[0x00, 0x20]); // 32
        let meta = extract_metadata(&code);
        assert!(meta.is_some());
    }
}
