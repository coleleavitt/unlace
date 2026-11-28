//! `MH_FILESET` kernel collections: list the `LC_FILESET_ENTRY` images and cut
//! one out as a standalone thin Mach-O.

use std::collections::HashMap;

use unlace_decomp::kernelcache::KernelcacheChoice;

use super::linked::{self, LinkSearch};
use crate::loader::format::macho::{ChainedFixups, resolve_chained_fixups};
use crate::rtti::arm64evcall::SignedImage;

mod merge;
mod prelink;
mod prelinked;

const MH_MAGIC_64: u32 = 0xfeed_facf;
pub(super) const MH_EXECUTE: u32 = 0x2;
const MH_FILESET: u32 = 0xc;
pub(super) const LC_SEGMENT_64: u32 = 0x19;
const LC_FILESET_ENTRY: u32 = 0x8000_0035;
const LC_SYMTAB: u32 = 0x2;
const LC_DYSYMTAB: u32 = 0xb;
const HEADER_LEN: usize = 32;
pub(super) const NLIST_LEN: usize = 16;
const SEGMENT_LEN: usize = 72;
const SECTION_LEN: usize = 80;
const N_EXT: u8 = 0x01;
const N_ABS: u8 = 0x02;
const S_ATTR_SOME_INSTRUCTIONS: u32 = 0x400;

/// One image of a kernel collection.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(super) struct FilesetEntry {
    pub(super) id: String,
    pub(super) fileoff: u64,
    /// `MH_EXECUTE` for the kernel, `MH_KEXT_BUNDLE` for a kext.
    pub(super) filetype: u32,
}

/// A pre-fileset (prelinked) kernelcache, or a static image with threaded or
/// chained pointers: the pointers are rebased, then `auto` loads the kernel
/// (with every kext, on a cache that merged them into it), `list` prints the
/// kexts the cache holds, and kexts are chosen as in a fileset.
pub(super) fn legacy(
    mut bytes: Vec<u8>,
    choice: &KernelcacheChoice,
) -> Result<(Vec<u8>, Option<String>), String> {
    if !prelinked::is_prelinked(&bytes) {
        return Ok((bytes, None));
    }
    let rebased = prelinked::rebase(&mut bytes);
    let info = prelink::kexts(&bytes).unwrap_or_default();
    let KernelcacheChoice::Entry(name) = choice else {
        let note = (rebased > 0 || !info.is_empty()).then(|| {
            let kexts = if info.is_empty() {
                String::new()
            } else {
                format!(
                    "; {} kexts listed in __PRELINK_INFO (--option kernelcache list)",
                    info.len()
                )
            };
            format!("prelinked kernelcache: {rebased} threaded/chained pointers rebased{kexts}")
        });
        return Ok((bytes, note));
    };
    let (all, merged) = prelinked::entries(&mut bytes, &info);
    if name == "list" {
        let by_id: HashMap<&str, &prelink::KextInfo> =
            info.iter().map(|k| (k.id.as_str(), k)).collect();
        let lines: Vec<String> = all
            .iter()
            .map(|e| {
                by_id
                    .get(e.id.as_str())
                    .map_or_else(|| e.id.clone(), |k| prelink::describe(k))
            })
            .collect();
        return Err(format!(
            "prelinked kernelcache entries ({}{}):\n{}",
            all.len(),
            if merged {
                ", kexts merged into the kernel"
            } else {
                ""
            },
            lines.join("\n")
        ));
    }
    let chosen = select_many(&all, choice)?;
    let ids: Vec<&str> = chosen.iter().map(|&i| all[i].id.as_str()).collect();
    let shown = if ids.len() > 4 {
        format!("{} entries", ids.len())
    } else {
        ids.join(", ")
    };
    let image = prelinked::cut(bytes, &all, merged, &chosen)?;
    let note = format!(
        "prelinked kernelcache: loaded {shown} ({rebased} threaded/chained pointers rebased)"
    );
    Ok((image, Some(note)))
}

