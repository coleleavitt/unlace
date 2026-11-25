//! ARM ELF build-attribute evidence (AAELF32 and Addenda32): the VFP procedure
//! call standard (`Tag_ABI_VFP_args`) and whether the image can hold A32 code.
use object::{Object, ObjectSection};

/// `Tag_CPU_arch_profile`; the value is a character, `'M'` for a microcontroller.
const TAG_CPU_ARCH_PROFILE: u32 = 7;
/// `Tag_CPU_arch`: 16, 17 and 21 are the ARMv8-M architectures.
const TAG_CPU_ARCH: u32 = 6;
/// `Tag_ARM_ISA_use`; 0 says the image may not use A32 instructions.
const TAG_ARM_ISA_USE: u32 = 8;

/// Whether the build attributes rule out A32 code: an M-profile CPU executes
/// only Thumb, and `Tag_ARM_ISA_use` 0 forbids A32 outright. Only an explicit
/// tag counts; an image without attributes may hold either.
pub fn thumb_only(file: &object::File<'_>) -> bool {
    if file.format() != object::BinaryFormat::Elf
        || file.architecture() != object::Architecture::Arm
    {
        return false;
    }
    file.sections()
        .filter(|s| s.name() == Ok(".ARM.attributes"))
        .any(|section| {
            let Ok(data) = section.data() else {
                return false;
            };
            let little = file.is_little_endian();
            let tag = |wanted| file_attribute(data, little, wanted, |v| v, None).flatten();
            tag(TAG_CPU_ARCH_PROFILE) == Some(u32::from(b'M')) || tag(TAG_ARM_ISA_USE) == Some(0)
        })
}

/// `Tag_CPU_arch` of an ARM ELF whose build attributes state the M profile
/// (0 when the tag is absent); `None` for any other image.
pub fn m_profile_arch(file: &object::File<'_>) -> Option<u32> {
    if file.format() != object::BinaryFormat::Elf
        || file.architecture() != object::Architecture::Arm
    {
        return None;
    }
    file.sections()
        .filter(|s| s.name() == Ok(".ARM.attributes"))
        .find_map(|section| {
            let data = section.data().ok()?;
            let little = file.is_little_endian();
            let tag = |wanted| file_attribute(data, little, wanted, |v| v, None).flatten();
            (tag(TAG_CPU_ARCH_PROFILE) == Some(u32::from(b'M')))
                .then(|| tag(TAG_CPU_ARCH).unwrap_or(0))
        })
}

/// Whether the build attributes state the M profile (`Tag_CPU_arch_profile`
/// `'M'`).
pub fn m_profile(file: &object::File<'_>) -> bool {
    m_profile_arch(file).is_some()
}

pub fn vfp_args(file: &object::File<'_>) -> bool {
    if file.format() != object::BinaryFormat::Elf
        || file.architecture() != object::Architecture::Arm
    {
        return false;
    }
    let linked = matches!(
        file.kind(),
        object::ObjectKind::Executable | object::ObjectKind::Dynamic
    );
    let flags = match file.flags() {
        object::FileFlags::Elf { e_flags, .. } => e_flags,
        _ => return false,
    };
    let header = if linked && flags >> 24 >= 5 {
        match flags & 0x600 {
            0x400 => Some(true),
            0 | 0x200 => Some(false),
            _ => return false,
        }
    } else {
        None
    };
    let mut attribute = None;
    for section in file
        .sections()
        .filter(|s| s.name() == Ok(".ARM.attributes"))
    {
        let Ok(data) = section.data() else {
            return false;
        };
        let Some(value) = attributes(data, file.is_little_endian()) else {
            return false;
        };
        if let Some(value) = value {
            if attribute.is_some_and(|old| old != value) {
                return false;
            }
            attribute = Some(value);
        }
    }
    match (header, attribute) {
        (Some(a), Some(b)) => a && b,
        (Some(a), None) | (None, Some(a)) => a,
        _ => false,
    }
}

/// The convention the container states for floating-point arguments:
/// `Some(true)` the VFP variant, `Some(false)` the base (core-register) variant,
/// `None` when it states neither or its evidence conflicts or is malformed.
pub fn args_evidence(file: &object::File<'_>) -> Option<bool> {
    if file.format() != object::BinaryFormat::Elf
        || file.architecture() != object::Architecture::Arm
    {
        return None;
    }
    let linked = matches!(
        file.kind(),
        object::ObjectKind::Executable | object::ObjectKind::Dynamic
    );
    let object::FileFlags::Elf { e_flags: flags, .. } = file.flags() else {
        return None;
    };
    let header = match flags & 0x600 {
        0x400 if linked && flags >> 24 >= 5 => Some(true),
        0x200 if linked && flags >> 24 >= 5 => Some(false),
        _ => None,
    };
    let mut attribute = None;
    for section in file
        .sections()
        .filter(|s| s.name() == Ok(".ARM.attributes"))
    {
        let data = section.data().ok()?;
        if let Some(value) = attribute_value(data, file.is_little_endian())? {
            if attribute.is_some_and(|old| old != value) {
                return None;
            }
            attribute = Some(value);
        }
    }
    let attribute = match attribute {
        Some(0) => Some(false),
        Some(1) => Some(true),
        _ => None,
    };
    match (header, attribute) {
        (Some(a), Some(b)) => (a == b).then_some(a),
        (a, b) => a.or(b),
    }
}

