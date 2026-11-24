//! (kuna `pdbtypes`) Where an x64 function's frame register points, from its
//! unwind data.
//!
//! A CodeView record that places a local relative to `RBP` (or `R13`) says
//! nothing about where that register points: the prologue decides. The x64
//! exception directory records exactly that for every function with unwind
//! data. Its `UNWIND_INFO` names the frame register and its scaled offset, and
//! its unwind codes list, latest first, what the prologue pushed and allocated.
//! The codes after `UWOP_SET_FPREG` in the array ran before it, so the stack
//! pointer at that point is the entry stack pointer less their sum, and the frame
//! register is that plus `16 * FrameOffset`. Ghidra's `PEx64UnwindInfo` reads the
//! same fields.
//!
//! A chained record (`UNW_FLAG_CHAININFO`), a version other than 1 or 2, an
//! `UWOP_EPILOG` or unknown code, or a truncated record yields nothing, and the
//! slot stays unplaced.

use std::collections::BTreeMap;

use object::LittleEndian as LE;
use object::Object as _;
use object::pe::IMAGE_FILE_MACHINE_AMD64;
use object::read::pe::PeFile64;

/// The CodeView numbers of the x64 unwind register encoding (`RAX`, `RCX`,
/// `RDX`, `RBX`, `RSP`, `RBP`, `RSI`, `RDI`, then `R8` to `R15`).
const CV_REGISTER: [u16; 16] = [
    328, 330, 331, 329, 335, 334, 332, 333, 336, 337, 338, 339, 340, 341, 342, 343,
];

const UNW_FLAG_CHAININFO: u8 = 0x4;

/// Each x64 function's frame register, as `(CodeView register, kuna stack
/// offset of its value in the body)`, keyed by the function's entry VMA. Empty on
/// anything but a PE32+ AMD64 image.
pub(crate) fn x64_frame_registers(bytes: &[u8]) -> BTreeMap<u64, (u16, i64)> {
    let mut out = BTreeMap::new();
    let Ok(pe) = PeFile64::parse(bytes) else {
        return out;
    };
    if pe.nt_headers().file_header.machine.get(LE) != IMAGE_FILE_MACHINE_AMD64 {
        return out;
    }
    let image_base = pe.relative_address_base();
    let Some(dir) = pe
        .data_directories()
        .get(object::pe::IMAGE_DIRECTORY_ENTRY_EXCEPTION)
    else {
        return out;
    };
    let sections = pe.section_table();
    let Ok(table) = dir.data(bytes, &sections) else {
        return out;
    };
    for record in table.chunks_exact(12) {
        let begin = read_u32(record, 0).unwrap_or(0);
        let unwind = read_u32(record, 8).unwrap_or(0);
        if begin == 0 || unwind == 0 {
            continue;
        }
        let Some(info) = sections.pe_data_at(bytes, unwind) else {
            continue;
        };
        if let Some(frame) = frame_register(info) {
            out.entry(image_base.wrapping_add(u64::from(begin)))
                .or_insert(frame);
        }
    }
    out
}

/// The frame register an `UNWIND_INFO` establishes and where it points in kuna
/// stack coordinates (0 is the return-address slot), or `None`.
pub(crate) fn frame_register(info: &[u8]) -> Option<(u16, i64)> {
    let header = *info.first()?;
    let (version, flags) = (header & 7, header >> 3);
    if !(1..=2).contains(&version) || flags & UNW_FLAG_CHAININFO != 0 {
        return None;
    }
    let count = usize::from(*info.get(2)?);
    let frame = *info.get(3)?;
    let (register, scaled) = (frame & 0xf, frame >> 4);
    if register == 0 {
        return None;
    }
    let codes = info.get(4..4 + 2 * count)?;
    let slot = |i: usize| -> Option<u16> {
        Some(u16::from_le_bytes([
            *codes.get(2 * i)?,
            *codes.get(2 * i + 1)?,
        ]))
    };
    let mut seen_set = false;
    let mut before: i64 = 0;
    let mut i = 0;
    while i < count {
        let byte = *codes.get(2 * i + 1)?;
        let (op, op_info) = (byte & 0xf, byte >> 4);
        let (slots, delta): (usize, i64) = match op {
            0 => (1, 8),
            1 if op_info == 0 => (2, i64::from(slot(i + 1)?) * 8),
            1 if op_info == 1 => (
                3,
                i64::from(u32::from(slot(i + 1)?) | (u32::from(slot(i + 2)?) << 16)),
            ),
            2 => (1, i64::from(op_info) * 8 + 8),
            3 => {
                seen_set = true;
                (1, 0)
            }
            4 | 8 => (2, 0),
            5 | 9 => (3, 0),
            10 if op_info <= 1 => (1, if op_info == 0 { 40 } else { 48 }),
            _ => return None,
        };
        if seen_set && op != 3 {
            before = before.checked_add(delta)?;
        }
        i += slots;
    }
    if !seen_set {
        return None;
    }
    let reg = CV_REGISTER[usize::from(register)];
    Some((reg, i64::from(scaled) * 16 - before))
}

fn read_u32(raw: &[u8], at: usize) -> Option<u32> {
    Some(u32::from_le_bytes(
        raw.get(at..at.checked_add(4)?)?.try_into().ok()?,
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    /// `push rbp ; sub rsp,0x20 ; lea rbp,[rsp+0x20]`: RBP is the entry stack
    /// pointer less the pushed RBP.
    #[test]
    fn push_alloc_then_set() {
        let info = [0x01, 10, 3, 0x25, 10, 0x03, 5, 0x32, 1, 0x50];
        assert_eq!(frame_register(&info), Some((334, -8)));
    }

    /// An allocation after `SET_FPREG` does not move the frame register, and a
    /// large allocation before it does.
    #[test]
    fn only_codes_before_the_set_count() {
        // push rbp ; sub rsp,0x1000 ; mov rbp,rsp ; sub rsp,0x40
        let info = [
            0x01, 20, 5, 0x05, 20, 0x72, 12, 0x03, 9, 0x01, 0x00, 0x02, 1, 0x50,
        ];
        assert_eq!(frame_register(&info), Some((334, -(0x1000 + 8))));
    }

    #[test]
    fn rejected_shapes() {
        assert_eq!(
            frame_register(&[0x01, 4, 1, 0x00, 4, 0x02]),
            None,
            "no frame register"
        );
        assert_eq!(
            frame_register(&[0x21, 4, 1, 0x05, 4, 0x03]),
            None,
            "chained"
        );
        assert_eq!(
            frame_register(&[0x01, 4, 1, 0x05, 4, 0x06]),
            None,
            "epilog code"
        );
        assert_eq!(
            frame_register(&[0x01, 4, 2, 0x05, 4, 0x03]),
            None,
            "truncated"
        );
        assert_eq!(
            frame_register(&[0x01, 4, 1, 0x05, 4, 0x02]),
            None,
            "no SET_FPREG"
        );
    }

    /// The x64 fixture uses no frame pointer, so it has no entries.
    #[test]
    fn frameless_fixture() {
        let path = concat!(
            env!("CARGO_MANIFEST_DIR"),
            "/tests/fixtures/pdb_types_x86_64.exe"
        );
        let bytes = std::fs::read(path).expect("read the fixture");
        assert!(x64_frame_registers(&bytes).is_empty());
    }
}
