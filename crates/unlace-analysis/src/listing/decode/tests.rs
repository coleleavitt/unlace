use std::cell::Cell;
use std::path::PathBuf;
use std::rc::Rc;

use unlace_base::error::UnlaceError;
use unlace_base::space::{RegisterLookup, VarnodeStorage};
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;
use unlace_sleigh::translate::TranslateBase;

use super::*;

struct MemImage {
    base: u64,
    bytes: Vec<u8>,
    reads: Rc<Cell<usize>>,
    fail: bool,
}

impl LoadImage for MemImage {
    fn get_file_name(&self) -> &str {
        "callback-decode"
    }

    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        self.reads.set(self.reads.get() + 1);
        if self.fail {
            return Err(UnlaceError::data_unavail("counted test image failure"));
        }
        for (i, byte) in ptr.iter_mut().enumerate() {
            let vma = addr.get_offset().wrapping_add(i as u64);
            *byte = vma
                .checked_sub(self.base)
                .and_then(|offset| self.bytes.get(offset as usize).copied())
                .unwrap_or(0);
        }
        Ok(())
    }

    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }

    fn adjust_vma(&mut self, _adjust: i64) {}
}

struct DummyImage;

impl LoadImage for DummyImage {
    fn get_file_name(&self) -> &str {
        "dummy"
    }

    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> UnlaceResult<()> {
        Err(UnlaceError::data_unavail("dummy"))
    }

    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }

    fn adjust_vma(&mut self, _adjust: i64) {}
}

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap()
}

fn x86_with(bytes: &[u8], fail: bool) -> (Sleigh, Rc<AddrSpace>, Rc<Cell<usize>>) {
    let path = repo_root().join("specs/Ghidra/Processors/x86/data/languages/x86.sla");
    let sla = unlace_slacomp::slacache::read_sla(&path)
        .unwrap_or_else(|error| panic!("required compiled spec {}: {error}", path.display()));
    let mut sleigh = Sleigh::new(Box::new(DummyImage), Box::new(ContextInternal::new()));
    sleigh
        .initialize_from_sla(&sla)
        .expect("initialize x86.sla");
    sleigh.set_context_default("addrsize", 1);
    sleigh.set_context_default("opsize", 1);
    let reads = Rc::new(Cell::new(0));
    sleigh.set_loader(Box::new(MemImage {
        base: 0x1000,
        bytes: bytes.to_vec(),
        reads: Rc::clone(&reads),
        fail,
    }));
    let ram = Rc::clone(
        sleigh
            .base()
            .manager()
            .get_space_by_name("ram")
            .expect("ram space"),
    );
    (sleigh, ram, reads)
}

struct AssemblyFailure<'a> {
    inner: &'a Sleigh,
    base: TranslateBase,
    calls: Rc<Cell<usize>>,
}

impl RegisterLookup for AssemblyFailure<'_> {
    fn get_register(&self, name: &str) -> UnlaceResult<VarnodeStorage> {
        self.inner.get_register(name)
    }

    fn get_register_name(&self, base: &Rc<AddrSpace>, offset: u64, size: i32) -> String {
        self.inner.get_register_name(base, offset, size)
    }

    fn get_exact_register_name(&self, base: &Rc<AddrSpace>, offset: u64, size: i32) -> String {
        self.inner.get_exact_register_name(base, offset, size)
    }
}

impl Translate for AssemblyFailure<'_> {
    fn translate_base(&self) -> &TranslateBase {
        &self.base
    }

    fn translate_base_mut(&mut self) -> &mut TranslateBase {
        &mut self.base
    }

    fn initialize(&mut self, _store: &mut unlace_base::xml::DocumentStorage) -> UnlaceResult<()> {
        Ok(())
    }

    fn get_all_registers(&self, registers: &mut std::collections::BTreeMap<VarnodeData, String>) {
        self.inner.get_all_registers(registers);
    }

    fn get_user_op_names(&self, names: &mut Vec<String>) {
        self.inner.get_user_op_names(names);
    }

    fn instruction_length(&self, addr: &Address) -> UnlaceResult<i32> {
        self.inner.instruction_length(addr)
    }

    fn one_instruction(&self, emit: &mut dyn PcodeEmit, addr: &Address) -> UnlaceResult<i32> {
        self.inner.one_instruction(emit, addr)
    }

    fn print_assembly(&self, _emit: &mut dyn AssemblyEmit, _addr: &Address) -> UnlaceResult<i32> {
        self.calls.set(self.calls.get() + 1);
        Err(UnlaceError::lowlevel("intentional test assembly failure"))
    }
}

