use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

struct Function {
    name: &'static str,
    address: Option<u32>,
    convention: u8,
    prototyped: bool,
    formals: usize,
    missing_type: bool,
    locations: bool,
}

impl Function {
    fn declaration(name: &'static str) -> Self {
        Self {
            name,
            address: None,
            convention: 1,
            prototyped: true,
            formals: 1,
            missing_type: false,
            locations: false,
        }
    }
}

fn uleb(bytes: &mut Vec<u8>, mut value: u64) {
    loop {
        let part = value as u8 & 0x7f;
        value >>= 7;
        bytes.push(part | if value == 0 { 0 } else { 0x80 });
        if value == 0 {
            return;
        }
    }
}

fn abbreviation(
    bytes: &mut Vec<u8>,
    code: u64,
    tag: gimli::DwTag,
    children: bool,
    attributes: &[(gimli::DwAt, gimli::DwForm)],
) {
    uleb(bytes, code);
    uleb(bytes, tag.0 as u64);
    bytes.push(u8::from(children));
    for (name, form) in attributes {
        uleb(bytes, name.0 as u64);
        uleb(bytes, form.0 as u64);
    }
    bytes.extend([0, 0]);
}

fn fixture(
    functions: &[Function],
    padding: usize,
    representation: Option<gimli::DwAt>,
    encoding: gimli::DwAte,
    size: u8,
) -> (Vec<u8>, Vec<u8>) {
    let mut abbreviations = Vec::new();
    abbreviation(
        &mut abbreviations,
        1,
        gimli::DW_TAG_compile_unit,
        true,
        &[(gimli::DW_AT_language, gimli::DW_FORM_data2)],
    );
    let mut scalar_attributes = vec![
        (gimli::DW_AT_name, gimli::DW_FORM_string),
        (gimli::DW_AT_byte_size, gimli::DW_FORM_data1),
        (gimli::DW_AT_encoding, gimli::DW_FORM_data1),
    ];
    if let Some(attribute) = representation {
        scalar_attributes.push((attribute, gimli::DW_FORM_data1));
    }
    abbreviation(
        &mut abbreviations,
        2,
        gimli::DW_TAG_base_type,
        false,
        &scalar_attributes,
    );
    let mut signature = vec![
        (gimli::DW_AT_name, gimli::DW_FORM_string),
        (gimli::DW_AT_type, gimli::DW_FORM_ref4),
        (gimli::DW_AT_declaration, gimli::DW_FORM_flag),
        (gimli::DW_AT_prototyped, gimli::DW_FORM_flag),
        (gimli::DW_AT_calling_convention, gimli::DW_FORM_data1),
    ];
    abbreviation(
        &mut abbreviations,
        3,
        gimli::DW_TAG_subprogram,
        true,
        &signature,
    );
    signature.push((gimli::DW_AT_low_pc, gimli::DW_FORM_addr));
    abbreviation(
        &mut abbreviations,
        4,
        gimli::DW_TAG_subprogram,
        true,
        &signature,
    );
    abbreviation(
        &mut abbreviations,
        5,
        gimli::DW_TAG_formal_parameter,
        false,
        &[(gimli::DW_AT_type, gimli::DW_FORM_ref4)],
    );
    abbreviation(
        &mut abbreviations,
        6,
        gimli::DW_TAG_unspecified_type,
        false,
        &[],
    );
    abbreviation(
        &mut abbreviations,
        7,
        gimli::DW_TAG_formal_parameter,
        false,
        &[
            (gimli::DW_AT_type, gimli::DW_FORM_ref4),
            (gimli::DW_AT_location, gimli::DW_FORM_exprloc),
        ],
    );
    abbreviations.push(0);
    let mut info = vec![0; 11];
    info.push(1);
    info.extend(gimli::DW_LANG_C99.0.to_le_bytes());
    let scalar = info.len() as u32;
    info.push(2);
    info.extend(b"u64\0");
    info.extend([size, encoding.0]);
    if representation.is_some() {
        info.push(32);
    }
    for function in functions {
        info.push(if function.address.is_some() { 4 } else { 3 });
        info.extend(function.name.as_bytes());
        info.push(0);
        info.extend(scalar.to_le_bytes());
        info.extend([
            u8::from(function.address.is_none()),
            u8::from(function.prototyped),
            function.convention,
        ]);
        if let Some(address) = function.address {
            info.extend(address.to_le_bytes());
        }
        for _ in 0..function.formals {
            info.push(if function.locations { 7 } else { 5 });
            info.extend(
                if function.missing_type {
                    u32::MAX
                } else {
                    scalar
                }
                .to_le_bytes(),
            );
            if function.locations {
                info.extend([1, gimli::DW_OP_reg4.0]);
            }
        }
        info.push(0);
    }
    info.extend(std::iter::repeat_n(6, padding));
    info.push(0);
    let length = info.len() as u32 - 4;
    info[..4].copy_from_slice(&length.to_le_bytes());
    info[4..6].copy_from_slice(&4u16.to_le_bytes());
    info[10] = 4;
    (info, abbreviations)
}