pub(super) fn is_prelinked(bytes: &[u8]) -> bool {
    prelinked::is_prelinked(bytes)
}

pub(super) fn is_fileset(bytes: &[u8]) -> bool {
    rd_u32(bytes, 0) == Some(MH_MAGIC_64) && rd_u32(bytes, 12) == Some(MH_FILESET)
}

/// Which entry of a kernel collection was loaded, and the addresses every
/// entry's segments map: what a surface reading the loaded entry needs to say
/// that an address belongs to another entry rather than to nothing.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FilesetMap {
    pub loaded: String,
    entries: Vec<(String, Vec<std::ops::Range<u64>>)>,
}

impl FilesetMap {
    /// The entry whose segments map `addr`, the loaded entry first (every entry
    /// maps the one shared `__LINKEDIT`).
    pub fn owner(&self, addr: u64) -> Option<&str> {
        let loaded = self.entries.iter().filter(|(id, _)| *id == self.loaded);
        loaded
            .chain(self.entries.iter())
            .find(|(_, ranges)| ranges.iter().any(|r| r.contains(&addr)))
            .map(|(id, _)| id.as_str())
    }
}

/// The [`FilesetMap`] of a collection with `all[index]` loaded. Each distinct
/// entry header is read once, the loaded one first, within the [`bind_work`]
/// budget.
fn fileset_map(bytes: &[u8], all: &[FilesetEntry], index: usize) -> FilesetMap {
    let mut work = bind_work(bytes);
    let mut seen = std::collections::HashSet::new();
    let mut entries = Vec::new();
    for entry in std::iter::once(&all[index]).chain(all) {
        if work == 0 {
            break;
        }
        if !seen.insert(entry.fileoff) {
            continue;
        }
        let Some(cmds) = load_commands(bytes, entry.fileoff as usize) else {
            continue;
        };
        work = work.saturating_sub(cmds.len());
        let ranges = cmds
            .iter()
            .filter(|&&(cmd, _)| cmd == LC_SEGMENT_64)
            .filter_map(|&(_, p)| {
                let vmaddr = rd_u64(bytes, p + 24)?;
                Some(vmaddr..vmaddr.saturating_add(rd_u64(bytes, p + 32)?))
            })
            .filter(|r| !r.is_empty())
            .collect();
        entries.push((entry.id.clone(), ranges));
    }
    FilesetMap {
        loaded: all[index].id.clone(),
        entries,
    }
}

struct Segment {
    vmaddr: u64,
    fileoff: u64,
    filesize: u64,
}

/// `(cmd, offset)` of each load command of the 64-bit header at `at`. A command
/// must lie inside the file and be large enough for the fields read from it.
pub(super) fn load_commands(bytes: &[u8], at: usize) -> Option<Vec<(u32, usize)>> {
    if rd_u32(bytes, at)? != MH_MAGIC_64 {
        return None;
    }
    let ncmds = rd_u32(bytes, at + 16)? as usize;
    let end = at
        .checked_add(HEADER_LEN)?
        .checked_add(rd_u32(bytes, at + 20)? as usize)?
        .min(bytes.len());
    let mut out = Vec::with_capacity(ncmds.min(4096));
    let mut p = at + HEADER_LEN;
    for _ in 0..ncmds {
        let cmd = rd_u32(bytes, p)?;
        let size = rd_u32(bytes, p + 4)? as usize;
        if p.checked_add(size)? > end || !command_fits(bytes, cmd, p, size) {
            return None;
        }
        out.push((cmd, p));
        p += size;
    }
    Some(out)
}

const SEGMENT_CMD_LEN: usize = 72;
const LC_FUNCTION_STARTS_CMD: u32 = 0x26;

