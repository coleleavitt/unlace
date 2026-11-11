//! Function extents the binary records itself: sized function symbols,
//! `.pdata` runtime functions, `.eh_frame` FDEs and Mach-O
//! `LC_FUNCTION_STARTS`. Heuristic starts (prologue scan, call targets) are
//! kept only outside these extents, and heuristic sizes stop at the next start.

use std::collections::{BTreeMap, BTreeSet};

use iced_x86::{Decoder, DecoderOptions, FlowControl};
use unlace_ir::ArchId;
use unlace_loader::{BinaryImage, EhFrameInfo, SymbolKind};

use super::{FunctionEntry, is_executable_address, symbol_name_or, text_section};

/// Recorded function extents as `start -> end` (exclusive).
pub(super) struct RecordedExtents {
    extents: BTreeMap<u64, u64>,
    /// Largest end among the extents starting at or before each start.
    reach: BTreeMap<u64, u64>,
}

impl RecordedExtents {
    pub(super) fn collect(image: &BinaryImage, eh_frame: &EhFrameInfo) -> Self {
        let mut extents = BTreeMap::new();
        let mut record = |start: u64, end: u64| {
            if end > start && is_executable_address(image, start) {
                let slot = extents.entry(start).or_insert(end);
                *slot = (*slot).max(end);
            }
        };
        for sym in image.symbols.values() {
            if sym.kind == SymbolKind::Function && sym.size > 0 {
                record(sym.addr, sym.addr.saturating_add(sym.size));
            }
        }
        for rf in &image.runtime_functions {
            record(rf.begin_address, rf.end_address);
        }
        for extent in eh_frame.function_extents.values() {
            record(extent.start, extent.end);
        }
        if let Some(text) = text_section(image) {
            let text_end = text.vaddr.saturating_add(text.data.len() as u64);
            let starts: BTreeSet<u64> = image
                .function_starts
                .iter()
                .copied()
                .filter(|addr| (text.vaddr..text_end).contains(addr))
                .collect();
            for (&start, end) in starts
                .iter()
                .zip(starts.iter().skip(1).copied().chain([text_end]))
            {
                record(start, end);
            }
        }
        let mut reach = BTreeMap::new();
        let mut furthest = 0;
        for (&start, &end) in &extents {
            furthest = furthest.max(end);
            reach.insert(start, furthest);
        }
        Self { extents, reach }
    }

    fn is_start(&self, addr: u64) -> bool {
        self.extents.contains_key(&addr)
    }

    /// Whether `addr` lies inside a recorded extent without being its start.
    fn covers_interior(&self, addr: u64) -> bool {
        self.reach
            .range(..addr)
            .next_back()
            .is_some_and(|(_, &end)| addr < end)
    }
}

/// Add one function per `.eh_frame` FDE in the text section; FDEs of PLT
/// stubs and `.init`/`.fini` stay out, as they do for the other discovery.
pub(super) fn add_eh_frame_functions(
    image: &BinaryImage,
    eh_frame: &EhFrameInfo,
    funcs: &mut Vec<FunctionEntry>,
) {
    let Some(text) = text_section(image) else {
        return;
    };
    let text_range = text.vaddr..text.vaddr.saturating_add(text.data.len() as u64);
    for extent in eh_frame.function_extents.values() {
        if extent.end <= extent.start || !text_range.contains(&extent.start) {
            continue;
        }
        let addr = extent.start;
        let size = extent.end - addr;
        match funcs.iter_mut().find(|func| func.addr == addr) {
            // A heuristic size (gap to the next prologue) yields to the FDE;
            // a symbol's own size stays.
            Some(existing) if !has_sized_symbol(image, addr) => existing.size = size,
            Some(_) => {}
            None => funcs.push(FunctionEntry {
                name: symbol_name_or(image, addr, || format!("sub_{addr:x}")),
                addr,
                size,
            }),
        }
    }
}

fn has_sized_symbol(image: &BinaryImage, addr: u64) -> bool {
    image
        .symbols
        .get(&addr)
        .is_some_and(|sym| sym.kind == SymbolKind::Function && sym.size > 0)
}

/// Drop heuristic starts inside recorded extents and end every heuristic
/// function at the next start.
pub(super) fn reconcile_with_recorded_extents(
    recorded: &RecordedExtents,
    funcs: &mut Vec<FunctionEntry>,
) {
    funcs.retain(|func| {
        let keep = recorded.is_start(func.addr) || !recorded.covers_interior(func.addr);
        if !keep {
            tracing::debug!(
                target: "unlace::discover",
                addr = format_args!("{:#x}", func.addr),
                name = %func.name,
                "dropped start inside a recorded function extent"
            );
        }
        keep
    });
    funcs.sort_by_key(|func| func.addr);
    let starts: Vec<u64> = funcs.iter().map(|func| func.addr).collect();
    for (func, next) in funcs.iter_mut().zip(starts.iter().skip(1)) {
        if recorded.is_start(func.addr) || *next == func.addr {
            continue;
        }
        let gap = next - func.addr;
        if func.size > gap {
            func.size = gap;
        }
    }
}

