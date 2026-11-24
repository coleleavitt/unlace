//! (unlace `javasync`) Java `synchronized` and `finally` in a DEX method's
//! catch-all handlers.
//!
//! javac and D8 compile `synchronized (x) { body }` to `monitor-enter x` just
//! before the body, the body under a catch-all whose handler is
//! `move-exception e; monitor-exit x; throw e`, and a `monitor-exit x` on each
//! normal way out of the body. They compile `try { body } finally { F }` to the
//! body under a catch-all whose handler is `move-exception e; F; throw e`, with
//! a copy of F where each protected range ends. Both are read here from the
//! instruction bytes and the try table; `printc/javasyncprint.rs` prints
//! the `try` the handler opens as `synchronized (x) { }` or with a
//! `finally { }` clause and leaves out what the idiom stands for: the monitor
//! operations, or the copies of F and the rethrow.
//!
//! Each reading declines on any doubt: the handler must be exactly the shape
//! above, F straight-line code, every protected range must end in a byte-equal
//! copy of F (or run on into the next range through instructions that cannot
//! throw), and no branch from outside the protected code may enter a copy.

use std::collections::BTreeMap;

use crate::dex::{DexModel, TryBlock};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace) Print a DEX catch-all that releases a monitor as `synchronized`
    /// and one that repeats the normal path's code as `finally` (option
    /// `javasync`).
    JavaSync,
    "javasync",
    "Java synchronized and finally from DEX catch-all handlers",
    unset: false,
    shipped: false
);

const MOVE_EXCEPTION: u8 = 0x0d;
const MONITOR_ENTER: u8 = 0x1d;
const MONITOR_EXIT: u8 = 0x1e;
const THROW: u8 = 0x27;
/// The most instructions one walk reads.
const MAX_STEPS: usize = 1 << 16;
/// The longest `finally` body read, in bytes.
const MAX_FINALLY: u64 = 512;

/// A method's code, as the idiom reader sees it.
pub trait DexCode {
    fn code_bytes(&self, addr: u64, len: usize) -> Option<&[u8]>;
    /// The length in bytes of the instruction at `addr`.
    fn code_size(&self, addr: u64) -> Option<u64>;
}

impl DexCode for DexModel {
    fn code_bytes(&self, addr: u64, len: usize) -> Option<&[u8]> {
        self.bytes_at(addr, len)
    }

    fn code_size(&self, addr: u64) -> Option<u64> {
        self.instruction_size(addr)
    }
}

/// What a catch-all handler stands for.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum JavaIdiom {
    /// `synchronized (x)`: the `monitor-enter` before the protected code and
    /// the `monitor-exit`s on its normal ways out.
    Synchronized { enter: u64, exits: Vec<u64> },
    /// `finally { F }`: the handler's `throw`, and the byte ranges of F's
    /// copies on the normal ways out.
    Finally {
        rethrow: u64,
        copies: Vec<(u64, u64)>,
    },
}

impl JavaIdiom {
    /// Does the printed idiom leave out the instruction at `addr`?
    pub fn hides(&self, addr: u64) -> bool {
        match self {
            JavaIdiom::Synchronized { enter, exits } => addr == *enter || exits.contains(&addr),
            JavaIdiom::Finally { rethrow, copies } => {
                addr == *rethrow || copies.iter().any(|&(s, e)| s <= addr && addr < e)
            }
        }
    }
}

fn op_at(code: &impl DexCode, addr: u64) -> Option<(u8, u8)> {
    let b = code.code_bytes(addr, 2)?;
    Some((b[0], b[1]))
}

/// The instruction starts in `[from, to)`, walking forward from `from`.
fn starts(code: &impl DexCode, from: u64, to: u64) -> Option<Vec<u64>> {
    let mut out = Vec::new();
    let mut at = from;
    while at < to {
        if out.len() >= MAX_STEPS {
            return None;
        }
        out.push(at);
        at = at.checked_add(code.code_size(at).filter(|&n| n > 0)?)?;
    }
    Some(out)
}

