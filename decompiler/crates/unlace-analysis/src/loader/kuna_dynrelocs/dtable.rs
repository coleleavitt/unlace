//! (kuna `dynrelocs`) The dynamic relocations an image's `PT_DYNAMIC` names,
//! read without section headers.
//!
//! The run-time loader never reads section headers: it finds its tables through
//! the `DT_*` entries of `PT_DYNAMIC`. Reading them the same way keeps an image
//! whose section table is stripped or forged (`sstrip`, packers) relocated, and
//! adds the two compact encodings the `object` crate's section walk does not
//! decode: `DT_RELR` (a bitmap of `RELATIVE` slots) and Android's `APS2` packed
//! `DT_ANDROID_REL[A]` stream.

/// One decoded dynamic relocation.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DynEntry {
    pub offset: u64,
    pub r_type: u32,
    pub sym: u32,
    /// `Some` for a RELA entry; `None` when the addend is the slot's own word.
    pub addend: Option<i64>,
}

/// A dynamic symbol's value and whether it is defined in this image.
#[derive(Debug, Clone, Copy)]
pub struct DynSym {
    pub value: u64,
    pub defined: bool,
}

const PT_LOAD: u32 = 1;
const PT_DYNAMIC: u32 = 2;
const DT_NULL: u64 = 0;
const DT_PLTRELSZ: u64 = 2;
const DT_SYMTAB: u64 = 6;
const DT_RELA: u64 = 7;
const DT_RELASZ: u64 = 8;
const DT_REL: u64 = 17;
const DT_RELSZ: u64 = 18;
const DT_PLTREL: u64 = 20;
const DT_JMPREL: u64 = 23;
const DT_RELRSZ: u64 = 35;
const DT_RELR: u64 = 36;
const DT_ANDROID_REL: u64 = 0x6000_000f;
const DT_ANDROID_RELSZ: u64 = 0x6000_0010;
const DT_ANDROID_RELA: u64 = 0x6000_0011;
const DT_ANDROID_RELASZ: u64 = 0x6000_0012;
const DT_ANDROID_RELR: u64 = 0x6fff_e000;
const DT_ANDROID_RELRSZ: u64 = 0x6fff_e001;

/// The ELF views the reader needs: word size, byte order and the `PT_LOAD` map.
pub struct ElfView<'a> {
    bytes: &'a [u8],
    pub is64: bool,
    le: bool,
    loads: Vec<(u64, u64, u64)>,
    dynamic: Option<(u64, u64)>,
}

