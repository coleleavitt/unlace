//! (unlace `msvceh`) MSVC C++ exception metadata, the `try`/`catch` side (x64).
//!
//! An x64 function with a C++ `try` names a language-specific handler in its
//! `UNWIND_INFO`: `__CxxFrameHandler3` or `__GSHandlerCheck_EH` with a
//! `FuncInfo` (magic `0x1993052x`), or `__CxxFrameHandler4` /
//! `__GSHandlerCheck_EH4` with the compressed FH4 `FuncInfo4`. Either form lists
//! the try blocks by state range, each with its handlers (catch type, adjectives,
//! the catch funclet), and the unwind map whose actions are cleanup funclets.
//! The funclets are separate `.pdata` functions; nothing in the parent's flow
//! reaches them, so its pseudocode shows the guarded calls and no handler.
//!
//! This pass decodes both forms and says so in headers: the parent lists each try
//! block's handlers, and each catch or cleanup funclet names its parent. Every
//! funclet is also a discovered entry. A function whose handler data is not a
//! `FuncInfo` (an SEH `__C_specific_handler` scope table) is left alone.

use object::read::pe::PeFile64;
use object::{Object, ObjectSymbol};
use unlace_decomp::fasthash::{FxHashMap, FxHashSet};

use crate::pass::{AnalysisOutput, CommentFact, FidMatch};
use crate::rtti::models::ImageBytes;
use crate::rtti::refkind::{End, RefKind};
use unlace_decomp::itaniumeh::{EhCallSite, EhClause, MsvcFunclet};

use super::msvceh::type_name;

/// `FuncInfo::magicNumber` values (the low 3 bits are the version).
const FH3_MAGIC_MIN: u32 = 0x1993_0520;
const FH3_MAGIC_MAX: u32 = 0x1993_0522;
const MAX_TRY_BLOCKS: u32 = 4096;
const MAX_HANDLERS: u32 = 256;
const MAX_STATES: u32 = 0x0001_0000;
const MAX_IP_ENTRIES: u32 = 0x0001_0000;
/// The bytes one compressed FH4 table may take before it is cut off.
const FH4_WINDOW: usize = 0x4000;

/// Which frame handler the function names.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Handler {
    /// `__CxxFrameHandler3` / `__GSHandlerCheck_EH`, or an unnamed handler whose
    /// data starts with the `FuncInfo` magic.
    Fh3,
    /// `__CxxFrameHandler4` / `__GSHandlerCheck_EH4`.
    Fh4,
}

/// One `catch` clause.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct EhCatch {
    /// `HT_IsConst` (1), `HT_IsVolatile` (2), `HT_IsReference` (8), ...
    pub adjectives: u32,
    /// The caught type; `None` for `catch (...)`.
    pub type_name: Option<String>,
    /// The catch funclet.
    pub handler: u64,
}

impl EhCatch {
    /// `catch (std::runtime_error const &)`, `catch (...)`.
    pub fn header(&self) -> String {
        format!("catch ({})", self.caught())
    }

    /// The caught declaration: `std::runtime_error const &`, `...`.
    pub fn caught(&self) -> String {
        let Some(t) = &self.type_name else {
            return "...".to_string();
        };
        let mut s = t.clone();
        if self.adjectives & 1 != 0 {
            s.push_str(" const");
        }
        if self.adjectives & 2 != 0 {
            s.push_str(" volatile");
        }
        if self.adjectives & 8 != 0 {
            s.push_str(" &");
        }
        s
    }
}

/// One try block: the states it guards and its handlers in order.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct EhTry {
    pub low: u32,
    pub high: u32,
    pub catches: Vec<EhCatch>,
}

/// A decoded `FuncInfo`: its try blocks and the cleanup funclets of its unwind map.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct EhFuncInfo {
    pub tries: Vec<EhTry>,
    /// `(state, funclet)` for each unwind action that is a funclet.
    pub cleanups: Vec<(u32, u64)>,
    /// The IP-to-state map: its RVA, its entry count (FH3; FH4 counts inline),
    /// and whether it is FH4's per-segment table (`isSeparated`).
    pub ip_map: u32,
    pub ip_count: u32,
    pub fh4: bool,
    pub separated: bool,
}

