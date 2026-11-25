//! (unlace `globalref`) The address ranges a program's own data objects live in.
//!
//! The printer names a pointer-typed constant `&dat_<addr>` only when the
//! address lands in one of these ranges, so this is the loader's answer to
//! "could a global variable sit here": an allocated section of initialized,
//! read-only or zero-filled data. Code, TLS templates (their addresses are
//! offsets, not run-time locations), and the tables the toolchain and the
//! run-time loader own (`.got`, `.eh_frame`, `.dynamic`, import pointer slots,
//! unwind data) are not, even when their section kind says data.

use object::SectionKind;

/// Does a section of this name and kind hold objects the program's own code
/// names by address?
pub fn holds_program_objects(name: &str, kind: SectionKind) -> bool {
    let data = matches!(
        kind,
        SectionKind::Data
            | SectionKind::ReadOnlyData
            | SectionKind::ReadOnlyDataWithRel
            | SectionKind::ReadOnlyString
            | SectionKind::UninitializedData
            | SectionKind::Common
    );
    data && !is_runtime_table(name)
}

/// The data-kind sections that belong to the toolchain or the run-time loader.
fn is_runtime_table(name: &str) -> bool {
    const PREFIXES: &[&str] = &[
        ".got",
        ".plt",
        ".eh_frame",
        ".gcc_except_table",
        ".interp",
        ".dynamic",
        ".tm_clone_table",
        ".idata",
        ".edata",
        ".pdata",
        ".xdata",
        ".reloc",
        ".tls",
        "__got",
        "__la_symbol_ptr",
        "__nl_symbol_ptr",
        "__eh_frame",
        "__unwind_info",
        "__compact_unwind",
        "__auth_got",
        "__thread_",
    ];
    PREFIXES.iter().any(|p| name.starts_with(p))
}

/// `(vma, size)` rows as sorted, merged, inclusive `[start, stop]` ranges.
pub fn merged_ranges(rows: impl IntoIterator<Item = (u64, u64)>) -> Vec<(u64, u64)> {
    let mut out: Vec<(u64, u64)> = rows
        .into_iter()
        .filter(|&(vma, size)| size != 0 && vma != 0)
        .filter_map(|(vma, size)| vma.checked_add(size - 1).map(|stop| (vma, stop)))
        .collect();
    out.sort_unstable();
    let mut merged: Vec<(u64, u64)> = Vec::with_capacity(out.len());
    for (lo, hi) in out {
        match merged.last_mut() {
            Some(last) if lo <= last.1.saturating_add(1) => last.1 = last.1.max(hi),
            _ => merged.push((lo, hi)),
        }
    }
    merged
}

#[cfg(test)]
mod tests;
