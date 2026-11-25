//! Whether an ELF says its floating-point arguments, doubles included, travel in
//! floating-point registers (a double-precision hard-float procedure-call
//! standard) or in integer registers (soft-float): ARM build attributes and
//! header flags, the MIPS ABI flags and GNU attributes, the PowerPC GNU
//! attributes, and the RISC-V header flags.  A single-precision convention, which
//! passes doubles in integer registers, and anything unstated are `None`.
use super::armfloatabi::{string, uleb, word};
use object::{Object, ObjectSection};

pub fn float_arg_registers(file: &object::File<'_>) -> Option<bool> {
    use object::Architecture as A;
    if file.format() != object::BinaryFormat::Elf {
        return None;
    }
    match file.architecture() {
        A::Arm => super::armfloatabi::args_evidence(file),
        arch if super::mipsabi::is_mips(arch) => {
            let record = super::mipsabi::abi_flags(file).ok()?;
            let value = super::mipsabi::fp_abi(file, record).ok()??;
            match value {
                1 | 5 | 6 | 7 => Some(true),
                3 => Some(false),
                _ => None,
            }
        }
        A::PowerPc | A::PowerPc64 => match gnu_fp_abi(file)?? & 3 {
            1 => Some(true),
            2 => Some(false),
            _ => None,
        },
        A::Riscv32 | A::Riscv64 => match file.flags() {
            object::FileFlags::Elf { e_flags, .. } => match e_flags & 6 {
                0 => Some(false),
                4 => Some(true),
                _ => None,
            },
            _ => None,
        },
        _ => None,
    }
}

/// The file-scope `Tag_GNU_*_ABI_FP` of every `.gnu.attributes` section:
/// `Some(None)` when none states it, `None` when they conflict or are malformed.
pub(super) fn gnu_fp_abi(file: &object::File<'_>) -> Option<Option<u32>> {
    let mips = super::mipsabi::is_mips(file.architecture());
    let mut answer = None;
    for section in file
        .sections()
        .filter(|s| s.name() == Ok(".gnu.attributes"))
    {
        if let Some(value) = gnu_tag4(section.data().ok()?, file.is_little_endian(), mips)? {
            if answer.is_some_and(|old| old != value) {
                return None;
            }
            answer = Some(value);
        }
    }
    Some(answer)
}

/// Read tag 4 from the `gnu` vendor's file-scope attributes: except for
/// `Tag_compatibility` (32), odd tags take a string and even tags a number.
fn gnu_tag4(data: &[u8], little: bool, zero_is_unspecified: bool) -> Option<Option<u32>> {
    if data.first() != Some(&b'A') || data.len() > 1024 * 1024 {
        return None;
    }
    let mut cursor = 1;
    let mut answer = None;
    let mut budget = 4096;
    while cursor < data.len() {
        let size = word(data.get(cursor..)?, little)? as usize;
        if size < 5 {
            return None;
        }
        let chunk = data.get(cursor..cursor.checked_add(size)?)?;
        let mut pos = 4;
        let vendor = string(chunk, &mut pos)?;
        cursor += size;
        if vendor != b"gnu" {
            continue;
        }
        while pos < chunk.len() {
            let start = pos;
            let kind = uleb(chunk, &mut pos)?;
            let size = word(chunk.get(pos..)?, little)? as usize;
            pos += 4;
            if size < pos - start {
                return None;
            }
            let end = start.checked_add(size)?;
            let scope = chunk.get(..end)?;
            if kind != 1 {
                return None;
            }
            while pos < end {
                if budget == 0 {
                    return None;
                }
                budget -= 1;
                let tag = uleb(scope, &mut pos)?;
                if tag == 32 {
                    uleb(scope, &mut pos)?;
                    string(scope, &mut pos)?;
                } else if tag & 1 != 0 {
                    string(scope, &mut pos)?;
                } else {
                    let value = uleb(scope, &mut pos)?;
                    if tag == 4 && !(zero_is_unspecified && value == 0) {
                        if answer.is_some_and(|old| old != value) {
                            return None;
                        }
                        answer = Some(value);
                    }
                }
            }
        }
    }
    Some(answer)
}

#[cfg(test)]
mod tests;
