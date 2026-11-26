//! (unlace `msvcptrentry`) A relocated pointer to an MSVC frame prologue is a
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
//!
//! Code compiled with frame-pointer omission (the statically linked CRT and MFC
//! helpers) has no prologue to test, so a second form is read: the relocated
//! immediate of a `mov r/m32, imm32` (`C7 /0`) in code whose target sits right
//! after a `ret` (`C3`, or `C2 iw` with a pop below 256). That is a function
//! pointer stored into a structure (`mov dword ptr [eax+4], offset f`) aimed at
//! the byte after another function's end. MSVC's own mid-function labels are
//! loaded with `mov eax, imm32` or pushed (a catch continuation, an SEH
//! handler), and those forms are not read. On PEGRP32F.dll it gives 264
//! targets, all IDA function starts, 109 of them new.

use std::collections::BTreeSet;

use object::FileKind;
use object::read::Object;
use object::read::pe::{ImageNtHeaders, ImageOptionalHeader, PeFile32};

use super::mfcmsgmap::{Image, relocated_rvas};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// (unlace) The relocated-prologue-pointer pass (`msvcptrentry`), gated at the
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

/// (unlace #871) Is the image linked by MSVC? Its linker writes a major linker
/// version of 5 or later; GNU ld, which builds MinGW and Cygwin images, writes 2.
/// A MinGW image's SJLJ landing pads and stored labels are what this pass must
/// not walk, so such an image gets no targets at all.
fn is_msvc_linked(major_linker_version: u8) -> bool {
    major_linker_version >= 5
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
    if !is_msvc_linked(pe.nt_headers().optional_header().major_linker_version()) {
        return Vec::new();
    }
    let base = pe.relative_address_base();
    let sections = pe.section_table();
    let image = Image {
        bytes,
        sections: &sections,
        relocated: relocated_rvas(&pe, bytes, &sections),
    };
    let byte = |rva: u32| {
        image
            .sections
            .pe_data_at(bytes, rva)
            .and_then(|d| d.first().copied())
    };
    let mut out = BTreeSet::new();
    for &slot in &image.relocated {
        let Some(target) = image.word(slot).and_then(|va| image.rva(va, base)) else {
            continue;
        };
        if !image.executable(target) {
            continue;
        }
        let prologue = image
            .sections
            .pe_data_at(bytes, target)
            .is_some_and(is_frame_prologue);
        let stored =
            image.executable(slot) && is_mov_imm32(slot, &byte) && follows_ret(target, &byte);
        if prologue || stored {
            out.insert(base + u64::from(target));
        }
    }
    out.into_iter().collect()
}

/// Is the word at `imm` the immediate of a `mov r/m32, imm32` (`C7 /0` with a
/// memory operand) that ends with it?
fn is_mov_imm32(imm: u32, byte: &impl Fn(u32) -> Option<u8>) -> bool {
    (2..8).any(|k| {
        let Some(op) = imm.checked_sub(k) else {
            return false;
        };
        let (Some(0xc7), Some(modrm)) = (byte(op), byte(op + 1)) else {
            return false;
        };
        let (md, reg, rm) = (modrm >> 6, (modrm >> 3) & 7, modrm & 7);
        if reg != 0 || md == 3 {
            return false;
        }
        let sib = u32::from(rm == 4);
        let base5 = rm == 4 && byte(op + 2).is_some_and(|s| s & 7 == 5);
        let disp = match md {
            1 => 1,
            2 => 4,
            _ if rm == 5 || base5 => 4,
            _ => 0,
        };
        k == 2 + sib + disp
    })
}

/// Does `at` follow a `ret` (`C3`, or `C2 iw` popping less than 256 bytes)?
fn follows_ret(at: u32, byte: &impl Fn(u32) -> Option<u8>) -> bool {
    let before = |k: u32| at.checked_sub(k).and_then(byte);
    before(1) == Some(0xc3) || (before(3) == Some(0xc2) && before(1) == Some(0))
}

#[cfg(test)]
mod tests;
