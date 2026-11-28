//! (unlace `evmcalls`) Solidity internal functions as calls in EVM bytecode.
//!
//! The EVM has no call instruction for code inside a contract. solc lowers an
//! internal call to `PUSH ret; <arguments>; PUSH fn; JUMP` and the callee
//! returns with a `JUMP` to the label its caller left on the stack, so without
//! help every return is an indirect jump and every callee is inlined into every
//! caller. [`classify`] reads the whole code once with a constant-tracking
//! stack interpreter and decides, for each `JUMP`:
//!
//!   * a **call** jumps to a pushed constant while another pushed `JUMPDEST`
//!     constant (the return label) is still on the stack; the nearest such label
//!     to the top is the return address, and the items above it are arguments;
//!   * a **return** jumps to a value that is not a constant at the jump;
//!   * anything else is an ordinary jump.
//!
//! Slots below a call's return label survive the call, so the interpreter
//! carries them to the return label; a callee's net stack effect (the words
//! the call removes, return label included) is the depth its return jumps leave
//! relative to its entry, iterated to a fixed point over nested calls.
//!
//! The flow walk turns a classified call whose return label is the next
//! instruction into a `CALL` and a return into `RETURN`;
//! [`ActionEvmCalls`] gives each such call its callee's stack effect as its
//! extrapop and its results as a stack-relative output.

use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::funcdata::Funcdata;

/// Largest code size read: the EIP-3860 initcode limit.
const MAX_CODE: usize = 0xc000;
/// Deepest stack window the interpreter keeps per block.
const MAX_DEPTH: usize = 32;
/// Rounds of the classify / stack-effect fixed point.
const MAX_ROUNDS: usize = 4;
/// Rounds of the stack-effect fixed point inside one pass.
const MAX_EFFECT_ROUNDS: usize = 32;
/// Block visits per pass.
const MAX_VISITS: usize = 50_000;

/// One internal call site.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct EvmCall {
    /// The callee's entry `JUMPDEST`.
    pub target: u64,
    /// The return label the callee jumps back to.
    pub ret: u64,
    /// Stack items above the return label at the jump (the arguments).
    pub args: u32,
    /// Words the call removes from the stack, return label included, when the
    /// callee's returns agree on it.
    pub pop: Option<i32>,
}

/// Every classified `JUMP` of one code image.
#[derive(Clone, Debug, Default)]
pub struct EvmCallMap {
    /// Call sites by the address of their `JUMP`.
    pub calls: BTreeMap<u64, EvmCall>,
    /// Addresses of the `JUMP`s that return.
    pub returns: BTreeSet<u64>,
    /// Callees no path of which returns.
    pub noreturn: BTreeSet<u64>,
    /// Constant jumps and conditional jumps into a terminal tail that two or more
    /// of them, a call's return or the fall-through share (solc's
    /// optimizer shares the ABI-encoding and `RETURN` tail between external
    /// functions), by site: the target and the stack words the tail reads.
    pub tails: BTreeMap<u64, u64>,
    /// Return labels two or more calls share that start a terminal tail: each such
    /// call is followed by a call to the tail instead of a branch into it.
    pub ret_tails: BTreeSet<u64>,
    /// The stack words each tail (in `tails` or `ret_tails`) reads.
    pub tail_args: BTreeMap<u64, u32>,
    /// Callees that return through a copy of their label and leave the label in
    /// its slot; their results are the words above it.
    pub keeps_label: BTreeSet<u64>,
    /// Each callee whose call sites agree on its arguments, and its stack
    /// effect when known: `(args, pop)`.
    pub functions: BTreeMap<u64, (u32, Option<i32>)>,
    /// Every other `JUMP` and `JUMPI` whose target is a constant `JUMPDEST`
    /// in every state that reaches it, by site.
    pub jumps: BTreeMap<u64, u64>,
}

impl EvmCallMap {
    /// The call at `site`.
    pub fn call_at(&self, site: u64) -> Option<&EvmCall> {
        self.calls.get(&site)
    }
}

