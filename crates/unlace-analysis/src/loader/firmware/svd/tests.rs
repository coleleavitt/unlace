use super::*;

const SVD: &str = r#"<?xml version="1.0"?>
<device><name>MINI</name><size>32</size><peripherals>
<peripheral><name>USART1</name><baseAddress>0x40011000</baseAddress><registers>
<register><name>SR</name><addressOffset>0x0</addressOffset></register>
<register><name>DR</name><addressOffset>0x4</addressOffset></register>
<register><name>CR%s</name><addressOffset>0xC</addressOffset><dim>2</dim><dimIncrement>4</dimIncrement><dimIndex>1,2</dimIndex></register>
</registers><interrupt><name>USART1</name><value>37</value></interrupt></peripheral>
<peripheral derivedFrom="USART1"><name>USART2</name><baseAddress>0x40004400</baseAddress></peripheral>
</peripherals></device>"#;

#[test]
fn peripherals_become_structures_and_interrupts_names() {
    let d = parse(SVD.as_bytes()).unwrap();
    assert_eq!(d.peripherals.len(), 2);
    let u1 = &d.peripherals[0];
    assert_eq!(
        u1.c_struct(),
        "struct USART1_Type { unsigned int SR; unsigned int DR; unsigned char _reserved0[4]; unsigned int CR1; unsigned int CR2; };"
    );
    assert_eq!(u1.extent(), 0x14);
    assert_eq!(d.peripherals[1].type_name, "USART1_Type");
    assert_eq!(d.interrupts.get(&37).map(String::as_str), Some("USART1"));
}

#[test]
fn a_standalone_declaration_parses() {
    let doc = format!(
        "<?xml version=\"1.0\" encoding=\"utf-8\" standalone=\"no\"?>\n<!-- licence -->\n{}",
        SVD.split_once("?>").unwrap().1
    );
    assert_eq!(parse(doc.as_bytes()).unwrap().peripherals.len(), 2);
}

#[test]
fn bundled_devices_resolve_by_part_number() {
    let (name, doc) = bundled("stm32f405rg").unwrap();
    assert_eq!(name, "STM32F405");
    let d = parse(&doc).unwrap();
    assert!(
        d.peripherals
            .iter()
            .any(|p| p.name == "GPIOA" && p.base == 0x4002_0000)
    );
    assert_eq!(bundled("STM32F030F4").unwrap().0, "STM32F030");
    assert_eq!(bundled("STM32F051K8").unwrap().0, "STM32F0X1");
    assert_eq!(bundled("rp2040").unwrap().0, "RP2040");
    assert!(bundled("STM32F103C8").is_none());
    assert!(bundled_names().len() > 100);
}
