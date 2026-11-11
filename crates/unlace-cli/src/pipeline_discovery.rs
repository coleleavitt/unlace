//! pipeline: discovery.

use super::*;

/// Find the executable text section regardless of binary format.
/// ELF uses `.text`, Mach-O uses `__text`.
pub(super) fn text_section(image: &BinaryImage) -> Option<&Section> {
    image
        .section_by_name(".text")
        .or_else(|| image.section_by_name("__text"))
}

#[derive(Clone, Debug)]
pub struct FunctionEntry {
    pub name: String,
    pub addr: u64,
    pub size: u64,
}

impl FunctionEntry {
    /// Whether `addr` lies in this function; a zero-size entry contains only its start.
    pub fn contains(&self, addr: u64) -> bool {
        addr == self.addr || (addr > self.addr && addr - self.addr < self.size)
    }
}

pub fn discover_functions(image: &BinaryImage, filter: Option<&str>) -> Result<Vec<FunctionEntry>> {
    let permissive_symbol_sizes = matches!(
        image.arch,
        ArchId::Ppc | ArchId::Ppc64 | ArchId::V850 | ArchId::Arc | ArchId::Agx
    );
    let text_range = image.section_by_name(".text").map(|text| {
        let start = text.vaddr;
        let end = start.saturating_add(text.data.len() as u64);
        start..end
    });
    let mut funcs: Vec<FunctionEntry> = image
        .symbols
        .values()
        .filter(|sym| {
            let text_symbol = permissive_symbol_sizes
                && !sym.name.is_empty()
                && !sym.name.starts_with('.')
                && text_range
                    .as_ref()
                    .is_some_and(|range| range.contains(&sym.addr));
            (sym.kind == SymbolKind::Function || text_symbol)
                && (sym.size > 0 || permissive_symbol_sizes)
        })
        .map(|sym| FunctionEntry {
            name: sym.name.clone(),
            addr: sym.addr,
            size: sym.size,
        })
        .collect();
    let had_symbol_funcs = !funcs.is_empty();

    if permissive_symbol_sizes {
        infer_arch_fixture_sizes(image, &mut funcs);
    }

    add_pe_runtime_functions(image, &mut funcs);
    add_pe_tls_callbacks(image, &mut funcs);
    add_go_pclntab_functions(image, &mut funcs);
    add_macho_function_starts(image, &mut funcs);

    if funcs.is_empty() && uses_x86_function_discovery(image.arch) {
        profiling::diagnostic(
            "info",
            "no function symbols found; attempting prologue scan",
            [TraceField::text("arch", image.arch.to_string())],
        );
        funcs = scan_for_prologues(image);
    }

    let eh_frame = unlace_loader::parse_eh_frame(image).unwrap_or_else(|err| {
        tracing::debug!(target: "unlace::discover", %err, ".eh_frame unreadable");
        unlace_loader::EhFrameInfo::empty()
    });
    function_extents::add_eh_frame_functions(image, &eh_frame, &mut funcs);
    let recorded = function_extents::RecordedExtents::collect(image, &eh_frame);

    if funcs.is_empty() {
        profiling::diagnostic(
            "info",
            "prologue scan found nothing; falling back to entry point",
            [TraceField::addr("entry", image.entry)],
        );
        funcs.push(FunctionEntry {
            name: "entry".into(),
            addr: image.entry,
            size: 0,
        });
    }

    if had_symbol_funcs && matches!(image.arch, ArchId::X86 | ArchId::X86_64) {
        let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();
        for candidate in scan_for_prologues(image) {
            if known.insert(candidate.addr) {
                funcs.push(candidate);
            }
        }
    }

    if permissive_symbol_sizes {
        add_symbol_gap_functions(image, &mut funcs);
        add_post_entry_functions(image, &mut funcs);
    }

    if !(had_symbol_funcs && permissive_symbol_sizes) && uses_x86_function_discovery(image.arch) {
        function_extents::reconcile_with_recorded_extents(&recorded, &mut funcs);
        funcs = recursive_descent_discovery(image, funcs);
        function_extents::reconcile_with_recorded_extents(&recorded, &mut funcs);
        function_extents::drop_eh_frame_tail_chunks(image, &eh_frame, &mut funcs);
    }
    if permissive_symbol_sizes {
        infer_arch_fixture_sizes(image, &mut funcs);
    }
    recover_libc_start_main_main_alias(image, &mut funcs);
    prune_invalid_function_starts(image, &mut funcs);
    prune_non_text_function_entries(image, &mut funcs);
    prune_import_thunk_entries(image, &mut funcs);
    prune_padding_function_starts(image, &mut funcs);

    for func in &funcs {
        tracing::debug!(
            target: "unlace::discover",
            addr = format_args!("{:#x}", func.addr),
            size = func.size,
            name = %func.name,
            "function"
        );
    }

    match filter {
        Some(filter) => select_functions(funcs, filter),
        None => Ok(funcs),
    }
}