/// Whether the command at `p` of `size` bytes holds the fields its kind is read
/// for, and for a segment, every section its header declares.
fn command_fits(bytes: &[u8], cmd: u32, p: usize, size: usize) -> bool {
    match cmd {
        LC_SEGMENT_64 => {
            size >= SEGMENT_CMD_LEN
                && rd_u32(bytes, p + 64)
                    .is_some_and(|n| SEGMENT_CMD_LEN + n as usize * SECTION_LEN <= size)
        }
        LC_SYMTAB => size >= 24,
        LC_DYSYMTAB => size >= 80,
        LC_FILESET_ENTRY => size >= 32,
        LC_FUNCTION_STARTS_CMD | 0x1d | 0x1e | 0x29 | 0x2b | 0x2e | 0x33 | 0x34 => size >= 16,
        _ => size >= 8,
    }
}

fn segments(bytes: &[u8], at: usize) -> Option<Vec<Segment>> {
    load_commands(bytes, at)?
        .into_iter()
        .filter(|&(cmd, _)| cmd == LC_SEGMENT_64)
        .map(|(_, p)| {
            Some(Segment {
                vmaddr: rd_u64(bytes, p + 24)?,
                fileoff: rd_u64(bytes, p + 40)?,
                filesize: rd_u64(bytes, p + 48)?,
            })
        })
        .collect()
}

pub(super) fn entries(bytes: &[u8]) -> Option<Vec<FilesetEntry>> {
    if !is_fileset(bytes) {
        return None;
    }
    load_commands(bytes, 0)?
        .into_iter()
        .filter(|&(cmd, _)| cmd == LC_FILESET_ENTRY)
        .map(|(_, p)| {
            let size = rd_u32(bytes, p + 4)? as usize;
            let name_off = rd_u32(bytes, p + 24)? as usize;
            let name = bytes.get(p.checked_add(name_off)?..p.checked_add(size)?)?;
            let name = name.split(|&b| b == 0).next()?;
            let fileoff = rd_u64(bytes, p + 16)?;
            Some(FilesetEntry {
                id: String::from_utf8_lossy(name).into_owned(),
                fileoff,
                filetype: rd_u32(bytes, usize::try_from(fileoff).ok()?.checked_add(12)?)?,
            })
        })
        .collect()
}

/// The entries `choice` names: `all`, a comma-separated list, or one entry.
fn select_many(all: &[FilesetEntry], choice: &KernelcacheChoice) -> Result<Vec<usize>, String> {
    let chosen = select_entries(all, choice)?;
    if chosen.is_empty() {
        return Err("the MH_FILESET names no entry to load".into());
    }
    Ok(chosen)
}

fn select_entries(all: &[FilesetEntry], choice: &KernelcacheChoice) -> Result<Vec<usize>, String> {
    let position = |e: &FilesetEntry| all.iter().position(|a| a.fileoff == e.fileoff).unwrap_or(0);
    match choice {
        KernelcacheChoice::Entry(name) if name == "all" => Ok((0..all.len()).collect()),
        KernelcacheChoice::Entry(name) if name.contains(',') => {
            let mut out = Vec::new();
            for part in name.split(',').filter(|p| !p.is_empty()) {
                let one = KernelcacheChoice::Entry(part.to_string());
                let i = position(select(all, &one)?);
                if !out.contains(&i) {
                    out.push(i);
                }
            }
            out.sort_unstable();
            Ok(out)
        }
        _ => Ok(vec![position(select(all, choice)?)]),
    }
}

