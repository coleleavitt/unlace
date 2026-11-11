//! Matching a decoded signature against code (`sub_8148B0`, `sub_813F40`).
//!
//! 1. Walk the tree: a child applies when every fixed byte of its pattern
//!    equals the code. IDA binary-searches the fixed-first children and
//!    then tries the last child; trying every matching child in file order
//!    is a superset of that.
//! 2. At a leaf, take the first module whose checks all pass:
//!    - the module's `length` bytes exist in the code window;
//!    - CRC16 of the `crc_len` bytes after the pattern;
//!    - each tail byte, at `pattern_size + crc_len + offset`;
//!    - the referenced name, when the module has one (see
//!      [`SigFile::reference_holds`]). IDA keeps such modules only as
//!      "xref candidates" until the name is known, so an unresolved
//!      reference rejects the module.

use std::collections::BTreeMap;

use unlace_ir::ArchId;

use super::{Module, ModuleId, ModuleRef, Node, NodeChildren, SigFeatures, SigFile, crc16};

/// A contiguous range of loaded bytes, typically one executable section.
#[derive(Clone, Copy, Debug)]
pub struct CodeWindow<'a> {
    pub start: u64,
    pub bytes: &'a [u8],
}

impl<'a> CodeWindow<'a> {
    pub fn new(start: u64, bytes: &'a [u8]) -> Self {
        Self { start, bytes }
    }

    pub fn read(&self, addr: u64, len: usize) -> Option<&'a [u8]> {
        let offset = usize::try_from(addr.checked_sub(self.start)?).ok()?;
        self.bytes.get(offset..offset.checked_add(len)?)
    }

    fn read_u32(&self, addr: u64) -> Option<u32> {
        let bytes = self.read(addr, 4)?;
        Some(u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]))
    }
}

/// Names already known at addresses: symbols, imports and earlier
/// signature matches.
pub trait KnownNames {
    fn name_at(&self, addr: u64) -> Option<&str>;
}

impl KnownNames for BTreeMap<u64, String> {
    fn name_at(&self, addr: u64) -> Option<&str> {
        self.get(&addr).map(String::as_str)
    }
}

/// Everything a match needs besides the signature itself.
#[derive(Clone, Copy)]
pub struct MatchContext<'a> {
    pub arch: ArchId,
    pub code: CodeWindow<'a>,
    pub names: &'a dyn KnownNames,
}

/// A module that matched at an address.
#[derive(Clone, Copy, Debug)]
pub struct SigMatch<'s> {
    pub id: ModuleId,
    pub module: &'s Module,
}

impl SigFile {
    /// Match the code at `ea` against this signature.
    pub fn match_at<'s>(&'s self, cx: &MatchContext<'_>, ea: u64) -> Option<SigMatch<'s>> {
        self.walk(&self.root, cx, ea, 0)
    }

