//! (unlace `gopcln`) Source positions and the inline tree from a Go pclntab.
//!
//! The pclntab the [`super::GoPclntabPass`] reads names from also carries, per
//! function, the tables the runtime builds stack traces with: `pcfile` and
//! `pcln` (the source file and line of every PC), the `PCDATA_InlTreeIndex`
//! table (which inlined call, if any, a PC belongs to) and the `FUNCDATA_InlTree`
//! records (`runtime.inlinedCall`: the callee's name and the `parentPc` whose
//! source position is the call site). Like the names, they survive stripping.
//!
//! [`GoPclnPass`] gives each function a header comment with its source position
//! and comments the first instruction of each inlined call with the callee and
//! the call site; [`GoPclnLinesPass`] adds a `file:line` comment wherever the
//! source position changes, the Go counterpart of `dwarf_lines`. Both are gated
//! on `--option gopcln` (`on`, `lines`), default off, and run at the commit
//! point (`crate::passes::run_gopcln`), where the option is in effect.
//!
//! Layouts (`runtime/runtime2.go` `_func`, `inlinedCall`, `runtime/symtab.go`
//! `funcdata`/`pcvalue`/`step`/`funcfile` at go1.16, go1.18 and go1.20; IDA's
//! golang plugin `sub_22AB0` spells the same three `FUNCDATA_InlinedCall`
//! shapes): go1.16 and go1.17 store the entry as a pointer and the funcdata as
//! absolute pointers; go1.18 stores 32-bit offsets, the funcdata relative to
//! `moduledata.gofunc`; go1.20 adds `startLine` to `_func` and shrinks the
//! inline record to `funcID, nameOff, parentPc, startLine`. The go1.2 layout has
//! no `cutab` and is not read. A call site is always the source position of the
//! instruction at `entry + parentPc`, and an inlined call's parent is the
//! inline index at that instruction, so one walk serves every layout.

use std::collections::BTreeSet;

use object::read::{Object, ObjectSymbol};

use super::{
    GoVer, ImageBytes, MAGIC_GO_1_18, MAGIC_GO_1_20, PcHeader, exec_end, functab_end, rd_ptr,
    rd_u32, recover_go_header,
};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, CommentFact, Phase};

const PCDATA_INLTREEINDEX: u32 = 2;
const FUNCDATA_INLTREE: u8 = 3;
/// Rows decoded from one pcvalue table, inline-tree hops followed from one site,
/// and comments emitted per image: bounds against a corrupt table.
const MAX_ROWS: usize = 100_000;
const MAX_DEPTH: usize = 64;
const MAX_FACTS: usize = 2_000_000;

/// The `_func` and `inlinedCall` shapes.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Layout {
    /// go1.16, go1.17: pointer-wide entry, absolute funcdata pointers.
    Go116,
    /// go1.18, go1.19: 32-bit entry offset, funcdata relative to `gofunc`.
    Go118,
    /// go1.20 and later: `_func.startLine`, the 16-byte `inlinedCall`.
    Go120,
}

/// The tables one image's source positions are read through.
struct Tables {
    h: PcHeader,
    layout: Layout,
    cutab: u64,
    filetab: u64,
    /// `moduledata.gofunc` (go1.18+); without it no inline tree is read.
    gofunc: Option<u64>,
}

/// The fields of one `_func` this module reads.
struct FuncRec {
    entry: u64,
    end: u64,
    vma: u64,
    pcfile: u32,
    pcln: u32,
    npcdata: u32,
    cu: u32,
    start_line: Option<i32>,
    nfuncdata: u8,
}

/// One row of a pcvalue table: `value` holds for PCs in `[start, end)`.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct Row {
    start: u64,
    end: u64,
    value: i32,
}

/// What [`function_facts`] found for one function.
#[derive(Default, Debug, PartialEq, Eq)]
struct Facts {
    header: Option<String>,
    inlined: Vec<(u64, String)>,
    lines: Vec<(u64, String)>,
}

/// Header source position and inlined-call markers (`gopcln on`).
#[derive(Clone, Copy, Default)]
pub struct GoPclnPass;

