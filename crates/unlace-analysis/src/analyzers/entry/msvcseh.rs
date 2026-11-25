//! (unlace `msvceh`) MSVC structured exception handling scope tables, and x86 C++
//! `FuncInfo`.
//!
//! A `__try` block's filter and handler are reached only by the exception
//! dispatcher, so the function's pseudocode shows the guarded code and nothing
//! of `__except` or `__finally`. Each form says where they are:
//!
//! - x64: an `UNWIND_INFO` naming `__C_specific_handler` carries a scope table,
//!   `{Count; {Begin, End, Handler, JumpTarget}[Count]}` (RVAs). `JumpTarget` 0
//!   is a `__finally` whose funclet is `Handler`; otherwise `Handler` is the
//!   filter funclet (or 1, `EXCEPTION_EXECUTE_HANDLER`) and `JumpTarget` the
//!   `__except` block inside the function.
//! - x86: the prologue pushes the scope table with the frame handler:
//!   `push -2; push table; push __except_handler4` (SEH4, `push -1` for SEH3), or
//!   `push size; push table; call __SEH_prolog4`. An SEH4 table starts with four
//!   cookie offsets; each record is `{EnclosingLevel, Filter, Handler}`, a null
//!   filter marking `__finally`.
//! - x86 C++: the prologue pushes a handler stub (`push -1; push stub; mov eax,
//!   fs:[0]`, or `mov eax, stub; call __EH_prolog3`) whose tail is
//!   `mov eax, FuncInfo; jmp __CxxFrameHandler3`; the `FuncInfo` is read as on x64
//!   with absolute references.
//!
//! Each becomes header comments, and on x64 each filter and `__finally` funclet
//! names its parent and is a discovered entry.

use object::Object;
use object::read::pe::PeFile64;
use unlace_decomp::fasthash::FxHashSet;

use crate::pass::{AnalysisOutput, CommentFact};
use crate::rtti::models::ImageBytes;
use crate::rtti::refkind::{End, RefKind};
use crate::rtti::vftable::TextRanges;
use unlace_decomp::itaniumeh::{EhCallSite, EhClause, MsvcFunclet};

use super::msvcfuncinfo::{
    decode_fh3, funclet_name, is_fh3, language_handler, name_funclet, notes, parent_names,
    runtime_functions,
};

/// Most scope records one table is read for.
const MAX_SCOPES: u32 = 64;
/// How far before a handler stub's `mov eax, FuncInfo` its entry may be.
const STUB_SPAN: u64 = 48;
const TRYLEVEL_NONE4: u32 = 0xFFFF_FFFE;
const TRYLEVEL_NONE3: u32 = 0xFFFF_FFFF;

/// One `__try` scope.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SehScope {
    /// x64: the guarded range; x86: `None` (the code sets the try level).
    pub range: Option<(u64, u64)>,
    /// x86: the enclosing try level, `None` at the outermost.
    pub enclosing: Option<u32>,
    pub kind: SehKind,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SehKind {
    /// `__except`: the filter (a funclet or block, or a constant filter
    /// expression), then the handler block.
    Except { filter: Filter, handler: u64 },
    /// `__finally` with its termination handler.
    Finally { handler: u64 },
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Filter {
    Code(u64),
    Constant(i32),
}

impl SehScope {
    pub fn describe(&self) -> String {
        let head = match (self.range, self.enclosing) {
            (Some((b, e)), _) => format!("__try [{b:#x}, {e:#x})"),
            (None, Some(l)) => format!("__try (inside level {l})"),
            (None, None) => "__try".to_string(),
        };
        match &self.kind {
            SehKind::Except { filter, handler } => {
                let f = match filter {
                    Filter::Code(a) => format!("filter {a:#x}"),
                    Filter::Constant(c) => constant_filter(*c),
                };
                format!("{head}: __except ({f}) -> {handler:#x}")
            }
            SehKind::Finally { handler } => format!("{head}: __finally {handler:#x}"),
        }
    }
}

/// The pass body for x64 SEH, x86 SEH and x86 C++ `FuncInfo`.
pub fn collect(
    file: &object::File,
    bytes: &[u8],
    img: &ImageBytes,
    code: &[(u64, &[u8])],
) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    let text = TextRanges::new(file);
    match file.architecture() {
        object::Architecture::X86_64 => x64_scopes(file, bytes, img, &mut out),
        object::Architecture::I386 => {
            for (func, scopes) in x86_seh(img, &text, code) {
                scope_notes(func, &scopes, false, &mut out);
                x86_seh_splice(code, func, &scopes, &mut out);
            }
            let rk = RefKind::new(false, 0, End::Little);
            let mut spliced = FxHashSet::<u64>::default();
            for (func, info) in x86_funcinfos(img, code) {
                if let Some(decoded) = decode_fh3(img, &rk, 0, info) {
                    notes(func, &decoded, false, &mut out);
                    x86_splice(code, func, &decoded, &mut spliced, &mut out);
                }
            }
        }
        _ => {}
    }
    out
}