/// Keep the functions `filter` names: a symbol name or a hex address.
pub fn select_functions(mut funcs: Vec<FunctionEntry>, filter: &str) -> Result<Vec<FunctionEntry>> {
    let target = parse_function_filter(filter);
    funcs.retain(|f| match &target {
        FunctionTarget::Name(name) => f.name == *name,
        FunctionTarget::Addr(addr) => f.addr == *addr,
    });
    if funcs.is_empty() {
        bail!("no function matching '{filter}' found in binary");
    }
    Ok(funcs)
}

pub(super) fn add_macho_function_starts(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if image.function_starts.is_empty() {
        return;
    }
    let Some(text) = text_section(image) else {
        return;
    };
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    let align = function_start_alignment(image.arch);
    let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();

    for &addr in &image.function_starts {
        if addr < text.vaddr || addr >= text_end {
            continue;
        }
        if align > 1 && !addr.is_multiple_of(align) {
            continue;
        }
        if known.insert(addr) {
            funcs.push(FunctionEntry {
                name: symbol_name_or(image, addr, || format!("sub_{addr:x}")),
                addr,
                size: 0,
            });
        }
    }

    infer_arch_fixture_sizes(image, funcs);
}

pub(super) fn add_pe_runtime_functions(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if image.runtime_functions.is_empty() {
        return;
    }

    for rf in &image.runtime_functions {
        let addr = rf.begin_address;
        let size = rf.end_address.saturating_sub(rf.begin_address);
        if size == 0 || !is_executable_address(image, addr) {
            continue;
        }
        upsert_discovered_function(
            funcs,
            FunctionEntry {
                name: symbol_name_or(image, addr, || format!("sub_{addr:x}")),
                addr,
                size,
            },
            false,
        );
    }
}

pub(super) fn add_pe_tls_callbacks(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if image.tls_callbacks.is_empty() {
        return;
    }

    for (idx, &addr) in image.tls_callbacks.iter().enumerate() {
        if !is_executable_address(image, addr) {
            continue;
        }
        let size = infer_synthetic_function_size(image, funcs, addr);
        upsert_discovered_function(
            funcs,
            FunctionEntry {
                name: symbol_name_or(image, addr, || format!("tls_callback_{idx}_{addr:x}")),
                addr,
                size,
            },
            false,
        );
    }
}

pub(super) fn add_go_pclntab_functions(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    let Some(section) = image
        .section_by_name(".gopclntab")
        .or_else(|| image.section_by_name("__gopclntab"))
    else {
        return;
    };
    let text_base = text_section(image)
        .or_else(|| executable_section_containing(image, image.entry))
        .map(|section| section.vaddr)
        .unwrap_or(0);
    let Some(info) = unlace_loader::gopclntab::parse_gopclntab(&section.data, text_base) else {
        return;
    };

    let mut entries: Vec<_> = info.functions.iter().collect();
    entries.sort_by_key(|func| func.addr);
    let end = executable_section_containing(image, entries.last().map_or(image.entry, |f| f.addr))
        .map(section_end)
        .unwrap_or_else(|| section_end(section));
    for (idx, func) in entries.iter().enumerate() {
        if !is_executable_address(image, func.addr) {
            continue;
        }
        let next = entries
            .iter()
            .skip(idx + 1)
            .map(|next| next.addr)
            .find(|next| *next > func.addr)
            .unwrap_or(end);
        upsert_discovered_function(
            funcs,
            FunctionEntry {
                name: func.name.clone(),
                addr: func.addr,
                size: next.saturating_sub(func.addr),
            },
            false,
        );
    }
}