fn select<'a>(
    all: &'a [FilesetEntry],
    choice: &KernelcacheChoice,
) -> Result<&'a FilesetEntry, String> {
    let name = match choice {
        KernelcacheChoice::Entry(name) => name,
        _ => {
            return all
                .iter()
                .find(|e| e.filetype == MH_EXECUTE)
                .or_else(|| all.first())
                .ok_or_else(|| "MH_FILESET has no LC_FILESET_ENTRY".to_string());
        }
    };
    if let Some(e) = all.iter().find(|e| e.id == *name) {
        return Ok(e);
    }
    if name == "list" {
        let ids: Vec<&str> = all.iter().map(|e| e.id.as_str()).collect();
        return Err(format!(
            "MH_FILESET entries ({}):\n{}",
            all.len(),
            ids.join("\n")
        ));
    }
    let lower = name.to_ascii_lowercase();
    let suffix = format!(".{lower}");
    let hits: Vec<&FilesetEntry> = all
        .iter()
        .filter(|e| {
            let id = e.id.to_ascii_lowercase();
            id == lower || id.ends_with(&suffix)
        })
        .collect();
    if let [one] = hits[..] {
        return Ok(one);
    }
    let near: Vec<&str> = if hits.is_empty() {
        all.iter()
            .filter(|e| e.id.to_ascii_lowercase().contains(&lower))
            .map(|e| e.id.as_str())
            .collect()
    } else {
        hits.iter().map(|e| e.id.as_str()).collect()
    };
    let shown = if near.is_empty() {
        all.iter().map(|e| e.id.as_str()).take(8).collect()
    } else {
        near
    };
    Err(format!(
        "no single MH_FILESET entry matches {name:?} ({} entries; {}: {}; \
         `--option kernelcache list` prints them all)",
        all.len(),
        if hits.len() > 1 {
            "ambiguous between"
        } else {
            "for example"
        },
        shown.join(", ")
    ))
}

/// Cut the chosen entry out of a kernel collection: rebase every chained-fixup
/// pointer slot, those into a linked collection against the file `search`
/// finds, then copy the entry's header and load commands to offset 0.
/// The collection's signed slots come back beside the image, since rebasing
/// strips their signing context from it.
pub(super) fn extract(
    mut bytes: Vec<u8>,
    choice: &KernelcacheChoice,
    search: &LinkSearch,
) -> Result<(Vec<u8>, String, SignedImage, Option<FilesetMap>), String> {
    let all = entries(&bytes).ok_or("malformed MH_FILESET load commands")?;
    if *choice == KernelcacheChoice::Entry("list".into()) {
        let info: HashMap<String, prelink::KextInfo> = prelink::kexts(&bytes)
            .unwrap_or_default()
            .into_iter()
            .map(|k| (k.id.clone(), k))
            .collect();
        let lines: Vec<String> = all
            .iter()
            .map(|e| {
                info.get(&e.id)
                    .map_or_else(|| e.id.clone(), prelink::describe)
            })
            .collect();
        return Err(format!(
            "MH_FILESET entries ({}):\n{}",
            all.len(),
            lines.join("\n")
        ));
    }
    let chosen = select_many(&all, choice)?;
    let (applied, signed, linked) = apply_fixups(&mut bytes, &all, search)?;
    let branch = merge::branch_segments(&bytes).len();
    if chosen.len() > 1 || branch > 0 {
        let ids: Vec<&str> = chosen.iter().map(|&i| all[i].id.as_str()).collect();
        let shown = if ids.len() > 4 {
            format!("{} entries", ids.len())
        } else {
            ids.join(", ")
        };
        let image = merge::merge(bytes, &all, &chosen)?;
        let mut note = format!(
            "MH_FILESET: loaded {shown} as one image ({applied} chained-fixup pointers rebased, \
             {branch} branch-stub segments mapped"
        );
        for clause in &linked.notes {
            note.push_str(", ");
            note.push_str(clause);
        }
        note.push(')');
        return Ok((image, note, signed, None));
    }
    let index = chosen[0];
    let entry = all[index].clone();
    let map = fileset_map(&bytes, &all, index);

    let at = usize::try_from(entry.fileoff).map_err(|_| "fileset entry offset out of range")?;
    let sizeofcmds = rd_u32(&bytes, at + 20).ok_or("truncated fileset entry header")? as usize;
    let header_len = HEADER_LEN
        .checked_add(sizeofcmds)
        .ok_or("fileset entry load commands overflow")?;
    if at
        .checked_add(header_len)
        .is_none_or(|end| end > bytes.len())
    {
        return Err(format!(
            "the header of {} runs past the end of the collection",
            entry.id
        ));
    }
    let segs =
        segments(&bytes, at).ok_or_else(|| format!("malformed load commands in {}", entry.id))?;
    if segs
        .iter()
        .any(|s| s.filesize > 0 && s.fileoff < header_len as u64)
    {
        return Err(format!(
            "cannot cut {} out of its collection: its data starts inside the header",
            entry.id
        ));
    }
    let bound = if entry.filetype == MH_EXECUTE {
        0
    } else {
        bind_to_collection(&mut bytes, &all, index)
    };
    append_bound_symbols(&mut bytes, at, &linked.names);
    bytes.copy_within(at..at + header_len, 0);
    let mut bound = if bound > 0 {
        format!(", {bound} undefined symbols bound to the collection")
    } else {
        String::new()
    };
    for clause in &linked.notes {
        bound.push_str(", ");
        bound.push_str(clause);
    }
    let note = format!(
        "MH_FILESET: loaded {} (entry {} of {}, {applied} chained-fixup pointers rebased{bound}); \
         choose another entry with --option kernelcache <bundle-id>",
        entry.id,
        index + 1,
        all.len()
    );
    Ok((bytes, note, signed, Some(map)))
}

