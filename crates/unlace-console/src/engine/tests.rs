use std::rc::Rc;

use unlace_base::space::{AddrSpace, spacetype};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use super::{FixedRefs, WholeOp, entry_name_rank, is_vtable_slot_name, replaces_slot_name};

/// The analysis commit replaces a slot-index name with a real one, and nothing else.
#[test]
fn a_real_name_replaces_only_a_slot_index_name() {
    assert!(replaces_slot_name("shapes::Circle::~Circle", "vfunc_0"));
    assert!(replaces_slot_name("Box::Box", "vfunc_1"));
    for (name, existing) in [
        ("Box::vfunc_2", "vfunc_1"),
        ("Box::area", "draw"),
        ("Box::sub_1234", "vfunc_1"),
        ("area", "vfunc_1"),
    ] {
        assert!(
            !replaces_slot_name(name, existing),
            "{name} must not replace {existing}"
        );
    }
}

/// A linked ELF reports its GOT import slots too; only a relocatable
/// object's are committed outside the passes that own a linked image's.
#[test]
fn only_a_relocatable_objects_import_slots_are_stashed() {
    let root = concat!(env!("CARGO_MANIFEST_DIR"), "/../..");
    let linked = format!("{root}/crates/unlace-analysis/tests/fixtures/elf_gotdata_x86_64.so");
    let object = format!("{root}/tests/fixtures/mips-weak-imports/page-64-be.o");
    for (path, relocatable) in [(linked, false), (object, true)] {
        let image = unlace_analysis::loadimage_object::ObjectLoadImage::open(&path).unwrap();
        assert!(!image.import_slot_ranges().is_empty(), "{path}");
        assert_eq!(!image.reloc_sections().is_empty(), relocatable, "{path}");
        let stash = super::object_import_slot_stash(
            !image.reloc_sections().is_empty(),
            image.import_slot_ranges(),
        );
        assert_eq!(stash.is_some(), relocatable, "{path}");
        if let Some((pass, output)) = stash {
            assert_eq!(pass, "peimportcall");
            assert_eq!(output.externref, image.import_slot_ranges());
        }
    }
}

/// A throwaway `(ram, constant)` space pair; `ram` stands in for the default
/// data space, exactly as `listing::xrefs`'s own tests build it.
fn spaces() -> (Rc<AddrSpace>, Rc<AddrSpace>) {
    (
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
    )
}

fn vn(space: &Rc<AddrSpace>, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(space)),
        offset,
        size,
    }
}

/// Harvest `ops` as one instruction of length 4 at `vma`.
fn harvest(ram: &Rc<AddrSpace>, vma: u64, ops: Vec<WholeOp>) -> FixedRefs {
    let mut refs = FixedRefs {
        ops,
        filled: 0,
        ..FixedRefs::default()
    };
    refs.filled = refs.ops.len();
    refs.harvest(Some(ram), vma + 4);
    refs
}

fn op(opcode: OpCode, out: Option<VarnodeData>, ins: Vec<VarnodeData>) -> WholeOp {
    WholeOp { opcode, out, ins }
}

/// (unlace, `linear-disassembly-silently-skips`) Where the straight line ends.
/// Two BRANCHes are not dead ends: one into the constant space, which is
/// p-code-relative and lands inside this same instruction, and one whose
/// destination IS the fall-through address — SLEIGH gives the x86 get-PC
/// idiom `E8 00000000` its own `goto rel32` constructor (`ia.sinc`), and a
/// listing that reads that as a dead end loses the thread at the first
/// instruction of most packer stubs.
#[test]
fn only_a_branch_that_leaves_the_instruction_ends_the_straight_line() {
    let (ram, cst) = spaces();
    let branch = |space: &Rc<AddrSpace>, target: u64| {
        op(OpCode::CPUI_BRANCH, None, vec![vn(space, target, 4)])
    };
    let plain = || op(OpCode::CPUI_COPY, None, vec![vn(&cst, 1, 4)]);
    let falls = |ops: Vec<WholeOp>| harvest(&ram, 0x1000, ops).falls_through;

    assert!(falls(vec![]), "no ops at all is a fall-through");
    assert!(falls(vec![plain()]));
    assert!(
        !falls(vec![branch(&ram, 0x2000)]),
        "an ordinary jmp ends it"
    );
    assert!(
        falls(vec![branch(&ram, 0x2000), plain()]),
        "the LAST op decides"
    );
    assert!(
        falls(vec![branch(&cst, 2)]),
        "p-code-relative, inside this instruction"
    );
    assert!(
        falls(vec![branch(&ram, 0x1004)]),
        "`goto` to its own fall-through"
    );
    assert!(!falls(vec![op(
        OpCode::CPUI_BRANCHIND,
        None,
        vec![vn(&ram, 0, 4)]
    )]));
    assert!(!falls(vec![op(
        OpCode::CPUI_RETURN,
        None,
        vec![vn(&ram, 0, 4)]
    )]));
    assert!(falls(vec![op(
        OpCode::CPUI_CALL,
        None,
        vec![vn(&ram, 0x2000, 4)]
    )]));
}