fn scope_notes(func: u64, scopes: &[SehScope], separate: bool, out: &mut AnalysisOutput) {
    let tail = if separate {
        "the filter and __finally bodies are separate funclets"
    } else {
        "the filter and handler blocks are not shown"
    };
    for (i, s) in scopes.iter().enumerate() {
        let level = if separate {
            String::new()
        } else {
            format!(" (level {i})")
        };
        out.header_comments.push(CommentFact {
            func_addr: func,
            addr: func,
            text: format!("seh{level}: {}; {tail}", s.describe()),
        });
    }
}

/// x64 `__C_specific_handler` scope tables.
fn x64_scopes(file: &object::File, bytes: &[u8], img: &ImageBytes, out: &mut AnalysisOutput) {
    let Ok(pe) = PeFile64::parse(bytes) else {
        return;
    };
    let base = file.relative_address_base();
    let handlers: FxHashSet<u64> = crate::loader::pe_iat::resolve_pe_imports(file, bytes)
        .into_iter()
        .filter(|s| std::str::from_utf8(&s.name).is_ok_and(is_c_specific_handler))
        .map(|s| s.addr)
        .collect();
    if handlers.is_empty() {
        return;
    }
    let names = parent_names(file);
    let mut named = FxHashSet::<u64>::default();
    let mut entries = FxHashSet::<u64>::default();
    let records = runtime_functions(&pe, bytes, base);
    let ends: unlace_decomp::fasthash::FxHashMap<u64, u64> =
        records.iter().map(|&(b, e, _)| (b, e)).collect();
    let mut finals = FxHashSet::<u64>::default();
    for &(func, _, unwind) in &records {
        let Some((handler, data)) = language_handler(img, base, unwind) else {
            continue;
        };
        if !handlers.contains(&handler) {
            continue;
        }
        let Some(scopes) = x64_scope_table(img, base, data) else {
            continue;
        };
        scope_notes(func, &scopes, true, out);
        finally_pads(img, func, unwind, &scopes, &ends, &mut finals, out);
        let mut code_filters = 0usize;
        for s in &scopes {
            let (Some((start, end)), SehKind::Except { filter, handler }) = (s.range, &s.kind)
            else {
                continue;
            };
            let f = match filter {
                Filter::Code(_) => {
                    code_filters += 1;
                    funclet_name(&names, func, "filt", code_filters - 1)
                }
                Filter::Constant(c) => constant_filter(*c),
            };
            out.eh_call_sites.push(EhCallSite {
                start,
                end,
                pad: *handler,
                clauses: vec![EhClause::Catch {
                    selector: 1,
                    type_name: Some(format!("__except ({f})")),
                }],
            });
        }
        let (mut filters, mut finallys) = (0usize, 0usize);
        for s in &scopes {
            let funclet = match s.kind {
                SehKind::Except {
                    filter: Filter::Code(f),
                    ..
                } => {
                    filters += 1;
                    name_funclet(&names, func, "filt", filters - 1, f, &mut named, out);
                    (f, "__except filter")
                }
                SehKind::Finally { handler } => {
                    finallys += 1;
                    name_funclet(&names, func, "fin", finallys - 1, handler, &mut named, out);
                    (handler, "__finally funclet")
                }
                _ => continue,
            };
            out.header_comments.push(CommentFact {
                func_addr: funclet.0,
                addr: funclet.0,
                text: format!("seh: {} of {func:#x}", funclet.1),
            });
            if entries.insert(funclet.0) {
                out.entries.push(funclet.0);
            }
        }
    }
}