fn extract(
    functions: &[Function],
    entries: &[(u64, String, Vec<String>)],
    padding: usize,
) -> Option<Vec<(u64, PrototypePieces)>> {
    extract_representation(functions, entries, padding, None, gimli::DW_ATE_unsigned, 8)
}

fn extract_representation(
    functions: &[Function],
    entries: &[(u64, String, Vec<String>)],
    padding: usize,
    representation: Option<gimli::DwAt>,
    encoding: gimli::DwAte,
    size: u8,
) -> Option<Vec<(u64, PrototypePieces)>> {
    let names = names(entries)?;
    let (info, abbreviations) = fixture(functions, padding, representation, encoding, size);
    let bytes = info.len() + abbreviations.len();
    let sections = gimli::DwarfSections::load(|id| -> Result<Vec<u8>, ()> {
        Ok(match id {
            gimli::SectionId::DebugInfo => info.clone(),
            gimli::SectionId::DebugAbbrev => abbreviations.clone(),
            _ => Vec::new(),
        })
    })
    .ok()?;
    let dwarf =
        sections.borrow(|bytes| gimli::EndianSlice::new(bytes, gimli::RunTimeEndian::Little));
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types.cache_core_types().ok()?;
    collect(
        &dwarf,
        &names,
        &types,
        1,
        dwarfbyref::ArgumentAbi::default(),
        bytes,
    )
}

#[test]
fn explicit_definitions_and_declarations_keep_exact_entries_and_aliases() {
    let caller = Function::declaration("caller_alias");
    let mut sink = Function::declaration("consume64");
    sink.address = Some(0x2000);
    sink.locations = true;
    let result = extract(
        &[caller, sink],
        &[
            (0x1000, "caller64".into(), vec!["caller_alias".into()]),
            (0x2000, "consume64".into(), vec![]),
            (0x3000, "produce_sum".into(), vec![]),
        ],
        0,
    )
    .expect("complete explicit contracts");
    assert_eq!(result.len(), 2);
    for (index, name) in ["caller64", "consume64"].into_iter().enumerate() {
        assert_eq!(result[index].0, (index as u64 + 1) * 0x1000);
        assert_eq!(result[index].1.name, name);
        assert_eq!(result[index].1.outtype.as_ref().unwrap().get_size(), 8);
        assert_eq!(result[index].1.intypes.len(), 1);
        assert_eq!(result[index].1.intypes[0].get_size(), 8);
    }
}

