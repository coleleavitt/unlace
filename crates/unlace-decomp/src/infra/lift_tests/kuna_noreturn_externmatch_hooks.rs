//! Tests moved out of `kuna_noreturn_externmatch` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `kuna_noreturn_externmatch` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::architecture::Architecture;
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::marshal::ElementId;
    pub(super) use unlace_base::space::spacetype;
    pub(super) use unlace_num::opcodes::OpCode;
    pub(super) use unlace_num::pcoderaw::VarnodeData;
    pub(super) use unlace_sleigh::translate::PcodeEmit;
}
use crate::kuna_noreturn_externmatch::*;
use module_scope::*;
use std::rc::Rc;
use std::sync::Arc;
use unlace_base::error::KunaResult;
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::{ImageBytes, LoadImage};
use unlace_sleigh::sleigh::Sleigh;
use unlace_sleigh::translate::Translate;

/// Bytes mapped at 0x1000, read as the loaders do: zero-filled past the end.
#[derive(Debug)]
struct Mapped(Vec<u8>);

impl ImageBytes for Mapped {
    fn fill_span(&self, dst: &mut [u8], start: u64) -> usize {
        if !self.mapped_covers(start, start + 1) {
            return dst.len();
        }
        for (at, byte) in (start..).zip(dst.iter_mut()) {
            *byte = self.0.get((at - 0x1000) as usize).copied().unwrap_or(0);
        }
        0
    }

    fn mapped_covers(&self, lo: u64, hi: u64) -> bool {
        lo >= 0x1000 && hi <= 0x1000 + self.0.len() as u64
    }
}

struct StubImage(Arc<Mapped>);

impl LoadImage for StubImage {
    fn get_file_name(&self) -> &str {
        "stub"
    }
    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> KunaResult<()> {
        self.0.fill_span(ptr, addr.get_offset());
        Ok(())
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
    fn shared_bytes(&self) -> Option<Arc<dyn ImageBytes>> {
        Some(Arc::clone(&self.0) as Arc<dyn ImageBytes>)
    }
}

/// An x86-64 architecture over `bytes` mapped at 0x1000, with function symbols
/// of the stated `(address, size)`.
fn x86_64(bytes: &[u8], sizes: Vec<(u64, u64)>) -> Architecture {
    let sla = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../../specs/Ghidra/Processors/x86/data/languages/x86-64.sla");
    let sla = unlace_slacomp::slacache::read_sla(&sla).expect("x86-64.sla is built");
    let image = StubImage(Arc::new(Mapped(bytes.to_vec())));
    let mut sleigh = Sleigh::new(Box::new(image), Box::new(ContextInternal::new()));
    sleigh
        .initialize_from_sla(&sla)
        .expect("x86-64.sla initializes");
    for (name, val) in [("addrsize", 2), ("opsize", 1), ("longMode", 1)] {
        sleigh.set_context_default(name, val);
    }
    let mut arch = Architecture::new("x86:LE:64:default", sleigh);
    arch.func_sizes = Rc::new(sizes);
    arch
}

fn ram(arch: &Architecture, offset: u64) -> Address {
    Address::new(
        Rc::clone(
            arch.manage()
                .get_default_code_space()
                .expect("default code space"),
        ),
        offset,
    )
}

/// [`is_stub_body`] for an x86-64 function of `size` bytes at 0x1000 over `bytes`.
fn stub_body(bytes: &[u8], size: u64) -> bool {
    let arch = x86_64(bytes, vec![(0x1000, size)]);
    is_stub_body(&arch, &ram(&arch, 0x1000))
}

#[test]
fn a_stub_body_is_mapped_in_full() {
    assert!(stub_body(&[0xc2, 0, 0], 3), "a mapped ret imm16 is a stub");
    assert!(
        !stub_body(&[0xc2], 3),
        "a ret imm16 past the mapping is not"
    );
}

#[test]
fn only_the_last_instruction_of_a_sized_function_ends_it() {
    let arch = x86_64(&[], vec![(0x1000, 0x14), (0x1020, 0x10)]);
    let ends = |call: u64, fallthrough: u64| {
        call_ends_function(&arch, &ram(&arch, call), &ram(&arch, fallthrough))
    };
    assert!(
        ends(0x100f, 0x1014),
        "a call whose fall-through is the symbol end"
    );
    assert!(
        !ends(0x1004, 0x1009),
        "a call with code after it inside the symbol"
    );
    assert!(!ends(0x1016, 0x101b), "a call in the gap between symbols");
    assert!(!ends(0x0ff0, 0x0ff5), "a call before every symbol");
    assert!(ends(0x102b, 0x1030), "the second symbol's last call");
}