/// Header comments and funclet entries for every x64 C++ `FuncInfo`.
pub fn collect(file: &object::File, bytes: &[u8], img: &ImageBytes) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    if file.architecture() != object::Architecture::X86_64 {
        return out;
    }
    let Ok(pe) = PeFile64::parse(bytes) else {
        return out;
    };
    let base = file.relative_address_base();
    let rk = RefKind::new(true, base, End::Little);
    let handlers = handler_names(file, bytes);
    let names = parent_names(file);
    let mut named = FxHashSet::<u64>::default();
    let mut spliced = FxHashSet::<u64>::default();
    let mut by_info = FxHashMap::<(u64, bool), Vec<u64>>::default();
    let records = runtime_functions(&pe, bytes, base);
    let extents: FxHashMap<u64, (u64, u64)> =
        records.iter().map(|&(b, e, u)| (b, (e, u))).collect();
    for &(begin, _, unwind) in &records {
        let Some((handler, data)) = language_handler(img, base, unwind) else {
            continue;
        };
        let Some(info_rva) = img
            .read(data, 4)
            .map(|b| u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
        else {
            continue;
        };
        if info_rva == 0 {
            continue;
        }
        let info = base + info_rva as u64;
        let kind = match handlers.get(&handler) {
            Some(Handler::Fh4) => Handler::Fh4,
            Some(Handler::Fh3) => Handler::Fh3,
            None if is_fh3(img, info) => Handler::Fh3,
            None => continue,
        };
        if kind == Handler::Fh4 && fh4_is_catch(img, info) {
            continue;
        }
        by_info
            .entry((info, kind == Handler::Fh4))
            .or_default()
            .push(begin);
    }
    let mut infos: Vec<_> = by_info.into_iter().collect();
    infos.sort_unstable_by_key(|(k, _)| *k);
    let mut entries = FxHashSet::<u64>::default();
    for ((info, fh4), mut funcs) in infos {
        let decoded = if fh4 {
            decode_fh4(img, &rk, base, info)
        } else {
            decode_fh3(img, &rk, base, info)
        };
        let Some(decoded) = decoded else {
            continue;
        };
        let funclets: FxHashSet<u64> = decoded
            .tries
            .iter()
            .flat_map(|t| t.catches.iter().map(|c| c.handler))
            .chain(decoded.cleanups.iter().map(|&(_, f)| f))
            .collect();
        funcs.sort_unstable();
        let Some(&parent) = funcs.iter().find(|f| !funclets.contains(f)) else {
            continue;
        };
        notes(parent, &decoded, true, &mut out);
        let catches = decoded
            .tries
            .iter()
            .flat_map(|t| t.catches.iter().map(|c| c.handler));
        for (n, f) in catches.enumerate() {
            name_funclet(&names, parent, "catch", n, f, &mut named, &mut out);
        }
        for (n, &(_, f)) in decoded.cleanups.iter().enumerate() {
            name_funclet(&names, parent, "dtor", n, f, &mut named, &mut out);
        }
        if let Some(&(end, unwind)) = extents.get(&parent) {
            splice_sites(
                img,
                base,
                parent,
                end,
                unwind,
                &decoded,
                &extents,
                &mut spliced,
                &mut out,
            );
        }
        for f in funclets {
            if entries.insert(f) {
                out.entries.push(f);
            }
        }
    }
    out.entries.sort_unstable();
    out
}

/// The x64 registers by `UNWIND_INFO` number.
const X64_REGS: [&str; 16] = [
    "RAX", "RCX", "RDX", "RBX", "RSP", "RBP", "RSI", "RDI", "R8", "R9", "R10", "R11", "R12", "R13",
    "R14", "R15",
];

