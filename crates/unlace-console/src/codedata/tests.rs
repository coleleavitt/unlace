use super::*;
use std::cell::RefCell;

use unlace_base::error::UnlaceResult;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, JoinSpace, OtherSpace, UniqueSpace, VarnodeStorage,
    addrspace_flags, spacetype,
};
use unlace_base::xml::DocumentStorage;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::translate::{AssemblyEmit, TranslateBase};

/// One synthetic instruction: an opcode, an optional jump/target offset (the
/// first input varnode's offset), and a byte length.
#[derive(Clone)]
struct Insn {
    opc: OpCode,
    operand: Option<u64>,
    len: i32,
}

/// A synthetic disassembler: each `ram` offset maps to one [`Insn`]; an
/// unmapped offset decodes as `BadData` (a failed decode).
struct SynthTranslate {
    base: TranslateBase,
    ram: Rc<AddrSpace>,
    prog: BTreeMap<u64, Insn>,
}

impl Translate for SynthTranslate {
    fn translate_base(&self) -> &TranslateBase {
        &self.base
    }
    fn translate_base_mut(&mut self) -> &mut TranslateBase {
        &mut self.base
    }
    fn initialize(&mut self, _store: &mut DocumentStorage) -> UnlaceResult<()> {
        Ok(())
    }
    #[allow(clippy::mutable_key_type)] // register map keys' Ord is index/offset/size
    fn get_all_registers(&self, _reglist: &mut BTreeMap<VarnodeData, String>) {}
    fn get_user_op_names(&self, _res: &mut Vec<String>) {}
    fn instruction_length(&self, baseaddr: &Address) -> UnlaceResult<i32> {
        match self.prog.get(&baseaddr.get_offset()) {
            Some(i) => Ok(i.len),
            None => Err(UnlaceError::bad_data("no instruction")),
        }
    }
    fn one_instruction(&self, emit: &mut dyn PcodeEmit, baseaddr: &Address) -> UnlaceResult<i32> {
        let insn = match self.prog.get(&baseaddr.get_offset()) {
            Some(i) => i.clone(),
            None => return Err(UnlaceError::bad_data("no instruction")),
        };
        let mk = |off: u64| VarnodeData {
            space: Some(Rc::clone(&self.ram)),
            offset: off,
            size: 4,
        };
        match insn.opc {
            OpCode::CPUI_LOAD => {
                // The engine inspects vars[1] for LOAD; emit a leading dummy
                // vars[0] as real SLEIGH does (the space-id constant).
                let v0 = mk(0);
                let v1 = mk(insn.operand.unwrap_or(0));
                emit.dump(baseaddr, insn.opc, None, &[v0, v1]);
            }
            OpCode::CPUI_RETURN => {
                emit.dump(baseaddr, insn.opc, None, &[mk(0)]);
            }
            _ => {
                let v0 = mk(insn.operand.unwrap_or(0));
                emit.dump(baseaddr, insn.opc, None, &[v0]);
            }
        }
        Ok(insn.len)
    }
    fn print_assembly(
        &self,
        _emit: &mut dyn AssemblyEmit,
        _baseaddr: &Address,
    ) -> UnlaceResult<i32> {
        Ok(4)
    }
}

impl unlace_base::space::RegisterLookup for SynthTranslate {
    fn get_register(&self, _nm: &str) -> UnlaceResult<VarnodeStorage> {
        Err(UnlaceError::sleigh("no registers"))
    }
    fn get_register_name(&self, _b: &Rc<AddrSpace>, _o: u64, _s: i32) -> String {
        String::new()
    }
    fn get_exact_register_name(&self, _b: &Rc<AddrSpace>, _o: u64, _s: i32) -> String {
        String::new()
    }
}

/// One section the [`SynthLoadImage`] reports.
#[derive(Clone)]
struct Section {
    address: Address,
    size: u64,
    flags: u32,
}

/// A synthetic load image yielding a fixed list of sections.
struct SynthLoadImage {
    sections: Vec<Section>,
    cursor: RefCell<usize>,
}

impl LoadImage for SynthLoadImage {
    fn get_file_name(&self) -> &str {
        "synth"
    }
    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> UnlaceResult<()> {
        Ok(())
    }
    fn get_arch_type(&self) -> Vec<u8> {
        b"synth".to_vec()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
    fn open_section_info(&self) {
        *self.cursor.borrow_mut() = 0;
    }
    fn close_section_info(&self) {}
    fn get_next_section(&self, record: &mut LoadImageSection) -> bool {
        let mut c = self.cursor.borrow_mut();
        let sec = &self.sections[*c];
        record.address = sec.address.clone();
        record.size = sec.size;
        record.flags = sec.flags;
        *c += 1;
        // C++ getNextSection returns true while more records remain after
        // filling this one.
        *c < self.sections.len()
    }
}

fn manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(OtherSpace::new(1))).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(2, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        3,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m.insert_space(Rc::new(JoinSpace::new(4, false))).unwrap();
    m.set_default_code_space(3).unwrap();
    m
}

