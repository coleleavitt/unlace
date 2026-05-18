//! Solidity-specific recovery layer for EVM bytecode.
//!
//! This module analyses raw EVM bytecode (as a `&[u8]` slice) and recovers
//! higher-level Solidity artefacts:
//!
//! - **Function selectors**: The dispatcher at offset 0 compares `msg.sig`
//!   (first 4 bytes of calldata) against known selectors via `PUSH4 <sel>; EQ`.
//! - **Storage layout**: `SLOAD`/`SSTORE` with constant or computed slot keys
//!   are mapped to storage variable accesses.
//! - **Event logs**: `LOG0`-`LOG4` with topic hashes are mapped to Solidity
//!   events.
//! - **Pattern detection**: `require()` (REVERT with ABI-encoded error string),
//!   SafeMath overflow checks, and proxy delegation (DELEGATECALL).

use crate::EvmOpcode;

// ─── Keccak-256 (self-contained, no external crate) ──────────────────────────

/// Keccak-256 round constants.
const RC: [u64; 24] = [
    0x0000000000000001,
    0x0000000000008082,
    0x800000000000808a,
    0x8000000080008000,
    0x000000000000808b,
    0x0000000080000001,
    0x8000000080008081,
    0x8000000000008009,
    0x000000000000008a,
    0x0000000000000088,
    0x0000000080008009,
    0x000000008000000a,
    0x000000008000808b,
    0x800000000000008b,
    0x8000000000008089,
    0x8000000000008003,
    0x8000000000008002,
    0x8000000000000080,
    0x000000000000800a,
    0x800000008000000a,
    0x8000000080008081,
    0x8000000000008080,
    0x0000000080000001,
    0x8000000080008008,
];

/// Rotation offsets for the rho step.
const ROTATIONS: [[u32; 5]; 5] = [
    [0, 1, 62, 28, 27],
    [36, 44, 6, 55, 20],
    [3, 10, 43, 25, 39],
    [41, 45, 15, 21, 8],
    [18, 2, 61, 56, 14],
];

fn keccak_f1600(state: &mut [u64; 25]) {
    for &rc in &RC {
        // θ step
        let mut c = [0u64; 5];
        for x in 0..5 {
            c[x] = state[x] ^ state[x + 5] ^ state[x + 10] ^ state[x + 15] ^ state[x + 20];
        }
        let mut d = [0u64; 5];
        for x in 0..5 {
            d[x] = c[(x + 4) % 5] ^ c[(x + 1) % 5].rotate_left(1);
        }
        for x in 0..5 {
            for y in 0..5 {
                state[x + 5 * y] ^= d[x];
            }
        }
        // ρ and π steps
        let mut b = [0u64; 25];
        for x in 0..5 {
            for y in 0..5 {
                b[y + 5 * ((2 * x + 3 * y) % 5)] = state[x + 5 * y].rotate_left(ROTATIONS[y][x]);
            }
        }
        // χ step
        for x in 0..5 {
            for y in 0..5 {
                state[x + 5 * y] =
                    b[x + 5 * y] ^ (!b[(x + 1) % 5 + 5 * y] & b[(x + 2) % 5 + 5 * y]);
            }
        }
        // ι step
        state[0] ^= rc;
    }
}

/// Compute the Keccak-256 hash of `data`, returning 32 bytes.
pub fn keccak256(data: &[u8]) -> [u8; 32] {
    let rate = 136; // (1600 - 512) / 8
    let mut state = [0u64; 25];

    // Absorb
    let mut offset = 0;
    while offset + rate <= data.len() {
        for i in 0..(rate / 8) {
            let word =
                u64::from_le_bytes(data[offset + i * 8..offset + i * 8 + 8].try_into().unwrap());
            state[i] ^= word;
        }
        keccak_f1600(&mut state);
        offset += rate;
    }

    // Pad last block (Keccak padding: 0x01 ... 0x80)
    let remaining = data.len() - offset;
    let mut last_block = vec![0u8; rate];
    last_block[..remaining].copy_from_slice(&data[offset..]);
    last_block[remaining] = 0x01;
    last_block[rate - 1] |= 0x80;

    for i in 0..(rate / 8) {
        let word = u64::from_le_bytes(last_block[i * 8..i * 8 + 8].try_into().unwrap());
        state[i] ^= word;
    }
    keccak_f1600(&mut state);

    // Squeeze (256 bits = 32 bytes, fits in one squeeze)
    let mut out = [0u8; 32];
    for i in 0..4 {
        out[i * 8..(i + 1) * 8].copy_from_slice(&state[i].to_le_bytes());
    }
    out
}