/// The exceptional edges of one parent: for every try block, every IP-to-state
/// region whose state the try guards gets one call-site record per catch
/// funclet (in handler order) whose `ret` continues in the parent; each such
/// funclet becomes a pad with the parent's frame register and the returns it
/// continues at. A region whose state no try guards gets a cleanup record into
/// that state's unwind funclet, whose `ret`s end the path.
#[allow(clippy::too_many_arguments)]
fn splice_sites(
    img: &ImageBytes,
    base: u64,
    parent: u64,
    end: u64,
    unwind: u64,
    info: &EhFuncInfo,
    extents: &FxHashMap<u64, (u64, u64)>,
    spliced: &mut FxHashSet<u64>,
    out: &mut AnalysisOutput,
) {
    let regions = state_regions(&ip_states(img, base, info, parent), parent, end);
    if regions.is_empty() {
        return;
    }
    let (frame_reg, frame_offset) = match img.read(unwind, 4) {
        Some(h) if h[3] & 0x0f != 0 => (
            Some(X64_REGS[(h[3] & 0x0f) as usize].to_string()),
            (h[3] >> 4) as u64 * 16,
        ),
        _ => (None, 0),
    };
    for t in &info.tries {
        for (k, c) in t.catches.iter().enumerate() {
            let Some(&(fend, _)) = extents.get(&c.handler) else {
                continue;
            };
            let returns = funclet_returns(img, c.handler, fend, parent, end);
            if returns.is_empty() && may_return(img, c.handler, fend) {
                continue;
            }
            if spliced.insert(c.handler) {
                out.msvc_funclets.push(MsvcFunclet {
                    pad: c.handler,
                    frame_reg: frame_reg.clone(),
                    frame_offset,
                    returns,
                    x86: false,
                    cleanup_end: None,
                });
            }
            let selector = k as i64 + 1;
            let clause = if c.type_name.is_some() {
                EhClause::Catch {
                    selector,
                    type_name: Some(c.caught()),
                }
            } else {
                EhClause::CatchAll { selector }
            };
            for &(lo, hi, s) in &regions {
                if s >= t.low as i32 && s <= t.high as i32 {
                    out.msvc_eh_sites.push(EhCallSite {
                        start: lo,
                        end: hi,
                        pad: c.handler,
                        clauses: vec![clause.clone()],
                    });
                }
            }
        }
    }
    let guarded = |s: i32| {
        info.tries
            .iter()
            .any(|t| s >= t.low as i32 && s <= t.high as i32)
    };
    for &(state, f) in &info.cleanups {
        let Some(&(fend, _)) = extents.get(&f) else {
            continue;
        };
        if spliced.insert(f) {
            out.msvc_funclets.push(MsvcFunclet {
                pad: f,
                frame_reg: frame_reg.clone(),
                frame_offset,
                returns: Vec::new(),
                x86: false,
                cleanup_end: Some(fend),
            });
        }
        for &(lo, hi, s) in &regions {
            if s == state as i32 && !guarded(s) {
                out.msvc_eh_sites.push(EhCallSite {
                    start: lo,
                    end: hi,
                    pad: f,
                    clauses: vec![EhClause::Cleanup],
                });
            }
        }
    }
}

/// `(ip, state)` at each transition of `info`'s IP-to-state map for the
/// function at `func`, sorted by address. FH3 entries are `{ip RVA, state}`;
/// FH4 entries are compressed `(ip delta, state + 1)` from the function start,
/// through the segment table when `isSeparated`.
pub fn ip_states(img: &ImageBytes, base: u64, info: &EhFuncInfo, func: u64) -> Vec<(u64, i32)> {
    let mut v = Vec::new();
    if info.ip_map == 0 {
        return v;
    }
    let at = base + info.ip_map as u64;
    if !info.fh4 {
        for i in 0..info.ip_count as u64 {
            let Some(e) = img.read(at + i * 8, 8) else {
                break;
            };
            let ip = u32::from_le_bytes([e[0], e[1], e[2], e[3]]);
            let state = i32::from_le_bytes([e[4], e[5], e[6], e[7]]);
            if ip != 0 {
                v.push((base + ip as u64, state));
            }
        }
    } else {
        let map = if info.separated {
            let Some(mut r) = fh4_at(img, at) else {
                return v;
            };
            let Some(n) = r.unsigned() else {
                return v;
            };
            let mut found = None;
            for _ in 0..n.min(MAX_IP_ENTRIES) {
                let (Some(start), Some(m)) = (r.int(), r.int()) else {
                    break;
                };
                if base + start as u64 == func {
                    found = Some(m);
                    break;
                }
            }
            let Some(m) = found else {
                return v;
            };
            m
        } else {
            info.ip_map
        };
        let Some(mut r) = fh4_at(img, base + map as u64) else {
            return v;
        };
        let Some(n) = r.unsigned() else {
            return v;
        };
        let mut ip = func;
        for _ in 0..n.min(MAX_IP_ENTRIES) {
            let (Some(d), Some(s)) = (r.unsigned(), r.unsigned()) else {
                break;
            };
            ip = ip.wrapping_add(d as u64);
            v.push((ip, s as i32 - 1));
        }
    }
    v.sort_by_key(|&(ip, _)| ip);
    v
}