fn synth(prog: BTreeMap<u64, Insn>, ram: Rc<AddrSpace>) -> SynthTranslate {
    SynthTranslate {
        base: TranslateBase::new(),
        ram,
        prog,
    }
}

fn fallthru(operand: Option<u64>) -> Insn {
    // COPY -> lastop COPY -> fallthru flag.
    Insn {
        opc: OpCode::CPUI_COPY,
        operand,
        len: 4,
    }
}

#[test]
fn addrlink_orders_on_a_then_b() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let a0 = Address::new(Rc::clone(&ram), 0x10);
    let a1 = Address::new(Rc::clone(&ram), 0x20);
    // single(a) has b = invalid, which sorts before any concrete b.
    assert!(AddrLink::single(a0.clone()) < AddrLink::pair(a0.clone(), a1.clone()));
    assert!(AddrLink::pair(a0.clone(), a1.clone()) < AddrLink::single(a1.clone()));
    assert_eq!(
        AddrLink::pair(a0.clone(), a1.clone()),
        AddrLink::pair(a0, a1)
    );
}

#[test]
fn disassembly_engine_flags_fallthru_jump_call_return() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut prog: BTreeMap<u64, Insn> = BTreeMap::new();
    prog.insert(0x100, fallthru(None));
    prog.insert(
        0x104,
        Insn {
            opc: OpCode::CPUI_BRANCH,
            operand: Some(0x200),
            len: 4,
        },
    );
    prog.insert(
        0x108,
        Insn {
            opc: OpCode::CPUI_CALL,
            operand: Some(0x300),
            len: 4,
        },
    );
    prog.insert(
        0x10c,
        Insn {
            opc: OpCode::CPUI_RETURN,
            operand: None,
            len: 4,
        },
    );
    let t = synth(prog, Rc::clone(&ram));

    let mut eng = DisassemblyEngine::default();
    eng.init();
    let mut res = DisassemblyResult::default();

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x100), &mut res);
    assert!(res.success);
    assert_eq!(
        res.flags & code_unit_flags::FALLTHRU,
        code_unit_flags::FALLTHRU
    );

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x104), &mut res);
    assert_eq!(res.flags & code_unit_flags::JUMP, code_unit_flags::JUMP);
    assert_eq!(res.flags & code_unit_flags::FALLTHRU, 0);
    assert_eq!(res.jumpaddress.get_offset(), 0x200);

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x108), &mut res);
    assert_eq!(res.flags & code_unit_flags::CALL, code_unit_flags::CALL);
    assert_eq!(
        res.flags & code_unit_flags::FALLTHRU,
        code_unit_flags::FALLTHRU
    );

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x10c), &mut res);
    assert_eq!(res.flags & code_unit_flags::FALLTHRU, 0);
    assert_eq!(res.flags & code_unit_flags::JUMP, 0);

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x500), &mut res);
    assert!(!res.success);
}

#[test]
fn disassembly_engine_target_hit_and_thunk() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut prog: BTreeMap<u64, Insn> = BTreeMap::new();
    prog.insert(
        0x10,
        Insn {
            opc: OpCode::CPUI_COPY,
            operand: Some(0x900),
            len: 4,
        },
    );
    prog.insert(
        0x20,
        Insn {
            opc: OpCode::CPUI_BRANCHIND,
            operand: Some(0x900),
            len: 4,
        },
    );
    let t = synth(prog, Rc::clone(&ram));

    let mut eng = DisassemblyEngine::default();
    eng.init();
    eng.add_target(&Address::new(Rc::clone(&ram), 0x900));
    let mut res = DisassemblyResult::default();

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x10), &mut res);
    assert_eq!(
        res.flags & code_unit_flags::TARGETHIT,
        code_unit_flags::TARGETHIT
    );
    assert_eq!(res.flags & code_unit_flags::THUNKHIT, 0);
    assert_eq!(res.targethit, 0x900);

    eng.disassemble(&t, &Address::new(Rc::clone(&ram), 0x20), &mut res);
    assert_eq!(
        res.flags & code_unit_flags::TARGETHIT,
        code_unit_flags::TARGETHIT
    );
    assert_eq!(
        res.flags & code_unit_flags::THUNKHIT,
        code_unit_flags::THUNKHIT
    );
}