/// Compute the 4-byte function selector for a Solidity function signature.
///
/// Example: `selector("transfer(address,uint256)")` → `[0xa9, 0x05, 0x9c, 0xbb]`
pub fn selector(signature: &str) -> [u8; 4] {
    let hash = keccak256(signature.as_bytes());
    [hash[0], hash[1], hash[2], hash[3]]
}

/// Compute the 32-byte event topic hash.
pub fn event_topic(signature: &str) -> [u8; 32] {
    keccak256(signature.as_bytes())
}

// ─── Recovered types ─────────────────────────────────────────────────────────

/// A recovered Solidity function entry point.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SolidityFunction {
    /// 4-byte selector (first 4 bytes of keccak256 of the canonical signature).
    pub selector: [u8; 4],
    /// Recovered or user-supplied function signature, if known.
    pub signature: Option<String>,
    /// Bytecode offset of the function body (JUMPDEST target).
    pub entry_offset: u64,
}

/// A storage variable access observed in the bytecode.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StorageAccess {
    /// The raw storage slot key (constant, or base slot for mappings/arrays).
    pub slot: u64,
    /// Whether this is a simple slot or a computed (mapping/dynamic array) slot.
    pub kind: StorageSlotKind,
    /// Whether this is a read (SLOAD) or write (SSTORE).
    pub access: StorageAccessKind,
    /// Bytecode offset where the access occurs.
    pub offset: u64,
}

/// How a storage slot key is derived.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StorageSlotKind {
    /// Direct constant slot (e.g. slot 0, 1, 2 for fixed layout vars).
    Direct,
    /// Computed via SHA3 — likely a mapping or dynamic array access.
    Computed,
}

/// Direction of a storage access.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StorageAccessKind {
    Load,
    Store,
}

/// A recovered event emission site.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EventEmission {
    /// LOG opcode variant (0-4), indicating number of indexed topics.
    pub topic_count: u8,
    /// The first topic (event signature hash), if present.
    pub topic0: Option<[u8; 4]>,
    /// Recovered event signature, if known.
    pub signature: Option<String>,
    /// Bytecode offset of the LOG instruction.
    pub offset: u64,
}

/// A detected Solidity pattern.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SolidityPattern {
    /// `require(cond, "message")` — REVERT with ABI-encoded Error(string).
    Require {
        /// Bytecode offset of the REVERT instruction.
        offset: u64,
    },
    /// SafeMath-style overflow check: typically an arithmetic op immediately
    /// followed by a comparison and conditional revert.
    SafeMathCheck {
        /// Bytecode offset of the overflow-guarding comparison.
        offset: u64,
    },
    /// Proxy delegation via DELEGATECALL — control is transferred to another
    /// contract's code while preserving storage context.
    ProxyDelegation {
        /// Bytecode offset of the DELEGATECALL instruction.
        offset: u64,
    },
}

/// Aggregated Solidity metadata recovered from EVM bytecode analysis.
#[derive(Debug, Clone, Default)]
pub struct SolidityInfo {
    /// Recovered public/external functions (from the dispatcher).
    pub functions: Vec<SolidityFunction>,
    /// Storage accesses observed.
    pub storage_accesses: Vec<StorageAccess>,
    /// Event emission sites.
    pub events: Vec<EventEmission>,
    /// Detected high-level patterns.
    pub patterns: Vec<SolidityPattern>,
}

// ─── Bytecode analysis ───────────────────────────────────────────────────────

