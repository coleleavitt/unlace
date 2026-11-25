//! Recognize a PIC address-setup prefix before assuming an unsymbolized t9.
use unlace_sleigh::loadimage::ImageBytes;

fn rs(word: u32) -> u32 {
    (word >> 21) & 31
}
fn rt(word: u32) -> u32 {
    (word >> 16) & 31
}
fn rd(word: u32) -> u32 {
    (word >> 11) & 31
}

fn add_t9(word: u32, source: u32) -> Option<u32> {
    if matches!(word & 0xfc00_07ff, 0x21 | 0x2d)
        && ((rs(word) == source && rt(word) == 25) || (rs(word) == 25 && rt(word) == source))
        && !matches!(rd(word), 0 | 25)
    {
        Some(rd(word))
    } else {
        None
    }
}

fn add_immediate(word: u32, reg: u32) -> bool {
    matches!(word >> 26, 9 | 25) && rs(word) == reg && rt(word) == reg
}

fn setup(words: &[u32]) -> bool {
    let [hi, middle, last, ..] = words else {
        return false;
    };
    if hi & 0xffe0_0000 != 0x3c00_0000 || matches!(rt(*hi), 0 | 25) {
        return false;
    }
    let temp = rt(*hi);
    (add_immediate(*middle, temp) && add_t9(*last, temp).is_some())
        || add_t9(*middle, temp).is_some_and(|result| add_immediate(*last, result))
}

fn frame_prefix(word: u32) -> bool {
    (add_immediate(word, 29) && (word as u16 as i16) < 0)
        || (matches!(word >> 26, 0x2b | 0x3f) && rs(word) == 29)
        || matches!(word, 0x03a0_f025 | 0x03a0_f021 | 0x03a0_f02d)
}

fn has_setup(bytes: &[u8], little: bool) -> bool {
    let words: Vec<u32> = super::mipsabi::words(bytes, little).take(16).collect();
    for index in 0..words.len() {
        if setup(&words[index..]) {
            return true;
        }
        if !frame_prefix(words[index]) {
            return false;
        }
    }
    false
}

/// A function address as a register of the image's pointer class holds it: an
/// ELF32 pointer is sign-extended, as `lw` and 32-bit arithmetic leave it in a
/// 64-bit register. A consumer truncates the value to its register's width.
pub fn class_pointer(address: u64, elf32: bool) -> u64 {
    if elf32 {
        (address as u32 as i32 as i64) as u64
    } else {
        address
    }
}

/// Only the PIC setup convention supplies t9. An interior block or a plain
/// indirect call may instead consume a caller's arbitrary incoming value. The
/// bytes are read without a staging window, so probing leaves later reads alone.
pub fn value(image: &dyn ImageBytes, entry: u64, elf32: bool, little: bool) -> Option<u64> {
    if entry & 3 != 0 {
        return None;
    }
    let mut bytes = [0; 64];
    if image.fill_span(&mut bytes, entry) != 0 || !has_setup(&bytes, little) {
        return None;
    }
    Some(class_pointer(entry, elf32))
}

#[cfg(test)]
mod tests;
