use super::*;
use crate::loadimage::LoadImage;
use crate::translate::{AssemblyEmit, RegisterLookup, TranslateBase, VarnodeStorage};
use unlace_base::space::{ConstantSpace, OtherSpace, UniqueSpace, addrspace_flags, spacetype};
use unlace_base::xml::DocumentStorage;

/// Manager with const(0)/OTHER(1)/unique(2)/ram(3)/register(4) spaces,
/// mirroring the minimal C++ Architecture bootstrap order (the
/// translate.rs test fixture without the join space).
pub fn test_manager(big_end: bool) -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager.insert_space(Rc::new(OtherSpace::new(1))).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(2, 0, big_end)))
        .unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            big_end,
            8,
            1,
            3,
            addrspace_flags::hasphysical,
            1,
            1,
        )))
        .unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            big_end,
            4,
            1,
            4,
            0,
            0,
            0,
        )))
        .unwrap();
    manager.set_default_code_space(3).unwrap();
    manager
}

/// A load image exposing one contiguous byte region.  Bytes outside the
/// region zero-fill; a request entirely outside errs with DataUnavail
/// (the RawLoadImage-style contract MemoryImage relies on).
pub struct TestLoader {
    pub start: u64,
    pub bytes: Vec<u8>,
}

impl LoadImage for TestLoader {
    fn get_file_name(&self) -> &str {
        "testloader"
    }

    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        let off = addr.get_offset();
        let end = self.start + self.bytes.len() as u64;
        if off >= end || off + ptr.len() as u64 <= self.start {
            return Err(UnlaceError::data_unavail("TestLoader: range outside image"));
        }
        for (i, b) in ptr.iter_mut().enumerate() {
            let a = off + i as u64;
            *b = if a >= self.start && a < end {
                self.bytes[(a - self.start) as usize]
            } else {
                0
            };
        }
        Ok(())
    }

    fn get_arch_type(&self) -> Vec<u8> {
        b"test:LE:64:default".to_vec()
    }

    fn adjust_vma(&mut self, _adjust: i64) {}
}

/// One canned p-code op of a canned instruction.
pub struct TestOp {
    pub opc: OpCode,
    pub out: Option<VarnodeData>,
    pub ins: Vec<VarnodeData>,
}

/// A canned-program translator: a map from instruction offset (in the
/// default code space) to (length, p-code ops), plus a register file
/// r0..r7 at register:0,8,..,56 (8 bytes each).
pub struct TestTranslator {
    base: TranslateBase,
    register_space: Rc<AddrSpace>,
    program: BTreeMap<u64, (i32, Vec<TestOp>)>,
    userops: Vec<String>,
}

impl TestTranslator {
    pub fn new(
        manager: &AddrSpaceManager,
        program: BTreeMap<u64, (i32, Vec<TestOp>)>,
        userops: Vec<String>,
    ) -> Self {
        TestTranslator {
            base: TranslateBase::new(),
            register_space: Rc::clone(manager.get_space_by_name("register").unwrap()),
            program,
            userops,
        }
    }

    fn reg_storage(&self, index: u64) -> VarnodeStorage {
        VarnodeStorage {
            space: Some(Rc::clone(&self.register_space)),
            offset: index * 8,
            size: 8,
        }
    }
}

impl RegisterLookup for TestTranslator {
    fn get_register(&self, nm: &str) -> UnlaceResult<VarnodeStorage> {
        if let Some(num) = nm.strip_prefix('r') {
            if let Ok(index) = num.parse::<u64>() {
                if index < 8 {
                    return Ok(self.reg_storage(index));
                }
            }
        }
        Err(UnlaceError::sleigh(format!("Unknown register name: {nm}")))
    }

    fn get_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        self.get_exact_register_name(base, off, size)
    }

    fn get_exact_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        if Rc::ptr_eq(base, &self.register_space) && off.is_multiple_of(8) && off < 64 && size == 8
        {
            format!("r{}", off / 8)
        } else {
            String::new()
        }
    }
}

impl Translate for TestTranslator {
    fn translate_base(&self) -> &TranslateBase {
        &self.base
    }

    fn translate_base_mut(&mut self) -> &mut TranslateBase {
        &mut self.base
    }

    fn initialize(&mut self, _store: &mut DocumentStorage) -> UnlaceResult<()> {
        Ok(())
    }

    // mutable_key_type: see the trait declaration (translate.rs)
    #[allow(clippy::mutable_key_type)]
    fn get_all_registers(&self, reglist: &mut BTreeMap<VarnodeData, String>) {
        for i in 0..8u64 {
            let vs = self.reg_storage(i);
            reglist.insert(
                VarnodeData {
                    space: vs.space,
                    offset: vs.offset,
                    size: vs.size,
                },
                format!("r{i}"),
            );
        }
    }

    fn get_user_op_names(&self, res: &mut Vec<String>) {
        res.extend(self.userops.iter().cloned());
    }

    fn instruction_length(&self, baseaddr: &Address) -> UnlaceResult<i32> {
        match self.program.get(&baseaddr.get_offset()) {
            None => Err(UnlaceError::bad_data(format!(
                "TestTranslator: no instruction at 0x{:x}",
                baseaddr.get_offset()
            ))),
            Some((len, _)) => Ok(*len),
        }
    }

    fn one_instruction(&self, emit: &mut dyn PcodeEmit, baseaddr: &Address) -> UnlaceResult<i32> {
        match self.program.get(&baseaddr.get_offset()) {
            None => Err(UnlaceError::bad_data(format!(
                "TestTranslator: no instruction at 0x{:x}",
                baseaddr.get_offset()
            ))),
            Some((len, ops)) => {
                for op in ops {
                    emit.dump(baseaddr, op.opc, op.out.as_ref(), &op.ins);
                }
                Ok(*len)
            }
        }
    }

    fn print_assembly(
        &self,
        _emit: &mut dyn AssemblyEmit,
        _baseaddr: &Address,
    ) -> UnlaceResult<i32> {
        Err(UnlaceError::lowlevel("TestTranslator: no assembly"))
    }
}

// --- varnode construction helpers ---

/// A constant varnode.
pub fn cst(manager: &AddrSpaceManager, val: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(manager.get_constant_space().unwrap())),
        offset: val,
        size,
    }
}

/// Register rN (8 bytes at register:8*N).
pub fn reg(manager: &AddrSpaceManager, n: u64) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(manager.get_space_by_name("register").unwrap())),
        offset: n * 8,
        size: 8,
    }
}

/// A varnode in the unique space.
pub fn uvn(manager: &AddrSpaceManager, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(manager.get_space_by_name("unique").unwrap())),
        offset,
        size,
    }
}

/// A varnode in the ram space (e.g. a branch destination).
pub fn ram_vn(manager: &AddrSpaceManager, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(manager.get_space_by_name("ram").unwrap())),
        offset,
        size,
    }
}

/// The `<spaceid>` constant input of LOAD/STORE: constant space, offset
/// = the manager index of the referenced space (the port's encoding of
/// the C++ stuffed pointer; see `unlace_num::pcoderaw`), size 8.
pub fn spaceid_vn(manager: &AddrSpaceManager, name: &str) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(manager.get_constant_space().unwrap())),
        offset: manager.get_space_by_name(name).unwrap().get_index() as u64, // cast: index >= 0
        size: 8,
    }
}