/// `[lo, hi, state)` for each non-negative state region inside `[func, end)`.
pub fn state_regions(states: &[(u64, i32)], func: u64, end: u64) -> Vec<(u64, u64, i32)> {
    let mut out = Vec::new();
    for (i, &(ip, s)) in states.iter().enumerate() {
        let next = states.get(i + 1).map_or(end, |&(n, _)| n);
        let (lo, hi) = (ip.max(func), next.min(end));
        if s >= 0 && lo < hi {
            out.push((lo, hi, s));
        }
    }
    out
}

/// `(ret, continuation)` for each `lea rax, [rip+d]` in the funclet
/// `[start, end)` that loads an address in `[lo, hi)` and is followed only by
/// epilogue instructions (`add rsp`, `pop`) and a `ret`: where the catch
/// resumes the parent.
pub fn funclet_returns(
    img: &ImageBytes,
    start: u64,
    end: u64,
    lo: u64,
    hi: u64,
) -> Vec<(u64, u64)> {
    let mut out = Vec::new();
    let Some(code) = end
        .checked_sub(start)
        .filter(|&n| n <= 0x10000)
        .and_then(|n| img.read(start, n as usize))
    else {
        return out;
    };
    for j in 0..code.len().saturating_sub(7) {
        if code[j..j + 3] != [0x48, 0x8D, 0x05] {
            continue;
        }
        let d = i32::from_le_bytes([code[j + 3], code[j + 4], code[j + 5], code[j + 6]]);
        let cont = (start + j as u64 + 7).wrapping_add(d as i64 as u64);
        if cont < lo || cont >= hi {
            continue;
        }
        let mut k = j + 7;
        loop {
            match code.get(k..) {
                Some([0x48, 0x83, 0xC4, _, ..]) => k += 4,
                Some([0x48, 0x81, 0xC4, _, _, _, _, ..]) => k += 7,
                Some([0x41, 0x58..=0x5F, ..]) => k += 2,
                Some([0x58..=0x5F, ..]) => k += 1,
                Some([0xC3, ..]) => {
                    out.push((start + k as u64, cont));
                    break;
                }
                _ => break,
            }
        }
    }
    out
}

/// Could the funclet `[start, end)` return (a `ret` byte anywhere in it)? One
/// that cannot (a rethrow) is spliced with no continuation.
fn may_return(img: &ImageBytes, start: u64, end: u64) -> bool {
    end.checked_sub(start)
        .filter(|&n| n <= 0x10000)
        .and_then(|n| img.read(start, n as usize))
        .is_none_or(|code| code.contains(&0xC3))
}

/// The header comments of one parent and its funclets. With `separate` false
/// (x86) the handlers are blocks the runtime calls inside the parent's code, so
/// only the parent is commented.
pub(crate) fn notes(parent: u64, info: &EhFuncInfo, separate: bool, out: &mut AnalysisOutput) {
    if !separate {
        for t in &info.tries {
            let list: Vec<String> = t
                .catches
                .iter()
                .map(|c| format!("{} -> {:#x}", c.header(), c.handler))
                .collect();
            out.header_comments.push(CommentFact {
                func_addr: parent,
                addr: parent,
                text: format!(
                    "eh: try (states {}-{}): {}; the handler blocks are not shown",
                    t.low,
                    t.high,
                    list.join(", ")
                ),
            });
        }
        if !info.cleanups.is_empty() {
            out.header_comments.push(CommentFact {
                func_addr: parent,
                addr: parent,
                text: format!(
                    "eh: {} unwind actions run destructors when an exception passes",
                    info.cleanups.len()
                ),
            });
        }
        return;
    }
    for t in &info.tries {
        let list: Vec<String> = t
            .catches
            .iter()
            .map(|c| format!("{} -> {:#x}", c.header(), c.handler))
            .collect();
        out.header_comments.push(CommentFact {
            func_addr: parent,
            addr: parent,
            text: format!(
                "eh: try (states {}-{}): {}; the handlers are separate funclets",
                t.low,
                t.high,
                list.join(", ")
            ),
        });
        for c in &t.catches {
            out.header_comments.push(CommentFact {
                func_addr: c.handler,
                addr: c.handler,
                text: format!(
                    "eh: {} handler of {parent:#x} (try states {}-{})",
                    c.header(),
                    t.low,
                    t.high
                ),
            });
        }
    }
    if !info.cleanups.is_empty() {
        out.header_comments.push(CommentFact {
            func_addr: parent,
            addr: parent,
            text: format!(
                "eh: {} unwind funclets run destructors when an exception passes",
                info.cleanups.len()
            ),
        });
    }
    for &(state, f) in &info.cleanups {
        out.header_comments.push(CommentFact {
            func_addr: f,
            addr: f,
            text: format!("eh: unwind funclet of {parent:#x} (state {state})"),
        });
    }
}