#[test]
fn decoded_x86_push_immediate_harvests_the_stored_value() {
    // `push 0x2000`: SUB ESP followed by STORE(space, ESP, 0x2000).
    let (sleigh, ram, _) = x86_with(&[0x68, 0x00, 0x20, 0x00, 0x00], false);
    let decoded = decode_one(&sleigh, 0x1000, &ram, true, true).unwrap();
    assert_eq!(decoded.mnemonic, "PUSH");
    assert_eq!(decoded.stored_scalar_values, vec![0x2000]);

    let mut pool = super::super::model::MnemonicPool::default();
    let listed = decode_one_listing(
        &sleigh,
        0x1000,
        &ram,
        true,
        true,
        &mut |text| pool.intern(text),
        None,
    )
    .unwrap();
    assert_eq!(listed.len, decoded.len);
    assert_eq!(listed.mnemonic.as_str(), decoded.mnemonic.as_str());
    assert_eq!(listed.operands, decoded.operands);
    assert_eq!(listed.ops.len(), decoded.ops.len());
    assert_eq!(listed.stored_scalar_values, decoded.stored_scalar_values);
}

#[test]
fn decoded_x86_push_absolute_memory_does_not_harvest_the_load_address() {
    // `push dword ptr [0x2000]`: LOAD(space, 0x2000), then STORE the loaded
    // temporary. The memory address is not the value pushed and must not be
    // proposed as a callback.
    let (sleigh, ram, _) = x86_with(&[0xff, 0x35, 0x00, 0x20, 0x00, 0x00], false);
    let decoded = decode_one(&sleigh, 0x1000, &ram, true, true).unwrap();
    assert_eq!(decoded.mnemonic, "PUSH");
    assert!(decoded.stored_scalar_values.is_empty());
}

#[test]
fn combined_listing_capture_uses_one_read_and_skips_assembly_after_lift_failure() {
    let (sleigh, ram, reads) = x86_with(&[0x68, 0x00, 0x20, 0x00, 0x00], false);
    let decoded = decode_one(&sleigh, 0x1000, &ram, true, true).unwrap();
    assert_eq!(decoded.mnemonic, "PUSH");
    assert_eq!(
        reads.get(),
        1,
        "SLEIGH should share the p-code parse with text rendering"
    );

    let (sleigh, ram, reads) = x86_with(&[0x68, 0x00, 0x20, 0x00, 0x00], false);
    let decoded = decode_one(&sleigh, 0x1000, &ram, false, true).unwrap();
    assert!(decoded.mnemonic.is_empty());
    assert!(decoded.operands.is_empty());
    assert_eq!(
        reads.get(),
        1,
        "assembly-disabled capture should only lift once"
    );

    let (sleigh, ram, reads) = x86_with(&[0x68, 0x00, 0x20, 0x00, 0x00], true);
    assert!(decode_one(&sleigh, 0x1000, &ram, true, true).is_err());
    assert_eq!(
        reads.get(),
        1,
        "a failed lift must not attempt assembly capture"
    );
}

#[test]
fn generic_combined_fallback_ignores_assembly_failure() {
    let (sleigh, ram, reads) = x86_with(&[0x90], false);
    let calls = Rc::new(Cell::new(0));
    let translate = AssemblyFailure {
        inner: &sleigh,
        base: TranslateBase::default(),
        calls: Rc::clone(&calls),
    };
    let decoded = decode_one(&translate, 0x1000, &ram, true, false)
        .expect("assembly failure is best-effort after a successful p-code lift");
    assert!(decoded.len > 0);
    assert!(decoded.mnemonic.is_empty());
    assert!(decoded.operands.is_empty());
    assert_eq!(calls.get(), 1);
    assert_eq!(
        reads.get(),
        1,
        "the generic fallback must not reparse after failed rendering"
    );
}
