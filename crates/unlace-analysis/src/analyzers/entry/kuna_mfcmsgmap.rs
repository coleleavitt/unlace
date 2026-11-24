//! (kuna `mfcmsgmap`) MFC message-map handlers as function entries (P1
//! code/data partition), on 32-bit PE images.
//!
//! An MFC window class routes Windows messages through a static message map:
//! an `AFX_MSGMAP` record in `.rdata` holds the address of the base class's
//! `GetThisMessageMap` and the address of an `AFX_MSGMAP_ENTRY` array, and
//! each 24-byte entry (`nMessage, nCode, nID, nLastID, nSig, pfn`) names a
//! handler. The array ends in an all-zero entry. The handlers are reached only
//! through that table (`CWnd::OnWndMsg` calls `pfn` indirectly), so neither
//! the entry oracles nor a direct-call walk finds them, and each is folded into
//! the function before it.
//!
//! A table is read only where the image's base relocations vouch for every
//! pointer in it: the `lpEntries` word and the `pfnGetBaseMap` word before it
//! are relocated, the latter points into an executable section, the entries
//! sit in a non-executable section, and every entry's `pfn` is a relocated
//! word pointing into an executable section, with `nMessage` below 0x10000
//! and `nSig` below 0x100. A run that breaks any of these is no table.
//! Measured on PEGRP32F.dll (MFC, MSVC i386): 29 maps, 198 handlers, every one
//! an IDA 9.5 function start, 194 of them missing from the inventory before.

use std::collections::BTreeSet;

use object::pe::{IMAGE_REL_BASED_HIGHLOW, IMAGE_SCN_MEM_EXECUTE};
use object::read::Object;
use object::read::pe::{PeFile32, SectionTable};
use object::{FileKind, LittleEndian as LE};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// Bytes per `AFX_MSGMAP_ENTRY` on a 32-bit image.
const ENTRY: u32 = 24;

/// The most entries one map is read for.
const MAX_ENTRIES: u32 = 4096;

/// (kuna) The MFC message-map pass (`mfcmsgmap`), gated at the commit.
pub struct MfcMsgMapPass;

impl AnalysisPass for MfcMsgMapPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "mfcmsgmap"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            entries: message_map_handlers(ctx.bytes),
            ..AnalysisOutput::default()
        }
    }
}

/// The handler of every entry of every MFC message map in a 32-bit PE image,
/// sorted; empty for any other image.
pub fn message_map_handlers(bytes: &[u8]) -> Vec<u64> {
    if !matches!(FileKind::parse(bytes), Ok(FileKind::Pe32)) {
        return Vec::new();
    }
    let Ok(pe) = PeFile32::parse(bytes) else {
        return Vec::new();
    };
    let base = pe.relative_address_base();
    let sections = pe.section_table();
    let image = Image {
        bytes,
        sections: &sections,
        relocated: relocated_rvas(&pe, bytes, &sections),
    };
    let mut out = BTreeSet::new();
    for &slot in &image.relocated {
        if image.executable(slot) {
            continue;
        }
        let Some(entries) = image.word(slot).and_then(|va| image.rva(va, base)) else {
            continue;
        };
        let header = slot.wrapping_sub(4);
        let base_map = image
            .relocated
            .contains(&header)
            .then(|| image.word(header))
            .flatten()
            .and_then(|va| image.rva(va, base));
        if !base_map.is_some_and(|rva| image.executable(rva))
            || image.executable(entries)
            || image.sections.section_containing(entries).is_none()
        {
            continue;
        }
        if let Some(handlers) = image.handlers(entries, base) {
            out.extend(handlers.into_iter().map(|rva| base + u64::from(rva)));
        }
    }
    out.into_iter().collect()
}

pub(super) struct Image<'a> {
    pub(super) bytes: &'a [u8],
    pub(super) sections: &'a SectionTable<'a>,
    pub(super) relocated: BTreeSet<u32>,
}

impl Image<'_> {
    pub(super) fn word(&self, rva: u32) -> Option<u32> {
        let data = self.sections.pe_data_at(self.bytes, rva)?;
        Some(u32::from_le_bytes(data.get(..4)?.try_into().ok()?))
    }

    pub(super) fn rva(&self, va: u32, base: u64) -> Option<u32> {
        u32::try_from(u64::from(va).checked_sub(base)?).ok()
    }

    pub(super) fn executable(&self, rva: u32) -> bool {
        self.sections
            .section_containing(rva)
            .is_some_and(|s| s.characteristics.get(LE) & IMAGE_SCN_MEM_EXECUTE != 0)
    }

    /// The handlers of the entry array at `at`, when every entry up to an
    /// all-zero one has the shape of an `AFX_MSGMAP_ENTRY`.
    fn handlers(&self, at: u32, base: u64) -> Option<Vec<u32>> {
        let mut out = Vec::new();
        for i in 0..MAX_ENTRIES {
            let entry = at.checked_add(i.checked_mul(ENTRY)?)?;
            let fields: Vec<u32> = (0..6)
                .map(|k| self.word(entry.checked_add(4 * k)?))
                .collect::<Option<_>>()?;
            if fields.iter().all(|&f| f == 0) {
                return (!out.is_empty()).then_some(out);
            }
            let pfn = entry.checked_add(20)?;
            let target = self.rva(fields[5], base)?;
            if fields[0] >= 0x1_0000
                || fields[4] >= 0x100
                || !self.relocated.contains(&pfn)
                || !self.executable(target)
            {
                return None;
            }
            out.push(target);
        }
        None
    }
}

/// The RVA of every 32-bit word the base-relocation table lists.
pub(super) fn relocated_rvas(
    pe: &PeFile32<'_>,
    bytes: &[u8],
    sections: &SectionTable<'_>,
) -> BTreeSet<u32> {
    let mut out = BTreeSet::new();
    let Ok(Some(blocks)) = pe.data_directories().relocation_blocks(bytes, sections) else {
        return out;
    };
    for block in blocks.flatten() {
        for rel in block {
            if rel.typ == IMAGE_REL_BASED_HIGHLOW {
                out.insert(rel.virtual_address);
            }
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_non_pe_image_has_no_message_map() {
        assert!(message_map_handlers(b"\x7fELF").is_empty());
    }
}
