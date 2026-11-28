//! The embedding API end to end on a raw x86-64 blob (needs the checkout's
//! `specs/`, as every workspace integration test does).

use unlace::{Decompiler, Error, Perms, Target};

/// `add` at 0x1000 (`lea eax, [rdi+rsi]; ret`), `mul` at 0x1010
/// (`mov eax, edi; imul eax, esi; ret`), `int3` padding.
fn blob() -> Vec<u8> {
    let mut bytes = vec![0xcc; 0x20];
    bytes[..4].copy_from_slice(&[0x8d, 0x04, 0x37, 0xc3]);
    bytes[0x10..0x16].copy_from_slice(&[0x89, 0xf8, 0x0f, 0xaf, 0xc6, 0xc3]);
    bytes
}

fn declared() -> Decompiler {
    Decompiler::from_raw(blob(), Target::X86_64, 0x1000, &[], &[0x1000, 0x1010])
        .unwrap()
        .with_function(0x1000, Some(0x1004), Some("add"))
        .with_function(0x1010, Some(0x1016), Some("mul"))
        .with_prototype(0x1000, "int add(int a, int b)")
}

#[test]
fn declared_bounds_name_and_shape_the_function() {
    let mut decompiler = declared();
    let function = decompiler.decompile(0x1000).unwrap();
    assert_eq!(function.name, "add");
    assert_eq!(function.address, 0x1000);
    assert!(function.c.contains("add"), "{}", function.c);
    assert!(function.c.contains("return"), "{}", function.c);
    let record = &function.json["functions"][0];
    assert_eq!(record["name"], "add");
    assert_eq!(record["address"], 0x1000);
    assert_eq!(record["code"].as_str(), Some(function.c.as_str()));
    assert!(function.json["error"].is_null());
}

#[test]
fn the_inventory_carries_the_declarations() {
    let mut decompiler = declared();
    let functions = decompiler.functions().unwrap();
    let add = functions.iter().find(|f| f.address == 0x1000).unwrap();
    assert_eq!(add.name, "add");
    assert_eq!(add.size, 4);
    assert!(add.executable);
    assert!(functions.iter().any(|f| f.name == "mul"));
}

#[test]
fn one_load_serves_every_function() {
    let mut decompiler = declared();
    let names: Vec<String> = decompiler
        .decompile_all()
        .map(|function| function.unwrap().name)
        .collect();
    assert!(names.iter().any(|i| i == "add"), "{names:?}");
    assert!(names.iter().any(|i| i == "mul"), "{names:?}");
    assert_eq!(decompiler.decompile_named("mul").unwrap().address, 0x1010);
}

#[test]
fn mapped_regions_load_without_the_gap_between_them() {
    let bytes = blob();
    let mut decompiler = Decompiler::from_memory(
        Target::X86_64,
        vec![
            (0x401000, bytes[..0x10].to_vec(), Perms::RX),
            (0x500000, bytes[0x10..].to_vec(), Perms::RX),
        ],
        &[0x401000, 0x500000],
    )
    .unwrap()
    .with_function(0x500000, Some(0x500006), Some("mul"));
    assert_eq!(decompiler.decompile(0x500000).unwrap().name, "mul");
    assert!(decompiler.decompile(0x401000).is_ok());
}

#[test]
fn a_function_declared_noreturn_still_decompiles() {
    let mut decompiler = declared().with_noreturn(0x1010);
    assert!(decompiler.decompile(0x1010).is_ok());
}

#[test]
fn bad_requests_are_errors() {
    let mut unknown = declared().with_option("no_such_option_anywhere", "on");
    assert!(matches!(
        unknown.decompile(0x1000),
        Err(Error::Request(_) | Error::Load(_))
    ));
    let mut bad_target = Decompiler::from_raw(
        blob(),
        Target::new("nonesuch:LE:64:default"),
        0x1000,
        &[],
        &[0x1000],
    )
    .unwrap();
    assert!(matches!(bad_target.functions(), Err(Error::Load(_))));
    let mut missing = declared();
    assert!(matches!(
        missing.decompile_named("no_function_has_this_name"),
        Err(Error::NotFound { .. })
    ));
}
