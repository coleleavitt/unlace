//! (unlace) `LC_DATA_IN_CODE`: the data a Mach-O's toolchain recorded inside its
//! code, as address ranges.
//!
//! clang places an x86-64 switch's jump table and a Thumb `tbb`/`tbh` table in
//! `__text` right after the dispatch, and ARM literal pools between functions; each
//! run gets a `data_in_code_entry` (`offset`, `length`, `kind`: data, an 8-, 16- or
//! 32-bit jump table, an absolute 32-bit one). The Listing walk leaves these ranges
//! out of the memory it decodes ([`crate::listing`]), so a table's bytes are never
//! decoded as instructions and never seed a function. In a linked image `offset` is
//! a file offset from the Mach-O header; in an `MH_OBJECT` it is an address in the
//! object's own pre-link layout.

use object::read::{Object, ObjectSection};

/// Most entries read from one table (each is eight bytes).
const MAX_ENTRIES: usize = 1 << 20;

/// One `data_in_code_entry`.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct DataInCode {
    pub offset: u32,
    pub length: u16,
    pub kind: u16,
}

/// The entries of `file`'s `LC_DATA_IN_CODE` table, if it has one.
pub fn entries(file: &object::File) -> Vec<DataInCode> {
    let (bytes, little) = match file {
        object::File::MachO64(m) => (m.data(), file.is_little_endian()),
        object::File::MachO32(m) => (m.data(), file.is_little_endian()),
        _ => return Vec::new(),
    };
    let Some((off, size)) = table(file) else {
        return Vec::new();
    };
    let Some(data) = usize::try_from(off)
        .ok()
        .zip(usize::try_from(size).ok())
        .and_then(|(o, s)| bytes.get(o..o.checked_add(s)?))
    else {
        return Vec::new();
    };
    let u32_at = |b: &[u8]| {
        let w = [b[0], b[1], b[2], b[3]];
        if little {
            u32::from_le_bytes(w)
        } else {
            u32::from_be_bytes(w)
        }
    };
    let u16_at = |b: &[u8]| {
        let w = [b[0], b[1]];
        if little {
            u16::from_le_bytes(w)
        } else {
            u16::from_be_bytes(w)
        }
    };
    let list: Vec<DataInCode> = data
        .chunks_exact(8)
        .take(MAX_ENTRIES)
        .map(|e| DataInCode {
            offset: u32_at(&e[0..4]),
            length: u16_at(&e[4..6]),
            kind: u16_at(&e[6..8]),
        })
        .collect();
    // `DICE_KIND_DATA` .. `DICE_KIND_ABS_JUMP_TABLE32`. A table with any other kind
    // is not one this file holds (a dyld-cache image's `dataoff` names another
    // sub-cache file), so none of it is trusted.
    if list.iter().any(|e| !(1..=5).contains(&e.kind)) {
        return Vec::new();
    }
    list
}

/// `(dataoff, datasize)` of the `LC_DATA_IN_CODE` command.
fn table(file: &object::File) -> Option<(u64, u64)> {
    use object::read::macho::LoadCommandVariant;
    macro_rules! scan {
        ($m:expr) => {{
            let endian = $m.endian();
            let mut commands = $m.macho_load_commands().ok()?;
            while let Ok(Some(command)) = commands.next() {
                if command.cmd() != object::macho::LC_DATA_IN_CODE {
                    continue;
                }
                if let Ok(LoadCommandVariant::LinkeditData(d)) = command.variant() {
                    return Some((
                        u64::from(d.dataoff.get(endian)),
                        u64::from(d.datasize.get(endian)),
                    ));
                }
            }
            None
        }};
    }
    match file {
        object::File::MachO64(m) => scan!(m),
        object::File::MachO32(m) => scan!(m),
        _ => None,
    }
}

/// The address ranges `[start, end)` the table marks as data, sorted and merged.
/// A linked image's file offsets are placed through the section that holds them;
/// an entry no section holds is dropped.
pub fn data_in_code_ranges(file: &object::File) -> Vec<(u64, u64)> {
    let list = entries(file);
    if list.is_empty() {
        return Vec::new();
    }
    let relocatable = file.kind() == object::ObjectKind::Relocatable;
    let sections: Vec<(u64, u64, u64)> = file
        .sections()
        .filter_map(|s| s.file_range().map(|(off, len)| (off, len, s.address())))
        .collect();
    let mut out: Vec<(u64, u64)> = list
        .iter()
        .filter(|e| e.length != 0)
        .filter_map(|e| {
            let at = u64::from(e.offset);
            let start = if relocatable {
                at
            } else {
                let &(off, _, addr) = sections
                    .iter()
                    .find(|&&(off, len, _)| at >= off && at - off < len)?;
                addr.checked_add(at - off)?
            };
            Some((start, start.checked_add(u64::from(e.length))?))
        })
        .collect();
    out.sort_unstable();
    let mut merged: Vec<(u64, u64)> = Vec::with_capacity(out.len());
    for (lo, hi) in out {
        match merged.last_mut() {
            Some(last) if lo <= last.1 => last.1 = last.1.max(hi),
            _ => merged.push((lo, hi)),
        }
    }
    merged
}

/// `ranges` less `holes`, both sorted.
pub fn subtract(ranges: &[(u64, u64)], holes: &[(u64, u64)]) -> Vec<(u64, u64)> {
    let mut out = Vec::with_capacity(ranges.len());
    for &(lo, hi) in ranges {
        let mut start = lo;
        for &(hlo, hhi) in holes {
            if hhi <= start || hlo >= hi {
                continue;
            }
            if hlo > start {
                out.push((start, hlo));
            }
            start = start.max(hhi);
        }
        if start < hi {
            out.push((start, hi));
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    /// clang records the x86-64 switch's inline jump table (28 bytes of
    /// `JUMP_TABLE32` at `__text`+0x78) and the Thumb `tbb` table (7 bytes of
    /// `JUMP_TABLE8` at `__text`+0xc).
    #[test]
    fn the_jump_tables_clang_records_are_read() {
        let x86 = include_bytes!("../../tests/fixtures/macho_dataincode_x86_64.o");
        let file = object::File::parse(&x86[..]).unwrap();
        assert_eq!(
            entries(&file),
            [DataInCode {
                offset: 0x78,
                length: 28,
                kind: 4
            }]
        );
        assert_eq!(data_in_code_ranges(&file), [(0x78, 0x78 + 28)]);
        let thumb = include_bytes!("../../tests/fixtures/macho_dataincode_armv7.o");
        let file = object::File::parse(&thumb[..]).unwrap();
        assert_eq!(data_in_code_ranges(&file), [(0xc, 0xc + 7)]);
    }

    #[test]
    fn holes_are_cut_out_of_ranges() {
        assert_eq!(
            subtract(
                &[(0x1000, 0x2000), (0x3000, 0x3100)],
                &[(0x1100, 0x1200), (0x1f00, 0x3050)]
            ),
            [(0x1000, 0x1100), (0x1200, 0x1f00), (0x3050, 0x3100)]
        );
        assert_eq!(subtract(&[(0, 10)], &[]), [(0, 10)]);
    }
}