/// (unlace `msvceh`) Each x64 `__finally` funclet as a cleanup pad of its scope:
/// one cleanup record over the guarded range, entered with the parent's frame
/// like a catch funclet, its `ret`s ending the path (the exception propagates).
fn finally_pads(
    img: &ImageBytes,
    func: u64,
    unwind: u64,
    scopes: &[SehScope],
    ends: &unlace_decomp::fasthash::FxHashMap<u64, u64>,
    finals: &mut FxHashSet<u64>,
    out: &mut AnalysisOutput,
) {
    let (frame_reg, frame_offset) = match img.read(unwind, 4) {
        Some(h) if h[3] & 0x0f != 0 => (
            Some(X64_REG_NAMES[(h[3] & 0x0f) as usize].to_string()),
            (h[3] >> 4) as u64 * 16,
        ),
        _ => (None, 0),
    };
    for s in scopes {
        let (Some((start, end)), SehKind::Finally { handler }) = (s.range, &s.kind) else {
            continue;
        };
        let Some(&fend) = ends.get(handler) else {
            continue;
        };
        if finals.insert(*handler) {
            out.msvc_funclets.push(MsvcFunclet {
                pad: *handler,
                frame_reg: frame_reg.clone(),
                frame_offset,
                returns: Vec::new(),
                x86: false,
                cleanup_end: Some(fend),
            });
        }
        out.msvc_eh_sites.push(EhCallSite {
            start,
            end,
            pad: *handler,
            clauses: vec![EhClause::Cleanup],
        });
    }
}

/// The x64 registers by `UNWIND_INFO` number.
const X64_REG_NAMES: [&str; 16] = [
    "RAX", "RCX", "RDX", "RBX", "RSP", "RBP", "RSI", "RDI", "R8", "R9", "R10", "R11", "R12", "R13",
    "R14", "R15",
];

/// A constant filter expression by its `excpt.h` name.
pub fn constant_filter(c: i32) -> String {
    match c {
        1 => "EXCEPTION_EXECUTE_HANDLER".to_string(),
        0 => "EXCEPTION_CONTINUE_SEARCH".to_string(),
        -1 => "EXCEPTION_CONTINUE_EXECUTION".to_string(),
        c => format!("{c}"),
    }
}

