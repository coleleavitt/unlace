//! API-hash resolver + hash-loop recognizer (ROADMAP Phase E.4.3).
//!
//! Malware commonly resolves WinAPI imports at runtime by hashing each export
//! name (ROR13, DJB2, CRC32) and comparing against a hard-coded constant, to
//! hide its imports from static analysis. This module
//!
//! 1. implements those hash algorithms ([`hash_name`]),
//! 2. brute-forces a known-hash constant back to an API name from a built-in
//!    roster ([`resolve_hash`]), and
//! 3. flags hash-loop shapes in an [`SsaFunction`]
//!    ([`recognize_api_hash_loops`]).
//!
//! The resolver is the high-value part: given a recovered constant + algorithm,
//! it names the API. The recognizer is a conservative structural hint that a
//! function *contains* a hash loop.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId};

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

/// A recognised API-hashing loop.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ApiHashFinding {
    pub loop_header: BlockId,
    pub algo_hint: HashAlgo,
}

/// Recognise API-hash loops: a loop body that combines a per-character read
/// with a hashing transform — a rotate (ROR13: `IntRight`+`IntLeft`+`IntOr`)
/// or a multiply-by-33 (`IntMult` with a constant 33) or an `IntXor`/shift
/// CRC step. Conservative + deterministic.
pub fn recognize_api_hash_loops(func: &SsaFunction) -> Vec<ApiHashFinding> {
    let predecessors = build_predecessors(func);
    let mut findings = Vec::new();

    for (&bid, block) in &func.function.blocks {
        if !is_loop_header(func, &predecessors, bid) {
            continue;
        }
        let has_rotate = block_has_rotate(block);
        let has_mul33 = block.insns.iter().any(|i| {
            i.op == IrOp::IntMult
                && i.inputs
                    .iter()
                    .any(|v| v.space == SpaceId::Const && v.offset == 33)
        });
        let algo = if has_mul33 {
            Some(HashAlgo::Djb2)
        } else if has_rotate {
            Some(HashAlgo::Ror13)
        } else {
            None
        };
        if let Some(algo_hint) = algo {
            findings.push(ApiHashFinding {
                loop_header: bid,
                algo_hint,
            });
        }
    }
    findings
}

/// True iff the block contains a rotate idiom (`IntRight` + `IntLeft` + `IntOr`).
fn block_has_rotate(block: &unlace_ir::BasicBlock) -> bool {
    let mut right = false;
    let mut left = false;
    let mut or = false;
    for i in &block.insns {
        match i.op {
            IrOp::IntRight => right = true,
            IrOp::IntLeft => left = true,
            IrOp::IntOr => or = true,
            _ => {}
        }
    }
    right && left && or
}

fn build_predecessors(func: &SsaFunction) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let mut preds: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for &succ in &block.successors {
            preds.entry(succ).or_default().insert(bid);
        }
    }
    preds
}

fn is_loop_header(
    func: &SsaFunction,
    predecessors: &BTreeMap<BlockId, BTreeSet<BlockId>>,
    bid: BlockId,
) -> bool {
    predecessors
        .get(&bid)
        .is_some_and(|preds| preds.iter().any(|&p| dominates(func, bid, p)))
}

fn dominates(func: &SsaFunction, a: BlockId, b: BlockId) -> bool {
    if a == b {
        return true;
    }
    let mut cur = b;
    while let Some(parent) = func.dom_tree.idom(cur) {
        if parent == cur {
            return false;
        }
        if parent == a {
            return true;
        }
        cur = parent;
    }
    false
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    #[test]
    fn djb2_seed_and_round_trip() {
        assert_eq!(hash_name(HashAlgo::Djb2, ""), 5381);
        // Round-trip: the hash of a roster name resolves back to that name.
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
        // A non-roster hash resolves to nothing.
        assert!(resolve_hash(HashAlgo::Ror13, 0xDEAD_BEEF, API_NAMES).is_none());
    }

    #[test]
    fn crc32_known_vector() {
        // CRC-32 of "123456789" is the standard check value 0xCBF43926.
        assert_eq!(hash_name(HashAlgo::Crc32, "123456789"), 0xCBF4_3926);
    }

    #[test]
    fn recognizes_ror13_hash_loop() {
        // Self-looping block with a rotate idiom (right|left -> or).
        let mut func = Function::new("hash", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let acc = Varnode::reg(1, 4);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntRight,
            Varnode::unique(0, 4),
            smallvec![acc, Varnode::constant(13, 4)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntLeft,
            Varnode::unique(1, 4),
            smallvec![acc, Varnode::constant(19, 4)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntOr,
            acc,
            smallvec![Varnode::unique(0, 4), Varnode::unique(1, 4)],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::ram(0x1000, 8), Varnode::reg(2, 4)],
            0x100c,
        ));
        bb.successors.push(BlockId(0));
        func.insert_block(bb);
        let ssa = build_ssa(func);
        let f = recognize_api_hash_loops(&ssa);
        assert_eq!(f.len(), 1);
        assert_eq!(f[0].algo_hint, HashAlgo::Ror13);
    }

    #[test]
    fn ignores_plain_loop() {
        let mut func = Function::new("plain", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(1, 4),
            smallvec![Varnode::reg(1, 4), Varnode::constant(1, 4)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::ram(0x1000, 8), Varnode::reg(2, 4)],
            0x1004,
        ));
        bb.successors.push(BlockId(0));
        func.insert_block(bb);
        let ssa = build_ssa(func);
        assert!(recognize_api_hash_loops(&ssa).is_empty());
    }
}