/// Per-statement `file:line` comments (`gopcln lines`).
#[derive(Clone, Copy, Default)]
pub struct GoPclnLinesPass;

impl AnalysisPass for GoPclnPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "gopcln"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let gate = ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::GoPcln>();
        if !gate.on {
            return AnalysisOutput::default();
        }
        collect(ctx, false)
    }
}

impl AnalysisPass for GoPclnLinesPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "gopcln_lines"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let gate = ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::GoPcln>();
        if !gate.lines {
            return AnalysisOutput::default();
        }
        collect(ctx, true)
    }
}

/// Walk every function the table admits inside executable bytes and turn its
/// facts into comments: the header and inline markers, or (`lines`) the
/// per-statement positions.
fn collect(ctx: &AnalysisCtx, lines: bool) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    let Some(image) = ctx.image else {
        return out;
    };
    let exec = image.executable_ranges();
    let img = ImageBytes::new(ctx.file);
    let Some(t) = tables(ctx.file, &img) else {
        return out;
    };
    let mut budget = MAX_FACTS;
    for f in functions(&img, &t) {
        if budget == 0 {
            break;
        }
        let Some(limit) = exec_end(&exec, f.entry) else {
            continue;
        };
        let f = FuncRec {
            end: f.end.min(limit),
            ..f
        };
        let facts = function_facts(&img, &t, &f, lines);
        if lines {
            for (addr, text) in facts.lines.into_iter().take(budget) {
                budget -= 1;
                out.comments.push(CommentFact {
                    func_addr: f.entry,
                    addr,
                    text,
                });
            }
            continue;
        }
        if let Some(text) = facts.header {
            budget -= 1;
            out.header_comments.push(CommentFact {
                func_addr: f.entry,
                addr: f.entry,
                text,
            });
        }
        for (addr, text) in facts.inlined.into_iter().take(budget) {
            budget -= 1;
            out.comments.push(CommentFact {
                func_addr: f.entry,
                addr,
                text,
            });
        }
    }
    out
}

/// The image's pclntab with the `cutab`, `filetab` and `gofunc` bases, for a
/// go1.16-or-newer table.
fn tables(file: &object::File, img: &ImageBytes) -> Option<Tables> {
    let (h, header_vma) = recover_go_header(file, img)?;
    if h.ver == GoVer::Go12 {
        return None;
    }
    let md = super::module_record(file, img, &h, header_vma);
    let minor = super::go_minor(file, img);
    let layout = match h.ver {
        GoVer::Go116 => Layout::Go116,
        _ => match img.read(header_vma, 4).map(|b| rd_u32(b, h.end)) {
            Some(MAGIC_GO_1_20) => Layout::Go120,
            Some(MAGIC_GO_1_18) => Layout::Go118,
            _ => match minor.or(md.map(|m| m.minor))? {
                m if m >= 20 => Layout::Go120,
                18 | 19 => Layout::Go118,
                _ => return None,
            },
        },
    };
    let (cutab, filetab) = match md {
        Some(m) => (m.cutab, m.filetab),
        None => header_tables(img, &h, header_vma)?,
    };
    let gofunc = md.and_then(|m| m.gofunc).or_else(|| {
        file.symbols()
            .find(|s| matches!(s.name(), Ok("go:func.*" | "go.func.*")))
            .map(|s| s.address())
    });
    Some(Tables {
        h,
        layout,
        cutab,
        filetab,
        gofunc,
    })
}

/// `cutab` and `filetab` from the header's `cuOffset` and `filetabOffset`
/// (the words after `funcnameOffset`), for an image whose `moduledata` was not
/// found.
fn header_tables(img: &ImageBytes, h: &PcHeader, header_vma: u64) -> Option<(u64, u64)> {
    super::parse_header(img, header_vma)?;
    let ps = u64::from(h.ptr_size);
    let words = if h.ver.is_118plus() { 4 } else { 3 };
    let at = header_vma.checked_add(8 + ps * words)?;
    let word = |va: u64| {
        img.read(va, ps as usize)
            .map(|b| rd_ptr(b, h.ptr_size, h.end))
    };
    Some((
        header_vma.checked_add(word(at)?)?,
        header_vma.checked_add(word(at.checked_add(ps)?)?)?,
    ))
}