/// The image's own names for function starts: its symbols, then its exports.
pub(crate) fn parent_names(file: &object::File) -> FxHashMap<u64, String> {
    let mut m = FxHashMap::default();
    for s in file.symbols() {
        if let Ok(name) = s.name()
            && !name.is_empty()
        {
            m.entry(s.address()).or_insert_with(|| name.to_string());
        }
    }
    for e in file.exports().unwrap_or_default() {
        if let Ok(name) = std::str::from_utf8(e.name()) {
            m.entry(e.address()).or_insert_with(|| name.to_string());
        }
    }
    m
}

/// `<parent>$<kind>$<n>`, MSVC's and IDA's funclet naming; an unnamed parent
/// is `sub_<addr>`.
pub fn funclet_name(names: &FxHashMap<u64, String>, parent: u64, kind: &str, n: usize) -> String {
    match names.get(&parent) {
        Some(p) => format!("{p}${kind}${n}"),
        None => format!("sub_{parent:x}${kind}${n}"),
    }
}

/// Rename the funclet `f` (a placeholder only) once, as the `n`-th `kind` of `parent`.
pub(crate) fn name_funclet(
    names: &FxHashMap<u64, String>,
    parent: u64,
    kind: &str,
    n: usize,
    f: u64,
    named: &mut FxHashSet<u64>,
    out: &mut AnalysisOutput,
) {
    if f == parent || names.contains_key(&f) || !named.insert(f) {
        return;
    }
    out.fid_names.push(FidMatch {
        addr: f,
        name: funclet_name(names, parent, kind, n),
        by_signature: false,
    });
}

/// Which frame handler each import slot, thunk or named symbol is.
fn handler_names(file: &object::File, bytes: &[u8]) -> FxHashMap<u64, Handler> {
    let mut m = FxHashMap::default();
    for s in crate::loader::pe_iat::resolve_pe_imports(file, bytes) {
        if let Some(h) = std::str::from_utf8(&s.name).ok().and_then(handler_kind) {
            m.insert(s.addr, h);
        }
    }
    for s in file.symbols() {
        if let Some(h) = s.name().ok().and_then(handler_kind) {
            m.entry(s.address()).or_insert(h);
        }
    }
    m
}

/// `__CxxFrameHandler3` -> FH3, `__GSHandlerCheck_EH4` -> FH4, other names -> None.
pub fn handler_kind(name: &str) -> Option<Handler> {
    let n = name.trim_start_matches('_');
    let n = n.split('@').next().unwrap_or(n);
    match n {
        "CxxFrameHandler3" | "CxxFrameHandler2" | "CxxFrameHandler" | "GSHandlerCheck_EH" => {
            Some(Handler::Fh3)
        }
        "CxxFrameHandler4" | "GSHandlerCheck_EH4" => Some(Handler::Fh4),
        _ => None,
    }
}

/// `(BeginAddress, UNWIND_INFO)` of every x64 `RUNTIME_FUNCTION`, as addresses.
pub(crate) fn runtime_functions(pe: &PeFile64, bytes: &[u8], base: u64) -> Vec<(u64, u64, u64)> {
    let Some(dir) = pe
        .data_directories()
        .get(object::pe::IMAGE_DIRECTORY_ENTRY_EXCEPTION)
    else {
        return Vec::new();
    };
    let Ok(data) = dir.data(bytes, &pe.section_table()) else {
        return Vec::new();
    };
    let mut v = Vec::new();
    for rec in data.chunks_exact(12) {
        let begin = u32::from_le_bytes([rec[0], rec[1], rec[2], rec[3]]) as u64;
        let end = u32::from_le_bytes([rec[4], rec[5], rec[6], rec[7]]) as u64;
        let unwind = u32::from_le_bytes([rec[8], rec[9], rec[10], rec[11]]) as u64;
        if begin != 0 && unwind != 0 && end > begin {
            v.push((base + begin, base + end, base + unwind));
        }
    }
    v
}