/// (unlace `msvceh`) The x86 C++ try regions of `func` as call-site records whose
/// pads are its catch blocks. x86 keeps the EH state in `[ebp-4]`, so the regions
/// come from the state stores between the function start and its first catch
/// block (or 16 KiB), in layout order; a catch block is used when it ends in
/// `mov eax, <continuation in the function>; ret`.
fn x86_splice(
    code: &[(u64, &[u8])],
    func: u64,
    info: &super::msvcfuncinfo::EhFuncInfo,
    spliced: &mut FxHashSet<u64>,
    out: &mut AnalysisOutput,
) {
    let Some(&(base, data)) = code
        .iter()
        .find(|&&(b, d)| func >= b && func - b < d.len() as u64)
    else {
        return;
    };
    let handlers: Vec<u64> = info
        .tries
        .iter()
        .flat_map(|t| t.catches.iter().map(|c| c.handler))
        .collect();
    let end = handlers
        .iter()
        .copied()
        .filter(|&h| h > func)
        .min()
        .unwrap_or(func + 0x4000)
        .min(base + data.len() as u64)
        .min(func + 0x4000);
    let body = &data[(func - base) as usize..(end - base) as usize];
    let mut states = vec![(func, -1)];
    states.extend(x86_state_stores(body, func));
    let regions = super::msvcfuncinfo::state_regions(&states, func, end);
    if regions.is_empty() {
        return;
    }
    for t in &info.tries {
        for (k, c) in t.catches.iter().enumerate() {
            let Some(off) = c
                .handler
                .checked_sub(base)
                .filter(|&o| o < data.len() as u64)
            else {
                continue;
            };
            let window = &data[off as usize..(off as usize + 0x1000).min(data.len())];
            let returns = x86_handler_returns(window, c.handler, func, end);
            if returns.is_empty() {
                continue;
            }
            if spliced.insert(c.handler) {
                out.msvc_funclets.push(MsvcFunclet {
                    pad: c.handler,
                    frame_reg: None,
                    frame_offset: 0,
                    returns,
                    x86: true,
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
}

/// (unlace `msvceh`) x86 SEH `__except` blocks as pads. The SEH3/SEH4 frame keeps
/// the try level in `[ebp-4]` too, so the regions come from the same stores,
/// between the function start (outside every level) and its first filter or
/// handler block (at most 16 KiB). A region at level `n` gets one call-site
/// record per level from `n` out through its enclosing levels, innermost first:
/// an `__except` block (in the function, entered with the stack pointer the
/// block restores itself) or a `__finally` routine, which the runtime calls, so
/// it is a cleanup pad whose `ret` ends the path.
fn x86_seh_splice(code: &[(u64, &[u8])], func: u64, scopes: &[SehScope], out: &mut AnalysisOutput) {
    let Some(&(base, data)) = code
        .iter()
        .find(|&&(b, d)| func >= b && func - b < d.len() as u64)
    else {
        return;
    };
    let end = scopes
        .iter()
        .flat_map(|s| match s.kind {
            SehKind::Except {
                filter: Filter::Code(f),
                handler,
            } => vec![f, handler],
            SehKind::Except { handler, .. } => vec![handler],
            SehKind::Finally { handler } => vec![handler],
        })
        .filter(|&a| a > func)
        .min()
        .unwrap_or(func + 0x4000)
        .min(base + data.len() as u64)
        .min(func + 0x4000);
    let body = &data[(func - base) as usize..(end - base) as usize];
    let mut states = vec![(func, -1)];
    states.extend(x86_state_stores(body, func));
    let mut finals = FxHashSet::<u64>::default();
    for (lo, hi, level) in super::msvcfuncinfo::state_regions(&states, func, end) {
        for scope in x86_level_chain(scopes, level as usize) {
            let (pad, clause) = match scope.kind {
                SehKind::Except { filter, handler } => {
                    let f = match filter {
                        Filter::Code(a) => format!("filter {a:#x}"),
                        Filter::Constant(c) => constant_filter(c),
                    };
                    let clause = EhClause::Catch {
                        selector: 1,
                        type_name: Some(format!("__except ({f})")),
                    };
                    (handler, clause)
                }
                SehKind::Finally { handler } => {
                    let Some(fend) = x86_routine_end(data, base, handler) else {
                        continue;
                    };
                    if finals.insert(handler) {
                        out.msvc_funclets.push(MsvcFunclet {
                            pad: handler,
                            frame_reg: None,
                            frame_offset: 0,
                            returns: Vec::new(),
                            x86: true,
                            cleanup_end: Some(fend),
                        });
                    }
                    (handler, EhClause::Cleanup)
                }
            };
            out.msvc_eh_sites.push(EhCallSite {
                start: lo,
                end: hi,
                pad,
                clauses: vec![clause],
            });
        }
    }
}

/// The scope record at `level` and every level enclosing it, innermost first.
pub fn x86_level_chain(scopes: &[SehScope], level: usize) -> Vec<&SehScope> {
    let mut chain = Vec::new();
    let mut at = Some(level);
    while let Some(n) = at {
        let Some(scope) = scopes.get(n) else {
            break;
        };
        if chain.len() > scopes.len() {
            break;
        }
        chain.push(scope);
        at = scope.enclosing.map(|e| e as usize).filter(|&e| e < n);
    }
    chain
}

/// The end (after its first `ret`) of the x86 `__finally` routine at `start`,
/// within 1 KiB.
fn x86_routine_end(data: &[u8], base: u64, start: u64) -> Option<u64> {
    let off = start.checked_sub(base)? as usize;
    let window = data.get(off..(off + 0x400).min(data.len()))?;
    let ret = window.iter().position(|&b| b == 0xC3)?;
    Some(start + ret as u64 + 1)
}

/// `(address after the store, state)` for each x86 EH state store in `code`
/// (at `base`): `mov dword [ebp-4], imm32`, `mov byte [ebp-4], imm8`,
/// `and dword [ebp-4], 0`, `or dword [ebp-4], -1`.
pub fn x86_state_stores(code: &[u8], base: u64) -> Vec<(u64, i32)> {
    let mut v = Vec::new();
    let mut i = 0usize;
    while i < code.len() {
        let hit = match &code[i..] {
            [0xC7, 0x45, 0xFC, a, b, c, d, ..] => Some((7, i32::from_le_bytes([*a, *b, *c, *d]))),
            [0xC6, 0x45, 0xFC, a, ..] => Some((4, *a as i8 as i32)),
            [0x83, 0x65, 0xFC, 0x00, ..] => Some((4, 0)),
            [0x83, 0x4D, 0xFC, 0xFF, ..] => Some((4, -1)),
            _ => None,
        };
        match hit {
            Some((len, state)) => {
                v.push((base + (i + len) as u64, state));
                i += len;
            }
            None => i += 1,
        }
    }
    v
}

/// `(ret, continuation)` for each `mov eax, imm32; ret` in an x86 catch block
/// (`window` at `start`) whose immediate lies in `[lo, hi)`.
pub fn x86_handler_returns(window: &[u8], start: u64, lo: u64, hi: u64) -> Vec<(u64, u64)> {
    let mut out = Vec::new();
    for j in 0..window.len().saturating_sub(5) {
        if window[j] != 0xB8 || window[j + 5] != 0xC3 {
            continue;
        }
        let cont =
            u32::from_le_bytes([window[j + 1], window[j + 2], window[j + 3], window[j + 4]]) as u64;
        if cont >= lo && cont < hi {
            out.push((start + j as u64 + 5, cont));
            break;
        }
    }
    out
}

/// `__C_specific_handler`, with or without leading underscores.
pub fn is_c_specific_handler(name: &str) -> bool {
    name.trim_start_matches('_') == "C_specific_handler"
}

/// The x64 `SCOPE_TABLE` at `data`.
pub fn x64_scope_table(img: &ImageBytes, base: u64, data: u64) -> Option<Vec<SehScope>> {
    let count = rd(img, data)?;
    if count == 0 || count > MAX_SCOPES {
        return None;
    }
    let mut v = Vec::new();
    for i in 0..count as u64 {
        let r = img.read(data + 4 + i * 16, 16)?;
        let w = |o: usize| u32::from_le_bytes([r[o], r[o + 1], r[o + 2], r[o + 3]]);
        let (begin, end, handler, jump) = (w(0), w(4), w(8), w(12));
        if begin == 0 || end <= begin {
            return None;
        }
        let kind = if jump == 0 {
            if handler == 0 {
                return None;
            }
            SehKind::Finally {
                handler: base + handler as u64,
            }
        } else {
            let filter = if handler < 0x10 || handler >= 0xFFFF_FFF0 {
                Filter::Constant(handler as i32)
            } else {
                Filter::Code(base + handler as u64)
            };
            SehKind::Except {
                filter,
                handler: base + jump as u64,
            }
        };
        v.push(SehScope {
            range: Some((base + begin as u64, base + end as u64)),
            enclosing: None,
            kind,
        });
    }
    Some(v)
}

fn rd(img: &ImageBytes, at: u64) -> Option<u32> {
    img.read(at, 4)
        .map(|b| u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
}

fn u32_at(b: &[u8], i: usize) -> Option<u32> {
    let s = b.get(i..i + 4)?;
    Some(u32::from_le_bytes([s[0], s[1], s[2], s[3]]))
}

/// Every x86 SEH3/SEH4 prologue in `code` with its scope table, by function.
pub fn x86_seh(
    img: &ImageBytes,
    text: &TextRanges,
    code: &[(u64, &[u8])],
) -> Vec<(u64, Vec<SehScope>)> {
    let mut out = Vec::new();
    let mut seen = FxHashSet::<u64>::default();
    for &(base, data) in code {
        for i in 0..data.len() {
            let Some((start, table, seh4)) = x86_seh_prologue(data, i) else {
                continue;
            };
            let func = base + start as u64;
            if seen.contains(&func) {
                continue;
            }
            if let Some(scopes) = x86_scope_table(img, text, table as u64, seh4) {
                seen.insert(func);
                out.push((func, scopes));
            }
        }
    }
    out
}

/// `(function start, scope table, SEH4?)` if an SEH prologue starts at `i`:
/// `6A FE|FF 68 <table> 68 <handler>` (after an optional `55 8B EC`), or
/// `6A nn|68 nnnnnnnn` then `68 <table> E8 <__SEH_prolog4>`.
pub fn x86_seh_prologue(data: &[u8], i: usize) -> Option<(usize, u32, bool)> {
    let at = |k: usize| data.get(k).copied();
    if at(i)? == 0x6A
        && matches!(at(i + 1)?, 0xFE | 0xFF)
        && at(i + 2)? == 0x68
        && at(i + 7)? == 0x68
    {
        let table = u32_at(data, i + 3)?;
        let start = if i >= 3 && data[i - 3..i] == [0x55, 0x8B, 0xEC] {
            i - 3
        } else {
            i
        };
        return Some((start, table, at(i + 1)? == 0xFE));
    }
    let after = match at(i)? {
        0x6A => i + 2,
        0x68 => i + 5,
        _ => return None,
    };
    if at(after)? == 0x68 && at(after + 5)? == 0xE8 {
        return Some((i, u32_at(data, after + 1)?, true));
    }
    None
}

/// The scope table at `table`: SEH4 after its 16-byte cookie header.
pub fn x86_scope_table(
    img: &ImageBytes,
    text: &TextRanges,
    table: u64,
    seh4: bool,
) -> Option<Vec<SehScope>> {
    let (records, none) = if seh4 {
        let gs = rd(img, table)?;
        let eh = rd(img, table + 8)?;
        if (gs != TRYLEVEL_NONE4 && gs < 0x8000_0000) || eh < 0x8000_0000 {
            return None;
        }
        (table + 16, TRYLEVEL_NONE4)
    } else {
        (table, TRYLEVEL_NONE3)
    };
    let mut v = Vec::new();
    for i in 0..MAX_SCOPES {
        let Some(r) = img.read(records + i as u64 * 12, 12) else {
            break;
        };
        let w = |o: usize| u32::from_le_bytes([r[o], r[o + 1], r[o + 2], r[o + 3]]);
        let (enclosing, filter, handler) = (w(0), w(4), w(8));
        if !(enclosing == none || enclosing < i)
            || !text.contains(handler as u64)
            || (filter != 0 && !text.contains(filter as u64))
        {
            break;
        }
        v.push(SehScope {
            range: None,
            enclosing: (enclosing != none).then_some(enclosing),
            kind: if filter == 0 {
                SehKind::Finally {
                    handler: handler as u64,
                }
            } else {
                SehKind::Except {
                    filter: Filter::Code(filter as u64),
                    handler: handler as u64,
                }
            },
        });
    }
    (!v.is_empty()).then_some(v)
}

/// Every x86 C++ function whose prologue installs a `__CxxFrameHandler3` stub,
/// as `(function start, FuncInfo)`.
pub fn x86_funcinfos(img: &ImageBytes, code: &[(u64, &[u8])]) -> Vec<(u64, u64)> {
    let mut stubs = Vec::new();
    for &(base, data) in code {
        for i in 0..data.len().saturating_sub(9) {
            if data[i] == 0xB8 && data[i + 5] == 0xE9 {
                let fi = u32_at(data, i + 1).unwrap_or(0) as u64;
                if fi != 0 && is_fh3(img, fi) {
                    stubs.push((base + i as u64, fi));
                }
            }
        }
    }
    stubs.sort_unstable();
    if stubs.is_empty() {
        return Vec::new();
    }
    let mut out = Vec::new();
    let mut seen = FxHashSet::<u64>::default();
    for &(base, data) in code {
        for i in 0..data.len() {
            let Some((start, stub)) = x86_eh_prologue(data, i) else {
                continue;
            };
            let k = stubs.partition_point(|&(s, _)| s < stub as u64);
            let Some(&(mov, fi)) = stubs.get(k) else {
                continue;
            };
            if mov - stub as u64 > STUB_SPAN {
                continue;
            }
            let func = base + start as u64;
            if seen.insert(func) {
                out.push((func, fi));
            }
        }
    }
    out
}

/// `(function start, stub)` if a C++ EH prologue starts at `i`:
/// `6A FF 68 <stub> 64 A1 00 00 00 00` (after an optional `55 8B EC`), or
/// `B8 <stub> E8 <__EH_prolog3>` after its `push size`.
pub fn x86_eh_prologue(data: &[u8], i: usize) -> Option<(usize, u32)> {
    let at = |k: usize| data.get(k).copied();
    if at(i)? == 0x6A
        && at(i + 1)? == 0xFF
        && at(i + 2)? == 0x68
        && data.get(i + 7..i + 13)? == [0x64, 0xA1, 0, 0, 0, 0]
    {
        let start = if i >= 3 && data[i - 3..i] == [0x55, 0x8B, 0xEC] {
            i - 3
        } else {
            i
        };
        return Some((start, u32_at(data, i + 3)?));
    }
    if at(i)? == 0xB8 && at(i + 5)? == 0xE8 {
        let start = if i >= 2 && data[i - 2] == 0x6A {
            i - 2
        } else if i >= 5 && data[i - 5] == 0x68 {
            i - 5
        } else {
            return None;
        };
        return Some((start, u32_at(data, i + 1)?));
    }
    None
}

#[cfg(test)]
mod tests;