/// Every function of the functab with its `_func` fields, each ending at the
/// next entry (the last at the closing `etext` entry).
fn functions(img: &ImageBytes, t: &Tables) -> Vec<FuncRec> {
    let h = &t.h;
    let nfunc = h.nfunc.min(2_000_000) as usize;
    let (entry_w, stride) = if h.ver.is_118plus() {
        (4usize, 8usize)
    } else {
        (h.ptr_size as usize, 2 * h.ptr_size as usize)
    };
    let mut raw = Vec::new();
    for i in 0..nfunc {
        let Some(ent) = h
            .functab_vma
            .checked_add((i * stride) as u64)
            .and_then(|va| img.read(va, stride))
        else {
            break;
        };
        let (entry, funcoff) = if h.ver.is_118plus() {
            let off = rd_u32(ent, h.end);
            if off == u32::MAX {
                continue;
            }
            (
                h.text_start.wrapping_add(u64::from(off)),
                u64::from(rd_u32(&ent[entry_w..], h.end)),
            )
        } else {
            (
                rd_ptr(ent, h.ptr_size, h.end),
                rd_ptr(&ent[entry_w..], h.ptr_size, h.end),
            )
        };
        if let Some(vma) = h.funcdata_base.checked_add(funcoff) {
            raw.push((entry, vma));
        }
    }
    raw.sort_unstable();
    raw.dedup_by_key(|r| r.0);
    let last = functab_end(img, h);
    let mut out = Vec::with_capacity(raw.len());
    for (i, &(entry, vma)) in raw.iter().enumerate() {
        let end = raw
            .get(i + 1)
            .map(|n| n.0)
            .or(last)
            .filter(|&e| e > entry)
            .unwrap_or(entry);
        if let Some(f) = read_func(img, t, entry, end, vma) {
            out.push(f);
        }
    }
    out
}

/// The `_func` at `vma`: the fields after the entry word sit at the same
/// offsets in every layout (`nameOff, args, deferreturn, pcsp, pcfile, pcln,
/// npcdata, cuOffset`); go1.20 puts `startLine` before the trailing
/// `funcID, flag, pad, nfuncdata` bytes.
fn read_func(img: &ImageBytes, t: &Tables, entry: u64, end: u64, vma: u64) -> Option<FuncRec> {
    let base = func_base(t);
    let rec = img.read(vma, func_size(t) as usize)?;
    let u = |off: u64| rd_u32(&rec[(base + off) as usize..], t.h.end);
    let (start_line, nfuncdata) = match t.layout {
        Layout::Go120 => (Some(u(32) as i32), rec[(base + 39) as usize]),
        _ => (None, rec[(base + 35) as usize]),
    };
    Some(FuncRec {
        entry,
        end,
        vma,
        pcfile: u(16),
        pcln: u(20),
        npcdata: u(24),
        cu: u(28),
        start_line,
        nfuncdata,
    })
}

/// Width of the `_func` entry field.
fn func_base(t: &Tables) -> u64 {
    match t.layout {
        Layout::Go116 => u64::from(t.h.ptr_size),
        _ => 4,
    }
}

/// Size of the fixed part of a `_func`, where its `pcdata` array starts.
fn func_size(t: &Tables) -> u64 {
    func_base(t)
        + match t.layout {
            Layout::Go120 => 40,
            _ => 36,
        }
}

/// The pcvalue table `pcdata[i]` of `f`: its offset into `pctab`, 0 for none.
fn pcdata(img: &ImageBytes, t: &Tables, f: &FuncRec, i: u32) -> Option<u32> {
    if i >= f.npcdata {
        return None;
    }
    let va = f
        .vma
        .checked_add(func_size(t))?
        .checked_add(u64::from(i) * 4)?;
    Some(rd_u32(img.read(va, 4)?, t.h.end)).filter(|&off| off != 0)
}