#[derive(Clone, Copy, Debug)]
struct Ins {
    pc: u64,
    op: u8,
    val: Option<u64>,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Val {
    U,
    C(u64),
}

#[derive(Clone, Copy, Debug)]
enum Ev {
    Call { target: u64, ret: u64, args: u32 },
    Jump(Option<u64>),
    Ret,
}

fn disasm(code: &[u8]) -> Vec<Ins> {
    let mut out = Vec::new();
    let mut pc = 0usize;
    while pc < code.len() {
        let op = code[pc];
        let n = if (0x60..=0x7f).contains(&op) {
            (op - 0x5f) as usize
        } else {
            0
        };
        let val = if op == 0x5f {
            Some(0)
        } else if n > 0 {
            let end = (pc + 1 + n).min(code.len());
            let bytes = &code[pc + 1..end];
            let lead = bytes.len().saturating_sub(8);
            if bytes[..lead].iter().all(|b| *b == 0) {
                Some(
                    bytes[lead..]
                        .iter()
                        .fold(0u64, |a, b| (a << 8) | u64::from(*b)),
                )
            } else {
                None
            }
        } else {
            None
        };
        out.push(Ins {
            pc: pc as u64,
            op,
            val,
        });
        pc += 1 + n;
    }
    out
}

/// Items an opcode pops and pushes (PUSH/DUP/SWAP and the jumps are handled by
/// the callers).
fn arity(op: u8) -> (usize, usize) {
    match op {
        0x01..=0x07 | 0x0a | 0x0b | 0x10..=0x14 | 0x16..=0x18 | 0x1a..=0x1d | 0x20 => (2, 1),
        0x08 | 0x09 => (3, 1),
        0x15 | 0x19 | 0x31 | 0x35 | 0x3b | 0x3f | 0x40 | 0x49 | 0x51 | 0x54 | 0x5c => (1, 1),
        0x30 | 0x32..=0x34 | 0x36 | 0x38 | 0x3a | 0x3d | 0x41..=0x48 | 0x4a | 0x58..=0x5a => (0, 1),
        0x50 => (1, 0),
        0x52 | 0x53 | 0x55 | 0x5d | 0xa0 => (2, 0),
        0x37 | 0x39 | 0x3e | 0x5e | 0xa1 => (3, 0),
        0x3c | 0xa2 => (4, 0),
        0xa3 => (5, 0),
        0xa4 => (6, 0),
        0xf0 => (3, 1),
        0xf5 => (4, 1),
        0xf4 | 0xfa => (6, 1),
        0xf1 | 0xf2 => (7, 1),
        _ => (0, 0),
    }
}

fn terminates(op: u8) -> bool {
    matches!(op, 0x00 | 0xf3 | 0xfd | 0xfe | 0xff) || !is_defined(op)
}

fn is_defined(op: u8) -> bool {
    !matches!(op, 0x0c..=0x0f | 0x1e | 0x1f | 0x21..=0x2f | 0x4b..=0x4f | 0xa5..=0xef | 0xf6..=0xf9 | 0xfb | 0xfc)
}

struct Image {
    ins: Vec<Ins>,
    index: BTreeMap<u64, usize>,
    jumpdests: BTreeSet<u64>,
}

impl Image {
    fn new(code: &[u8]) -> Image {
        let ins = disasm(code);
        let index = ins.iter().enumerate().map(|(i, x)| (x.pc, i)).collect();
        let jumpdests = ins.iter().filter(|x| x.op == 0x5b).map(|x| x.pc).collect();
        Image {
            ins,
            index,
            jumpdests,
        }
    }
}

type Exit = (u64, Vec<Val>);

/// Interpret one block from instruction `i0` with stack `st` (top last).
fn step_block(
    img: &Image,
    i0: usize,
    mut st: Vec<Val>,
    pops: &BTreeMap<u64, i32>,
    events: &mut BTreeMap<u64, Ev>,
) -> Vec<Exit> {
    let pop = |st: &mut Vec<Val>| st.pop().unwrap_or(Val::U);
    let mut i = i0;
    while i < img.ins.len() {
        let x = img.ins[i];
        if i > i0 && x.op == 0x5b {
            return vec![(x.pc, st)];
        }
        match x.op {
            0x5f..=0x7f => st.push(x.val.map_or(Val::U, Val::C)),
            0x80..=0x8f => {
                let k = (x.op - 0x80) as usize;
                let v = if st.len() > k {
                    st[st.len() - 1 - k]
                } else {
                    Val::U
                };
                st.push(v);
            }
            0x90..=0x9f => {
                let k = (x.op - 0x90) as usize + 1;
                while st.len() <= k {
                    st.insert(0, Val::U);
                }
                let n = st.len();
                st.swap(n - 1, n - 1 - k);
            }
            0x56 => {
                let t = pop(&mut st);
                let Val::C(t) = t else {
                    events.insert(x.pc, Ev::Ret);
                    return Vec::new();
                };
                let ret = st.iter().enumerate().rev().find_map(|(j, v)| match v {
                    Val::C(r) if *r != t && img.jumpdests.contains(r) => Some((j, *r)),
                    _ => None,
                });
                if let Some((j, ret)) = ret {
                    let args = (st.len() - 1 - j) as u32;
                    events.insert(
                        x.pc,
                        Ev::Call {
                            target: t,
                            ret,
                            args,
                        },
                    );
                    let Some(p) = pops.get(&t) else {
                        return vec![(ret, Vec::new())];
                    };
                    let results = (st.len() - j) as i64 - i64::from(*p);
                    if results < 0 {
                        return vec![(ret, Vec::new())];
                    }
                    let mut after = st[..j].to_vec();
                    after.extend(std::iter::repeat_n(Val::U, results as usize));
                    return vec![(ret, after)];
                }
                note_jump(events, x.pc, img.jumpdests.contains(&t).then_some(t));
                return vec![(t, st)];
            }
            0x57 => {
                let t = pop(&mut st);
                pop(&mut st);
                let mut out = Vec::new();
                match t {
                    Val::C(t) => {
                        note_jump(events, x.pc, img.jumpdests.contains(&t).then_some(t));
                        out.push((t, st.clone()));
                    }
                    Val::U => note_jump(events, x.pc, None),
                }
                if let Some(next) = img.ins.get(i + 1) {
                    out.push((next.pc, st));
                }
                return out;
            }
            op if terminates(op) => return Vec::new(),
            op => {
                let (p, q) = arity(op);
                for _ in 0..p {
                    pop(&mut st);
                }
                st.extend(std::iter::repeat_n(Val::U, q));
            }
        }
        if st.len() > MAX_DEPTH {
            st.drain(..st.len() - MAX_DEPTH);
        }
        i += 1;
    }
    Vec::new()
}

/// Record a jump's target; a site reached with two different targets, or a
/// non-constant one, has none.
fn note_jump(events: &mut BTreeMap<u64, Ev>, pc: u64, target: Option<u64>) {
    let next = match events.get(&pc) {
        Some(Ev::Jump(old)) if *old != target => Ev::Jump(None),
        Some(Ev::Jump(old)) => Ev::Jump(*old),
        _ => Ev::Jump(target),
    };
    events.insert(pc, next);
}

fn merge(a: &[Val], b: &[Val]) -> Vec<Val> {
    let n = a.len().min(b.len());
    a[a.len() - n..]
        .iter()
        .zip(&b[b.len() - n..])
        .map(|(x, y)| if x == y { *x } else { Val::U })
        .collect()
}

/// One classification pass given the callee stack effects known so far.
fn classify_pass(img: &Image, pops: &BTreeMap<u64, i32>) -> BTreeMap<u64, Ev> {
    let mut events = BTreeMap::new();
    let mut state: BTreeMap<u64, Vec<Val>> = BTreeMap::new();
    let mut entries = BTreeSet::new();
    state.insert(0, Vec::new());
    let mut work = vec![0u64];
    let mut visits = 0;
    while let Some(b) = work.pop() {
        visits += 1;
        if visits > MAX_VISITS {
            break;
        }
        let Some(&i0) = img.index.get(&b) else {
            continue;
        };
        let st = state.get(&b).cloned().unwrap_or_default();
        let before: BTreeSet<u64> = events.keys().copied().collect();
        let exits = step_block(img, i0, st, pops, &mut events);
        let mut new_entries = Vec::new();
        for (pc, ev) in &events {
            if before.contains(pc) {
                continue;
            }
            if let Ev::Call { target, .. } = ev
                && entries.insert(*target) {
                    new_entries.push(*target);
                }
        }
        for t in new_entries {
            state.insert(t, Vec::new());
            work.push(t);
        }
        for (t, st) in exits {
            if !img.index.contains_key(&t) {
                continue;
            }
            let st = if entries.contains(&t) { Vec::new() } else { st };
            match state.get(&t) {
                Some(old) => {
                    let m = merge(old, &st);
                    if &m == old {
                        continue;
                    }
                    state.insert(t, m);
                }
                None => {
                    state.insert(t, st);
                }
            }
            work.push(t);
        }
    }
    events
}

/// Words each callee's call removes, from the depth at its return jumps.
fn effects_pass(
    img: &Image,
    events: &BTreeMap<u64, Ev>,
    pops: &BTreeMap<u64, i32>,
) -> BTreeMap<u64, i32> {
    let entries: BTreeSet<u64> = events
        .values()
        .filter_map(|e| match e {
            Ev::Call { target, .. } => Some(*target),
            _ => None,
        })
        .collect();
    let mut out = pops.clone();
    for _ in 0..MAX_EFFECT_ROUNDS {
        let mut changed = false;
        for &f in &entries {
            let found = return_effect(img, events, &out, f);
            if out.get(&f).copied() != found {
                match found {
                    Some(p) => out.insert(f, p),
                    None => out.remove(&f),
                };
                changed = true;
            }
        }
        if !changed {
            break;
        }
    }
    out
}

/// Words a call to `f` removes, when every return of `f` leaves the same depth.
fn return_effect(
    img: &Image,
    events: &BTreeMap<u64, Ev>,
    pops: &BTreeMap<u64, i32>,
    f: u64,
) -> Option<i32> {
    walk_function(img, events, pops, f).0
}

/// Does no path of `f` return, with every path through it accounted for?
fn never_returns(
    img: &Image,
    events: &BTreeMap<u64, Ev>,
    pops: &BTreeMap<u64, i32>,
    f: u64,
) -> bool {
    walk_function(img, events, pops, f).1
}

/// Does every return of `f` jump through a copy of its label (`DUPn; JUMP`),
/// leaving the label itself where the caller put it?
fn keeps_label(img: &Image, events: &BTreeMap<u64, Ev>, pops: &BTreeMap<u64, i32>, f: u64) -> bool {
    walk_function(img, events, pops, f).2
}

/// Walk `f` from its entry tracking the stack depth: its stack effect when
/// every return agrees, and whether it provably never returns.
fn walk_function(
    img: &Image,
    events: &BTreeMap<u64, Ev>,
    pops: &BTreeMap<u64, i32>,
    f: u64,
) -> (Option<i32>, bool, bool, i64) {
    let mut complete = true;
    let mut lowest = 0i64;
    let mut keeps_label = true;
    {
        let mut seen: BTreeMap<u64, i64> = BTreeMap::new();
        let mut rets = BTreeSet::new();
        let mut work = vec![(f, 0i64)];
        let mut visits = 0;
        while let Some((b, d0)) = work.pop() {
            visits += 1;
            if visits > MAX_VISITS {
                complete = false;
                continue;
            }
            if seen.contains_key(&b) {
                continue;
            }
            seen.insert(b, d0);
            let Some(&i0) = img.index.get(&b) else {
                continue;
            };
            let mut d = d0;
            let mut i = i0;
            while i < img.ins.len() {
                let x = img.ins[i];
                if i > i0 && x.op == 0x5b {
                    work.push((x.pc, d));
                    break;
                }
                let reads = match x.op {
                    0x56 => 1,
                    0x57 | 0xf3 | 0xfd => 2,
                    0xff => 1,
                    0x80..=0x8f => i64::from(x.op - 0x80) + 1,
                    0x90..=0x9f => i64::from(x.op - 0x90) + 2,
                    op => arity(op).0 as i64,
                };
                lowest = lowest.min(d - reads);
                match x.op {
                    0x56 => {
                        match events.get(&x.pc) {
                            Some(Ev::Call { target, ret, .. }) => {
                                if let Some(p) = pops.get(target) {
                                    work.push((*ret, d - 1 - i64::from(*p)));
                                } else if *target != f {
                                    complete = false;
                                }
                            }
                            Some(Ev::Jump(Some(t))) => work.push((*t, d - 1)),
                            Some(Ev::Jump(None)) | None => complete = false,
                            Some(Ev::Ret) => {
                                rets.insert(d);
                                keeps_label &= i
                                    .checked_sub(1)
                                    .is_some_and(|k| (0x80..=0x8f).contains(&img.ins[k].op));
                            }
                        }
                        break;
                    }
                    0x57 => {
                        if let Some(Ev::Jump(Some(t))) = events.get(&x.pc) {
                            work.push((*t, d - 2));
                        }
                        d -= 2;
                    }
                    0x5f..=0x7f => d += 1,
                    0x80..=0x8f => d += 1,
                    0x90..=0x9f => {}
                    op if terminates(op) => break,
                    op => {
                        let (p, q) = arity(op);
                        d += q as i64 - p as i64;
                    }
                }
                i += 1;
            }
        }
        let effect = match rets.len() {
            1 => i32::try_from(1 - *rets.iter().next().expect("one return depth")).ok(),
            _ => None,
        };
        (
            effect,
            rets.is_empty() && complete,
            !rets.is_empty() && keeps_label,
            lowest,
        )
    }
}

/// Classify every `JUMP` of `code` (an EVM code image starting at offset 0).
pub fn classify(code: &[u8]) -> EvmCallMap {
    let img = Image::new(&code[..code.len().min(MAX_CODE)]);
    let mut pops = BTreeMap::new();
    let mut events = classify_pass(&img, &pops);
    for _ in 0..MAX_ROUNDS {
        let next = effects_pass(&img, &events, &pops);
        if next == pops {
            break;
        }
        pops = next;
        events = classify_pass(&img, &pops);
    }
    let mut map = EvmCallMap::default();
    let mut conflicts = BTreeSet::new();
    let final_events = events.clone();
    for (pc, ev) in events {
        match ev {
            Ev::Call { target, ret, args } => {
                let pop = pops.get(&target).copied();
                match map.functions.get(&target) {
                    Some((a, _)) if *a != args => {
                        conflicts.insert(target);
                    }
                    _ => {
                        map.functions.insert(target, (args, pop));
                    }
                }
                map.calls.insert(
                    pc,
                    EvmCall {
                        target,
                        ret,
                        args,
                        pop: pops.get(&target).copied(),
                    },
                );
            }
            Ev::Ret => {
                map.returns.insert(pc);
            }
            Ev::Jump(Some(t)) => {
                map.jumps.insert(pc, t);
            }
            Ev::Jump(None) => {}
        }
    }
    for f in conflicts {
        map.functions.remove(&f);
    }
    let mut sharers: BTreeMap<u64, Vec<u64>> = BTreeMap::new();
    for (site, t) in &map.jumps {
        sharers.entry(*t).or_default().push(*site);
    }
    let mut ret_sharers: BTreeMap<u64, usize> = BTreeMap::new();
    for c in map.calls.values() {
        *ret_sharers.entry(c.ret).or_default() += 1;
    }
    let tail_args = |t: u64| {
        let (_, never, _, lowest) = walk_function(&img, &final_events, &pops, t);
        u32::try_from(-lowest).ok().filter(|a| never && *a <= 16)
    };
    let falls_into = |t: u64| {
        img.index
            .get(&t)
            .and_then(|i| i.checked_sub(1))
            .is_some_and(|k| !matches!(img.ins[k].op, 0x56) && !terminates(img.ins[k].op))
    };
    for (t, sites) in sharers {
        let entries =
            sites.len() + ret_sharers.get(&t).copied().unwrap_or(0) + usize::from(falls_into(t));
        if entries < 2 {
            continue;
        }
        if let Some(args) = tail_args(t) {
            map.tail_args.insert(t, args);
            for site in sites {
                map.jumps.remove(&site);
                map.tails.insert(site, t);
            }
        }
    }
    for (r, n) in ret_sharers {
        if n < 2 {
            continue;
        }
        if let Some(args) = map.tail_args.get(&r).copied().or_else(|| tail_args(r)) {
            map.tail_args.insert(r, args);
            map.ret_tails.insert(r);
        }
    }
    let entries: BTreeSet<u64> = map.calls.values().map(|c| c.target).collect();
    for f in entries {
        if never_returns(&img, &final_events, &pops, f) {
            map.noreturn.insert(f);
        }
        if keeps_label(&img, &final_events, &pops, f) {
            map.keeps_label.insert(f);
        }
    }
    map
}

thread_local! {
    static MEMO: RefCell<Option<(u64, Rc<EvmCallMap>)>> = const { RefCell::new(None) };
}

fn fingerprint(code: &[u8]) -> u64 {
    code.iter().fold(0xcbf2_9ce4_8422_2325u64, |h, b| {
        (h ^ u64::from(*b)).wrapping_mul(0x0100_0000_01b3)
    }) ^ code.len() as u64
}

/// The code bytes from offset 0 of the default code space, up to the end of
/// the segment that starts there.
fn read_code(
    manage: &unlace_base::space::AddrSpaceManager,
    loader: &RefCell<Box<dyn unlace_sleigh::loadimage::LoadImage>>,
) -> Option<Vec<u8>> {
    const CHUNK: usize = 256;
    let space = Rc::clone(manage.get_default_code_space()?);
    let mut image = loader.try_borrow_mut().ok()?;
    let end = image
        .get_segments()
        .iter()
        .filter(|(lo, _, _)| *lo == 0)
        .map(|(_, hi, _)| *hi)
        .max()
        .and_then(|hi| usize::try_from(hi).ok())
        .unwrap_or(MAX_CODE)
        .min(MAX_CODE);
    let mut code = Vec::new();
    while code.len() < end {
        let mut chunk = vec![0u8; CHUNK.min(end - code.len())];
        let at = unlace_base::address::Address::new(Rc::clone(&space), code.len() as u64);
        if image.load_fill(&mut chunk, &at).is_err() {
            break;
        }
        code.extend_from_slice(&chunk);
    }
    while code.last() == Some(&0) {
        code.pop();
    }
    (!code.is_empty()).then_some(code)
}

/// The classification of the code image `loader` holds, or `None` when the
/// option is off or the language is not EVM (it has no `evmstack` space).
pub fn image_map(
    options: &crate::optionset::OptionSet,
    manage: &unlace_base::space::AddrSpaceManager,
    loader: &RefCell<Box<dyn unlace_sleigh::loadimage::LoadImage>>,
) -> Option<Rc<EvmCallMap>> {
    if !options.get::<EvmCalls>().0 || manage.get_space_by_name("evmstack").is_none() {
        return None;
    }
    let code = read_code(manage, loader)?;
    let key = fingerprint(&code);
    MEMO.with(|m| {
        if let Some((k, map)) = m.borrow().as_ref()
            && *k == key {
                return Some(Rc::clone(map));
            }
        let map = Rc::new(classify(&code));
        *m.borrow_mut() = Some((key, Rc::clone(&map)));
        Some(map)
    })
}

/// Bytes in an EVM stack word.
const WORD: i32 = 32;

/// Give call spec `i` the stack effect, arguments and results of `call`:
/// `args` words from the top of the stack in, the call removes `pop` words, and
/// the `args + 1 - pop` results are the top of the stack it leaves. A negative
/// `pop` is a callee that returns through a copy of its label (`DUP2 JUMP`, as
/// solc's getters do) and leaves the label itself below its result: with
/// `keeps_label` the results are the `args - pop` words above the label's slot.
/// A `noreturn` callee with no stack effect gets its arguments and no result.
fn shape_call(
    data: &mut Funcdata,
    i: unlace_base::types::int4,
    call: &EvmCall,
    keeps_label: bool,
    noreturn: bool,
) -> bool {
    use crate::dtype::type_metatype;
    use crate::fspec::ParameterPieces;

    let (pop, results) = match call.pop {
        Some(pop) => (
            pop,
            i64::from(call.args) + i64::from(!keeps_label) - i64::from(pop),
        ),
        None if noreturn => (0, 0),
        None => return false,
    };
    if !(0..=16).contains(&results) || call.args > 16 {
        return false;
    }
    let arch = data.get_arch();
    let Some(stack) = arch.manage().get_stack_space().cloned() else {
        return false;
    };
    let Some(types) = arch.types() else {
        return false;
    };
    let Ok(word) = types.get_base(WORD, type_metatype::TYPE_UNKNOWN) else {
        return false;
    };
    let out_ty = match results {
        0 => types.get_type_void().ok(),
        1 => Some(word.clone()),
        n => types
            .get_base(WORD * n as i32, type_metatype::TYPE_UNKNOWN)
            .ok(),
    };
    let Some(out_ty) = out_ty else { return false };
    let Some(model) = arch.eval_fp_called().or_else(|| arch.default_fp()).cloned() else {
        return false;
    };
    let fc = data.get_call_specs_mut(i);
    fc.proto_mut().set_internal(model, out_ty.clone());
    fc.proto_mut().set_extra_pop(pop * WORD);
    for slot in 0..call.args {
        let piece = ParameterPieces {
            addr: unlace_base::address::Address::new(
                Rc::clone(&stack),
                u64::from(slot) * WORD as u64,
            ),
            type_: Some(word.clone()),
            flags: 0,
        };
        fc.proto_mut()
            .set_param(slot as unlace_base::types::int4, "", &piece);
    }
    fc.proto_mut().set_input_lock(true);
    if results > 0 {
        let out = ParameterPieces {
            addr: unlace_base::address::Address::new(
                Rc::clone(&stack),
                stack.wrap_offset(i64::from(pop * WORD) as u64),
            ),
            type_: Some(out_ty),
            flags: 0,
        };
        fc.proto_mut().set_output(&out);
    }
    fc.proto_mut().set_output_lock(true);
    true
}

/// Give the function being decompiled, an internal callee, its arguments,
/// stack effect and results the same way [`shape_call`] does for a call.
fn shape_function(data: &mut Funcdata, args: u32, pop: i32, keeps_label: bool) -> bool {
    use crate::dtype::type_metatype;
    use crate::fspec::ParameterPieces;

    let results = i64::from(args) + i64::from(!keeps_label) - i64::from(pop);
    if !(0..=16).contains(&results) || args > 16 {
        return false;
    }
    let arch = data.get_arch();
    let Some(stack) = arch.manage().get_stack_space().cloned() else {
        return false;
    };
    let Some(types) = arch.types() else {
        return false;
    };
    let Ok(word) = types.get_base(WORD, type_metatype::TYPE_UNKNOWN) else {
        return false;
    };
    let out_ty = match results {
        0 => types.get_type_void().ok(),
        1 => Some(word.clone()),
        n => types
            .get_base(WORD * n as i32, type_metatype::TYPE_UNKNOWN)
            .ok(),
    };
    let Some(out_ty) = out_ty else { return false };
    let Some(model) = arch.default_fp().cloned() else {
        return false;
    };
    let proto = data.get_func_proto_mut();
    proto.set_internal(model, out_ty.clone());
    proto.set_extra_pop(pop * WORD);
    for slot in 0..args {
        let piece = ParameterPieces {
            addr: unlace_base::address::Address::new(
                Rc::clone(&stack),
                u64::from(slot) * WORD as u64,
            ),
            type_: Some(word.clone()),
            flags: 0,
        };
        proto.set_param(slot as unlace_base::types::int4, "", &piece);
    }
    proto.set_input_lock(true);
    if results > 0 {
        let out = ParameterPieces {
            addr: unlace_base::address::Address::new(
                Rc::clone(&stack),
                stack.wrap_offset(i64::from(pop * WORD) as u64),
            ),
            type_: Some(out_ty),
            flags: 0,
        };
        proto.set_output(&out);
    }
    proto.set_output_lock(true);
    true
}

/// (unlace) `ActionEvmCalls` — give each recovered EVM internal call its callee's
/// stack effect as extrapop (option `evmcalls`).
pub struct ActionEvmCalls {
    base: ActionBase,
}

impl ActionEvmCalls {
    /// Construct the action in the given group.
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionEvmCalls {
            base: ActionBase::new(0, "evmcalls", g.into()),
        })
    }
}

