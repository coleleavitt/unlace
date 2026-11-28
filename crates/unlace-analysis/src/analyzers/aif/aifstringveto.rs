//! (unlace `aifdataveto`) A discovered entry whose bytes are a C string is data.
//!
//! A Windows driver keeps its `DbgPrint` format strings in the code sections it
//! pages with the code (`PAGE`, `INIT`, `.text`), and passes them as pushed
//! immediates (`push offset "...\n"`). A pushed code-section address reads
//! as a function pointer, and the Aggressive Instruction Finder decodes the
//! text that follows `int3` padding, so such a string became a function: in
//! the Silicon Labs CP210x bus enumerator (x86) 109 of 227 functions were
//! strings, and two that ran into the gap between two sections failed to decode. An entry the
//! code does not call or jump to, whose bytes are at least [`MIN_CHARS`]
//! printable characters ending in a NUL, as ASCII or as UTF-16LE, followed by
//! `int3` padding or another string, is vetoed like one the code reads as
//! data. Over 85,000 functions of /usr/bin, /usr/lib64 and the Holley PEs the
//! test holds for 111 entries, every one a string (109 in that enumerator, 2 in
//! its serial driver).

use object::{Object, ObjectSection};

/// The fewest characters before the terminator that make a string.
pub const MIN_CHARS: usize = 6;

/// The most bytes read at an entry.
const WINDOW: u64 = 256;

fn printable(b: u8) -> bool {
    (0x20..0x7f).contains(&b) || matches!(b, b'\t' | b'\n' | b'\r')
}

/// The printable characters at `at`, one byte each or, `wide`, two (UTF-16LE).
fn run(bytes: &[u8], at: usize, wide: bool) -> usize {
    if wide {
        bytes
            .get(at..)
            .unwrap_or_default()
            .as_chunks::<2>()
            .0
            .iter()
            .take_while(|c| c[1] == 0 && printable(c[0]))
            .count()
    } else {
        bytes
            .get(at..)
            .unwrap_or_default()
            .iter()
            .take_while(|&&b| printable(b))
            .count()
    }
}

/// What follows a string's terminator at `at`, past any zero padding: `int3`
/// padding, the end of the bytes read, or another string of at least four
/// characters. Code that happens to be printable up to a zero byte (`push ebx;
/// push 0xa; push 0x2b67` is `Sj\nhg+\0\0`) goes on with more code.
fn followed_like_data(bytes: &[u8], at: usize, wide: bool) -> bool {
    let at = at
        + bytes
            .get(at..)
            .unwrap_or_default()
            .iter()
            .take_while(|&&b| b == 0)
            .count();
    match bytes.get(at) {
        None | Some(0xcc) => true,
        Some(_) => {
            let n = run(bytes, at, wide);
            let end = at + if wide { 2 * n } else { n };
            n >= 4 && bytes.get(end).is_none_or(|&b| b == 0)
        }
    }
}

/// Do `bytes` begin with a NUL-terminated string of at least [`MIN_CHARS`]
/// printable characters, ASCII or UTF-16LE, that padding or another string
/// follows?
pub fn is_string(bytes: &[u8]) -> bool {
    let ascii = run(bytes, 0, false);
    if ascii >= MIN_CHARS && bytes.get(ascii) == Some(&0) && followed_like_data(bytes, ascii, false)
    {
        return true;
    }
    let wide = run(bytes, 0, true);
    wide >= MIN_CHARS
        && bytes.get(2 * wide..2 * wide + 2) == Some(&[0, 0][..])
        && followed_like_data(bytes, 2 * wide, true)
}

/// Does the image hold a string at `vma` ([`is_string`])?
pub fn string_at(file: &object::File, vma: u64) -> bool {
    file.sections().any(|s| {
        let (lo, size) = (s.address(), s.size());
        if vma < lo || vma - lo >= size {
            return false;
        }
        let len = WINDOW.min(size - (vma - lo));
        s.data_range(vma, len).ok().flatten().is_some_and(is_string)
    })
}

#[cfg(test)]
mod tests;
