//! (unlace `evmselectors`) Solidity function selectors for the EVM dispatcher.
//!
//! Every public function of a solc contract is reached through the dispatcher at the start of its
//! runtime code: `DUPn; PUSH4 <selector>; EQ; PUSH<k> <target>; JUMPI`, where the selector is the
//! first four bytes of `keccak256` of the canonical signature. [`dispatch_entries`] reads the
//! code image once, skipping push immediates, and returns each such entry with its target.
//! [`solidity_selector`] and [`evm_keccak256`] compute the selector of a signature so a caller
//! can name each entry from a signature list.
//!
//! Keccak-256 is self-contained (no external crate): the sponge with rate 136 bytes and the
//! Keccak (not SHA3) padding byte 0x01.

/// Keccak-f[1600] round constants.
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

/// Rho rotation offsets, indexed `[y][x]`.
const ROTATIONS: [[u32; 5]; 5] = [
    [0, 1, 62, 28, 27],
    [36, 44, 6, 55, 20],
    [3, 10, 43, 25, 39],
    [41, 45, 15, 21, 8],
    [18, 2, 61, 56, 14],
];

/// Keccak-256 sponge rate in bytes: (1600 - 2 * 256) / 8.
const RATE: usize = 136;

/// The first four bytes of `keccak256` of the canonical signature, e.g.
/// `solidity_selector("transfer(address,uint256)")` is `[0xa9, 0x05, 0x9c, 0xbb]`.
pub fn solidity_selector(signature: &str) -> [u8; 4] {
    let hash = evm_keccak256(signature.as_bytes());
    [hash[0], hash[1], hash[2], hash[3]]
}

/// Keccak-256 of `data`.
pub fn evm_keccak256(data: &[u8]) -> [u8; 32] {
    let mut state = [0u64; 25];
    let mut blocks = data.chunks_exact(RATE);
    for block in blocks.by_ref() {
        absorb(&mut state, block);
        keccak_f1600(&mut state);
    }
    let rest = blocks.remainder();
    let mut last = [0u8; RATE];
    last[..rest.len()].copy_from_slice(rest);
    last[rest.len()] ^= 0x01;
    last[RATE - 1] ^= 0x80;
    absorb(&mut state, &last);
    keccak_f1600(&mut state);

    let mut out = [0u8; 32];
    for (chunk, lane) in out.chunks_exact_mut(8).zip(state.iter()) {
        chunk.copy_from_slice(&lane.to_le_bytes());
    }
    out
}

fn absorb(state: &mut [u64; 25], block: &[u8]) {
    for (lane, bytes) in state.iter_mut().zip(block.chunks_exact(8)) {
        let mut word = [0u8; 8];
        word.copy_from_slice(bytes);
        *lane ^= u64::from_le_bytes(word);
    }
}

fn keccak_f1600(state: &mut [u64; 25]) {
    for &rc in &RC {
        // theta
        let mut c = [0u64; 5];
        for (x, cx) in c.iter_mut().enumerate() {
            *cx = state[x] ^ state[x + 5] ^ state[x + 10] ^ state[x + 15] ^ state[x + 20];
        }
        let mut d = [0u64; 5];
        for (x, dx) in d.iter_mut().enumerate() {
            *dx = c[(x + 4) % 5] ^ c[(x + 1) % 5].rotate_left(1);
        }
        for (i, lane) in state.iter_mut().enumerate() {
            *lane ^= d[i % 5];
        }
        // rho and pi
        let mut b = [0u64; 25];
        for x in 0..5 {
            for y in 0..5 {
                b[y + 5 * ((2 * x + 3 * y) % 5)] = state[x + 5 * y].rotate_left(ROTATIONS[y][x]);
            }
        }
        // chi
        for x in 0..5 {
            for y in 0..5 {
                state[x + 5 * y] =
                    b[x + 5 * y] ^ (!b[(x + 1) % 5 + 5 * y] & b[(x + 2) % 5 + 5 * y]);
            }
        }
        // iota
        state[0] ^= rc;
    }
}