/// An entry's `LC_SYMTAB` and its `LC_DYSYMTAB` external-defined and undefined
/// index ranges, clamped to the symbols the file actually holds.
pub(super) struct Symbols {
    pub(super) symoff: usize,
    stroff: usize,
    /// Every symbol the table holds.
    pub(super) count: usize,
    extdef: std::ops::Range<usize>,
    undef: std::ops::Range<usize>,
}

pub(super) fn symbols(bytes: &[u8], cmds: &[(u32, usize)]) -> Option<Symbols> {
    let (_, st) = *cmds.iter().find(|&&(cmd, _)| cmd == LC_SYMTAB)?;
    let mut syms = symbols_of(bytes, st)?;
    let Some(&(_, dy)) = cmds.iter().find(|&&(cmd, _)| cmd == LC_DYSYMTAB) else {
        return Some(syms);
    };
    let range = |i: usize| -> Option<std::ops::Range<usize>> {
        let first = (rd_u32(bytes, dy + i)? as usize).min(syms.count);
        Some(
            first
                ..first
                    .saturating_add(rd_u32(bytes, dy + i + 4)? as usize)
                    .min(syms.count),
        )
    };
    (syms.extdef, syms.undef) = (range(16)?, range(24)?);
    Some(syms)
}

/// The symbol table of the `LC_SYMTAB` at `st`, its index ranges empty.
fn symbols_of(bytes: &[u8], st: usize) -> Option<Symbols> {
    let symoff = rd_u32(bytes, st + 8)? as usize;
    let count =
        (rd_u32(bytes, st + 12)? as usize).min(bytes.len().saturating_sub(symoff) / NLIST_LEN);
    Some(Symbols {
        symoff,
        stroff: rd_u32(bytes, st + 16)? as usize,
        count,
        extdef: 0..0,
        undef: 0..0,
    })
}

pub(super) fn nlist_name<'a>(
    bytes: &'a [u8],
    syms: &Symbols,
    index: usize,
    work: &mut usize,
) -> Option<&'a [u8]> {
    let strx = rd_u32(
        bytes,
        syms.symoff.checked_add(index.checked_mul(NLIST_LEN)?)?,
    )? as usize;
    let tail = bytes.get(syms.stroff.checked_add(strx)?..)?;
    let window = &tail[..tail.len().min(*work)];
    let Some(len) = window.iter().position(|&b| b == 0) else {
        *work = work.saturating_sub(window.len());
        return None;
    };
    *work = work.saturating_sub(len + 1);
    (len > 0).then(|| &tail[..len])
}

/// The work [`bind_to_collection`] may spend, in commands, sections and symbol
/// name bytes visited: an honest collection costs a fraction of its size, while
/// entry headers sharing load commands or a name table would multiply it.
pub(super) fn bind_work(bytes: &[u8]) -> usize {
    bytes.len().saturating_mul(4).max(1 << 20)
}