impl Action for ActionEvmCalls {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        if !grouplist.contains(self.get_group()) {
            return None;
        }
        Some(Box::new(ActionEvmCalls {
            base: self.base.clone(),
        }))
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        let arch = data.get_arch();
        let Some(loader) = arch.loader.as_ref() else {
            return 0;
        };
        let Some(map) = image_map(&arch.unlace_options, arch.manage(), loader) else {
            return 0;
        };
        let mut changed = 0;
        let entry = data.get_address().get_offset();
        if let Some((args, Some(pop))) = map.functions.get(&entry).copied()
            && !data.get_func_proto().is_input_locked()
                && shape_function(data, args, pop, map.keeps_label.contains(&entry))
            {
                changed += 1;
            }
        for i in 0..data.num_calls() {
            let op = data.get_call_specs(i).get_op();
            let Some(site) = data.obank().get(op).map(|o| o.get_addr().get_offset()) else {
                continue;
            };
            let entry = data.get_call_specs(i).get_entry_address().get_offset();
            let call = match map.call_at(site) {
                Some(call) if call.target == entry => *call,
                _ => match map.tail_args.get(&entry) {
                    Some(args) => EvmCall {
                        target: entry,
                        ret: site + 1,
                        args: *args,
                        pop: None,
                    },
                    None => continue,
                },
            };
            if data.get_call_specs(i).proto().is_input_locked() {
                continue;
            }
            let keeps = map.keeps_label.contains(&call.target);
            let noreturn = map.noreturn.contains(&call.target)
                || call.pop.is_none() && map.tail_args.contains_key(&call.target);
            if shape_call(data, i, &call, keeps, noreturn) {
                changed += 1;
            }
        }
        if changed != 0 { 1 } else { 0 }
    }
}

crate::unlace_flag!(
    /// (unlace `evmcalls`) Recover Solidity internal-function calls and returns in
    /// EVM bytecode. See [`crate::p2_lift::evmcalls`].
    EvmCalls,
    "evmcalls",
    "EVM internal-call recovery",
    unset: false,
    shipped: true
);

#[cfg(test)]
#[path = "evmcalls/tests.rs"]
mod tests;
