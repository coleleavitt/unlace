//! (unlace `tlsnames`) The static TLS block of an x86 or AArch64 ELF image: `PT_TLS`
//! and the `STT_TLS` symbols of an executable, or the `SHF_TLS` sections of a
//! relocatable object (the layout the loader applies the AArch64 TLSLE
//! relocations with), for `unlace_decomp::tlsnames`.

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};
use object::{Object, ObjectSymbol, SymbolKind};
use unlace_decomp::tlsnames::TlsLayout;

pub struct TlsNamesPass;

const PT_TLS: u32 = 7;

/// `(p_memsz, p_align)` of the `PT_TLS` program header.
fn pt_tls(bytes: &[u8]) -> Option<(u64, u64)> {
    let le = *bytes.get(5)? == 1;
    let wide = *bytes.get(4)? == 2;
    let u16_at = |at: usize| {
        bytes.get(at..at + 2).map(|b| {
            if le {
                u16::from_le_bytes([b[0], b[1]])
            } else {
                u16::from_be_bytes([b[0], b[1]])
            }
        })
    };
    let u32_at = |at: usize| {
        bytes.get(at..at + 4).map(|b| {
            let a = [b[0], b[1], b[2], b[3]];
            if le {
                u32::from_le_bytes(a)
            } else {
                u32::from_be_bytes(a)
            }
        })
    };
    let u64_at = |at: usize| {
        bytes.get(at..at + 8).map(|b| {
            let a: [u8; 8] = b.try_into().expect("8 bytes");
            if le {
                u64::from_le_bytes(a)
            } else {
                u64::from_be_bytes(a)
            }
        })
    };
    let (phoff, phentsize, phnum) = if wide {
        (
            u64_at(0x20)? as usize,
            u16_at(0x36)? as usize,
            u16_at(0x38)? as usize,
        )
    } else {
        (
            u32_at(0x1c)? as usize,
            u16_at(0x2a)? as usize,
            u16_at(0x2c)? as usize,
        )
    };
    (0..phnum).find_map(|i| {
        let ph = phoff + i * phentsize;
        if u32_at(ph)? != PT_TLS {
            return None;
        }
        Some(if wide {
            (u64_at(ph + 0x28)?, u64_at(ph + 0x30)?)
        } else {
            (u64::from(u32_at(ph + 0x14)?), u64::from(u32_at(ph + 0x1c)?))
        })
    })
}

impl AnalysisPass for TlsNamesPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "tlsnames"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        let arch = ctx.file.architecture();
        let x86 = matches!(
            arch,
            object::Architecture::X86_64 | object::Architecture::I386
        );
        let aarch64 = arch == object::Architecture::Aarch64;
        if ctx.file.format() != object::BinaryFormat::Elf || !(x86 || aarch64) {
            return out;
        }
        let relocatable = ctx.file.kind() == object::ObjectKind::Relocatable;
        if relocatable && !aarch64 {
            return out;
        }
        let tls = relocatable
            .then(|| crate::loader::reloc_object::relocatable_tls(ctx.file))
            .flatten();
        let (memsz, align) = match &tls {
            Some(t) => (t.size, t.align),
            None if relocatable => return out,
            None => match pt_tls(ctx.bytes) {
                Some(v) => v,
                None => return out,
            },
        };
        let symbols: Vec<(u64, u64, String)> = ctx
            .file
            .symbols()
            .filter(|s| s.kind() == SymbolKind::Tls && !s.is_undefined())
            .filter_map(|s| {
                // in an object a TLS symbol's value is relative to its section
                let value = match (&tls, s.section_index()) {
                    (Some(t), Some(sec)) => t.offset_of(sec)? + s.address(),
                    (Some(_), None) => return None,
                    (None, _) => s.address(),
                };
                Some((value, s.size(), s.name().ok()?.to_string()))
            })
            .collect();
        out.tls_layout = if aarch64 {
            TlsLayout::variant1(memsz, align, symbols)
        } else {
            TlsLayout::new(memsz, align, symbols)
        };
        out
    }
}