pub(super) fn upsert_discovered_function(
    funcs: &mut Vec<FunctionEntry>,
    candidate: FunctionEntry,
    overwrite_name: bool,
) {
    if let Some(existing) = funcs.iter_mut().find(|func| func.addr == candidate.addr) {
        if overwrite_name || existing.name.starts_with("sub_") || existing.name == "entry" {
            existing.name = candidate.name;
        }
        if candidate.size > existing.size {
            existing.size = candidate.size;
        }
        return;
    }
    funcs.push(candidate);
}

pub(super) fn symbol_name_or(
    image: &BinaryImage,
    addr: u64,
    default: impl FnOnce() -> String,
) -> String {
    image
        .symbols
        .get(&addr)
        .filter(|sym| !sym.name.is_empty())
        .map(|sym| sym.name.clone())
        .unwrap_or_else(default)
}

pub(super) fn is_executable_address(image: &BinaryImage, addr: u64) -> bool {
    executable_section_containing(image, addr).is_some()
}

pub(super) fn executable_section_containing(image: &BinaryImage, addr: u64) -> Option<&Section> {
    image.sections.iter().find(|section| {
        section.flags.contains(SectionFlags::EXEC)
            && (section.vaddr..section_end(section)).contains(&addr)
    })
}

pub(super) fn section_end(section: &Section) -> u64 {
    let extent = section.size.max(section.data.len() as u64);
    section.vaddr.saturating_add(extent)
}

pub(super) fn prune_non_text_function_entries(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    let has_executable_func = funcs
        .iter()
        .any(|func| is_executable_address(image, func.addr));
    if !has_executable_func {
        return;
    }
    funcs.retain(|func| is_executable_address(image, func.addr));
}

pub(super) fn prune_import_thunk_entries(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if image.plt_symbols.is_empty() {
        return;
    }
    funcs.retain(|func| !image.plt_symbols.contains_key(&func.addr));
}

pub(super) fn uses_x86_function_discovery(arch: ArchId) -> bool {
    matches!(arch, ArchId::X86 | ArchId::X86_64)
}

pub(super) fn function_start_alignment(arch: ArchId) -> u64 {
    match arch {
        ArchId::AArch64 => 4,
        _ => 1,
    }
}

pub(super) fn prune_invalid_function_starts(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    let align = function_start_alignment(image.arch);
    if align <= 1 {
        return;
    }
    funcs.retain(|func| func.addr.is_multiple_of(align));
}

pub(super) fn prune_padding_function_starts(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if !uses_x86_function_discovery(image.arch) {
        return;
    }
    let Some(text) = text_section(image) else {
        return;
    };
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    funcs.retain(|func| {
        if func.addr < text.vaddr || func.addr >= text_end {
            return true;
        }
        let off = (func.addr - text.vaddr) as usize;
        text.data
            .get(off)
            .is_none_or(|byte| !is_padding_byte(image.arch, *byte))
    });
}

pub(super) fn recover_libc_start_main_main_alias(
    image: &BinaryImage,
    funcs: &mut Vec<FunctionEntry>,
) {
    if image.arch != ArchId::X86_64 || funcs.iter().any(|f| f.name == "main") {
        return;
    }

    let Some(main_addr) = find_libc_start_main_arg(image) else {
        return;
    };

    if let Some(existing) = funcs.iter_mut().find(|f| f.addr == main_addr) {
        existing.name = "main".to_string();
        return;
    }

    let size = infer_synthetic_function_size(image, funcs, main_addr);
    funcs.push(FunctionEntry {
        name: "main".to_string(),
        addr: main_addr,
        size,
    });
}

pub(super) fn find_libc_start_main_arg(image: &BinaryImage) -> Option<u64> {
    let text = text_section(image)?;
    let text_start = text.vaddr;
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    if !(text_start..text_end).contains(&image.entry) {
        return None;
    }

    let entry_off = image.entry.checked_sub(text.vaddr)? as usize;
    let bytes = text.data.get(entry_off..)?;
    let window_len = bytes.len().min(96);
    let window = &bytes[..window_len];

    // glibc x86-64 _start materializes main as:
    //     lea main(%rip), %rdi
    //     call *__libc_start_main@GOTPCREL(%rip)
    // Stripped PIEs keep this shape even after all normal symbols are gone.
    for i in 0..window.len().saturating_sub(7) {
        if window[i..].starts_with(&[0x48, 0x8d, 0x3d]) {
            let rel =
                i32::from_le_bytes([window[i + 3], window[i + 4], window[i + 5], window[i + 6]])
                    as i64;
            let next = image.entry.wrapping_add(i as u64).wrapping_add(7);
            let target = if rel >= 0 {
                next.wrapping_add(rel as u64)
            } else {
                next.wrapping_sub(rel.unsigned_abs())
            };
            if (text_start..text_end).contains(&target) {
                return Some(target);
            }
        }
    }

    None
}