/// The handler address and handler-data address of an `UNWIND_INFO` that has an
/// exception or termination handler and is not chained.
pub fn language_handler(img: &ImageBytes, base: u64, unwind: u64) -> Option<(u64, u64)> {
    let head = img.read(unwind, 4)?;
    let flags = head[0] >> 3;
    if flags & 0x3 == 0 || flags & 0x4 != 0 {
        return None;
    }
    let codes = (head[2] as u64 + 1) & !1;
    let at = unwind + 4 + codes * 2;
    let h = img.read(at, 4)?;
    let handler = u32::from_le_bytes([h[0], h[1], h[2], h[3]]) as u64;
    (handler != 0).then_some((base + handler, at + 4))
}

pub(crate) fn is_fh3(img: &ImageBytes, info: u64) -> bool {
    img.read(info, 4)
        .map(|b| u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
        .is_some_and(|m| (FH3_MAGIC_MIN..=FH3_MAGIC_MAX).contains(&m))
}

fn rd32(img: &ImageBytes, at: u64) -> Option<u32> {
    img.read(at, 4)
        .map(|b| u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
}

/// The caught type of a handler whose `dispType` is `td_rva`.
fn caught_type(img: &ImageBytes, rk: &RefKind, base: u64, td_rva: u32) -> Option<String> {
    if td_rva == 0 {
        return None;
    }
    let td = base + td_rva as u64;
    let name = img.read_cstr(td + rk.type_descriptor_name_offset(), 1024)?;
    let ok = name.starts_with('.') && name.bytes().all(|b| b.is_ascii_graphic());
    Some(if ok {
        type_name(&name)
    } else {
        format!("{td:#x}")
    })
}

/// The `FuncInfo` at `info`: x64 references are RVAs from `base`, x86 ones
/// absolute addresses (`base` 0), and an x86 `HandlerType` is 16 bytes, not 20.
pub fn decode_fh3(img: &ImageBytes, rk: &RefKind, base: u64, info: u64) -> Option<EhFuncInfo> {
    let b = img.read(info, 28)?;
    let w = |i: usize| u32::from_le_bytes([b[i], b[i + 1], b[i + 2], b[i + 3]]);
    if !(FH3_MAGIC_MIN..=FH3_MAGIC_MAX).contains(&w(0)) {
        return None;
    }
    let max_state = w(4);
    let (unwind_map, n_try, try_map) = (w(8), w(12), w(16));
    if max_state > MAX_STATES || n_try > MAX_TRY_BLOCKS || w(20) > MAX_IP_ENTRIES {
        return None;
    }
    let mut out = EhFuncInfo {
        ip_count: w(20),
        ip_map: w(24),
        ..EhFuncInfo::default()
    };
    if unwind_map != 0 {
        for state in 0..max_state {
            let e = base + unwind_map as u64 + state as u64 * 8;
            let action = rd32(img, e + 4)?;
            if action != 0 {
                out.cleanups.push((state, base + action as u64));
            }
        }
    }
    for i in 0..n_try as u64 {
        let e = img.read(base + try_map as u64 + i * 20, 20)?;
        let f = |o: usize| u32::from_le_bytes([e[o], e[o + 1], e[o + 2], e[o + 3]]);
        let (low, high, n_catch, handlers) = (f(0), f(4), f(12), f(16));
        if n_catch > MAX_HANDLERS {
            return None;
        }
        let mut catches = Vec::new();
        for k in 0..n_catch as u64 {
            let stride = if rk.is64 { 20 } else { 16 };
            let h = img.read(base + handlers as u64 + k * stride, 16)?;
            let g = |o: usize| u32::from_le_bytes([h[o], h[o + 1], h[o + 2], h[o + 3]]);
            if g(12) == 0 {
                continue;
            }
            catches.push(EhCatch {
                adjectives: g(0),
                type_name: caught_type(img, rk, base, g(4)),
                handler: base + g(12) as u64,
            });
        }
        out.tries.push(EhTry { low, high, catches });
    }
    Some(out)
}

/// A cursor over FH4's compressed encoding.
pub struct Fh4Reader<'a> {
    b: &'a [u8],
    p: usize,
}

impl<'a> Fh4Reader<'a> {
    pub fn new(b: &'a [u8]) -> Self {
        Fh4Reader { b, p: 0 }
    }

    pub fn byte(&mut self) -> Option<u8> {
        let v = *self.b.get(self.p)?;
        self.p += 1;
        Some(v)
    }

    /// `ReadInt`: four little-endian bytes.
    pub fn int(&mut self) -> Option<u32> {
        let s = self.b.get(self.p..self.p + 4)?;
        self.p += 4;
        Some(u32::from_le_bytes([s[0], s[1], s[2], s[3]]))
    }

    /// `ReadUnsigned`: the low bits of the first byte give the length (`0`: 1
    /// byte, `01`: 2, `011`: 3, `0111`: 4, `1111`: a 4-byte value follows).
    pub fn unsigned(&mut self) -> Option<u32> {
        let first = *self.b.get(self.p)?;
        let len = if first & 1 == 0 {
            1
        } else if first & 3 == 1 {
            2
        } else if first & 7 == 3 {
            3
        } else if first & 15 == 7 {
            4
        } else {
            5
        };
        let s = self.b.get(self.p..self.p + len)?;
        self.p += len;
        if len == 5 {
            return Some(u32::from_le_bytes([s[1], s[2], s[3], s[4]]));
        }
        let mut v = 0u64;
        for (i, &x) in s.iter().enumerate() {
            v |= (x as u64) << (8 * i);
        }
        Some((v >> len) as u32)
    }
}

fn fh4_at<'a>(img: &ImageBytes<'a>, at: u64) -> Option<Fh4Reader<'a>> {
    Some(Fh4Reader::new(img.read_up_to(at, FH4_WINDOW)?))
}