/// The literal-pool read, in the two shapes SLEIGH spells one in: a `LOAD`
/// off a constant address, and a direct memory varnode.
#[test]
fn a_fixed_address_read_is_reported_with_the_width_of_the_access() {
    let (ram, cst) = spaces();
    let load = op(
        OpCode::CPUI_LOAD,
        Some(vn(&cst, 0x100, 4)),
        vec![vn(&cst, 0x1b, 8), vn(&cst, 0x8458, 4)],
    );
    assert_eq!(harvest(&ram, 0x8440, vec![load]).reads, vec![(0x8458, 4)]);

    let direct = op(OpCode::CPUI_COPY, None, vec![vn(&ram, 0x404018, 4)]);
    assert_eq!(
        harvest(&ram, 0x1000, vec![direct]).reads,
        vec![(0x404018, 4)]
    );

    // A `LOAD`'s address varnode is pointer-sized whatever the access is, so
    // the width has to come from the output: `ldrh r0,[0x1003c]` lifts to a
    // 4-byte `ram` address and a 2-byte load, and calling that a word would
    // fold four bytes for a halfword read.
    let narrow = op(
        OpCode::CPUI_LOAD,
        Some(vn(&cst, 0x100, 2)),
        vec![vn(&cst, 0x1b, 8), vn(&ram, 0x1003c, 4)],
    );
    assert_eq!(
        harvest(&ram, 0x10034, vec![narrow]).reads,
        vec![(0x1003c, 2)]
    );
}

/// The `in0` of a `LOAD`/`STORE`/`CALLOTHER` is a space id, and of a flow op
/// a destination; neither is an address that was read.
#[test]
fn a_target_slot_is_never_a_read() {
    let (ram, cst) = spaces();
    let store = op(
        OpCode::CPUI_STORE,
        None,
        vec![vn(&cst, 0x1b, 8), vn(&ram, 0x404018, 4), vn(&cst, 7, 4)],
    );
    assert!(harvest(&ram, 0x1000, vec![store]).reads.is_empty());
    let call = op(OpCode::CPUI_CALL, None, vec![vn(&ram, 0x2000, 4)]);
    let got = harvest(&ram, 0x1000, vec![call]);
    assert!(got.reads.is_empty());
    assert_eq!(got.flow_targets, vec![0x2000]);
}

/// Every conditionally-executed ARM instruction lowers to a `CBRANCH` over
/// its own body, so its successor is named by a flow op whatever it is.
/// Counted, that marks the word after each predicated instruction as a
/// branch label — and a literal pool is a run of them, so `andeq` at
/// 0x1000c would veto the pool word at 0x10010.
#[test]
fn an_instructions_own_fall_through_is_not_a_branch_target() {
    let (ram, _cst) = spaces();
    let skip = op(OpCode::CPUI_CBRANCH, None, vec![vn(&ram, 0x10010, 4)]);
    assert!(harvest(&ram, 0x1000c, vec![skip]).flow_targets.is_empty());
    // A real branch to anywhere else is kept.
    let real = op(OpCode::CPUI_CBRANCH, None, vec![vn(&ram, 0x83d0, 4)]);
    assert_eq!(
        harvest(&ram, 0x1000c, vec![real]).flow_targets,
        vec![0x83d0]
    );
}

/// Which of an entry's names `function_entries_canonical` reports.
fn wins<'a>(a: &'a str, b: &'a str) -> &'a str {
    if entry_name_rank(a)
        .cmp(&entry_name_rank(b))
        .then_with(|| a.cmp(b))
        .is_le()
    {
        a
    } else {
        b
    }
}

/// (unlace, `pe-function-inventory-labels`) A vtable-slot-index name is structural:
/// a real method name at the same address outranks it however long that name is.
/// Before, only the length tie-break separated them, so which name a PE inventory
/// reported turned on a one-character accident — `std::basic_streambuf::showmanyc`
/// lost to `std::basic_stringbuf::vfunc_5` while the shorter `uflow` next door kept
/// its own name.
#[test]
fn a_real_method_name_outranks_its_vtable_slot_index() {
    for (real, slot) in [
        (
            "std::basic_streambuf::showmanyc",
            "std::basic_stringbuf::vfunc_5",
        ),
        (
            "std::basic_streambuf::uflow",
            "std::basic_stringbuf::vfunc_7",
        ),
        ("Shape::perimeter", "Circle::vfunc_2"),
        ("Widget::render", "Widget::vfunc_for_Drawable_2"),
        // The real name being much the longer of the two is the whole point.
        ("Widget::an_extremely_long_method_name", "Widget::vfunc_0"),
    ] {
        assert_eq!(wins(real, slot), real, "{real} must outrank {slot}");
    }
}

/// The slot name still beats an engine placeholder — it is structural, not useless.
#[test]
fn a_vtable_slot_index_still_outranks_a_placeholder() {
    for placeholder in ["sub_140002c2c", "FUN_140002c2c", "func_140002c2c"] {
        assert_eq!(
            wins("std::bad_alloc::vfunc_0", placeholder),
            "std::bad_alloc::vfunc_0"
        );
    }
}

/// Only `<Class>::vfunc[_for_<Base>]_<digits>` is a slot name. The unindexed labels
/// are DATA symbols, and a suffix without an index names a base subobject, not a slot.
#[test]
fn only_an_indexed_slot_name_is_structural() {
    assert!(is_vtable_slot_name("Box::vfunc_0"));
    assert!(is_vtable_slot_name("std::basic_stringbuf::vfunc_11"));
    assert!(is_vtable_slot_name("shapes::Widget::vfunc_for_Drawable_2"));
    assert!(is_vtable_slot_name("Widget::vfunc_at_20_0"));
    for not_a_slot in [
        "Box::vftable",
        "Box::vtable",
        "Box::vtable_3",
        "Widget::vfunc_for_Drawable",
        "Widget::vfunc_for_Drawable_",
        "Box::vfunc_",
        "Box::vfunc_1a",
        "vfunc_0",
        "::vfunc_0",
        "vtable_3",
    ] {
        assert!(
            !is_vtable_slot_name(not_a_slot),
            "{not_a_slot} is not a slot name"
        );
    }
}