/// Bind a kext's undefined symbols the collection resolved at build time: a kext
/// calls into the kernel and its dependencies with a direct `bl`, and the only
/// record of the callee's name is the kext's undefined `nlist`. Each one that
/// another entry exports as code is rewritten to `N_ABS | N_EXT` at that address
/// (the kernel's definition wins over a kext's), which the Mach-O import walk
/// reads as an external function. Each distinct entry header is read once, the
/// names copied never exceed the file, and collecting and writing each stop at
/// the [`bind_work`] budget. Returns how many were bound.
fn bind_to_collection(bytes: &mut [u8], all: &[FilesetEntry], index: usize) -> usize {
    let mut work = bind_work(bytes);
    let Some(own) =
        load_commands(bytes, all[index].fileoff as usize).and_then(|c| symbols(bytes, &c))
    else {
        return 0;
    };
    let mut wanted: std::collections::HashMap<Vec<u8>, Option<(u64, bool)>> =
        std::collections::HashMap::new();
    let mut allowance = bytes.len();
    for i in own.undef.clone() {
        let Some(name) = nlist_name(bytes, &own, i, &mut work) else {
            continue;
        };
        if wanted.contains_key(name) || name.len() > allowance {
            continue;
        }
        allowance -= name.len();
        wanted.insert(name.to_vec(), None);
    }
    let mut seen = std::collections::HashSet::from([all[index].fileoff]);
    for entry in all {
        if work == 0 {
            break;
        }
        if !seen.insert(entry.fileoff) {
            continue;
        }
        let at = entry.fileoff as usize;
        let Some(cmds) = load_commands(bytes, at) else {
            continue;
        };
        work = work.saturating_sub(cmds.len());
        let (Some(syms), Some(code)) =
            (symbols(bytes, &cmds), code_ranges(bytes, &cmds, &mut work))
        else {
            continue;
        };
        let is_kernel = entry.filetype == MH_EXECUTE;
        for s in syms.extdef.clone() {
            let Some(name) = nlist_name(bytes, &syms, s, &mut work) else {
                continue;
            };
            let Some(slot) = wanted.get_mut(name) else {
                continue;
            };
            let Some(addr) = rd_u64(bytes, syms.symoff + s * NLIST_LEN + 8) else {
                continue;
            };
            work = work.saturating_sub(code.len());
            if !code.iter().any(|r| r.contains(&addr)) {
                continue;
            }
            match slot {
                Some((_, true)) => {}
                Some(_) if !is_kernel => *slot = Some((0, false)),
                _ => *slot = Some((addr, is_kernel)),
            }
        }
    }
    let mut bound = 0;
    let mut work = bind_work(bytes);
    for i in own.undef.clone() {
        let Some(name) = nlist_name(bytes, &own, i, &mut work) else {
            continue;
        };
        let Some(&Some((addr, _))) = wanted.get(name) else {
            continue;
        };
        if addr == 0 {
            continue;
        }
        let at = own.symoff + i * NLIST_LEN;
        let Some(nlist) = bytes.get_mut(at..at + NLIST_LEN) else {
            continue;
        };
        nlist[4] = N_ABS | N_EXT;
        nlist[5] = 0;
        nlist[8..].copy_from_slice(&addr.to_le_bytes());
        bound += 1;
    }
    bound
}

/// The address ranges of an entry's instruction-bearing sections. A segment's
/// sections are read only as far as its own `cmdsize` holds them.
pub(super) fn code_ranges(
    bytes: &[u8],
    cmds: &[(u32, usize)],
    work: &mut usize,
) -> Option<Vec<std::ops::Range<u64>>> {
    let mut out = Vec::new();
    for &(cmd, p) in cmds {
        if cmd != LC_SEGMENT_64 {
            continue;
        }
        let room = (rd_u32(bytes, p + 4)? as usize).saturating_sub(SEGMENT_LEN) / SECTION_LEN;
        let nsects = (rd_u32(bytes, p + 64)? as usize).min(room);
        for k in 0..nsects {
            if *work == 0 {
                return Some(out);
            }
            *work -= 1;
            let s = p + SEGMENT_LEN + k * SECTION_LEN;
            if rd_u32(bytes, s + 64)? & S_ATTR_SOME_INSTRUCTIONS != 0 {
                let addr = rd_u64(bytes, s + 32)?;
                out.push(addr..addr.saturating_add(rd_u64(bytes, s + 40)?));
            }
        }
    }
    Some(out)
}