/// Drop unnamed `.eh_frame` starts that another function enters with a
/// conditional branch and nothing calls: gcc's `.cold` splits, which IDA keeps
/// as tail chunks of the parent. Targets of plain `jmp` stay, since those are
/// tail calls.
/// x86 only, where the other discovery heuristics decode with iced.
pub(super) fn drop_eh_frame_tail_chunks(
    image: &BinaryImage,
    eh_frame: &EhFrameInfo,
    funcs: &mut Vec<FunctionEntry>,
) {
    let Some(text) = text_section(image) else {
        return;
    };
    let bitness = match image.arch {
        ArchId::X86 => 32,
        ArchId::X86_64 => 64,
        _ => return,
    };
    let mut called = BTreeSet::new();
    let mut branched_into = BTreeSet::new();
    for func in funcs.iter() {
        let start = func.addr;
        let end = start.saturating_add(func.size);
        let (Some(lo), Some(hi)) = (start.checked_sub(text.vaddr), end.checked_sub(text.vaddr))
        else {
            continue;
        };
        let Some(code) = text
            .data
            .get(lo as usize..(hi as usize).min(text.data.len()))
        else {
            continue;
        };
        let mut decoder = Decoder::with_ip(bitness, code, start, DecoderOptions::NONE);
        while decoder.can_decode() {
            let insn = decoder.decode();
            let target = insn.near_branch_target();
            match insn.flow_control() {
                FlowControl::Call => {
                    called.insert(target);
                }
                FlowControl::ConditionalBranch if !(start..end).contains(&target) => {
                    branched_into.insert(target);
                }
                _ => {}
            }
        }
    }
    funcs.retain(|func| {
        let tail = eh_frame.function_extents.contains_key(&func.addr)
            && !image.symbols.contains_key(&func.addr)
            && branched_into.contains(&func.addr)
            && !called.contains(&func.addr);
        if tail {
            tracing::debug!(
                target: "unlace::discover",
                addr = format_args!("{:#x}", func.addr),
                "dropped .eh_frame start entered by a conditional branch (tail chunk)"
            );
        }
        !tail
    });
}

#[cfg(test)]
mod tests {
    use unlace_loader::eh_frame::FunctionExtent;
    use unlace_loader::{Endian, Section, SectionFlags};

    use super::*;

    fn image_with_text(code: Vec<u8>, base: u64) -> BinaryImage {
        let mut image = BinaryImage::empty(ArchId::X86_64, Endian::Little);
        image.sections.push(Section {
            name: ".text".to_string(),
            vaddr: base,
            size: code.len() as u64,
            data: code,
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        image
    }

    fn eh_frame(extents: &[(u64, u64)]) -> EhFrameInfo {
        let mut info = EhFrameInfo::empty();
        for &(start, end) in extents {
            info.function_extents
                .insert(start, FunctionExtent { start, end });
        }
        info
    }

    fn entry(name: &str, addr: u64, size: u64) -> FunctionEntry {
        FunctionEntry {
            name: name.to_string(),
            addr,
            size,
        }
    }

    fn extents(funcs: &[FunctionEntry]) -> Vec<(u64, u64)> {
        funcs.iter().map(|func| (func.addr, func.size)).collect()
    }

    /// `ls`: a `push rbp; mov rbp, rsp` after stack realignment inside `main`
    /// was a second function start, and `main` ended at it.
    #[test]
    fn prologue_inside_fde_is_dropped_and_fde_sizes_the_function() {
        let image = image_with_text(vec![0x90; 0x100], 0x1000);
        let eh = eh_frame(&[(0x1000, 0x1080)]);
        let mut funcs = vec![entry("main", 0x1000, 0x11), entry("sub_1011", 0x1011, 0x6f)];
        add_eh_frame_functions(&image, &eh, &mut funcs);
        let recorded = RecordedExtents::collect(&image, &eh);
        reconcile_with_recorded_extents(&recorded, &mut funcs);
        assert_eq!(extents(&funcs), vec![(0x1000, 0x80)]);
    }

    /// `stripped`: `frame_dummy` got the prologue-scan size up to the end of
    /// `.text` and overlapped every later function.
    #[test]
    fn heuristic_size_stops_at_next_start() {
        let image = image_with_text(vec![0x90; 0x100], 0x1000);
        let eh = eh_frame(&[(0x1010, 0x1080)]);
        let mut funcs = vec![entry("sub_1000", 0x1000, 0x100)];
        add_eh_frame_functions(&image, &eh, &mut funcs);
        let recorded = RecordedExtents::collect(&image, &eh);
        reconcile_with_recorded_extents(&recorded, &mut funcs);
        assert_eq!(extents(&funcs), vec![(0x1000, 0x10), (0x1010, 0x70)]);
    }

    #[test]
    fn cold_split_entered_by_jcc_is_a_tail_but_jmp_target_is_a_function() {
        let mut code = vec![0xcc; 0x80];
        // 0x1000: jne 0x1040; jmp 0x1060; ret
        code[..12].copy_from_slice(&[
            0x0f, 0x85, 0x3a, 0x00, 0x00, 0x00, 0xe9, 0x55, 0x00, 0x00, 0x00, 0xc3,
        ]);
        let image = image_with_text(code, 0x1000);
        let eh = eh_frame(&[(0x1000, 0x100c), (0x1040, 0x1050), (0x1060, 0x1070)]);
        let mut funcs = Vec::new();
        add_eh_frame_functions(&image, &eh, &mut funcs);
        drop_eh_frame_tail_chunks(&image, &eh, &mut funcs);
        let starts: Vec<u64> = funcs.iter().map(|func| func.addr).collect();
        assert_eq!(starts, vec![0x1000, 0x1060]);
    }
}
