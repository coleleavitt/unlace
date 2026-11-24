//! (kuna `msvcptrentry`) A relocated pointer to an MSVC frame prologue is a
//! function entry (P1 code/data partition), on 32-bit PE images.
//!
//! C++ code reaches much of itself only through pointers: vtable slots, MFC
//! message maps and runtime-class tables, callbacks handed to the Win32 API
//! (`push offset WndProc`), thread procedures. A DLL's base-relocation table
//! lists every one of those words, in code and in data. A word whose value
//! lands on `push ebp; mov ebp,esp` (`55 8B EC`, or `8B FF 55 8B EC` with the
//! hot-patch prefix) is taken as a function start. MSVC encodes `mov ebp,esp` as
//! `8B EC`. GCC and MinGW encode it as `89 E5`, so their SJLJ landing pads and
//! other address-taken labels never match: those are the false positives that
//! keep `addrtakenentry` to x86-64. Neither do the mid-function labels MSVC
//! itself stores (switch targets, catch continuations, SEH handlers), which do
//! not start with a frame. Measured on PEGRP32F.dll against IDA 9.5: 1,255
//! targets, all IDA function starts, 452 missing from the inventory before.
//! Walked as roots, they reach 2,082 of the 2,455 missing starts in IDA's call
//! graph. USBCAN-Driver, CP210xManufacturing and SLABHIDDevice give no target
//! that is not an IDA function start either.

use std::collections::BTreeSet;

use object::FileKind;
use object::read::Object;
use object::read::pe::PeFile32;

use super::kuna_mfcmsgmap::{Image, relocated_rvas};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// (kuna) The relocated-prologue-pointer pass (`msvcptrentry`), gated at the
/// commit.
pub struct MsvcPtrEntryPass;

impl AnalysisPass for MsvcPtrEntryPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "msvcptrentry"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            entries: prologue_pointer_targets(ctx.bytes),
            ..AnalysisOutput::default()
        }
    }
}

/// Does `code` start with an MSVC frame prologue?
fn is_frame_prologue(code: &[u8]) -> bool {
    code.starts_with(&[0x55, 0x8b, 0xec]) || code.starts_with(&[0x8b, 0xff, 0x55, 0x8b, 0xec])
}

/// Every executable address a base-relocated word of a 32-bit PE points at
/// whose bytes are an MSVC frame prologue, sorted; empty for any other image.
pub fn prologue_pointer_targets(bytes: &[u8]) -> Vec<u64> {
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
        let Some(target) = image.word(slot).and_then(|va| image.rva(va, base)) else {
            continue;
        };
        if !image.executable(target) {
            continue;
        }
        if image
            .sections
            .pe_data_at(bytes, target)
            .is_some_and(is_frame_prologue)
        {
            out.insert(base + u64::from(target));
        }
    }
    out.into_iter().collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn only_the_msvc_encoding_of_mov_ebp_esp_is_a_prologue() {
        assert!(is_frame_prologue(&[0x55, 0x8b, 0xec, 0x83]));
        assert!(is_frame_prologue(&[0x8b, 0xff, 0x55, 0x8b, 0xec]));
        assert!(!is_frame_prologue(&[0x55, 0x89, 0xe5]));
        assert!(!is_frame_prologue(&[0x8b, 0x4d, 0xf0]));
    }
}