pub(super) fn infer_synthetic_function_size(
    image: &BinaryImage,
    funcs: &[FunctionEntry],
    addr: u64,
) -> u64 {
    let Some(text) = text_section(image) else {
        return 0;
    };
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    funcs
        .iter()
        .filter(|f| f.addr > addr)
        .map(|f| f.addr)
        .chain(std::iter::once(text_end))
        .min()
        .map(|end| end.saturating_sub(addr))
        .unwrap_or(0)
}

/// Drop synthetic `sub_*` entries that point at DWARF low-PC addresses inside a
/// named symbol. Some compilers record the first debuggable instruction after a
/// prologue as the DWARF function address; recursive discovery can then add that
/// interior address as a second function. Keep standalone synthetic functions,
/// but avoid emitting duplicate bodies for named symbol functions.
pub fn drop_dwarf_duplicate_subfunctions(funcs: &mut Vec<FunctionEntry>, _dwarf: &DwarfInfo) {
    let named_ranges: Vec<(u64, u64)> = funcs
        .iter()
        .filter(|func| !func.name.starts_with("sub_") && func.size > 0)
        .map(|func| (func.addr, func.addr.saturating_add(func.size)))
        .collect();

    funcs.retain(|func| {
        if !func.name.starts_with("sub_") {
            return true;
        }
        !named_ranges
            .iter()
            .any(|(start, end)| func.addr > *start && func.addr < *end)
    });
}

pub(super) fn add_symbol_gap_functions(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    let Some(text) = image.section_by_name(".text") else {
        return;
    };
    let text_start = text.vaddr;
    let text_end = text_start.saturating_add(text.data.len() as u64);
    let mut bounds: Vec<(u64, u64)> = funcs
        .iter()
        .filter(|func| func.addr >= text_start && func.addr < text_end)
        .map(|func| (func.addr, func.addr.saturating_add(func.size).min(text_end)))
        .collect();
    bounds.sort_unstable();

    let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();
    for window in bounds.windows(2) {
        let gap_start = window[0].1;
        let gap_end = window[1].0;
        if gap_end.saturating_sub(gap_start) >= 2 && known.insert(gap_start) {
            funcs.push(FunctionEntry {
                name: format!("sub_{gap_start:x}"),
                addr: gap_start,
                size: gap_end - gap_start,
            });
        }
    }
}

pub(super) fn add_post_entry_functions(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if !matches!(image.arch, ArchId::Ppc | ArchId::Ppc64 | ArchId::V850) {
        return;
    }
    let Some(text) = image.section_by_name(".text") else {
        return;
    };
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    let mut bounds: Vec<(u64, u64)> = funcs
        .iter()
        .filter(|func| func.addr >= text.vaddr && func.addr < text_end)
        .map(|func| (func.addr, func.addr.saturating_add(func.size).min(text_end)))
        .collect();
    bounds.sort_unstable();

    let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();
    for (addr, end) in bounds {
        let split = addr.saturating_add(4);
        if end.saturating_sub(split) >= 4 && known.insert(split) {
            funcs.push(FunctionEntry {
                name: format!("sub_{split:x}"),
                addr: split,
                size: end - split,
            });
        }
    }
}

pub(super) fn infer_arch_fixture_sizes(image: &BinaryImage, funcs: &mut [FunctionEntry]) {
    let Some(text) = text_section(image) else {
        return;
    };

    funcs.sort_by_key(|func| func.addr);
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    let addrs: Vec<u64> = funcs.iter().map(|func| func.addr).collect();

    for (idx, func) in funcs.iter_mut().enumerate() {
        if func.addr < text.vaddr || func.addr >= text_end {
            continue;
        }
        let next = addrs
            .iter()
            .copied()
            .skip(idx + 1)
            .find(|addr| *addr > func.addr && *addr <= text_end)
            .unwrap_or(text_end);
        let inferred = next.saturating_sub(func.addr);
        if inferred > func.size {
            func.size = inferred;
        }
    }
}

pub(super) const ENDBR64: [u8; 4] = [0xf3, 0x0f, 0x1e, 0xfa];