/// Analyse raw EVM bytecode and recover Solidity-level metadata.
///
/// The analysis is linear (single pass) and does not require control-flow graph
/// construction — it relies on recognising common compiler-emitted instruction
/// sequences (solc ≥ 0.4).
///
/// An optional `known_signatures` slice lets the caller supply a reverse-lookup
/// table mapping 4-byte selectors to full function/event signatures.
pub fn analyse(bytecode: &[u8], known_signatures: &[(&str, [u8; 4])]) -> SolidityInfo {
    let mut info = SolidityInfo::default();
    let len = bytecode.len();
    let mut pc: usize = 0;

    // Track the last few decoded instructions for pattern matching.
    // We keep a sliding window of (offset, opcode, immediate) tuples.
    let mut window: Vec<(usize, EvmOpcode, u64)> = Vec::with_capacity(8);

    while pc < len {
        let opcode = EvmOpcode::decode(bytecode[pc]);
        let insn_len = match opcode {
            EvmOpcode::Push(n) => 1 + usize::from(n),
            _ => 1,
        };

        // Decode immediate for PUSH instructions
        let immediate = match opcode {
            EvmOpcode::Push(n) => {
                let end = (pc + 1 + usize::from(n)).min(len);
                decode_be_u64(&bytecode[pc + 1..end])
            }
            _ => 0,
        };

        // ── Function selector recovery ──────────────────────────────────
        // The standard solc dispatcher pattern:
        //   PUSH4 <selector>   (or PUSH32 with selector in high bytes)
        //   EQ
        //   PUSH2 <target>
        //   JUMPI
        //
        // We detect: PUSH4 followed by EQ within a small window at the start
        // of the contract (or anywhere, for Vyper/unusual layouts).
        if matches!(opcode, EvmOpcode::Eq) {
            // Look back for a PUSH4 that holds a selector
            if let Some(push_entry) = window
                .iter()
                .rev()
                .find(|(_, op, _)| matches!(op, EvmOpcode::Push(4)))
            {
                let sel_value = push_entry.2;
                let sel_bytes = [
                    ((sel_value >> 24) & 0xFF) as u8,
                    ((sel_value >> 16) & 0xFF) as u8,
                    ((sel_value >> 8) & 0xFF) as u8,
                    (sel_value & 0xFF) as u8,
                ];

                // Look ahead for PUSH2/PUSH1 + JUMPI to find entry offset
                let entry_offset = find_jump_target(bytecode, pc + 1, len);

                let signature = known_signatures
                    .iter()
                    .find(|(_, s)| *s == sel_bytes)
                    .map(|(name, _)| name.to_string());

                info.functions.push(SolidityFunction {
                    selector: sel_bytes,
                    signature,
                    entry_offset: entry_offset.unwrap_or(0),
                });
            }
        }

        // ── Storage access recovery ─────────────────────────────────────
        match opcode {
            EvmOpcode::Sload => {
                let kind = if window_has_sha3(&window) {
                    StorageSlotKind::Computed
                } else {
                    StorageSlotKind::Direct
                };
                let slot = last_push_value(&window).unwrap_or(0);
                info.storage_accesses.push(StorageAccess {
                    slot,
                    kind,
                    access: StorageAccessKind::Load,
                    offset: pc as u64,
                });
            }
            EvmOpcode::Sstore => {
                let kind = if window_has_sha3(&window) {
                    StorageSlotKind::Computed
                } else {
                    StorageSlotKind::Direct
                };
                let slot = last_push_value(&window).unwrap_or(0);
                info.storage_accesses.push(StorageAccess {
                    slot,
                    kind,
                    access: StorageAccessKind::Store,
                    offset: pc as u64,
                });
            }
            _ => {}
        }

        // ── Event log recovery ──────────────────────────────────────────
        if let EvmOpcode::Log(n) = opcode {
            // The first topic is typically pushed immediately before the LOG.
            // For LOG1-LOG4, it's the event signature hash (first 4 bytes
            // are enough for matching).
            let topic0 = if n > 0 {
                last_push_value(&window).map(|v| {
                    [
                        ((v >> 24) & 0xFF) as u8,
                        ((v >> 16) & 0xFF) as u8,
                        ((v >> 8) & 0xFF) as u8,
                        (v & 0xFF) as u8,
                    ]
                })
            } else {
                None
            };

            let signature = topic0.and_then(|t| {
                known_signatures
                    .iter()
                    .find(|(_, s)| *s == t)
                    .map(|(name, _)| name.to_string())
            });

            info.events.push(EventEmission {
                topic_count: n,
                topic0,
                signature,
                offset: pc as u64,
            });
        }

        // ── Pattern detection: require() ────────────────────────────────
        // solc emits: PUSH32 <Error(string) selector 0x08c379a0> ... REVERT
        // or more commonly: ... ISZERO; PUSH <target>; JUMPI ... REVERT
        // We detect REVERT preceded by an error selector push.
        if matches!(opcode, EvmOpcode::Revert) {
            // Check if the error selector 0x08c379a0 was pushed nearby
            let has_error_selector = window.iter().any(|(_, op, imm)| {
                matches!(op, EvmOpcode::Push(_))
                    && (*imm == 0x08c3_79a0 || *imm & 0xFFFF_FFFF == 0x08c3_79a0)
            });
            if has_error_selector {
                info.patterns
                    .push(SolidityPattern::Require { offset: pc as u64 });
            }
        }

        // ── Pattern detection: SafeMath overflow check ──────────────────
        // Pattern: ADD/MUL followed by comparison (LT/GT) then JUMPI to revert
        // Simplified: detect ADD/MUL followed quickly by LT/GT + ISZERO
        if matches!(opcode, EvmOpcode::Iszero) {
            let has_comparison = window
                .iter()
                .rev()
                .take(3)
                .any(|(_, op, _)| matches!(op, EvmOpcode::Lt | EvmOpcode::Gt));
            let has_arithmetic =
                window.iter().rev().take(6).any(|(_, op, _)| {
                    matches!(op, EvmOpcode::Add | EvmOpcode::Mul | EvmOpcode::Sub)
                });
            if has_comparison && has_arithmetic {
                info.patterns
                    .push(SolidityPattern::SafeMathCheck { offset: pc as u64 });
            }
        }

        // ── Pattern detection: proxy delegation ─────────────────────────
        if matches!(opcode, EvmOpcode::Delegatecall) {
            info.patterns
                .push(SolidityPattern::ProxyDelegation { offset: pc as u64 });
        }

        // Maintain sliding window (keep last 16 entries)
        window.push((pc, opcode, immediate));
        if window.len() > 16 {
            window.remove(0);
        }

        pc += insn_len.max(1);
    }

    info
}

