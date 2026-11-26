//! Static integer format specifications in the verified Rust 1.93 template layout.

use std::collections::BTreeMap;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Trait {
    Display,
    Debug,
    LowerHex,
    UpperHex,
    Octal,
    Binary,
    LowerExp,
    UpperExp,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Formatter {
    pub primitive: &'static str,
    pub kind: Trait,
}

/// Conflicting full identities, including unknown aliases, invalidate an address.
pub fn formatter_symbols(
    symbols: impl IntoIterator<Item = (u64, Option<String>)>,
) -> BTreeMap<u64, Formatter> {
    let mut entries = BTreeMap::new();
    let symbols: Vec<_> = symbols
        .into_iter()
        .map(|(address, name)| {
            let formatter = name.as_deref().and_then(classify);
            if let Some(formatter) = formatter {
                entries.insert(address, formatter);
            }
            (address, formatter)
        })
        .collect();
    for (address, formatter) in symbols {
        if entries
            .get(&address)
            .is_some_and(|known| Some(*known) != formatter)
        {
            entries.remove(&address);
        }
    }
    entries
}

fn classify(name: &str) -> Option<Formatter> {
    let (name, imp) =
        if let Some(name) = name.strip_prefix("core::fmt::num::imp::<impl core::fmt::") {
            (name, true)
        } else {
            (
                name.strip_prefix("core::fmt::num::<impl core::fmt::")?,
                false,
            )
        };
    let (kind, primitive) = name.strip_suffix(">::fmt")?.split_once(" for ")?;
    let kind = match (kind, imp) {
        ("Display", true) => Trait::Display,
        ("LowerExp", true) => Trait::LowerExp,
        ("UpperExp", true) => Trait::UpperExp,
        ("Debug", false) => Trait::Debug,
        ("LowerHex", false) => Trait::LowerHex,
        ("UpperHex", false) => Trait::UpperHex,
        ("Octal", false) => Trait::Octal,
        ("Binary", false) => Trait::Binary,
        _ => return None,
    };
    let primitive = match primitive {
        "u8" => "u8",
        "u16" => "u16",
        "u32" => "u32",
        "u64" | "usize" => "u64",
        "i8" => "i8",
        "i16" => "i16",
        "i32" => "i32",
        "i64" | "isize" => "i64",
        _ => return None,
    };
    Some(Formatter { primitive, kind })
}

const DEFAULT_FLAGS: u32 = 0x6000_0020;
const WIDTH: u32 = 1 << 27;
const PRECISION: u32 = 1 << 28;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
#[doc(hidden)]
pub struct Options {
    flags: u32,
    width: u16,
    precision: u16,
}

impl Default for Options {
    fn default() -> Self {
        Self {
            flags: DEFAULT_FLAGS,
            width: 0,
            precision: 0,
        }
    }
}

impl Options {
    #[doc(hidden)]
    pub fn decode(head: u8, mut take: impl FnMut(usize) -> Option<Vec<u8>>) -> Option<Self> {
        if head & 0xc0 != 0xc0 || head & 0x30 != 0 {
            return None;
        }
        let flags = if head & 1 != 0 {
            u32::from_le_bytes(take(4)?.try_into().ok()?)
        } else {
            DEFAULT_FLAGS
        };
        let fill = char::from_u32(flags & 0x1f_ffff)?;
        let align = (flags >> 29) & 3;
        if flags & 0x8000_0000 != 0
            || flags & (3 << 21) == 3 << 21
            || flags & (3 << 25) == 3 << 25
            || matches!(fill, '{' | '}')
            || (align == 3 && fill != ' ')
            || (head & 2 != 0 && flags & WIDTH == 0)
            || (head & 4 != 0 && flags & PRECISION == 0)
        {
            return None;
        }
        let width = if head & 2 != 0 {
            u16::from_le_bytes(take(2)?.try_into().ok()?)
        } else {
            0
        };
        let precision = if head & 4 != 0 {
            u16::from_le_bytes(take(2)?.try_into().ok()?)
        } else {
            0
        };
        if flags & WIDTH != 0 && width == 0 && flags & (1 << 24) == 0 {
            return None;
        }
        Some(Self {
            flags,
            width,
            precision,
        })
    }

    #[doc(hidden)]
    pub fn render(self, kind: Trait) -> Option<String> {
        let flags = self.flags;
        let mut spec = String::new();
        let align = (flags >> 29) & 3;
        if align != 3 {
            let fill = char::from_u32(flags & 0x1f_ffff)?;
            if fill != ' ' {
                spec.extend(fill.escape_debug());
            }
            spec.push(['<', '>', '^'][align as usize]);
        }
        if flags & (1 << 21) != 0 {
            spec.push('+');
        } else if flags & (1 << 22) != 0 {
            spec.push('-');
        }
        if flags & (1 << 23) != 0 {
            spec.push('#');
        }
        if flags & (1 << 24) != 0 {
            spec.push('0');
        }
        if flags & WIDTH != 0 {
            spec.push_str(&self.width.to_string());
        }
        if flags & PRECISION != 0 {
            spec.push('.');
            spec.push_str(&self.precision.to_string());
        }
        let debug_hex = (flags >> 25) & 3;
        if debug_hex != 0 && kind != Trait::Debug {
            return None;
        }
        spec.push_str(match kind {
            Trait::Display => "",
            Trait::Debug => match debug_hex {
                0 => "?",
                1 => "x?",
                2 => "X?",
                _ => return None,
            },
            Trait::LowerHex => "x",
            Trait::UpperHex => "X",
            Trait::Octal => "o",
            Trait::Binary => "b",
            Trait::LowerExp => "e",
            Trait::UpperExp => "E",
        });
        Some(spec)
    }
}

/// (unlace `rustfmtflags`) The image's integer `Display` formatters, by address; an
/// [`ArchTable`](crate::archstate::ArchTable) on the architecture.
pub type IntegerFormatters = std::collections::BTreeMap<u64, Formatter>;
crate::unlace_arch_table!(IntegerFormatters);

#[cfg(test)]
mod tests;