/// The lowest address a collection maps file content at: the base its own
/// kernel-cache fixup targets are offsets from.
pub(super) fn image_base(bytes: &[u8]) -> Option<u64> {
    segments(bytes, 0)?
        .iter()
        .filter(|s| s.filesize > 0)
        .map(|s| s.vmaddr)
        .min()
}

/// Give the entry whose header is at `at` one `N_ABS | N_EXT` symbol per
/// `(address, name)`, the form [`bind_to_collection`] leaves a bound import
/// in. The entry's symbols are copied to the end of the file with the new ones
/// after them, the new names follow, and `LC_SYMTAB` is pointed at the copy;
/// the string table keeps its offset and grows to reach the new names. Returns
/// how many were added: none when the entry has no `LC_SYMTAB` or the file
/// would outgrow its 32-bit offsets.
fn append_bound_symbols(bytes: &mut Vec<u8>, at: usize, names: &[(u64, Vec<u8>)]) -> usize {
    let plan = || {
        let cmds = load_commands(bytes, at)?;
        let (_, st) = *cmds.iter().find(|&&(cmd, _)| cmd == LC_SYMTAB)?;
        let syms = symbols_of(bytes, st)?;
        let old = bytes.get(
            syms.symoff
                ..syms
                    .symoff
                    .checked_add(syms.count.checked_mul(NLIST_LEN)?)?,
        )?;
        let symoff = bytes.len().next_multiple_of(8);
        let strings = symoff + old.len() + names.len() * NLIST_LEN;
        let mut table = vec![0u8; symoff - bytes.len()];
        table.extend_from_slice(old);
        let mut pool = Vec::new();
        for (addr, name) in names {
            let strx = u32::try_from((strings + pool.len()).checked_sub(syms.stroff)?).ok()?;
            table.extend_from_slice(&strx.to_le_bytes());
            table.extend_from_slice(&[N_ABS | N_EXT, 0, 0, 0]);
            table.extend_from_slice(&addr.to_le_bytes());
            pool.extend_from_slice(name);
            pool.push(0);
        }
        table.extend_from_slice(&pool);
        let strsize = u32::try_from(bytes.len() + table.len() - syms.stroff).ok()?;
        let count = u32::try_from(syms.count + names.len()).ok()?;
        Some((st, u32::try_from(symoff).ok()?, count, strsize, table))
    };
    if names.is_empty() {
        return 0;
    }
    let Some((st, symoff, count, strsize, table)) = plan() else {
        return 0;
    };
    bytes.extend_from_slice(&table);
    bytes[st + 8..st + 12].copy_from_slice(&symoff.to_le_bytes());
    bytes[st + 12..st + 16].copy_from_slice(&count.to_le_bytes());
    bytes[st + 20..st + 24].copy_from_slice(&strsize.to_le_bytes());
    names.len()
}