/// A straight-line block of fall-through units ending in returns, with a
/// direct call, run end-to-end through `run_model`.
#[test]
fn run_model_straightline_with_call() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    // Program in [0x1000, 0x1018):
    //   0x1000 COPY    (fallthru)
    //   0x1004 CALL 0x1010 (call + fallthru + jump)
    //   0x1008 COPY    (fallthru)
    //   0x100c RETURN
    //   0x1010 COPY    (fallthru)   -- the call target
    //   0x1014 RETURN
    let mut prog: BTreeMap<u64, Insn> = BTreeMap::new();
    prog.insert(0x1000, fallthru(None));
    prog.insert(
        0x1004,
        Insn {
            opc: OpCode::CPUI_CALL,
            operand: Some(0x1010),
            len: 4,
        },
    );
    prog.insert(0x1008, fallthru(None));
    prog.insert(
        0x100c,
        Insn {
            opc: OpCode::CPUI_RETURN,
            operand: None,
            len: 4,
        },
    );
    prog.insert(0x1010, fallthru(None));
    prog.insert(
        0x1014,
        Insn {
            opc: OpCode::CPUI_RETURN,
            operand: None,
            len: 4,
        },
    );
    let t = synth(prog, Rc::clone(&ram));

    let mut loader = SynthLoadImage {
        sections: vec![Section {
            // The section is larger than the code (which ends at 0x1018) so
            // the section-end "notcode" boundary marker C++ places at the
            // max section end sits well past the real code; the final
            // RETURN-terminated block does not flow into it.
            address: Address::new(Rc::clone(&ram), 0x1000),
            size: 0x40,
            flags: section_flags::CODE,
        }],
        cursor: RefCell::new(0),
    };

    let mut cd = CodeDataAnalysis::default();
    cd.init(&t);
    cd.run_model(&t, &mut loader, &m).unwrap();

    // The CALL at 0x1004 produced a fromto crossref to 0x1010 with CALL.
    let call_link = AddrLink::pair(
        Address::new(Rc::clone(&ram), 0x1004),
        Address::new(Rc::clone(&ram), 0x1010),
    );
    assert_eq!(
        cd.fromto_crossref.get(&call_link).copied().unwrap_or(0) & code_unit_flags::CALL,
        code_unit_flags::CALL
    );

    // 0x1010 is hit by the call.
    let target = Address::new(Rc::clone(&ram), 0x1010);
    assert_ne!(
        cd.codeunit.get(&target).unwrap().flags & code_unit_flags::HIT_BY_CALL,
        0
    );

    // dumpFunctionStarts walks `tofrom_crossref` and prints `.a`, which for
    // a call cross-reference is the call *destination* (the function start),
    // i.e. 0x1010 — not the call site.  (C++ codedata.cc:639.)
    let mut starts = String::new();
    cd.dump_function_starts(&mut starts);
    assert_eq!(starts, "0x1010\n");

    // dumpCrossRefs walks `fromto_crossref` and prints `a -> b`, the call
    // site to its destination.
    let mut crossrefs = String::new();
    cd.dump_cross_refs(&mut crossrefs);
    assert_eq!(crossrefs, "0x1004 -> 0x1010 call\n");

    // The model-hit range cover spans the section: first=0x1000,
    // last=0x1040 (insertRange(0x1000, address+size=0x1040)).
    let mut hits = String::new();
    cd.dump_model_hits(&mut hits);
    assert_eq!(hits, "0x1000 0x1040\n");
}

#[test]
fn run_model_target_hits_sorted_and_dumped() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    // The function at 0x2000 references the tracked target 0xBEEF; a caller
    // at 0x2020 calls it, so `findFunctionStart(0x2004)` resolves the hit's
    // function to the call *destination* 0x2000 (codedata.cc:589).
    //   0x2000 COPY          (function body, fallthru)
    //   0x2004 COPY refs 0xBEEF (target hit inside the function)
    //   0x2008 RETURN
    //   0x2020 CALL 0x2000   (the caller)
    //   0x2024 RETURN
    let mut prog: BTreeMap<u64, Insn> = BTreeMap::new();
    prog.insert(
        0x2000,
        Insn {
            opc: OpCode::CPUI_COPY,
            operand: None,
            len: 4,
        },
    );
    prog.insert(
        0x2004,
        Insn {
            opc: OpCode::CPUI_COPY,
            operand: Some(0xBEEF),
            len: 4,
        },
    );
    prog.insert(
        0x2008,
        Insn {
            opc: OpCode::CPUI_RETURN,
            operand: None,
            len: 4,
        },
    );
    prog.insert(
        0x2020,
        Insn {
            opc: OpCode::CPUI_CALL,
            operand: Some(0x2000),
            len: 4,
        },
    );
    prog.insert(
        0x2024,
        Insn {
            opc: OpCode::CPUI_RETURN,
            operand: None,
            len: 4,
        },
    );
    let t = synth(prog, Rc::clone(&ram));

    let mut loader = SynthLoadImage {
        sections: vec![Section {
            // Larger than the code (ends at 0x2010) so the boundary marker
            // sits past it (see run_model_straightline_with_call).
            address: Address::new(Rc::clone(&ram), 0x2000),
            size: 0x40,
            flags: section_flags::CODE,
        }],
        cursor: RefCell::new(0),
    };

    let mut cd = CodeDataAnalysis::default();
    cd.init(&t);
    // Track 0xBEEF as a named target before running the model.
    cd.add_target("sys_target", &Address::new(Rc::clone(&ram), 0xBEEF), 1);
    cd.run_model(&t, &mut loader, &m).unwrap();

    // One target hit, attributed to the function at 0x2000.
    assert_eq!(cd.targethits.len(), 1);
    assert_eq!(cd.targethits[0].funcstart.get_offset(), 0x2000);
    assert_eq!(cd.targethits[0].codeaddr.get_offset(), 0x2004);
    assert_eq!(cd.targethits[0].thunkaddr.get_offset(), 0xBEEF);
    assert_eq!(cd.targethits[0].mask, 1);

    let mut out = String::new();
    cd.dump_target_hits(&mut out);
    assert_eq!(out, "2000 2004 sys_target\n");
}

