//! The protocol index of an unpacked firmware volume.
//!
//! `unlace unpack <firmware> --protocols` runs the `uefi` pass over every module
//! it wrote and saves, beside them, which module installs which protocol or
//! PPI. When a module of that directory is loaded later, the pass reads the
//! index to learn the module's FFS file type (a PEIM and a standalone-MM
//! module are entered differently from a DXE driver), the struct of an
//! interface only another module describes, and, for each interface lookup,
//! the module that installs it.
//!
//! The file is line-oriented text ([`FILE_NAME`]):
//!
//! ```text
//! unlace-uefi-index 1
//! module <file> <ffs-type-hex>
//! struct <name> <Member>:<TYPE> ...
//! install <file> <guid-hex> <address-hex> <struct> [<Member>=<address-hex> ...]
//! ```
//!
//! A line that does not parse is skipped, a name with a character outside
//! `[A-Za-z0-9_]` (or `.`/`-` in a file name) is refused, since names reach
//! emitted comments and type names, and a file past [`MAX_BYTES`] is not read.

use super::flow::{Foreign, Kind};
use std::collections::BTreeMap;
use std::fmt::Write as _;
use std::path::Path;
use unlace_decomp::uefiprotocols::InstalledInterface;

/// The index file's name inside the unpack directory.
pub const FILE_NAME: &str = "unlace-uefi.index";
const HEADER: &str = "unlace-uefi-index 1";
const MAX_BYTES: u64 = 16 << 20;
const MAX_NOTED: usize = 3;

/// One module of the volume, as the index writer saw it.
pub struct ModuleRecord {
    pub file: String,
    pub file_type: u8,
    pub installs: Vec<InstalledInterface>,
}

/// The index text for `modules`.
pub fn render(modules: &[ModuleRecord]) -> String {
    let mut text = format!("{HEADER}\n");
    let mut structs: BTreeMap<&str, &[(String, String)]> = BTreeMap::new();
    for module in modules {
        let _ = writeln!(text, "module {} {:02x}", module.file, module.file_type);
        for install in &module.installs {
            if !install.fields.is_empty() {
                structs.entry(&install.interface).or_insert(&install.fields);
            }
        }
    }
    for (name, fields) in structs {
        let _ = write!(text, "struct {name}");
        for (member, spec) in fields.iter().filter(|(m, s)| word(m) && word(s)) {
            let _ = write!(text, " {member}:{spec}");
        }
        text.push('\n');
    }
    for module in modules {
        for install in &module.installs {
            let guid: String = install.guid.iter().map(|b| format!("{b:02x}")).collect();
            let _ = write!(
                text,
                "install {} {guid} {:x} {}",
                module.file, install.addr, install.interface
            );
            for (member, addr) in install.members.iter().filter(|(m, _)| word(m)) {
                let _ = write!(text, " {member}={addr:x}");
            }
            text.push('\n');
        }
    }
    text
}

fn word(s: &str) -> bool {
    !s.is_empty() && s.len() <= 128 && s.bytes().all(|b| b.is_ascii_alphanumeric() || b == b'_')
}

/// A module file name the index may carry into a comment.
fn file_name(s: &str) -> bool {
    !s.is_empty()
        && s.len() <= 128
        && s.bytes()
            .all(|b| b.is_ascii_alphanumeric() || matches!(b, b'_' | b'-' | b'.'))
}

struct Installed {
    file: String,
    addr: u64,
    interface: String,
    members: Vec<(String, u64)>,
}

/// A parsed index.
#[derive(Default)]
pub struct Index {
    modules: BTreeMap<String, u8>,
    structs: BTreeMap<String, Vec<(String, String)>>,
    installs: BTreeMap<[u8; 16], Vec<Installed>>,
}

impl Index {
    /// The index in the directory of `image`, when there is one.
    pub fn beside(image: &Path) -> Option<Index> {
        let path = image.parent()?.join(FILE_NAME);
        let meta = std::fs::metadata(&path).ok()?;
        if !meta.is_file() || meta.len() > MAX_BYTES {
            return None;
        }
        Index::parse(&std::fs::read_to_string(path).ok()?)
    }