#[test]
fn ambiguous_names_and_mismatched_definition_addresses_refuse_every_fact() {
    let entries = [(0x1000, "caller64".into(), vec![])];
    assert!(
        extract(
            &[
                Function::declaration("caller64"),
                Function::declaration("caller64")
            ],
            &entries,
            0
        )
        .is_none()
    );
    let mut definition = Function::declaration("caller64");
    definition.address = Some(0x2000);
    assert!(extract(&[definition], &entries, 0).is_none());
    assert!(
        names(&[
            (0x1000, "one".into(), vec!["same".into()]),
            (0x2000, "two".into(), vec!["same".into()])
        ])
        .is_none()
    );
}

#[test]
fn custom_abi_incomplete_types_and_unprototyped_dies_supply_no_origin() {
    for invalid in 0..4 {
        let mut function = Function::declaration("caller64");
        match invalid {
            0 => function.convention = gimli::DW_CC_nocall.0,
            1 => function.prototyped = false,
            2 => function.missing_type = true,
            _ => function.locations = true,
        }
        assert!(
            extract(&[function], &[(0x1000, "caller64".into(), vec![])], 0)
                .unwrap()
                .is_empty()
        );
    }
}

#[test]
fn nonstandard_scalar_representations_supply_no_width_evidence() {
    let entries = [(0x1000, "caller64".into(), vec![])];
    for attribute in [
        gimli::DW_AT_bit_size,
        gimli::DW_AT_bit_offset,
        gimli::DW_AT_data_bit_offset,
        gimli::DW_AT_endianity,
        gimli::DW_AT_address_class,
        gimli::DW_AT_alignment,
    ] {
        assert!(
            extract_representation(
                &[Function::declaration("caller64")],
                &entries,
                0,
                Some(attribute),
                gimli::DW_ATE_unsigned,
                8,
            )
            .unwrap()
            .is_empty(),
            "{attribute:?}"
        );
    }
    assert!(
        extract_representation(
            &[Function::declaration("caller64")],
            &entries,
            0,
            None,
            gimli::DW_ATE_boolean,
            8,
        )
        .unwrap()
        .is_empty()
    );

    for size in [0, 3, 5, 6, 7, 9, 16, 32, 255] {
        assert!(
            extract_representation(
                &[Function::declaration("caller64")],
                &entries,
                0,
                None,
                gimli::DW_ATE_unsigned,
                size,
            )
            .unwrap()
            .is_empty(),
            "noncanonical integer size {size}"
        );
    }
    for size in [1, 2, 4, 8] {
        let result = extract_representation(
            &[Function::declaration("caller64")],
            &entries,
            0,
            None,
            gimli::DW_ATE_unsigned,
            size,
        )
        .unwrap();
        assert_eq!(result.len(), 1);
        assert_eq!(
            result[0].1.outtype.as_ref().unwrap().get_size(),
            i32::from(size)
        );
    }

    let mut base = DieSnap::new(gimli::DW_TAG_base_type, 1);
    base.byte_size = Some(8);
    base.encoding = Some(gimli::DW_ATE_unsigned);
    let mut alias = DieSnap::new(gimli::DW_TAG_typedef, 1);
    alias.type_ref = Some(1);
    let dies = BTreeMap::from([(1, base), (2, alias)]);
    for offset in [1, 2] {
        assert!(
            scalar(
                2,
                &dies,
                &BTreeSet::from([offset]),
                &mut TypeBudget::default(),
            )
            .is_none()
        );
    }
}

#[test]
fn record_and_formal_limits_refuse_without_publishing_a_prefix() {
    let entries = [
        (0x1000, "first".into(), vec![]),
        (0x2000, "second".into(), vec![]),
    ];
    assert!(extract(&[Function::declaration("first")], &entries, MAX_RECORDS).is_none());
    let mut oversized = Function::declaration("second");
    oversized.formals = MAX_FORMALS + 1;
    assert!(extract(&[Function::declaration("first"), oversized], &entries, 0).is_none());
    assert!(names(&[(0x1000, "x".repeat(MAX_NAME + 1), vec![])]).is_none());
}
