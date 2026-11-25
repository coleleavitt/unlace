use super::synthetic::{I32, I64, ModuleBuilder, i32_const, indexed};
use super::*;

#[test]
fn leb128_reads_stop_at_the_integer_width() {
    let bytes = [0xe5, 0x8e, 0x26, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01];
    let mut reader = Reader::new(&bytes, 0..bytes.len());
    assert_eq!(reader.u32(), Ok(624485));
    assert_eq!(reader.s32(), Ok(-1));
    assert!(reader.u32().is_err(), "six bytes is not a u32");
}

#[test]
fn a_module_reads_back_what_the_builder_stated() {
    let mut builder = ModuleBuilder::default();
    builder
        .import("ext", &[I32], &[])
        .function("first", &[I32, I64], &[I32], &[(2, I64)], &indexed(0x20, 0))
        .memory(2)
        .global("__stack_pointer", I32, true, 0x1_0000)
        .global("limit", I32, false, 64)
        .table(&[1], true)
        .data(16, b"unlace");
    let bytes = builder.build();
    let module = Module::parse(&bytes).unwrap();
    assert_eq!(module.imported_functions(), 1);
    assert_eq!(module.functions.len(), 1);
    let ty = module
        .func_type(module.function_type_index(1).unwrap())
        .unwrap();
    assert_eq!(
        (ty.params.as_slice(), ty.results.as_slice()),
        (&[ValType::I32, ValType::I64][..], &[ValType::I32][..])
    );
    assert_eq!(module.bodies[0].locals, vec![(2, ValType::I64)]);
    assert_eq!(&bytes[module.bodies[0].code.clone()], &[0x20, 0, 0x0b]);
    assert_eq!(module.memory().unwrap().min, 2);
    assert_eq!(module.stack_pointer(), Some(0));
    assert_eq!(module.globals[1].init, ConstExpr::I32(64));
    assert_eq!(module.elements[0].funcs, vec![Some(1)]);
    assert_eq!(&bytes[module.data[0].bytes.clone()], b"unlace");
    assert_eq!(module.exports.last().unwrap().kind, ExportKind::Table);
}

#[test]
fn an_object_files_linking_symbols_name_its_functions_and_globals() {
    use super::synthetic::uleb;
    let name = |s: &str| [uleb(s.len() as u64), s.as_bytes().to_vec()].concat();
    let entries = [
        [vec![0], uleb(0x10), uleb(0)].concat(),
        [
            vec![1],
            uleb(0),
            name("g_table"),
            uleb(0),
            uleb(0),
            uleb(52),
        ]
        .concat(),
        [vec![0], uleb(0), uleb(3), name("sum_array")].concat(),
        [vec![2], uleb(0), uleb(1), name("g_sink")].concat(),
        [vec![3], uleb(0), uleb(4)].concat(),
        [vec![0], uleb(0x40 | 0x10), uleb(1), name("memset")].concat(),
    ];
    let symbols = [uleb(entries.len() as u64), entries.concat()].concat();
    let table = [vec![8], uleb(symbols.len() as u64), symbols].concat();
    let payload = [name("linking"), uleb(2), table].concat();
    let mut bytes = WASM_MAGIC.to_vec();
    bytes.extend([vec![0], uleb(payload.len() as u64), payload].concat());
    let module = Module::parse(&bytes).unwrap();
    assert_eq!(
        module.function_names.get(&3).map(String::as_str),
        Some("sum_array")
    );
    assert_eq!(
        module.function_names.get(&1).map(String::as_str),
        Some("memset")
    );
    assert_eq!(
        module.function_names.get(&0),
        None,
        "undefined, no explicit name"
    );
    assert_eq!(
        module.global_names.get(&1).map(String::as_str),
        Some("g_sink")
    );
}

#[test]
fn an_immutable_global_named_stack_pointer_is_not_one() {
    let mut builder = ModuleBuilder::default();
    builder.global("__stack_pointer", I32, false, 0);
    assert_eq!(
        Module::parse(&builder.build()).unwrap().stack_pointer(),
        None
    );
}

#[test]
fn a_count_larger_than_its_section_is_refused_before_allocation() {
    let mut bytes = WASM_MAGIC.to_vec();
    bytes.extend([3, 5, 0xff, 0xff, 0xff, 0xff, 0x0f]);
    assert_eq!(
        Module::parse(&bytes).unwrap_err(),
        "vector length exceeds its section"
    );
}

#[test]
fn every_truncation_of_a_module_is_an_error_or_a_module() {
    let mut builder = ModuleBuilder::default();
    builder
        .function("f", &[I32], &[I32], &[], &i32_const(7))
        .memory(1)
        .data(0, b"abc");
    let bytes = builder.build();
    for len in 0..bytes.len() {
        let _ = Module::parse(&bytes[..len]);
    }
}