/// Write every rebase of the collection's `LC_DYLD_CHAINED_FIXUPS` into its slot,
/// with the pointer-authentication bits stripped: the collection's own from its
/// base, and those into a linked collection from the file `search` finds.
/// Returns the count of the collection's own, the signed slots they came from
/// and what the linked files gave.
fn apply_fixups(
    bytes: &mut [u8],
    all: &[FilesetEntry],
    search: &LinkSearch,
) -> Result<(usize, SignedImage, linked::Linked), String> {
    let mut segs = segments(bytes, 0).ok_or("malformed MH_FILESET segments")?;
    segs.retain(|s| s.filesize > 0);
    segs.sort_by_key(|s| s.vmaddr);
    type Fixups = (Vec<(u64, u64)>, Vec<(u64, u8, u64)>, SignedImage);
    let (rebases, targets, signed): Fixups = {
        let file = object::File::parse(&*bytes).map_err(|e| format!("MH_FILESET: {e}"))?;
        let fixups = resolve_chained_fixups(&file, bytes);
        (
            fixups.rebases().collect(),
            fixups.linked_targets().collect(),
            signed_image(bytes, all, &fixups),
        )
    };
    let linked = if targets.is_empty() {
        linked::Linked::default()
    } else {
        linked::resolve(bytes, &targets, search)
    };
    let mut write = |va: u64, target: u64| {
        let Some(seg) = segs[..segs.partition_point(|s| s.vmaddr <= va)].last() else {
            return false;
        };
        if va - seg.vmaddr >= seg.filesize.saturating_sub(7) {
            return false;
        }
        let Some(off) = seg
            .fileoff
            .checked_add(va - seg.vmaddr)
            .and_then(|o| usize::try_from(o).ok())
        else {
            return false;
        };
        let Some(slot) = bytes.get_mut(off..off.saturating_add(8)) else {
            return false;
        };
        slot.copy_from_slice(&target.to_le_bytes());
        true
    };
    let applied = rebases
        .into_iter()
        .filter(|&(va, target)| write(va, target))
        .count();
    for &(va, target) in &linked.rebases {
        write(va, target);
    }
    Ok((applied, signed, linked))
}

/// The collection's signed slots for `arm64evcall`, with every entry's
/// `__const` sections (where vtables live) and the sections read-only once
/// fixed up: those named `__const` or in a `*CONST` segment. Every entry
/// counts, so a vtable slot a kext overrides is seen from the kernel too.
fn signed_image(bytes: &[u8], all: &[FilesetEntry], fixups: &ChainedFixups) -> SignedImage {
    let mut vtable_ranges = Vec::new();
    let mut readonly_ranges = Vec::new();
    for entry in all {
        let Ok(at) = usize::try_from(entry.fileoff) else {
            continue;
        };
        for (cmd, p) in load_commands(bytes, at).unwrap_or_default() {
            if cmd != LC_SEGMENT_64 {
                continue;
            }
            let nsects = rd_u32(bytes, p + 64).unwrap_or(0) as usize;
            for k in 0..nsects.min(256) {
                let s = p + 72 + k * 80;
                let (Some(name), Some(segment), Some(addr), Some(size), Some(flags)) = (
                    bytes.get(s..s + 16),
                    bytes.get(s + 16..s + 32),
                    rd_u64(bytes, s + 32),
                    rd_u64(bytes, s + 40),
                    rd_u32(bytes, s + 64),
                ) else {
                    break;
                };
                if flags & S_ATTR_SOME_INSTRUCTIONS != 0 {
                    continue;
                }
                let range = (addr, addr.saturating_add(size));
                let segment =
                    String::from_utf8_lossy(segment.split(|&b| b == 0).next().unwrap_or(&[]));
                if name.split(|&b| b == 0).next() == Some(b"__const") {
                    vtable_ranges.push(range);
                    readonly_ranges.push(range);
                } else if segment.contains("CONST") {
                    readonly_ranges.push(range);
                }
            }
        }
    }
    let slots = fixups
        .auth_slots()
        .map(|(va, ctx)| (va, (ctx, fixups.resolved_ptr(va))));
    SignedImage::new(slots, vtable_ranges, readonly_ranges)
}

pub(super) fn rd_u32(b: &[u8], off: usize) -> Option<u32> {
    b.get(off..off.checked_add(4)?)
        .map(|s| u32::from_le_bytes(s.try_into().unwrap()))
}

pub(super) fn rd_u64(b: &[u8], off: usize) -> Option<u64> {
    b.get(off..off.checked_add(8)?)
        .map(|s| u64::from_le_bytes(s.try_into().unwrap()))
}

#[cfg(test)]
mod tests;
