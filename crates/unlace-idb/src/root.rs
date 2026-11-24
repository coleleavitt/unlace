//! The `Root Node`: the database-wide `ida_info` record and the input file's facts (`id0/root_info.rs`, `id0/root_info/migration.rs`, `id0/db.rs`).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use crate::Result;
use crate::id0::{ARRAY_ALT_TAG, ARRAY_SUP_TAG, Id0};
use crate::reader::{Reader, Width, cstr, err};

/// The part of `ida_info` a reader of the database needs.
#[derive(Clone, Debug, Default)]
pub(crate) struct RootInfo {
    pub(crate) version: u16,
    pub(crate) processor: String,
    pub(crate) lflags: u32,
    pub(crate) netdelta: u64,
    pub(crate) file_format: u16,
    pub(crate) compiler: u8,
    pub(crate) cm: u8,
    pub(crate) size_int: u8,
    pub(crate) size_bool: u8,
    pub(crate) size_enum: u8,
}

const LFLG_PC_FLAT: u32 = 0x0002;
const LFLG_64BIT: u32 = 0x0004;
const LFLG_MSF: u32 = 0x0020;

impl RootInfo {
    pub(crate) fn bitness(&self) -> u32 {
        if self.lflags & LFLG_64BIT != 0 {
            64
        } else if self.lflags & LFLG_PC_FLAT != 0 {
            32
        } else {
            16
        }
    }

    pub(crate) fn big_endian(&self) -> bool {
        self.lflags & LFLG_MSF != 0
    }

    /// `ea2node`: the netnode that holds an address's facts.
    pub(crate) fn node(&self, w: Width, ea: u64) -> u64 {
        if ea == w.max() {
            ea
        } else {
            w.wrap(ea.wrapping_add(self.netdelta))
        }
    }
}

fn processor(bytes: &[u8]) -> String {
    String::from_utf8_lossy(cstr(bytes)).into_owned()
}

/// `read_v1`: the fixed record of databases written by IDA before 5.0 (`ida\0` magic).
fn read_v1(r: &mut Reader<'_>, w: Width, version: u16) -> Result<RootInfo> {
    let processor = processor(r.take(8)?);
    r.u16()?;
    let lflags = r.u32()?;
    r.u32()?;
    let file_format = r.u16()?;
    r.take(2 + 2 + 1 + 1 + 4 + 4)?;
    for _ in 0..16 {
        r.usize(w)?;
    }
    let netdelta = r.usize(w)?;
    r.take(4 + 2 + 1 + 4 + 4 + 4 + 2 + 2 + 4 + 1 + 1 + 2 + 1 + 1 + 1 + 1 + 4 + 16)?;
    r.usize(w)?;
    r.usize(w)?;
    let compiler = r.u8()?;
    let cm = r.u8()?;
    let size_int = r.u8()?;
    let size_bool = r.u8()?;
    let size_enum = r.u8()?;
    Ok(RootInfo {
        version,
        processor,
        lflags,
        netdelta,
        file_format,
        compiler,
        cm,
        size_int,
        size_bool,
        size_enum,
    })
}

/// `read_v2`: the packed fixed record of IDA 5 and 6, at the offsets of
/// `RootInfoV2Raw`; the flags IDA 7 moved into `lflags` are migrated the same way.
fn read_v2(rest: &[u8], w: Width, version: u16) -> Result<RootInfo> {
    let n = w.bytes();
    let size = 168 + 24 * n;
    let mut data = vec![0u8; size];
    let mut read = b"IDA".to_vec();
    read.extend(version.to_le_bytes());
    read.extend_from_slice(rest);
    if read.len() > size {
        return err("the IDA 5/6 root record is larger than it may be");
    }
    data[..read.len()].copy_from_slice(&read);
    if read.len() <= size - 8 {
        data.copy_within(13..13 + (size - 29), 0x15);
        data[13..21].fill(0);
    } else {
        data[20] = 0;
    }
    let at = |offset: usize| data[offset];
    let usize_at = |offset: usize| w.from_le(&data[offset..offset + n]).unwrap_or(0);
    let genflags = u16::from(at(21))
        | if at(41 + 12 * n) != 0 { 1 } else { 0 }
        | if at(75 + 14 * n) != 0 { 0x80 } else { 0 }
        | u16::from(at(44 + 12 * n) & 0x1e)
        | if at(81 + 14 * n) & 1 != 0 { 0x20 } else { 0 }
        | if at(81 + 14 * n) & 2 != 0 { 0x40 } else { 0 };
    let lflags = u32::from(at(55 + 13 * n))
        | if genflags & 0x01 != 0 { 0x01 } else { 0 }
        | if genflags & 0x02 != 0 { 0x02 } else { 0 }
        | if genflags & 0x03 != 0 { 0x03 } else { 0 }
        | if genflags & 0x20 != 0 { 0x08 } else { 0 }
        | if genflags & 0x80 != 0 { 0x10 } else { 0 }
        | if genflags & 0x08 != 0 { 0x80 } else { 0 }
        | if genflags & 0x10 != 0 { 0x01 } else { 0 }
        | if at(78 + 14 * n) != 0 { 0x20 } else { 0 }
        | if at(32 + 12 * n) != 0 { 0x40 } else { 0 };
    let cc = 107 + 21 * n;
    Ok(RootInfo {
        version,
        processor: processor(&data[5..21]),
        lflags,
        netdelta: usize_at(152 + 21 * n),
        file_format: u16::from_le_bytes([at(23), at(24)]),
        compiler: at(cc),
        cm: at(cc + 1),
        size_int: at(cc + 2),
        size_bool: at(cc + 3),
        size_enum: at(cc + 4),
    })
}