/// Does the instruction with opcode `op` fall through to the next one and do
/// nothing to the exception state (no branch, return, throw, monitor or
/// payload)?
fn straight(op: u8) -> bool {
    !matches!(op, 0x00 | 0x0d..=0x11 | 0x1d | 0x1e | 0x27..=0x2c | 0x32..=0x3d)
}

/// The target of the branch at `at`, for a goto or an if.
fn branch_target(code: &impl DexCode, at: u64, op: u8) -> Option<u64> {
    let units: i64 = match op {
        0x28 => i64::from(code.code_bytes(at + 1, 1)?[0] as i8),
        0x29 | 0x32..=0x3d => {
            let b = code.code_bytes(at + 2, 2)?;
            i64::from(i16::from_le_bytes([b[0], b[1]]))
        }
        0x2a => {
            let b = code.code_bytes(at + 2, 4)?;
            i64::from(i32::from_le_bytes([b[0], b[1], b[2], b[3]]))
        }
        _ => return None,
    };
    Some(at.wrapping_add_signed(2 * units))
}

/// The ranges `handler`'s clauses protect, less the handler's own code
/// `[handler, stub_end)`: D8 lets a range run on over the handler, javac
/// gives the handler a range of its own.
fn protected(blocks: &[TryBlock], handler: u64, stub_end: u64) -> Vec<(u64, u64)> {
    let mut out = Vec::new();
    for b in blocks {
        if !b.handlers.iter().any(|&(_, h)| h == handler) {
            continue;
        }
        let (start, mut end) = (b.start, b.end);
        if start >= handler && start < stub_end {
            continue;
        }
        if start < handler && handler < end {
            end = handler;
        }
        if start < end {
            out.push((start, end));
        }
    }
    out.sort_unstable();
    out.dedup();
    out
}

/// `handler` read as the monitor release of `synchronized (x)`.
fn synchronized(
    code: &impl DexCode,
    entry: u64,
    blocks: &[TryBlock],
    handler: u64,
) -> Option<JavaIdiom> {
    let (op, exception) = op_at(code, handler)?;
    let (release, lock) = op_at(code, handler + 2)?;
    let (rethrow, thrown) = op_at(code, handler + 4)?;
    if op != MOVE_EXCEPTION
        || release != MONITOR_EXIT
        || lock == exception
        || rethrow != THROW
        || thrown != exception
    {
        return None;
    }
    let stub_end = handler + 6;
    let ranges = protected(blocks, handler, stub_end);
    let start = ranges.first()?.0;
    let end = ranges.iter().map(|r| r.1).max()?;
    let enter = *starts(code, entry, start)?.last()?;
    if enter + 2 != start || op_at(code, enter)? != (MONITOR_ENTER, lock) {
        return None;
    }
    let mut exits = Vec::new();
    for at in starts(code, start, end)? {
        if (handler..stub_end).contains(&at) {
            continue;
        }
        match op_at(code, at)? {
            (MONITOR_EXIT, r) if r == lock => exits.push(at),
            (MONITOR_ENTER, r) if r == lock => return None,
            _ => {}
        }
    }
    if !(handler..stub_end).contains(&end) && op_at(code, end) == Some((MONITOR_EXIT, lock)) {
        exits.push(end);
    }
    (!exits.is_empty()).then_some(JavaIdiom::Synchronized { enter, exits })
}