impl<'a> ElfView<'a> {
    pub fn new(bytes: &'a [u8]) -> Option<ElfView<'a>> {
        if bytes.len() < 52 || &bytes[..4] != b"\x7fELF" {
            return None;
        }
        let mut view = ElfView { bytes, is64: bytes[4] == 2, le: bytes[5] == 1, loads: Vec::new(), dynamic: None };
        let (phoff, phentsize, phnum) = if view.is64 {
            (view.word(0x20)?, view.u16(0x36)? as u64, view.u16(0x38)? as u64)
        } else {
            (u64::from(view.u32(0x1c)?), view.u16(0x2a)? as u64, view.u16(0x2c)? as u64)
        };
        for i in 0..phnum {
            let ph = usize::try_from(phoff.checked_add(i.checked_mul(phentsize)?)?).ok()?;
            let p_type = view.u32(ph)?;
            let (offset, vaddr, filesz) = if view.is64 {
                (view.word(ph + 8)?, view.word(ph + 0x10)?, view.word(ph + 0x20)?)
            } else {
                (u64::from(view.u32(ph + 4)?), u64::from(view.u32(ph + 8)?), u64::from(view.u32(ph + 16)?))
            };
            match p_type {
                PT_LOAD => view.loads.push((vaddr, filesz, offset)),
                PT_DYNAMIC => view.dynamic = Some((offset, filesz)),
                _ => {}
            }
        }
        Some(view)
    }

    fn u16(&self, at: usize) -> Option<u16> {
        let b: [u8; 2] = self.bytes.get(at..at + 2)?.try_into().ok()?;
        Some(if self.le { u16::from_le_bytes(b) } else { u16::from_be_bytes(b) })
    }

    fn u32(&self, at: usize) -> Option<u32> {
        let b: [u8; 4] = self.bytes.get(at..at + 4)?.try_into().ok()?;
        Some(if self.le { u32::from_le_bytes(b) } else { u32::from_be_bytes(b) })
    }

    fn u64(&self, at: usize) -> Option<u64> {
        let b: [u8; 8] = self.bytes.get(at..at + 8)?.try_into().ok()?;
        Some(if self.le { u64::from_le_bytes(b) } else { u64::from_be_bytes(b) })
    }

    /// One address-sized word.
    fn word(&self, at: usize) -> Option<u64> {
        if self.is64 { self.u64(at) } else { self.u32(at).map(u64::from) }
    }

    fn word_size(&self) -> usize {
        if self.is64 { 8 } else { 4 }
    }

    /// File offset of `vaddr`, if a `PT_LOAD` backs it with file bytes.
    pub fn file_offset(&self, vaddr: u64) -> Option<usize> {
        self.loads.iter().find_map(|&(base, filesz, offset)| {
            let delta = vaddr.checked_sub(base)?;
            (delta < filesz).then(|| usize::try_from(offset + delta).ok()).flatten()
        })
    }

    /// The `width`-byte word at `vaddr` in the file's bytes.
    pub fn read_at(&self, vaddr: u64, width: usize) -> Option<u64> {
        let at = self.file_offset(vaddr)?;
        if width == 8 { self.u64(at) } else { self.u32(at).map(u64::from) }
    }

    /// The `(tag, value)` pairs of `PT_DYNAMIC`.
    fn dynamic_tags(&self) -> Vec<(u64, u64)> {
        let Some((offset, size)) = self.dynamic else { return Vec::new() };
        let entry = 2 * self.word_size();
        let mut tags = Vec::new();
        let mut at = offset as usize;
        while at + entry <= (offset + size) as usize {
            let (Some(tag), Some(value)) = (self.word(at), self.word(at + self.word_size())) else { break };
            if tag == DT_NULL {
                break;
            }
            tags.push((tag, value));
            at += entry;
        }
        tags
    }

    /// The dynamic symbol `index` of `DT_SYMTAB`.
    pub fn symbol(&self, symtab: u64, index: u32) -> Option<DynSym> {
        let entsize = if self.is64 { 24 } else { 16 };
        let at = self.file_offset(symtab.checked_add(u64::from(index) * entsize)?)?;
        let (value, shndx) = if self.is64 {
            (self.u64(at + 8)?, self.u16(at + 6)?)
        } else {
            (u64::from(self.u32(at + 4)?), self.u16(at + 14)?)
        };
        Some(DynSym { value, defined: shndx != 0 })
    }
}

/// Every relocation `PT_DYNAMIC` names, and the `DT_SYMTAB` address their
/// symbol indices refer to. `None` when the image has no `PT_DYNAMIC`.
pub fn dynamic_relocations(view: &ElfView) -> Option<(Vec<DynEntry>, Option<u64>)> {
    view.dynamic?;
    let tags = view.dynamic_tags();
    let get = |tag: u64| tags.iter().find(|(t, _)| *t == tag).map(|(_, v)| *v);
    let mut out = Vec::new();
    let mut table = |addr: Option<u64>, size: Option<u64>, rela: bool| {
        if let (Some(addr), Some(size)) = (addr, size) {
            read_table(view, addr, size, rela, &mut out);
        }
    };
    table(get(DT_RELA), get(DT_RELASZ), true);
    table(get(DT_REL), get(DT_RELSZ), false);
    table(get(DT_JMPREL), get(DT_PLTRELSZ), get(DT_PLTREL) == Some(DT_RELA));
    for (addr, size) in [(get(DT_RELR), get(DT_RELRSZ)), (get(DT_ANDROID_RELR), get(DT_ANDROID_RELRSZ))] {
        if let (Some(addr), Some(size)) = (addr, size) {
            read_relr(view, addr, size, &mut out);
        }
    }
    for (addr, size, rela) in [
        (get(DT_ANDROID_RELA), get(DT_ANDROID_RELASZ), true),
        (get(DT_ANDROID_REL), get(DT_ANDROID_RELSZ), false),
    ] {
        if let (Some(addr), Some(size)) = (addr, size) {
            read_aps2(view, addr, size, rela, &mut out);
        }
    }
    Some((out, get(DT_SYMTAB)))
}

fn split_info(view: &ElfView, info: u64) -> (u32, u32) {
    if view.is64 { ((info >> 32) as u32, info as u32) } else { ((info >> 8) as u32, (info & 0xff) as u32) }
}

fn read_table(view: &ElfView, addr: u64, size: u64, rela: bool, out: &mut Vec<DynEntry>) {
    let w = view.word_size() as u64;
    let entsize = if rela { 3 * w } else { 2 * w };
    let Some(start) = view.file_offset(addr) else { return };
    for i in 0..size / entsize {
        let at = start + (i * entsize) as usize;
        let (Some(offset), Some(info)) = (view.word(at), view.word(at + w as usize)) else { return };
        let addend = if rela {
            match view.word(at + 2 * w as usize) {
                Some(a) if view.is64 => Some(a as i64),
                Some(a) => Some(a as u32 as i32 as i64),
                None => return,
            }
        } else {
            None
        };
        let (sym, r_type) = split_info(view, info);
        out.push(DynEntry { offset, r_type, sym, addend });
    }
}

/// `DT_RELR`: an even word is the address of a `RELATIVE` slot; an odd word is a
/// bitmap of the next `8 * word - 1` slots after the last address.
fn read_relr(view: &ElfView, addr: u64, size: u64, out: &mut Vec<DynEntry>) {
    let w = view.word_size() as u64;
    let Some(start) = view.file_offset(addr) else { return };
    let mut base = 0u64;
    for i in 0..size / w {
        let Some(entry) = view.word(start + (i * w) as usize) else { return };
        if entry & 1 == 0 {
            out.push(DynEntry { offset: entry, r_type: RELR_RELATIVE, sym: 0, addend: None });
            base = entry.wrapping_add(w);
        } else {
            let mut bits = entry >> 1;
            let mut slot = base;
            while bits != 0 {
                if bits & 1 != 0 {
                    out.push(DynEntry { offset: slot, r_type: RELR_RELATIVE, sym: 0, addend: None });
                }
                bits >>= 1;
                slot = slot.wrapping_add(w);
            }
            base = base.wrapping_add((8 * w - 1) * w);
        }
    }
}

/// The pseudo-type a `DT_RELR` slot carries: the machine's `RELATIVE`, which the
/// caller substitutes.
pub const RELR_RELATIVE: u32 = u32::MAX;

fn sleb(bytes: &[u8], pos: &mut usize) -> Option<i64> {
    let mut result: i64 = 0;
    let mut shift = 0;
    loop {
        let byte = *bytes.get(*pos)?;
        *pos += 1;
        if shift < 64 {
            result |= i64::from(byte & 0x7f) << shift;
        }
        shift += 7;
        if byte & 0x80 == 0 {
            if shift < 64 && byte & 0x40 != 0 {
                result |= -1i64 << shift;
            }
            return Some(result);
        }
        if shift > 70 {
            return None;
        }
    }
}

/// Android's packed relocations (`APS2`, bionic `linker_reloc_iterators.h`):
/// SLEB128 count and start offset, then groups that share their offset delta,
/// info or addend.
fn read_aps2(view: &ElfView, addr: u64, size: u64, rela: bool, out: &mut Vec<DynEntry>) {
    const BY_INFO: i64 = 1;
    const BY_OFFSET_DELTA: i64 = 2;
    const BY_ADDEND: i64 = 4;
    const HAS_ADDEND: i64 = 8;
    let Some(start) = view.file_offset(addr) else { return };
    let Some(data) = view.bytes.get(start..start + size as usize) else { return };
    if !data.starts_with(b"APS2") {
        return;
    }
    let mut pos = 4;
    let (Some(count), Some(mut offset)) = (sleb(data, &mut pos), sleb(data, &mut pos)) else { return };
    let mut addend: i64 = 0;
    let mut left = count;
    while left > 0 {
        let Some(group_size) = sleb(data, &mut pos) else { return };
        let Some(flags) = sleb(data, &mut pos) else { return };
        if group_size <= 0 || group_size > left {
            return;
        }
        let group_delta = if flags & BY_OFFSET_DELTA != 0 { sleb(data, &mut pos) } else { Some(0) };
        let group_info = if flags & BY_INFO != 0 { sleb(data, &mut pos) } else { Some(0) };
        let (Some(group_delta), Some(group_info)) = (group_delta, group_info) else { return };
        if rela && flags & HAS_ADDEND != 0 && flags & BY_ADDEND != 0 {
            let Some(delta) = sleb(data, &mut pos) else { return };
            addend = addend.wrapping_add(delta);
        } else if !(rela && flags & HAS_ADDEND != 0) {
            addend = 0;
        }
        for _ in 0..group_size {
            let delta = if flags & BY_OFFSET_DELTA != 0 { group_delta } else {
                let Some(d) = sleb(data, &mut pos) else { return };
                d
            };
            offset = offset.wrapping_add(delta);
            let info = if flags & BY_INFO != 0 { group_info } else {
                let Some(i) = sleb(data, &mut pos) else { return };
                i
            };
            if rela && flags & HAS_ADDEND != 0 && flags & BY_ADDEND == 0 {
                let Some(d) = sleb(data, &mut pos) else { return };
                addend = addend.wrapping_add(d);
            }
            let (sym, r_type) = split_info(view, info as u64);
            out.push(DynEntry { offset: offset as u64, r_type, sym, addend: rela.then_some(addend) });
        }
        left -= group_size;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn relr_bitmap_expands_to_slots() {
        // address 0x1000, then bitmap 0b101 << 1 | 1: slots 0x1008 and 0x1018.
        let mut slots = Vec::new();
        let words: [u64; 2] = [0x1000, (0b101 << 1) | 1];
        let mut bytes = vec![0u8; 0x40];
        bytes[..4].copy_from_slice(b"\x7fELF");
        bytes[4] = 2;
        bytes[5] = 1;
        let mut image = bytes.clone();
        for w in words {
            image.extend_from_slice(&w.to_le_bytes());
        }
        let view = ElfView { bytes: &image, is64: true, le: true, loads: vec![(0x40, 16, 0x40)], dynamic: None };
        read_relr(&view, 0x40, 16, &mut slots);
        let offsets: Vec<u64> = slots.iter().map(|e| e.offset).collect();
        assert_eq!(offsets, vec![0x1000, 0x1008, 0x1018]);
    }

    #[test]
    fn aps2_groups_share_info_and_offset_delta() {
        // count 3, start offset 0x1000-8; one group of 3, by info and by delta 8.
        let mut stream = b"APS2".to_vec();
        for v in [3i64, 0x1000 - 8, 3, 1 | 2, 8, 0x403] {
            let mut v = v;
            loop {
                let byte = (v & 0x7f) as u8;
                v >>= 7;
                let done = (v == 0 && byte & 0x40 == 0) || (v == -1 && byte & 0x40 != 0);
                stream.push(if done { byte } else { byte | 0x80 });
                if done {
                    break;
                }
            }
        }
        let mut image = vec![0u8; 0x40];
        image[..4].copy_from_slice(b"\x7fELF");
        image.extend_from_slice(&stream);
        let view = ElfView { bytes: &image, is64: true, le: true, loads: vec![(0x40, stream.len() as u64, 0x40)], dynamic: None };
        let mut out = Vec::new();
        read_aps2(&view, 0x40, stream.len() as u64, true, &mut out);
        assert_eq!(out.len(), 3);
        assert_eq!(out[2].offset, 0x1010);
        assert_eq!(out[0].r_type, 0x403);
        assert_eq!(out[0].addend, Some(0));
    }
}
