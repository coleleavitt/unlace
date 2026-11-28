//! (unlace) A Mach-O image's dependency list and run paths: the dylibs its load
//! commands name and its `LC_RPATH` entries, read from the image's own header.
//!
//! The commands are facts the file states, so they need no option. A dylib keeps
//! the command that named it and its current and compatibility versions. The walk
//! is bounded by the header's `sizeofcmds` and by each command's `cmdsize`: a
//! command that runs past the end of the input ends the walk, and a string with no
//! terminator inside its command is dropped. Only a thin image is read. A fat file
//! is peeled by the caller first (see [`crate::loader::macho_fat`]); any other
//! input yields nothing.

/// `LC_RPATH`.
const LC_RPATH: u32 = 0x8000_001c;

/// The load command that named a dependency.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum DylibKind {
    /// `LC_LOAD_DYLIB`: a required dependency.
    Load,
    /// `LC_LOAD_WEAK_DYLIB`: the image runs without it.
    Weak,
    /// `LC_REEXPORT_DYLIB`: the image also exports the dylib's symbols.
    Reexport,
    /// `LC_LAZY_LOAD_DYLIB`: loaded on first use.
    Lazy,
    /// `LC_LOAD_UPWARD_DYLIB`: an upward dependency, which may depend back on this image.
    Upward,
}

impl DylibKind {
    fn from_command(cmd: u32) -> Option<Self> {
        Some(match cmd {
            0xc => Self::Load,
            0x8000_0018 => Self::Weak,
            0x8000_001f => Self::Reexport,
            0x20 => Self::Lazy,
            0x8000_0023 => Self::Upward,
            _ => return None,
        })
    }

    /// The load command's name, as `otool -l` prints it.
    pub fn command_name(self) -> &'static str {
        match self {
            Self::Load => "LC_LOAD_DYLIB",
            Self::Weak => "LC_LOAD_WEAK_DYLIB",
            Self::Reexport => "LC_REEXPORT_DYLIB",
            Self::Lazy => "LC_LAZY_LOAD_DYLIB",
            Self::Upward => "LC_LOAD_UPWARD_DYLIB",
        }
    }
}

/// One dylib the image loads.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Dylib {
    /// The command that named it.
    pub kind: DylibKind,
    /// The install name the command carries, as written.
    pub name: String,
    /// `current_version`, packed as `(major << 16) | (minor << 8) | patch`.
    pub current_version: u32,
    /// `compatibility_version`, packed like `current_version`.
    pub compat_version: u32,
}

/// The dependency list and run paths of a thin Mach-O, each in load-command order.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct MachODependencies {
    /// Every dylib command the image carries.
    pub dylibs: Vec<Dylib>,
    /// The `LC_RPATH` paths as written; `@executable_path` and the like are not expanded.
    pub rpaths: Vec<String>,
}

/// The dependency list and run paths of the thin Mach-O in `bytes`; empty for any other input.
pub fn dependencies(bytes: &[u8]) -> MachODependencies {
    let mut out = MachODependencies::default();
    let Some((little, wide)) = header_kind(bytes) else {
        return out;
    };
    let header: usize = if wide { 32 } else { 28 };
    let (Some(ncmds), Some(sizeofcmds)) = (word(bytes, 16, little), word(bytes, 20, little)) else {
        return out;
    };
    let end = header.saturating_add(sizeofcmds as usize).min(bytes.len());
    let mut at = header;
    for _ in 0..ncmds {
        let (Some(cmd), Some(size)) = (
            word(bytes, at, little),
            word(bytes, at.saturating_add(4), little),
        ) else {
            break;
        };
        let size = size as usize;
        let Some(next) = at
            .checked_add(size)
            .filter(|&next| size >= 8 && next <= end)
        else {
            break;
        };
        let body = &bytes[at..next];
        if let Some(kind) = DylibKind::from_command(cmd) {
            if let (Some(name), Some(current_version), Some(compat_version)) = (
                string_at(body, little),
                word(body, 16, little),
                word(body, 20, little),
            ) {
                out.dylibs.push(Dylib {
                    kind,
                    name,
                    current_version,
                    compat_version,
                });
            }
        } else if cmd == LC_RPATH
            && let Some(path) = string_at(body, little)
        {
            out.rpaths.push(path);
        }
        at = next;
    }
    out
}

/// `(little_endian, wide)` from the thin magic, or `None` for any other input.
fn header_kind(bytes: &[u8]) -> Option<(bool, bool)> {
    match bytes.get(0..4)? {
        [0xce, 0xfa, 0xed, 0xfe] => Some((true, false)),
        [0xcf, 0xfa, 0xed, 0xfe] => Some((true, true)),
        [0xfe, 0xed, 0xfa, 0xce] => Some((false, false)),
        [0xfe, 0xed, 0xfa, 0xcf] => Some((false, true)),
        _ => None,
    }
}

fn word(bytes: &[u8], at: usize, little: bool) -> Option<u32> {
    let field: [u8; 4] = bytes.get(at..at.checked_add(4)?)?.try_into().ok()?;
    Some(if little {
        u32::from_le_bytes(field)
    } else {
        u32::from_be_bytes(field)
    })
}

/// The `lc_str` a command names at its offset field (byte 8), read inside the command.
fn string_at(body: &[u8], little: bool) -> Option<String> {
    let offset = word(body, 8, little)? as usize;
    let rest = body.get(offset..)?;
    let len = rest.iter().position(|&b| b == 0)?;
    Some(String::from_utf8_lossy(&rest[..len]).into_owned())
}

#[cfg(test)]
mod tests;