/// The address `funcdata[i]` of `f` points at: an absolute pointer on go1.16
/// (the array aligned to the pointer size), an offset from `gofunc` on go1.18+.
fn funcdata(img: &ImageBytes, t: &Tables, f: &FuncRec, i: u8) -> Option<u64> {
    if i >= f.nfuncdata {
        return None;
    }
    let mut p = f
        .vma
        .checked_add(func_size(t))?
        .checked_add(u64::from(f.npcdata) * 4)?;
    match t.layout {
        Layout::Go116 => {
            let ps = u64::from(t.h.ptr_size);
            if ps == 8 && p & 4 != 0 {
                p += 4;
            }
            let at = p.checked_add(u64::from(i) * ps)?;
            let v = rd_ptr(img.read(at, ps as usize)?, t.h.ptr_size, t.h.end);
            (v != 0).then_some(v)
        }
        _ => {
            let at = p.checked_add(u64::from(i) * 4)?;
            let off = rd_u32(img.read(at, 4)?, t.h.end);
            if off == u32::MAX {
                return None;
            }
            t.gofunc?.checked_add(u64::from(off))
        }
    }
}

/// Decode the pcvalue table at `pctab + off` for a function at `entry`
/// (`runtime.step`: a zigzag value delta, then a PC delta in quanta, the value
/// starting at -1; a zero value delta after the first row ends the table).
fn pcvalue_rows(img: &ImageBytes, t: &Tables, off: u32, entry: u64, end: u64) -> Vec<Row> {
    let mut rows = Vec::new();
    let Some(mut pos) = t.h.pctab_vma.checked_add(u64::from(off)) else {
        return rows;
    };
    let quantum = u64::from(t.h.quantum.max(1));
    let varint = |pos: &mut u64| -> Option<u32> {
        let mut v = 0u64;
        for shift in (0..35).step_by(7) {
            let b = img.read(*pos, 1)?[0];
            *pos += 1;
            v |= u64::from(b & 0x7f) << shift;
            if b < 0x80 {
                return Some(v as u32);
            }
        }
        None
    };
    let (mut pc, mut val) = (entry, -1i32);
    for first in std::iter::once(true)
        .chain(std::iter::repeat(false))
        .take(MAX_ROWS)
    {
        let Some(uv) = varint(&mut pos) else { break };
        if uv == 0 && !first {
            break;
        }
        val = val.wrapping_add((uv >> 1) as i32 ^ -((uv & 1) as i32));
        let Some(dpc) = varint(&mut pos) else { break };
        let Some(next) = u64::from(dpc)
            .checked_mul(quantum)
            .and_then(|d| pc.checked_add(d))
        else {
            break;
        };
        if next > pc && pc < end {
            rows.push(Row {
                start: pc,
                end: next.min(end),
                value: val,
            });
        }
        pc = next;
        if pc >= end {
            break;
        }
    }
    rows
}

/// The value the rows give `pc`.
fn value_at(rows: &[Row], pc: u64) -> Option<i32> {
    let i = rows.partition_point(|r| r.end <= pc);
    rows.get(i).filter(|r| r.start <= pc).map(|r| r.value)
}

/// The file name of per-CU file index `fileno` (`runtime.funcfile`).
fn file_name(img: &ImageBytes, t: &Tables, cu: u32, fileno: i32) -> Option<String> {
    let idx = u64::from(cu).checked_add(u64::try_from(fileno).ok()?)?;
    let at = t.cutab.checked_add(idx.checked_mul(4)?)?;
    let off = rd_u32(img.read(at, 4)?, t.h.end);
    if off == u32::MAX {
        return None;
    }
    img.read_cstr(t.filetab.checked_add(u64::from(off))?, 4096)
        .filter(|s| !s.is_empty())
}

/// The last path component of a Go file name.
fn base_name(path: &str) -> &str {
    path.rsplit(['/', '\\']).next().unwrap_or(path)
}

