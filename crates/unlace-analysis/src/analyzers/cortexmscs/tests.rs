use super::*;

fn find<'a>(blocks: &'a [Block], name: &str) -> &'a Block {
    blocks
        .iter()
        .find(|b| b.name == name)
        .unwrap_or_else(|| panic!("no block {name}"))
}

fn offset(block: &Block, field: &str) -> u32 {
    block
        .fields
        .iter()
        .find(|f| f.0 == field)
        .unwrap_or_else(|| panic!("no field {field}"))
        .1
}

#[test]
fn only_cortex_m_languages_have_a_layout() {
    assert!(layout("ARM:LE:32:Cortex:default").is_some());
    assert!(layout("ARM:BE:32:v8-m:default").is_some());
    assert!(layout("ARM:LE:32:v8:default").is_none());
    assert!(layout("AARCH64:LE:64:v8A:default").is_none());
    assert!(layout("").is_none());
}

#[test]
fn registers_sit_at_their_architectural_addresses() {
    for blocks in [tables::V7M, tables::V8M] {
        let scb = find(blocks, "SCB");
        assert_eq!(scb.base + u64::from(offset(scb, "VTOR")), 0xe000_ed08);
        assert_eq!(scb.base + u64::from(offset(scb, "CPACR")), 0xe000_ed88);
        assert_eq!(find(blocks, "NVIC").base, 0xe000_e100);
        assert_eq!(find(blocks, "SysTick").base, 0xe000_e010);
        assert_eq!(find(blocks, "SCB_STIR").base, 0xe000_ef00);
        let fpu = find(blocks, "FPU");
        assert_eq!(fpu.base + u64::from(offset(fpu, "FPCCR")), 0xe000_ef34);
    }
    let dcb = find(tables::V8M, "DCB");
    assert_eq!(dcb.base + u64::from(offset(dcb, "DEMCR")), 0xe000_edfc);
}

#[test]
fn structure_names_are_recognized() {
    assert!(names_a_type("SCB_Type") && names_a_type("SAU_Type"));
    assert!(!names_a_type("") && !names_a_type("USART1_Type"));
}

#[test]
fn globals_do_not_overlap() {
    for blocks in [tables::V7M, tables::V8M] {
        for pair in blocks.windows(2) {
            assert!(
                pair[0].base + pair[0].extent() <= pair[1].base,
                "{} overlaps {}",
                pair[0].name,
                pair[1].name
            );
        }
    }
}