    fn parse(text: &str) -> Option<Index> {
        let mut lines = text.lines();
        if lines.next()? != HEADER {
            return None;
        }
        let mut index = Index::default();
        for line in lines {
            let mut words = line.split(' ');
            match words.next() {
                Some("module") => {
                    let (Some(file), Some(Ok(ty))) = (
                        words.next().filter(|f| file_name(f)),
                        words.next().map(|t| u8::from_str_radix(t, 16)),
                    ) else {
                        continue;
                    };
                    index.modules.insert(file.to_string(), ty);
                }
                Some("struct") => {
                    let Some(name) = words.next().filter(|n| word(n)) else {
                        continue;
                    };
                    let fields: Vec<(String, String)> = words
                        .filter_map(|w| w.split_once(':'))
                        .filter(|(m, s)| word(m) && matches!(*s, "FUNC" | "UINTN"))
                        .map(|(m, s)| (m.to_string(), s.to_string()))
                        .collect();
                    if !fields.is_empty() && fields.len() <= 64 {
                        index.structs.insert(name.to_string(), fields);
                    }
                }
                Some("install") => {
                    let (Some(file), Some(guid), Some(Ok(addr)), Some(interface)) = (
                        words.next().filter(|f| file_name(f)),
                        words.next().and_then(guid_bytes),
                        words.next().map(|a| u64::from_str_radix(a, 16)),
                        words.next().filter(|i| word(i)),
                    ) else {
                        continue;
                    };
                    let members = words
                        .filter_map(|w| w.split_once('='))
                        .filter(|(m, _)| word(m))
                        .filter_map(|(m, a)| {
                            Some((m.to_string(), u64::from_str_radix(a, 16).ok()?))
                        })
                        .take(64)
                        .collect();
                    index.installs.entry(guid).or_default().push(Installed {
                        file: file.to_string(),
                        addr,
                        interface: interface.to_string(),
                        members,
                    });
                }
                _ => {}
            }
        }
        Some(index)
    }

    /// The FFS file type of the module `image`, from the index.
    pub(super) fn file_type_of(&self, image: &Path) -> Option<u8> {
        let file = image.file_name()?.to_str()?;
        self.modules.get(file).copied()
    }

    /// How the module `image` is entered, from its FFS file type.
    pub(super) fn kind_of(&self, image: &Path) -> Option<Kind> {
        Some(match self.file_type_of(image)? {
            0x04 | 0x06 | 0x08 => Kind::Pei,
            0x0e | 0x0f => Kind::Mm,
            _ => Kind::Dxe,
        })
    }

    /// The entry-point name a file type gives a module whose phase prototype
    /// names it: a PEIM is `PeimEntryPoint`, a standalone MM module is
    /// `StandaloneMmEntryPoint`. Other types keep `_ModuleEntryPoint`.
    pub(super) fn entry_name(&self, image: &Path) -> Option<&'static str> {
        let file = image.file_name()?.to_str()?;
        match self.modules.get(file)? {
            0x06 => Some("PeimEntryPoint"),
            0x0e => Some("StandaloneMmEntryPoint"),
            _ => None,
        }
    }

    /// The structs the index describes, by the GUID they are installed under.
    pub(super) fn foreign(&self) -> Foreign {
        let mut out = Foreign::new();
        for (guid, installs) in &self.installs {
            let described = installs
                .iter()
                .find_map(|i| Some((i.interface.clone(), self.structs.get(&i.interface)?.clone())));
            if let Some(entry) = described {
                out.insert(*guid, entry);
            }
        }
        out
    }

    /// One line naming the other modules that install `guid`.
    pub(super) fn installer_note(&self, guid: &[u8; 16], image: Option<&Path>) -> Option<String> {
        let own = image.and_then(|p| p.file_name()).and_then(|f| f.to_str());
        let others: Vec<&Installed> = self
            .installs
            .get(guid)?
            .iter()
            .filter(|i| Some(i.file.as_str()) != own)
            .take(MAX_NOTED)
            .collect();
        if others.is_empty() {
            return None;
        }
        let name = super::guid_names()
            .get(guid)
            .copied()
            .unwrap_or("interface");
        let parts: Vec<String> = others
            .iter()
            .map(|i| {
                let members: Vec<String> = i
                    .members
                    .iter()
                    .take(8)
                    .map(|(m, a)| format!("{m}={a:#x}"))
                    .collect();
                let detail = if members.is_empty() {
                    String::new()
                } else {
                    format!(": {}", members.join(", "))
                };
                format!("{} ({} at {:#x}{detail})", i.file, i.interface, i.addr)
            })
            .collect();
        Some(format!("{name} is installed by {}", parts.join("; ")))
    }
}

fn guid_bytes(hex: &str) -> Option<[u8; 16]> {
    if hex.len() != 32 || !hex.is_ascii() {
        return None;
    }
    let mut raw = [0u8; 16];
    for (i, b) in raw.iter_mut().enumerate() {
        *b = u8::from_str_radix(&hex[2 * i..2 * i + 2], 16).ok()?;
    }
    Some(raw)
}

#[cfg(test)]
mod tests;