/// One `inlinedCall`: the callee's name offset and the `parentPc` offset.
fn inl_record(img: &ImageBytes, t: &Tables, tree: u64, idx: i32) -> Option<(u32, u32)> {
    let size: u64 = if t.layout == Layout::Go120 { 16 } else { 20 };
    let at = tree.checked_add(u64::try_from(idx).ok()?.checked_mul(size)?)?;
    let rec = img.read(at, size as usize)?;
    Some(match t.layout {
        Layout::Go120 => (rd_u32(&rec[4..], t.h.end), rd_u32(&rec[8..], t.h.end)),
        _ => (rd_u32(&rec[12..], t.h.end), rd_u32(&rec[16..], t.h.end)),
    })
}

/// The header position, the inlined-call markers and (`lines`) the
/// per-statement positions of one function.
fn function_facts(img: &ImageBytes, t: &Tables, f: &FuncRec, lines: bool) -> Facts {
    let mut facts = Facts::default();
    if f.end <= f.entry {
        return facts;
    }
    let files = if f.pcfile != 0 {
        pcvalue_rows(img, t, f.pcfile, f.entry, f.end)
    } else {
        Vec::new()
    };
    let lns = if f.pcln != 0 {
        pcvalue_rows(img, t, f.pcln, f.entry, f.end)
    } else {
        Vec::new()
    };
    let position = |pc: u64| -> Option<(String, i32)> {
        let name = file_name(img, t, f.cu, value_at(&files, pc)?)?;
        let line = value_at(&lns, pc).filter(|&l| l > 0)?;
        Some((name, line))
    };
    if lines {
        let mut last: Option<(i32, i32)> = None;
        for row in &lns {
            let Some(fileno) = value_at(&files, row.start) else {
                continue;
            };
            if row.value <= 0 || last == Some((fileno, row.value)) {
                continue;
            }
            if let Some(name) = file_name(img, t, f.cu, fileno) {
                last = Some((fileno, row.value));
                facts
                    .lines
                    .push((row.start, format!("{}:{}", base_name(&name), row.value)));
            }
        }
        return facts;
    }
    if let Some((name, line)) = position(f.entry) {
        let line = f.start_line.filter(|&l| l > 0).unwrap_or(line);
        facts.header = Some(format!("source: {name}:{line}"));
    }
    let (Some(off), Some(tree)) = (
        pcdata(img, t, f, PCDATA_INLTREEINDEX),
        funcdata(img, t, f, FUNCDATA_INLTREE),
    ) else {
        return facts;
    };
    let index = pcvalue_rows(img, t, off, f.entry, f.end);
    let name = |nameoff: u32| {
        img.read_cstr(t.h.funcname_vma.checked_add(u64::from(nameoff))?, 4096)
            .filter(|s| !s.is_empty())
    };
    let mut seen = BTreeSet::new();
    for row in &index {
        if row.value < 0 || !seen.insert(row.value) {
            continue;
        }
        let Some((callee, parent_pc)) = inl_record(img, t, tree, row.value) else {
            continue;
        };
        let Some(callee) = name(callee) else {
            continue;
        };
        let site = f.entry.checked_add(u64::from(parent_pc));
        let mut chain = vec![callee];
        let mut hop = site.and_then(|pc| value_at(&index, pc));
        let mut visited = BTreeSet::from([row.value]);
        while let Some(idx) = hop.filter(|&i| i >= 0 && chain.len() < MAX_DEPTH) {
            if !visited.insert(idx) {
                break;
            }
            let Some((outer, outer_pc)) = inl_record(img, t, tree, idx) else {
                break;
            };
            let Some(outer) = name(outer) else { break };
            chain.push(outer);
            hop = f
                .entry
                .checked_add(u64::from(outer_pc))
                .and_then(|pc| value_at(&index, pc));
        }
        chain.reverse();
        let mut text = format!("inlined {}", chain.join(" > "));
        if let Some((file, line)) = site.filter(|&pc| pc < f.end).and_then(position) {
            text.push_str(&format!(" at {}:{line}", base_name(&file)));
        }
        facts.inlined.push((row.start, text));
    }
    facts
}

#[cfg(test)]
mod tests;