#[test]
fn init_resets_all_state() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let t = synth(BTreeMap::new(), Rc::clone(&ram));

    let mut cd = CodeDataAnalysis::default();
    cd.codeunit
        .insert(Address::new(Rc::clone(&ram), 0x10), CodeUnit::default());
    cd.unlinkedstarts.push(Address::new(Rc::clone(&ram), 0x10));
    cd.add_target("x", &Address::new(Rc::clone(&ram), 0x40), 1);
    assert!(!cd.codeunit.is_empty());

    cd.init(&t);
    assert!(cd.codeunit.is_empty());
    assert!(cd.unlinkedstarts.is_empty());
    assert!(cd.targets.is_empty());
    assert!(cd.fromto_crossref.is_empty());
    assert_eq!(cd.alignment, t.get_alignment());
}

#[test]
fn target_command_reports_unfound_without_bfd() {
    let mut status = make_status();
    register_commands(&mut status);
    let mut s = CommandStream::new("printf");
    IfcCodeDataTarget.execute(&mut status, &mut s).unwrap();
    // The message goes to fileoptr (here folded into optr).
    assert_eq!(status.optr, "Unable to find reference to call printf\n");
}

#[test]
fn target_command_missing_name_is_parse_error() {
    let mut status = make_status();
    let mut s = CommandStream::new("   ");
    let e = IfcCodeDataTarget.execute(&mut status, &mut s).unwrap_err();
    assert!(e.is_parse());
    assert_eq!(e.explain, "Missing system call name");
}

#[test]
fn registration_creates_codedata_module_data() {
    let mut status = make_status();
    register_commands(&mut status);
    let cd = status
        .get_data_mut(CODEDATA_MODULE)
        .and_then(|d| d.as_any_mut().downcast_mut::<CodeDataAnalysis>())
        .expect("codedata module data present after registration");
    assert!(cd.codeunit.is_empty());
    // dump crossrefs on the (empty) module data emits nothing.
    let mut s = CommandStream::new("");
    IfcCodeDataDumpCrossRefs
        .execute(&mut status, &mut s)
        .unwrap();
    assert_eq!(status.optr, "");
}

#[test]
fn init_and_run_without_decompile_data_error() {
    let mut status = make_status();
    register_commands(&mut status);
    let mut s = CommandStream::new("");
    let e = IfcCodeDataInit.execute(&mut status, &mut s).unwrap_err();
    assert!(e.is_execution());
    let mut s2 = CommandStream::new("");
    let e2 = IfcCodeDataRun.execute(&mut status, &mut s2).unwrap_err();
    assert!(e2.is_execution());
}

// -- w9-con-codedata verifier adversarial tests ------------------------
//
// These target the hunt-list spots flagged most fragile for this item:
//   * the erase-while-iterating taint loop over `tofrom_crossref`
//     (`process_taint`) and the `pushTaintAddress` `key+size-1 < addr`
//     boundary;
//   * `findFunctionStart`'s `lower_bound` + reverse `--iter` walk;
//   * `dumpModelHits`' multi-line sequential grammar and the
//     `(int4)(off-endoff)` signed-narrowing cast;
//   * `findUnlinked`'s flag-mask classification.

/// Build a minimal `IfaceStatus` for the command tests (a detached source).
fn make_status() -> IfaceStatus {
    struct NoSource;
    impl crate::interface::LineSource for NoSource {
        fn read_line(&mut self, _s: &mut IfaceStatus) -> String {
            String::new()
        }
        fn push_input(&mut self, _lines: Vec<String>) {}
        fn pop_input(&mut self) {}
        fn current_stream_finished(&self) -> bool {
            true
        }
    }
    IfaceStatus::with_default_history("> ", Box::new(NoSource))
}