    fn walk<'s>(
        &'s self,
        node: &'s Node,
        cx: &MatchContext<'_>,
        ea: u64,
        pos: u64,
    ) -> Option<SigMatch<'s>> {
        match &node.children {
            NodeChildren::Leaf(ids) => ids.iter().find_map(|&id| {
                let module = &self.modules[id.index()];
                self.module_holds(module, cx, ea)
                    .then_some(SigMatch { id, module })
            }),
            NodeChildren::Inner(children) => children.iter().find_map(|child| {
                let len = child.pattern.len();
                let code = cx.code.read(ea.checked_add(pos)?, len)?;
                let fits = child
                    .pattern
                    .iter()
                    .zip(code)
                    .all(|(want, &have)| want.is_none_or(|want| want == have));
                if fits {
                    self.walk(child, cx, ea, pos + len as u64)
                } else {
                    None
                }
            }),
        }
    }

    fn module_holds(&self, module: &Module, cx: &MatchContext<'_>, ea: u64) -> bool {
        if cx.code.read(ea, module.length as usize).is_none() {
            return false;
        }
        let crc_start = ea + u64::from(self.header.pattern_size);
        // An empty range checksums to 0 even past the end of the code.
        let crc = match module.crc_len {
            0 => 0,
            len => match cx.code.read(crc_start, usize::from(len)) {
                Some(bytes) => crc16(bytes),
                None => return false,
            },
        };
        if crc != module.crc16 {
            return false;
        }
        let tail_start = crc_start + u64::from(module.crc_len);
        let tails_hold = module.tail_bytes.iter().all(|tail| {
            cx.code
                .read(tail_start + u64::from(tail.offset), 1)
                .is_some_and(|byte| byte[0] == tail.value)
        });
        tails_hold
            && module
                .reference
                .as_ref()
                .is_none_or(|reference| self.reference_holds(module, reference, cx, ea))
    }

    /// `sub_813F40` / `sub_813D30` / `sub_8139E0`.
    fn reference_holds(
        &self,
        module: &Module,
        reference: &ModuleRef,
        cx: &MatchContext<'_>,
        ea: u64,
    ) -> bool {
        let offset = i64::from(reference.offset);
        if self.header.features.contains(SigFeatures::STARTUP) {
            // The "name" is a hex byte expected after the CRC range.
            let addr = ea
                .wrapping_add(u64::from(self.header.pattern_size))
                .wrapping_add(u64::from(module.crc_len))
                .wrapping_add_signed(offset);
            let expected = u8::from_str_radix(&reference.name, 16).ok();
            return cx
                .code
                .read(addr, 1)
                .is_some_and(|byte| Some(byte[0]) == expected);
        }
        let site = ea.wrapping_add_signed(offset);
        let targets = operand_targets(cx.arch, &cx.code, site);
        if reference.is_ctype_table() {
            return targets
                .iter()
                .any(|&target| self.ctype_table_at(cx, target));
        }
        targets.iter().any(|&target| {
            cx.names
                .name_at(target)
                .is_some_and(|known| names_agree(&reference.name, known))
        })
    }

    /// `sub_813690`: the C ctype table is recognised by name or by the
    /// CRC of its first 128 (one-byte) or 256 (two-byte elements) bytes,
    /// at the referenced address or one element before it.
    fn ctype_table_at(&self, cx: &MatchContext<'_>, target: u64) -> bool {
        let header = &self.header;
        let (width, len) = if header.features.contains(SigFeatures::CTYPE2) {
            (2, 256)
        } else {
            (1, 128)
        };
        [target, target.wrapping_sub(width)]
            .into_iter()
            .any(|addr| {
                if header.features.contains(SigFeatures::CTYPE)
                    && cx.names.name_at(addr) == Some(header.ctype_name.as_str())
                {
                    return true;
                }
                let Some(bytes) = cx.code.read(addr, len) else {
                    return false;
                };
                let crc = crc16(bytes);
                crc == header.ctype_crc
                    || (header.features.contains(SigFeatures::CTYPE_ALT)
                        && crc == header.ctype_crc_alt)
                    || (header.features.contains(SigFeatures::CTYPE_3V)
                        && crc == header.ctype_crc_3v)
            })
    }
}

/// Addresses the operand at `site` may refer to. IDA asks its own
/// cross-references; here the operand is decoded directly:
///
/// - x86-64: a rel32 field, relative to the end of an instruction that
///   ends right after it or after a trailing imm8 / imm32;
/// - x86: an absolute address or a rel32 field;
/// - AArch64 and A32: a `B`/`BL` instruction at `site`.
///
/// Other architectures yield nothing, so their referencing modules never
/// match.
fn operand_targets(arch: ArchId, code: &CodeWindow<'_>, site: u64) -> Vec<u64> {
    let Some(word) = code.read_u32(site) else {
        return Vec::new();
    };
    let rel32 = |end: u64| end.wrapping_add_signed(i64::from(word as i32));
    match arch {
        ArchId::X86_64 => vec![rel32(site + 4), rel32(site + 5), rel32(site + 8)],
        ArchId::X86 => vec![u64::from(word), rel32(site + 4) & 0xFFFF_FFFF],
        ArchId::AArch64 if word & 0x7C00_0000 == 0x1400_0000 => {
            let imm26 = i64::from(((word << 6) as i32) >> 6);
            vec![site.wrapping_add_signed(imm26 * 4)]
        }
        ArchId::Arm if word & 0x0E00_0000 == 0x0A00_0000 && word >> 28 != 0xF => {
            let imm24 = i64::from(((word << 8) as i32) >> 8);
            vec![site.wrapping_add(8).wrapping_add_signed(imm24 * 4)]
        }
        _ => Vec::new(),
    }
}

/// Whether a signature's referenced name denotes the symbol `known`.
///
/// Import thunk slots are `__imp_<name>` in signatures, while unlace names
/// IAT slots `dll!name`; 32-bit x86 decorates C names as `_name` or
/// `_name@N`. `@plt` stubs stand for the imported name.
fn names_agree(expected: &str, known: &str) -> bool {
    if expected == known {
        return true;
    }
    let known = known.rsplit_once('!').map_or(known, |(_, name)| name);
    let known = known.strip_suffix("@plt").unwrap_or(known);
    let expected = expected.strip_prefix("__imp_").unwrap_or(expected);
    expected == known || undecorate(expected) == undecorate(known)
}

fn undecorate(name: &str) -> &str {
    let name = name.strip_prefix('_').unwrap_or(name);
    match name.rsplit_once('@') {
        Some((base, size)) if !size.is_empty() && size.bytes().all(|b| b.is_ascii_digit()) => base,
        _ => name,
    }
}