/// `handler` read as the `finally` clause of the code it protects.
fn finally(
    code: &impl DexCode,
    (entry, code_end): (u64, u64),
    blocks: &[TryBlock],
    handler: u64,
) -> Option<JavaIdiom> {
    let (op, exception) = op_at(code, handler)?;
    if op != MOVE_EXCEPTION {
        return None;
    }
    let body = handler + 2;
    let mut at = body;
    let rethrow = loop {
        if at - body > MAX_FINALLY {
            return None;
        }
        match op_at(code, at)? {
            (THROW, r) if r == exception => break at,
            (op, _) if straight(op) => {}
            _ => return None,
        }
        at = at.checked_add(code.code_size(at).filter(|&n| n > 0)?)?;
    };
    let len = rethrow - body;
    let f = code.code_bytes(body, usize::try_from(len).ok()?)?;
    if f.is_empty() || (f.len() == 2 && f[0] == MONITOR_EXIT) {
        return None;
    }
    let stub_end = rethrow + 2;
    let ranges = protected(blocks, handler, stub_end);
    if ranges.is_empty() {
        return None;
    }
    let mut copies = Vec::new();
    for (k, &(_, end)) in ranges.iter().enumerate() {
        if code.code_bytes(end, f.len()) == Some(f) {
            copies.push((end, end + len));
            continue;
        }
        let joined = ranges.get(k + 1).is_some_and(|&(next, _)| {
            next >= end
                && starts(code, end, next).is_some_and(|list| {
                    list.iter().all(|&a| {
                        op_at(code, a)
                            .is_some_and(|(op, _)| straight(op) && !crate::javatry::can_throw(op))
                    })
                })
        });
        if !joined {
            return None;
        }
    }
    if copies.is_empty() || copies.iter().any(|&(s, e)| s < stub_end && handler < e) {
        return None;
    }
    let entered = blocks
        .iter()
        .flat_map(|b| b.handlers.iter())
        .any(|&(_, h)| copies.iter().any(|&(s, e)| s <= h && h < e));
    if entered {
        return None;
    }
    for a in starts(code, entry, code_end.max(stub_end))? {
        let (op, _) = op_at(code, a)?;
        if op == 0x2b || op == 0x2c {
            return None;
        }
        let Some(target) = branch_target(code, a, op) else {
            continue;
        };
        let from_inside = ranges.iter().any(|&(s, e)| s <= a && a < e);
        let enters = copies
            .iter()
            .any(|&(s, e)| (s < target && target < e) || (target == s && !from_inside));
        if enters {
            return None;
        }
    }
    Some(JavaIdiom::Finally { rethrow, copies })
}

/// The idioms of the method whose code is `[entry, code_end)`, with try items
/// `blocks`, by catch-all handler.
pub fn idioms(
    code: &impl DexCode,
    (entry, code_end): (u64, u64),
    blocks: &[TryBlock],
) -> BTreeMap<u64, JavaIdiom> {
    let mut catch_all: BTreeMap<u64, bool> = BTreeMap::new();
    for block in blocks {
        for &(type_idx, handler) in &block.handlers {
            *catch_all.entry(handler).or_insert(true) &= type_idx.is_none();
        }
    }
    catch_all
        .into_iter()
        .filter(|&(_, all)| all)
        .filter_map(|(handler, _)| {
            synchronized(code, entry, blocks, handler)
                .or_else(|| finally(code, (entry, code_end), blocks, handler))
                .map(|idiom| (handler, idiom))
        })
        .collect()
}