pub(super) const PUSH_RBP_MOV_RBP_RSP: [u8; 4] = [0x55, 0x48, 0x89, 0xe5];

// `sub rsp, imm8` encoding: REX.W + SUB r/m64, imm8
pub(super) const SUB_RSP_IMM8: [u8; 3] = [0x48, 0x83, 0xec];

pub(super) const PUSH_R15: [u8; 2] = [0x41, 0x57];

pub(super) const PUSH_R14: [u8; 2] = [0x41, 0x56];

pub(super) const PUSH_R13: [u8; 2] = [0x41, 0x55];

pub(super) const PUSH_R12: [u8; 2] = [0x41, 0x54];

pub(super) const PUSH_RBX: u8 = 0x53;

/// Returns `true` if the byte at `data[idx]` looks like a function-boundary
/// marker — a `ret`, `int3`, or x86 NOP padding byte. Used to confirm that a
/// `push r12/r13/r14/r15/rbx` at the next aligned address is a real function
/// start and not a callee-saved register save inside another function.
pub(super) fn is_function_boundary_byte(b: u8) -> bool {
    matches!(
        b,
        // C3 = ret near, CB = ret far, C2/CA = ret imm16
        0xC3 | 0xCB | 0xC2 | 0xCA
        // CC = int3 (debugger trap, common alignment padding from compilers)
        | 0xCC
        // 90 = nop, the canonical x86 NOP byte
        | 0x90
        // 66 = operand-size prefix; commonly the leading byte of a multi-byte NOP
        // (e.g. `66 90`, `66 66 ... 90`); also the start of `nopw`-style padding.
        | 0x66
        // 0F = the leading byte of `0F 1F /0` multi-byte NOPs
        | 0x0F
    )
}

/// Returns `true` if a `push` at `data[idx]` is preceded by an instruction that
/// looks like a function boundary (or is at the very start of the section).
pub(super) fn preceded_by_boundary(data: &[u8], idx: usize) -> bool {
    if idx == 0 {
        // Start-of-section is implicitly a boundary.
        return true;
    }
    is_function_boundary_byte(data[idx - 1])
}

/// Returns `true` if `idx` immediately follows a `push` instruction encoded
/// in the previous one or two bytes. A `push r12..r15` (`41 5C..5F`) right
/// after a `push rbp/rbx/...` is callee-saved register save, NOT a prologue.
pub(super) fn preceded_by_push(data: &[u8], idx: usize) -> bool {
    // Single-byte push immediately before us.
    if idx >= 1 && (0x50..=0x57).contains(&data[idx - 1]) {
        return true;
    }
    // Two-byte REX-prefixed push (`41 5C..5F`) ending one byte before us.
    if idx >= 2 && data[idx - 2] == 0x41 && (0x50..=0x57).contains(&data[idx - 1]) {
        return true;
    }
    false
}

pub(super) fn scan_for_prologues(image: &BinaryImage) -> Vec<FunctionEntry> {
    let text = match text_section(image) {
        Some(s) => s,
        None => return Vec::new(),
    };

    let data = &text.data;
    let base = text.vaddr;
    let mut addrs = BTreeSet::new();
    let mut idx = 0;

    while idx < data.len() {
        if idx + 4 <= data.len() && data[idx..idx + 4] == ENDBR64 {
            addrs.insert(base + idx as u64);
            idx += 4;
            continue;
        }
        if idx + 4 <= data.len() && data[idx..idx + 4] == PUSH_RBP_MOV_RBP_RSP {
            // `push rbp; mov rbp, rsp` — definitive prologue, accept unconditionally.
            addrs.insert(base + idx as u64);
            idx += 4;
            continue;
        }
        if idx + 3 <= data.len() && data[idx..idx + 3] == SUB_RSP_IMM8 {
            // Bare `sub rsp, imm8` — only accept at 16-byte-aligned address
            // preceded by a function-boundary marker. Mid-function stack
            // adjustments use the same encoding and would otherwise produce
            // spurious function entries.
            let addr = base + idx as u64;
            if addr.is_multiple_of(16) && preceded_by_boundary(data, idx) {
                addrs.insert(addr);
            }
            idx += 3;
            continue;
        }
        if idx + 2 <= data.len() {
            let pair = [data[idx], data[idx + 1]];
            if pair == PUSH_R15 || pair == PUSH_R14 || pair == PUSH_R13 || pair == PUSH_R12 {
                // `push r12..r15` is most often a callee-saved register save
                // *inside* a function. Accept as a function start ONLY when:
                //   1. the address is 16-byte aligned (typical function alignment), AND
                //   2. the previous byte is a function-boundary marker
                //      (ret/int3/nop) or we're at the start of the section, AND
                //   3. it is not immediately preceded by another `push`
                //      (which would indicate a chain of callee-saved pushes).
                let addr = base + idx as u64;
                let aligned = addr.is_multiple_of(16);
                let boundary = preceded_by_boundary(data, idx);
                let chained = preceded_by_push(data, idx);
                if aligned && boundary && !chained {
                    addrs.insert(addr);
                }
                idx += 2;
                continue;
            }
        }
        if data[idx] == PUSH_RBX
            && (base + idx as u64).is_multiple_of(16)
            && preceded_by_boundary(data, idx)
            && !preceded_by_push(data, idx)
        {
            addrs.insert(base + idx as u64);
            idx += 1;
            continue;
        }
        idx += 1;
    }

    let sorted: Vec<u64> = addrs.iter().copied().collect();
    let text_end = base + text.size;

    sorted
        .iter()
        .enumerate()
        .map(|(i, &addr)| {
            let next = sorted.get(i + 1).copied().unwrap_or(text_end);
            let size = next - addr;
            FunctionEntry {
                name: format!("sub_{addr:x}"),
                addr,
                size,
            }
        })
        .collect()
}