pub(super) fn word(data: &[u8], little: bool) -> Option<u32> {
    let bytes: [u8; 4] = data.get(..4)?.try_into().ok()?;
    Some(if little {
        u32::from_le_bytes(bytes)
    } else {
        u32::from_be_bytes(bytes)
    })
}
pub(super) fn uleb(data: &[u8], pos: &mut usize) -> Option<u32> {
    let mut result = 0;
    for shift in (0..35).step_by(7) {
        let b = *data.get(*pos)?;
        *pos += 1;
        if shift == 28 && b > 15 {
            return None;
        }
        result |= u32::from(b & 127) << shift;
        if b & 128 == 0 {
            return Some(result);
        }
    }
    None
}
pub(super) fn string<'a>(data: &'a [u8], pos: &mut usize) -> Option<&'a [u8]> {
    let begin = *pos;
    let end = begin + data.get(begin..)?.iter().position(|&b| b == 0)?;
    *pos = end + 1;
    Some(&data[begin..end])
}
fn attributes(data: &[u8], little: bool) -> Option<Option<bool>> {
    attribute_value(data, little).map(|value| value.map(|v| v == 1))
}

/// Whether the container states floating-point register hardware: `Some(true)`
/// when an `aeabi` subsection names an FP, Advanced SIMD or MVE architecture,
/// `Some(false)` when it names none of them, `None` when the image carries no
/// `aeabi` subsection or its attributes conflict or are malformed.
pub fn fp_hardware(file: &object::File<'_>) -> Option<bool> {
    if file.format() != object::BinaryFormat::Elf
        || file.architecture() != object::Architecture::Arm
    {
        return None;
    }
    let mut answer = None;
    for section in file
        .sections()
        .filter(|s| s.name() == Ok(".ARM.attributes"))
    {
        let data = section.data().ok()?;
        let Some(value) = hardware_value(data, file.is_little_endian())? else {
            continue;
        };
        if answer.is_some_and(|old| old != value) {
            return None;
        }
        answer = Some(value);
    }
    answer
}

fn hardware_value(data: &[u8], little: bool) -> Option<Option<bool>> {
    let fp = tag_value(data, little, 10)?;
    let simd = tag_value(data, little, 12)?;
    let mve = tag_value(data, little, 48)?;
    Some(match (fp, simd, mve) {
        (Some(fp), Some(simd), Some(mve)) => Some(fp != 0 || simd != 0 || mve != 0),
        _ => None,
    })
}

/// The file-scope `Tag_ABI_VFP_args` value, 0 when an `aeabi` subsection omits it.
fn attribute_value(data: &[u8], little: bool) -> Option<Option<u32>> {
    tag_value(data, little, 28)
}

/// The file-scope value of the numeric `tag`, 0 when an `aeabi` subsection omits it.
fn tag_value(data: &[u8], little: bool, wanted: u32) -> Option<Option<u32>> {
    file_attribute(data, little, wanted, |v| v, Some(0))
}

/// The file-scope value of the integer attribute `wanted`, through `map`.
/// A subsection without the tag answers `absent`; subsections that answer
/// differently, or a malformed section, answer `None`.
fn file_attribute<T: Copy + PartialEq>(
    data: &[u8],
    little: bool,
    wanted: u32,
    map: impl Fn(u32) -> T,
    absent: Option<T>,
) -> Option<Option<T>> {
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
        if vendor != b"aeabi" {
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
            let mut current = None;
            while pos < end {
                if budget == 0 {
                    return None;
                }
                budget -= 1;
                let tag = uleb(scope, &mut pos)?;
                if tag == 0 {
                    continue;
                }
                if tag == 32 {
                    uleb(scope, &mut pos)?;
                    string(scope, &mut pos)?;
                } else if tag == 4 || tag == 5 || (tag >= 32 && tag & 1 != 0) {
                    string(scope, &mut pos)?;
                } else {
                    let value = uleb(scope, &mut pos)?;
                    if tag == wanted {
                        let value = map(value);
                        if current.is_some_and(|old| old != value) {
                            return None;
                        }
                        current = Some(value);
                    }
                }
            }
            if let Some(current) = current.or(absent) {
                if answer.is_some_and(|old| old != current) {
                    return None;
                }
                answer = Some(current);
            }
        }
    }
    Some(answer)
}

#[cfg(test)]
mod tests;