/// The idioms of `data`'s method, when it is a DEX method and option
/// `javasync` is on.
pub fn method_idioms(data: &Funcdata) -> BTreeMap<u64, JavaIdiom> {
    let arch = data.get_arch();
    if !arch.unlace_options.get::<JavaSync>().0 {
        return BTreeMap::new();
    }
    let Some(model) = arch.dex.as_deref() else {
        return BTreeMap::new();
    };
    let entry = data.get_address().get_offset();
    let mut code_end = entry;
    for i in 0..data.bblocks_get_size() {
        for op in data.bb_ops(data.bblocks_get_block(i)) {
            let Some(addr) = data.obank().get(op).map(|o| o.get_addr().get_offset()) else {
                continue;
            };
            if let Some(size) = model.instruction_size(addr).filter(|_| addr >= entry) {
                code_end = code_end.max(addr.saturating_add(size));
            }
        }
    }
    let blocks = crate::javatry::canonical_blocks(model, entry);
    idioms(model, (entry, code_end), &blocks)
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Code(Vec<u8>);

    impl DexCode for Code {
        fn code_bytes(&self, addr: u64, len: usize) -> Option<&[u8]> {
            let off = usize::try_from(addr).ok()?;
            self.0.get(off..off.checked_add(len)?)
        }

        fn code_size(&self, addr: u64) -> Option<u64> {
            Some(match self.code_bytes(addr, 1)?[0] {
                0x1a | 0x38 => 4,
                0x6e => 6,
                _ => 2,
            })
        }
    }

    fn code(hex: &str) -> Code {
        let digits: Vec<u8> = hex
            .bytes()
            .filter(u8::is_ascii_hexdigit)
            .map(|c| (c as char).to_digit(16).unwrap() as u8)
            .collect();
        Code(digits.chunks(2).map(|p| p[0] << 4 | p[1]).collect())
    }

    fn block(start: u64, end: u64, handlers: &[(Option<u32>, u64)]) -> TryBlock {
        TryBlock {
            start,
            end,
            handlers: handlers.to_vec(),
        }
    }

    /// `Tries.sync` of tests/stages/fixtures/dex/tries.dex.
    const SYNC: &str = "1d01 1a00 2c00 6e20 0e00 0200 1e01 1101 0d02 1e01 2702";
    /// `Tries.withFinally` of the same fixture.
    const FINALLY: &str = "1a00 0000 6e10 0d00 0200 0c02 6e20 0e00 2100 6e20 0e00 0100 1102 \
                           0d02 6e20 0e00 0100 2702";

    #[test]
    fn monitor_release_reads_as_synchronized() {
        let got = idioms(&code(SYNC), (0, 22), &[block(2, 20, &[(None, 16)])]);
        assert_eq!(
            got.get(&16),
            Some(&JavaIdiom::Synchronized {
                enter: 0,
                exits: vec![12]
            })
        );
        let idiom = &got[&16];
        assert!(idiom.hides(0) && idiom.hides(12));
        assert!(!idiom.hides(18) && !idiom.hides(6));
    }

    #[test]
    fn synchronized_needs_the_monitor_enter_before_the_range() {
        let got = idioms(&code(SYNC), (0, 22), &[block(6, 20, &[(None, 16)])]);
        assert!(got.is_empty(), "{got:?}");
    }

    #[test]
    fn repeated_handler_code_reads_as_finally() {
        let got = idioms(&code(FINALLY), (0, 36), &[block(4, 18, &[(None, 26)])]);
        assert_eq!(
            got.get(&26),
            Some(&JavaIdiom::Finally {
                rethrow: 34,
                copies: vec![(18, 24)]
            })
        );
        let idiom = &got[&26];
        assert!(idiom.hides(18) && idiom.hides(34));
        assert!(!idiom.hides(24) && !idiom.hides(28));
    }

    #[test]
    fn a_typed_handler_is_no_finally() {
        let got = idioms(&code(FINALLY), (0, 36), &[block(4, 18, &[(Some(3), 26)])]);
        assert!(got.is_empty(), "{got:?}");
    }

    #[test]
    fn finally_needs_a_byte_equal_copy() {
        let changed = FINALLY.replacen("6e20 0e00 0100 1102", "6e20 0e00 0200 1102", 1);
        let got = idioms(&code(&changed), (0, 36), &[block(4, 18, &[(None, 26)])]);
        assert!(got.is_empty(), "{got:?}");
    }

    #[test]
    fn a_branch_into_the_copy_from_outside_declines() {
        // if-eqz v0, -> the copy at 22, placed after the handler's throw.
        let with_branch = format!("{FINALLY} 3800 f8ff");
        let got = idioms(&code(&with_branch), (0, 40), &[block(4, 18, &[(None, 26)])]);
        assert!(got.is_empty(), "{got:?}");
    }
}