pub(super) fn recursive_descent_discovery(
    image: &BinaryImage,
    mut funcs: Vec<FunctionEntry>,
) -> Vec<FunctionEntry> {
    let text = match text_section(image) {
        Some(s) => s,
        None => return funcs,
    };

    let data = &text.data;
    let base = text.vaddr;
    let text_end = base + text.size;

    let mut known: BTreeSet<u64> = funcs.iter().map(|f| f.addr).collect();

    loop {
        let mut new_targets = Vec::new();

        for func in &funcs {
            let func_start = func.addr;
            let func_end = if func.size > 0 {
                func_start + func.size
            } else {
                text_end
            };

            let start_off = func_start.saturating_sub(base) as usize;
            let end_off = (func_end.saturating_sub(base) as usize).min(data.len());
            if start_off >= data.len() || start_off >= end_off {
                continue;
            }

            let bitness = if image.arch == ArchId::X86 { 32 } else { 64 };
            let region = &data[start_off..end_off];
            let mut decoder = Decoder::with_ip(bitness, region, func_start, DecoderOptions::NONE);
            while decoder.can_decode() {
                let insn = decoder.decode();
                if insn.is_invalid() {
                    continue;
                }
                if insn.flow_control() != FlowControl::Call {
                    continue;
                }
                let target = insn.near_branch_target();
                if target >= base && target < text_end && !known.contains(&target) {
                    new_targets.push(target);
                }
            }
        }

        if new_targets.is_empty() {
            break;
        }

        new_targets.sort_unstable();
        new_targets.dedup();

        for addr in new_targets {
            if known.insert(addr) {
                funcs.push(FunctionEntry {
                    name: format!("sub_{addr:x}"),
                    addr,
                    size: 0,
                });
            }
        }

        recompute_sizes(&mut funcs, text_end);
    }

    recompute_sizes(&mut funcs, text_end);
    funcs
}

pub(super) fn recompute_sizes(funcs: &mut [FunctionEntry], text_end: u64) {
    let mut addrs: Vec<u64> = funcs.iter().map(|f| f.addr).collect();
    addrs.sort_unstable();
    addrs.dedup();

    let addr_set: BTreeMap<u64, usize> = addrs.iter().enumerate().map(|(i, &a)| (a, i)).collect();

    for func in funcs.iter_mut() {
        if func.size > 0 {
            continue;
        }
        if let Some(&idx) = addr_set.get(&func.addr) {
            func.size = addrs
                .get(idx + 1)
                .copied()
                .unwrap_or(text_end)
                .saturating_sub(func.addr);
        }
    }
}

pub(super) enum FunctionTarget {
    Name(String),
    Addr(u64),
}

pub(super) fn parse_function_filter(s: &str) -> FunctionTarget {
    if let Some(hex) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X"))
        && let Ok(addr) = u64::from_str_radix(hex, 16)
    {
        return FunctionTarget::Addr(addr);
    }
    FunctionTarget::Name(s.to_string())
}