/// Does the FH4 `FuncInfo4` at `info` describe a catch funclet (`isCatch`)?
fn fh4_is_catch(img: &ImageBytes, info: u64) -> bool {
    img.read(info, 1).is_some_and(|b| b[0] & 1 != 0)
}

/// The compressed FH4 `FuncInfo4` at `info` (`ehdata4_export.h`).
pub fn decode_fh4(img: &ImageBytes, rk: &RefKind, base: u64, info: u64) -> Option<EhFuncInfo> {
    let mut r = fh4_at(img, info)?;
    let header = r.byte()?;
    if header & 0x80 != 0 {
        return None;
    }
    if header & 0x04 != 0 {
        r.unsigned()?;
    }
    let unwind_map = if header & 0x08 != 0 { r.int()? } else { 0 };
    let try_map = if header & 0x10 != 0 { r.int()? } else { 0 };
    let mut out = EhFuncInfo {
        ip_map: r.int()?,
        fh4: true,
        separated: header & 0x02 != 0,
        ..EhFuncInfo::default()
    };
    if unwind_map != 0 {
        let mut u = fh4_at(img, base + unwind_map as u64)?;
        let n = u.unsigned()?;
        if n > MAX_STATES {
            return None;
        }
        for state in 0..n {
            let next = u.unsigned()?;
            match next & 3 {
                0 => {}
                3 => {
                    let action = u.int()?;
                    if action != 0 {
                        out.cleanups.push((state, base + action as u64));
                    }
                }
                _ => {
                    u.int()?;
                    u.unsigned()?;
                }
            }
        }
    }
    if try_map != 0 {
        let mut t = fh4_at(img, base + try_map as u64)?;
        let n = t.unsigned()?;
        if n > MAX_TRY_BLOCKS {
            return None;
        }
        for _ in 0..n {
            let low = t.unsigned()?;
            let high = t.unsigned()?;
            t.unsigned()?;
            let handlers = t.int()?;
            let mut h = fh4_at(img, base + handlers as u64)?;
            let count = h.unsigned()?;
            if count > MAX_HANDLERS {
                return None;
            }
            let mut catches = Vec::new();
            for _ in 0..count {
                let flags = h.byte()?;
                let adjectives = if flags & 0x01 != 0 { h.unsigned()? } else { 0 };
                let td = if flags & 0x02 != 0 { h.int()? } else { 0 };
                if flags & 0x04 != 0 {
                    h.unsigned()?;
                }
                let handler = h.int()?;
                for _ in 0..(flags >> 4) & 3 {
                    if flags & 0x08 != 0 {
                        h.int()?;
                    } else {
                        h.unsigned()?;
                    }
                }
                if handler != 0 {
                    catches.push(EhCatch {
                        adjectives,
                        type_name: caught_type(img, rk, base, td),
                        handler: base + handler as u64,
                    });
                }
            }
            out.tries.push(EhTry { low, high, catches });
        }
    }
    Some(out)
}

#[cfg(test)]
mod tests;