// ─── Helpers ─────────────────────────────────────────────────────────────────

/// Decode up to 8 bytes from a big-endian byte slice into a u64.
fn decode_be_u64(bytes: &[u8]) -> u64 {
    bytes.iter().fold(0u64, |acc, &b| (acc << 8) | u64::from(b))
}

/// Look ahead from `start` for a PUSH + JUMPI pattern and return the push value
/// (the jump target offset).
fn find_jump_target(bytecode: &[u8], start: usize, len: usize) -> Option<u64> {
    let mut pc = start;
    // Scan at most 6 bytes ahead
    let limit = (start + 10).min(len);
    while pc < limit {
        let op = EvmOpcode::decode(bytecode[pc]);
        match op {
            EvmOpcode::Push(n) => {
                let end = (pc + 1 + usize::from(n)).min(len);
                let target = decode_be_u64(&bytecode[pc + 1..end]);
                // Check if next instruction is JUMPI
                let next_pc = pc + 1 + usize::from(n);
                if next_pc < len && EvmOpcode::decode(bytecode[next_pc]) == EvmOpcode::Jumpi {
                    return Some(target);
                }
                pc = next_pc;
            }
            EvmOpcode::Jumpi => return None,
            _ => pc += 1,
        }
    }
    None
}

/// Check if the recent instruction window contains a SHA3 opcode (indicating a
/// computed storage slot — mapping or dynamic array).
fn window_has_sha3(window: &[(usize, EvmOpcode, u64)]) -> bool {
    window
        .iter()
        .rev()
        .take(8)
        .any(|(_, op, _)| matches!(op, EvmOpcode::Sha3))
}

/// Return the immediate value of the most recent PUSH instruction in the window.
fn last_push_value(window: &[(usize, EvmOpcode, u64)]) -> Option<u64> {
    window
        .iter()
        .rev()
        .find(|(_, op, _)| matches!(op, EvmOpcode::Push(_)))
        .map(|(_, _, imm)| *imm)
}