/// One dispatcher entry: a `PUSH4` selector compared with `EQ` and branched on by a constant
/// `JUMPI` target.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DispatchEntry {
    /// The 4-byte selector the entry compares against.
    pub selector: [u8; 4],
    /// The bytecode offset the `JUMPI` branches to when the selector matches.
    pub target: u64,
    /// Bytecode offset of the `PUSH4` that holds the selector.
    pub offset: u64,
}

const OP_JUMPI: u8 = 0x57;
const OP_EQ: u8 = 0x14;
const OP_PUSH1: u8 = 0x60;
const OP_PUSH4: u8 = 0x63;
const OP_DUP1: u8 = 0x80;
const OP_DUP16: u8 = 0x8f;

/// The DUPs allowed between a selector `PUSH4` and its `EQ`.
const MAX_DUPS_BEFORE_EQ: usize = 2;

#[derive(Clone, Copy)]
struct Insn<'a> {
    offset: usize,
    op: u8,
    imm: &'a [u8],
}

fn decode(code: &[u8]) -> Vec<Insn<'_>> {
    let mut insns = Vec::new();
    let mut pc = 0usize;
    while let Some(&op) = code.get(pc) {
        let width = if (OP_PUSH1..OP_PUSH1 + 32).contains(&op) {
            usize::from(op - OP_PUSH1) + 1
        } else {
            0
        };
        let start = (pc + 1).min(code.len());
        let end = (pc + 1 + width).min(code.len());
        insns.push(Insn {
            offset: pc,
            op,
            imm: &code[start..end],
        });
        pc += 1 + width;
    }
    insns
}

fn be_value(bytes: &[u8]) -> u64 {
    bytes.iter().fold(0u64, |acc, &b| (acc << 8) | u64::from(b))
}

/// Every dispatcher entry in `code`, in code order. An `EQ` counts when a `PUSH4` (with at most
/// `MAX_DUPS_BEFORE_EQ` DUPs between) is below it on the stack, and the next instruction is a
/// `PUSH` of a constant target immediately followed by `JUMPI`. Push immediates are skipped, so
/// data bytes that look like opcodes do not match.
pub fn dispatch_entries(code: &[u8]) -> Vec<DispatchEntry> {
    let insns = decode(code);
    let mut entries = Vec::new();
    for (i, insn) in insns.iter().enumerate() {
        if insn.op != OP_EQ {
            continue;
        }
        let Some(push) = selector_push(&insns, i) else {
            continue;
        };
        let (Some(target), Some(jump)) = (insns.get(i + 1), insns.get(i + 2)) else {
            continue;
        };
        if !(OP_PUSH1..=OP_PUSH4).contains(&target.op) || target.imm.is_empty() {
            continue;
        }
        if target.imm.len() != usize::from(target.op - OP_PUSH1) + 1 || jump.op != OP_JUMPI {
            continue;
        }
        let mut selector = [0u8; 4];
        selector.copy_from_slice(push.imm);
        entries.push(DispatchEntry {
            selector,
            target: be_value(target.imm),
            offset: push.offset as u64,
        });
    }
    entries
}

/// The `PUSH4` below the `EQ` at `eq`, skipping at most `MAX_DUPS_BEFORE_EQ` DUPs, if it
/// carries a whole four-byte immediate.
fn selector_push<'a>(insns: &[Insn<'a>], eq: usize) -> Option<Insn<'a>> {
    let mut j = eq;
    let mut dups = 0usize;
    while j > 0 {
        j -= 1;
        let op = insns[j].op;
        if (OP_DUP1..=OP_DUP16).contains(&op) {
            dups += 1;
            if dups > MAX_DUPS_BEFORE_EQ {
                return None;
            }
            continue;
        }
        return (op == OP_PUSH4 && insns[j].imm.len() == 4).then_some(insns[j]);
    }
    None
}

#[cfg(test)]
mod tests;
