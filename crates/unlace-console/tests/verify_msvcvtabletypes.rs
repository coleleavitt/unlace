//! (kuna `vtabletypes`) The typed MSVC vftables on a real clang-cl-built PE.
//!
//! `msvc_classes_{x64,x86}.exe` (source `msvc_classes.cpp`, recipe in
//! `tests/fixtures/README.md`) carry the MSVC RTTI of Shape (never
//! instantiated), Square and Circle over it, Named (never instantiated), and
//! Tagged over Square and, at a nonzero offset, Named. With `vtabletypes` on
//! (the default), each class is a structure whose first field is
//! `C_vtbl *__vftable`, Tagged embeds its Named subobject, and a virtual
//! member's `this` is hinted as its class's pointer; off, none of it exists.
//! `Circle::Circle`, which the image calls and which stores Circle's vftable
//! through `this` and returns it, is named and its `this` typed.
//!
//! `msvc_vbases_{x64,x86}.exe` (source `msvc_vbases.cpp`) keep Both's vftable
//! for its virtual base Base at an offset only the vbtable states; that
//! vftable's methods take a `Base *`.

use std::path::PathBuf;
use std::rc::Rc;

use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};
use unlace_decomp::dtype::Datatype;

/// `Square::area` (`return side * side * scale`), slot 0 of Square's vftable.
const SQUARE_AREA_X64: u64 = 0x1_4000_1110;
const SQUARE_AREA_X86: u64 = 0x0040_10e0;

/// `Circle::Circle(int)`, out of line and called by the entry.
const CIRCLE_CTOR_X64: u64 = 0x1_4000_10f0;
const CIRCLE_CTOR_X86: u64 = 0x0040_10c0;

/// The two methods in Both's vftable for its virtual base Base.
const BASE_METHODS_X64: [u64; 2] = [0x1_4000_1090, 0x1_4000_10a0];
const BASE_METHODS_X86: [u64; 2] = [0x0040_1070, 0x0040_1080];

fn fixture(name: &str) -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-analysis/tests/fixtures")
        .join(name)
}

fn bootstrap(name: &str, on: bool) -> ConsoleProgram {
    let bin = fixture(name);
    assert!(bin.exists(), "missing fixture {bin:?}");
    let specs = PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../specs");
    let spec_roots = vec![specs.to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.arch_mut()
        .set_kuna_option("vtabletypes", if on { "on" } else { "off" })
        .expect("vtabletypes flips");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    prog
}

fn find_type(prog: &ConsoleProgram, name: &str) -> Option<Rc<Datatype>> {
    prog.arch()
        .types()
        .find_by_name(name)
        .ok()
        .flatten()
        .filter(|t| !t.is_incomplete())
}

fn field(t: &Datatype, name: &str) -> Option<(i32, Rc<Datatype>)> {
    (0..256)
        .map_while(|i| t.get_field(i))
        .find(|f| f.name == name)
        .map(|f| (f.offset, Rc::clone(&f.field_type)))
}

fn this_class(prog: &ConsoleProgram, func: u64) -> Option<String> {
    let hints = prog
        .arch()
        .kuna_tables
        .get::<unlace_decomp::inputhints::ThisHints>();
    let (_, list) = hints.0.iter().find(|(a, _)| a.get_offset() == func)?;
    let hint = list.first()?;
    assert_eq!(hint.name, "this");
    Some(hint.ct.as_ref()?.get_ptr_to()?.get_name().to_string())
}

fn assert_typed(prog: &ConsoleProgram, square_area: u64, named_at: i32) {
    for class in ["Shape", "Square", "Circle", "Named", "Tagged"] {
        let st = find_type(prog, class).unwrap_or_else(|| panic!("{class} is typed"));
        let (off, vptr) = field(&st, "__vftable").unwrap_or_else(|| panic!("{class}::__vftable"));
        assert_eq!(off, 0, "{class}'s vftable pointer is its first word");
        assert_eq!(
            vptr.get_ptr_to().map(|t| t.get_name().to_string()),
            Some(format!("{class}_vtbl"))
        );
    }
    let shape_vtbl = find_type(prog, "Shape_vtbl").expect("Shape_vtbl");
    assert!(field(&shape_vtbl, "vfn_0").is_some() || field(&shape_vtbl, "area").is_some());
    let tagged = find_type(prog, "Tagged").unwrap();
    assert_eq!(field(&tagged, "Named").map(|(o, _)| o), Some(named_at));
    assert_eq!(this_class(prog, square_area).as_deref(), Some("Square"));
}

fn assert_constructor(prog: &ConsoleProgram, ctor: u64) {
    assert_eq!(prog.function_named_at(ctor).as_deref(), Some("Circle"));
    assert!(prog.has_symbol_named("Circle::Circle"));
    assert_eq!(this_class(prog, ctor).as_deref(), Some("Circle"));
}

fn assert_virtual_base(prog: &ConsoleProgram, methods: [u64; 2]) {
    let base = find_type(prog, "Base").expect("the virtual base is typed");
    assert!(field(&base, "__vftable").is_some());
    let both = find_type(prog, "Both").expect("Both is typed");
    assert!(
        field(&both, "Base").is_none(),
        "a virtual base is not embedded"
    );
    for m in methods {
        assert_eq!(this_class(prog, m).as_deref(), Some("Base"), "{m:#x}");
    }
}

fn assert_untyped(prog: &ConsoleProgram, square_area: u64) {
    assert!(find_type(prog, "Square_vtbl").is_none());
    assert!(this_class(prog, square_area).is_none());
    assert!(!prog.has_symbol_named("Circle::Circle"));
}

#[test]
fn x64_classes_are_typed_from_msvc_rtti() {
    assert_typed(
        &bootstrap("msvc_classes_x64.exe", true),
        SQUARE_AREA_X64,
        0x18,
    );
}

#[test]
fn x86_classes_are_typed_from_msvc_rtti() {
    assert_typed(
        &bootstrap("msvc_classes_x86.exe", true),
        SQUARE_AREA_X86,
        0xc,
    );
}

#[test]
fn x64_constructor_is_named_and_typed() {
    assert_constructor(&bootstrap("msvc_classes_x64.exe", true), CIRCLE_CTOR_X64);
}

#[test]
fn x86_constructor_is_named_and_typed() {
    assert_constructor(&bootstrap("msvc_classes_x86.exe", true), CIRCLE_CTOR_X86);
}

#[test]
fn x64_virtual_base_vftable_is_typed() {
    assert_virtual_base(&bootstrap("msvc_vbases_x64.exe", true), BASE_METHODS_X64);
}

#[test]
fn x86_virtual_base_vftable_is_typed() {
    assert_virtual_base(&bootstrap("msvc_vbases_x86.exe", true), BASE_METHODS_X86);
}

#[test]
fn x64_classes_are_untyped_with_the_option_off() {
    assert_untyped(&bootstrap("msvc_classes_x64.exe", false), SQUARE_AREA_X64);
}