/// `read_v3`: the packed-integer record of IDA 7 and later.
fn read_v3(r: &mut Reader<'_>, w: Width, upgrade700: u64, version: u16) -> Result<RootInfo> {
    let cpu_len = (r.unpack_dd()? as usize).min(16);
    let processor = processor(r.take(cpu_len)?);
    r.unpack_dw()?;
    let lflags = r.unpack_dd()?;
    r.unpack_dd()?;
    let file_format = r.unpack_dw()?;
    r.unpack_dw()?;
    r.unpack_dw()?;
    r.unpack_dw()?;
    r.u8()?;
    r.unpack_dd()?;
    r.unpack_dd()?;
    for _ in 0..14 {
        r.unpack_usize(w)?;
    }
    r.unpack_usize(w)?;
    r.unpack_usize(w)?;
    let netdelta = r.unpack_usize(w)?;
    r.take(4)?;
    r.unpack_dw()?;
    if upgrade700 & 0x10000 == 0 {
        let len = r.unpack_dd()? as usize;
        r.take(len)?;
        r.u8()?;
    }
    r.u8()?;
    r.unpack_dd()?;
    r.unpack_dd()?;
    r.take(4)?;
    r.unpack_dw()?;
    r.unpack_dw()?;
    r.unpack_dd()?;
    r.take(2)?;
    r.unpack_dw()?;
    r.take(4)?;
    r.unpack_dd()?;
    let prefix_len = (r.unpack_dd()? as usize).min(16);
    r.take(prefix_len)?;
    r.unpack_usize(w)?;
    r.unpack_usize(w)?;
    let compiler = r.u8()?;
    let cm = r.u8()?;
    let size_int = r.u8()?;
    let size_bool = r.u8()?;
    let size_enum = r.u8()?;
    Ok(RootInfo {
        version,
        processor,
        lflags,
        netdelta,
        file_format,
        compiler,
        cm,
        size_int,
        size_bool,
        size_enum,
    })
}

/// The `Root Node` netnode.
pub(crate) fn root_node(id0: &Id0) -> Result<u64> {
    match id0.node_by_name("Root Node") {
        Some(node) => Ok(node),
        None => err("the database has no Root Node"),
    }
}

/// A root-node value at a (possibly negative) `RIDX_*` index.
pub(crate) fn root_value(id0: &Id0, root: u64, index: i64, tag: u8) -> Option<&[u8]> {
    id0.sup(root, id0.w.wrap(index as u64), tag)
}

pub(crate) fn read(id0: &Id0) -> Result<RootInfo> {
    let w = id0.w;
    let root = root_node(id0)?;
    let Some(data) = root_value(id0, root, 0x0041_b994, ARRAY_SUP_TAG) else {
        return err("the Root Node has no ida_info record");
    };
    let mut r = Reader::new(data);
    let magic = r.take(3)?;
    let old = match magic {
        b"ida" => {
            if r.u8()? != 0 {
                return err("invalid ida_info magic");
            }
            true
        }
        b"IDA" => false,
        _ => return err("invalid ida_info magic"),
    };
    let version = r.u16()?;
    match (old, version) {
        (true, ..699) => read_v1(&mut r, w, version),
        (false, ..699) => read_v2(r.rest(), w, version),
        (false, 699..) => {
            let upgrade700 = id0
                .node_by_name("$ upgrade 700")
                .and_then(|node| id0.sup(node, 0, ARRAY_ALT_TAG))
                .and_then(|v| w.from_le(v))
                .unwrap_or(0);
            if upgrade700 & 0x40 == 0 {
                read_v2(r.rest(), w, version)
            } else {
                read_v3(&mut r, w, upgrade700, version)
            }
        }
        (true, _) => err("old ida_info magic with a new version"),
    }
}

pub(crate) const RIDX_MD5: i64 = 1302;
pub(crate) const RIDX_SHA256: i64 = 1349;
pub(crate) const RIDX_ALT_CRC32: i64 = -5;
pub(crate) const RIDX_ALT_IMAGEBASE: i64 = -6;
pub(crate) const RIDX_ALT_FSIZE: i64 = -8;

/// IDA's name for an input file format (`filetype_t`).
pub(crate) fn file_format_name(raw: u16) -> &'static str {
    match raw {
        0x2 => "Raw",
        0x3 => "MsdosDriver",
        0x4 => "Ne",
        0x5 => "IntelHex",
        0x6 => "Mex",
        0x7 => "Lx",
        0x8 => "Le",
        0x9 => "Nlm",
        0xa => "Coff",
        0xb => "Pe",
        0xc => "Omf",
        0xd => "RRecords",
        0xe => "Zip",
        0xf => "Omflib",
        0x10 => "Ar",
        0x11 => "LoaderSpecific",
        0x12 => "Elf",
        0x13 => "W32run",
        0x14 => "Aout",
        0x15 => "Palmpilot",
        0x0 | 0x16 => "MsdosExe",
        0x1 | 0x17 => "MsdosCom",
        0x18 => "Aixar",
        0x19 => "Macho",
        0x1a => "Psxobj",
        _ => "Unknown",
    }
}

/// IDA's name for a compiler id (`comp_t`, without the "guessed" bit).
pub(crate) fn compiler_name(raw: u8) -> &'static str {
    match raw & 0x7f {
        0x00 => "Unknown",
        0x01 => "VisualStudio",
        0x02 => "Borland",
        0x03 => "Watcom",
        0x06 => "Gnu",
        0x07 => "VisualAge",
        0x08 => "Delphi",
        _ => "Unknown",
    }
}