// ─── Tests ───────────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn keccak256_empty_input() {
        // Known Keccak-256 of empty string
        let hash = keccak256(b"");
        assert_eq!(
            hex_encode(&hash),
            "c5d2460186f7233c927e7db2dcc703c0e500b653ca82273b7bfad8045d85a470"
        );
    }

    #[test]
    fn keccak256_transfer_selector() {
        let hash = keccak256(b"transfer(address,uint256)");
        // First 4 bytes = selector
        assert_eq!(hash[0], 0xa9);
        assert_eq!(hash[1], 0x05);
        assert_eq!(hash[2], 0x9c);
        assert_eq!(hash[3], 0xbb);

        let sel = selector("transfer(address,uint256)");
        assert_eq!(sel, [0xa9, 0x05, 0x9c, 0xbb]);
    }

    #[test]
    fn selector_computation() {
        // balanceOf(address) => 0x70a08231
        let sel = selector("balanceOf(address)");
        assert_eq!(sel, [0x70, 0xa0, 0x82, 0x31]);
    }

    #[test]
    fn analyse_dispatcher_pattern() {
        // Minimal dispatcher: PUSH4 0xa9059cbb; DUP2; EQ; PUSH2 0x0040; JUMPI
        let bytecode = vec![
            0x63, 0xa9, 0x05, 0x9c, 0xbb, // PUSH4 selector for transfer
            0x81, // DUP2
            0x14, // EQ
            0x61, 0x00, 0x40, // PUSH2 0x0040
            0x57, // JUMPI
        ];

        let known = [("transfer(address,uint256)", [0xa9u8, 0x05, 0x9c, 0xbb])];
        let info = analyse(&bytecode, &known);

        assert_eq!(info.functions.len(), 1);
        assert_eq!(info.functions[0].selector, [0xa9, 0x05, 0x9c, 0xbb]);
        assert_eq!(
            info.functions[0].signature.as_deref(),
            Some("transfer(address,uint256)")
        );
        assert_eq!(info.functions[0].entry_offset, 0x0040);
    }

    #[test]
    fn analyse_storage_access() {
        // PUSH1 0x02; SLOAD
        let bytecode = vec![
            0x60, 0x02, // PUSH1 2
            0x54, // SLOAD
        ];
        let info = analyse(&bytecode, &[]);
        assert_eq!(info.storage_accesses.len(), 1);
        assert_eq!(info.storage_accesses[0].slot, 2);
        assert_eq!(info.storage_accesses[0].kind, StorageSlotKind::Direct);
        assert_eq!(info.storage_accesses[0].access, StorageAccessKind::Load);
    }

    #[test]
    fn analyse_computed_storage_via_sha3() {
        // PUSH1 0x00; PUSH1 0x20; SHA3; SLOAD
        let bytecode = vec![
            0x60, 0x00, // PUSH1 0
            0x60, 0x20, // PUSH1 32
            0x20, // SHA3
            0x54, // SLOAD
        ];
        let info = analyse(&bytecode, &[]);
        assert_eq!(info.storage_accesses.len(), 1);
        assert_eq!(info.storage_accesses[0].kind, StorageSlotKind::Computed);
    }

    #[test]
    fn analyse_event_log() {
        // PUSH4 <topic>; ... LOG1
        let bytecode = vec![
            0x63, 0xdd, 0xf2, 0x52, 0xad, // PUSH4 topic (Transfer event)
            0xa1, // LOG1
        ];
        let info = analyse(&bytecode, &[]);
        assert_eq!(info.events.len(), 1);
        assert_eq!(info.events[0].topic_count, 1);
        assert_eq!(info.events[0].topic0, Some([0xdd, 0xf2, 0x52, 0xad]));
    }

    #[test]
    fn analyse_delegatecall_pattern() {
        let bytecode = vec![0xf4]; // DELEGATECALL
        let info = analyse(&bytecode, &[]);
        assert_eq!(info.patterns.len(), 1);
        assert!(matches!(
            info.patterns[0],
            SolidityPattern::ProxyDelegation { offset: 0 }
        ));
    }

    #[test]
    fn analyse_require_pattern() {
        // Simplified: PUSH4 0x08c379a0 (Error selector) ... REVERT
        let bytecode = vec![
            0x63, 0x08, 0xc3, 0x79, 0xa0, // PUSH4 Error(string) selector
            0x60, 0x20, // PUSH1 0x20 (memory offset)
            0xfd, // REVERT
        ];
        let info = analyse(&bytecode, &[]);
        assert!(
            info.patterns
                .iter()
                .any(|p| matches!(p, SolidityPattern::Require { .. }))
        );
    }

    #[test]
    fn solidity_info_default_is_empty() {
        let info = SolidityInfo::default();
        assert!(info.functions.is_empty());
        assert!(info.storage_accesses.is_empty());
        assert!(info.events.is_empty());
        assert!(info.patterns.is_empty());
    }

    fn hex_encode(bytes: &[u8]) -> String {
        bytes.iter().map(|b| format!("{b:02x}")).collect()
    }
}
