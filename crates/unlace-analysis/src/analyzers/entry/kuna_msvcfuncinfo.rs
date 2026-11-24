//! (kuna `msvceh`) MSVC C++ exception metadata, the `try`/`catch` side (x64).
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
use unlace_decomp::kuna_fasthash::{FxHashMap, FxHashSet};

use crate::pass::{AnalysisOutput, CommentFact};
use crate::rtti::models::ImageBytes;
use crate::rtti::refkind::{End, RefKind};

use super::kuna_msvceh::type_name;

/// `FuncInfo::magicNumber` values (the low 3 bits are the version).
const FH3_MAGIC_MIN: u32 = 0x1993_0520;
const FH3_MAGIC_MAX: u32 = 0x1993_0522;
const MAX_TRY_BLOCKS: u32 = 4096;
const MAX_HANDLERS: u32 = 256;
const MAX_STATES: u32 = 0x0001_0000;
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
        let Some(t) = &self.type_name else {
            return "catch (...)".to_string();
        };
        let mut s = format!("catch ({t}");
        if self.adjectives & 1 != 0 {
            s.push_str(" const");
        }
        if self.adjectives & 2 != 0 {
            s.push_str(" volatile");
        }
        if self.adjectives & 8 != 0 {
            s.push_str(" &");
        }
        s.push(')');
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
    let mut by_info = FxHashMap::<(u64, bool), Vec<u64>>::default();
    for (begin, unwind) in runtime_functions(&pe, bytes, base) {
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
        for f in funclets {
            if entries.insert(f) {
                out.entries.push(f);
            }
        }
    }
    out.entries.sort_unstable();
    out
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
pub(crate) fn runtime_functions(pe: &PeFile64, bytes: &[u8], base: u64) -> Vec<(u64, u64)> {
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
        let unwind = u32::from_le_bytes([rec[8], rec[9], rec[10], rec[11]]) as u64;
        if begin != 0 && unwind != 0 {
            v.push((base + begin, base + unwind));
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
    let b = img.read(info, 20)?;
    let w = |i: usize| u32::from_le_bytes([b[i], b[i + 1], b[i + 2], b[i + 3]]);
    if !(FH3_MAGIC_MIN..=FH3_MAGIC_MAX).contains(&w(0)) {
        return None;
    }
    let max_state = w(4);
    let (unwind_map, n_try, try_map) = (w(8), w(12), w(16));
    if max_state > MAX_STATES || n_try > MAX_TRY_BLOCKS {
        return None;
    }
    let mut out = EhFuncInfo::default();
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
    let mut out = EhFuncInfo::default();
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
mod tests {
    use super::*;

    const BASE: u64 = 0x1_4000_0000;
    const RDATA: u64 = BASE + 0x3000;

    fn rk() -> RefKind {
        RefKind::new(true, BASE, End::Little)
    }

    fn put(buf: &mut [u8], at: u64, bytes: &[u8]) {
        let o = (at - RDATA) as usize;
        buf[o..o + bytes.len()].copy_from_slice(bytes);
    }

    fn words(ws: &[u32]) -> Vec<u8> {
        ws.iter().flat_map(|w| w.to_le_bytes()).collect()
    }

    fn rdata() -> Vec<u8> {
        let mut b = vec![0u8; 0x400];
        put(&mut b, RDATA + 0x10, b".?AVruntime_error@std@@\0");
        b
    }

    #[test]
    fn fh4_unsigned_lengths() {
        let mut r = Fh4Reader::new(&[0x08, 0x05, 0x01, 0x0f, 0x78, 0x56, 0x34, 0x12]);
        assert_eq!(r.unsigned(), Some(4));
        assert_eq!(r.unsigned(), Some(0x41));
        assert_eq!(r.unsigned(), Some(0x1234_5678));
    }

    #[test]
    fn fh3_try_with_two_catches_and_a_cleanup() {
        let mut b = rdata();
        let info = RDATA + 0x100;
        put(
            &mut b,
            info,
            &words(&[0x1993_0522, 2, 0x3140, 1, 0x3160, 0, 0, 0, 0, 1]),
        );
        put(&mut b, RDATA + 0x140, &words(&[u32::MAX, 0x1500, 0, 0]));
        put(&mut b, RDATA + 0x160, &words(&[0, 0, 1, 2, 0x3180]));
        put(
            &mut b,
            RDATA + 0x180,
            &words(&[8, 0x3000, 0x28, 0x1200, 0x38]),
        );
        put(&mut b, RDATA + 0x194, &words(&[0x40, 0, 0, 0x1240, 0x38]));
        let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
        let d = decode_fh3(&img, &rk(), BASE, info).expect("decodes");
        assert_eq!(d.cleanups, vec![(0, BASE + 0x1500)]);
        assert_eq!(d.tries.len(), 1);
        let t = &d.tries[0];
        assert_eq!((t.low, t.high), (0, 0));
        assert_eq!(t.catches[0].header(), "catch (std::runtime_error &)");
        assert_eq!(t.catches[0].handler, BASE + 0x1200);
        assert_eq!(t.catches[1].header(), "catch (...)");
    }

    #[test]
    fn fh4_try_with_one_catch() {
        let mut b = rdata();
        let info = RDATA + 0x100;
        let mut fi = vec![0x10u8];
        fi.extend_from_slice(&0x3120u32.to_le_bytes());
        fi.extend_from_slice(&0x3200u32.to_le_bytes());
        put(&mut b, info, &fi);
        let mut tm = vec![1u8 << 1, 0, 2 << 1, 2 << 1];
        tm.extend_from_slice(&0x3140u32.to_le_bytes());
        put(&mut b, RDATA + 0x120, &tm);
        let mut hs = vec![1u8 << 1, 0x01 | 0x02, 8 << 1];
        hs.extend_from_slice(&0x3000u32.to_le_bytes());
        hs.extend_from_slice(&0x1200u32.to_le_bytes());
        put(&mut b, RDATA + 0x140, &hs);
        let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
        let d = decode_fh4(&img, &rk(), BASE, info).expect("decodes");
        assert!(d.cleanups.is_empty());
        assert_eq!(d.tries.len(), 1);
        assert_eq!((d.tries[0].low, d.tries[0].high), (0, 2));
        assert_eq!(
            d.tries[0].catches[0].header(),
            "catch (std::runtime_error &)"
        );
        assert_eq!(d.tries[0].catches[0].handler, BASE + 0x1200);
    }

    #[test]
    fn unwind_info_handler() {
        let mut b = rdata();
        let unwind = RDATA + 0x200;
        put(
            &mut b,
            unwind,
            &[0x09 | (0x3 << 3), 0x04, 0x01, 0x00, 0x04, 0x52, 0, 0],
        );
        put(&mut b, unwind + 8, &words(&[0x2000, 0x3100]));
        let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
        assert_eq!(
            language_handler(&img, BASE, unwind),
            Some((BASE + 0x2000, unwind + 12))
        );
        put(&mut b, unwind, &[0x01 | (0x4 << 3)]);
        let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
        assert_eq!(language_handler(&img, BASE, unwind), None);
    }

    #[test]
    fn handler_names() {
        assert_eq!(handler_kind("__CxxFrameHandler3"), Some(Handler::Fh3));
        assert_eq!(handler_kind("__GSHandlerCheck_EH4"), Some(Handler::Fh4));
        assert_eq!(handler_kind("__C_specific_handler"), None);
    }
}
