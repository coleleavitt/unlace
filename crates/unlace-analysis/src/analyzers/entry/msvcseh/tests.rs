use super::*;

fn words(ws: &[u32]) -> Vec<u8> {
    ws.iter().flat_map(|w| w.to_le_bytes()).collect()
}

#[test]
fn x64_scope_table_except_and_finally() {
    let base = 0x1_4000_0000u64;
    let data = base + 0x3000;
    let bytes = words(&[2, 0x1010, 0x1030, 1, 0x1040, 0x1050, 0x1060, 0x1900, 0]);
    let img = ImageBytes::from_spans(vec![(data, bytes.as_slice())]);
    let s = x64_scope_table(&img, base, data).expect("table");
    assert_eq!(
        s[0].describe(),
        "__try [0x140001010, 0x140001030): __except (EXCEPTION_EXECUTE_HANDLER) -> 0x140001040"
    );
    assert_eq!(
        s[1].describe(),
        "__try [0x140001050, 0x140001060): __finally 0x140001900"
    );
}

#[test]
fn x86_seh4_prologue_and_table() {
    let mut code = vec![0x55, 0x8B, 0xEC, 0x6A, 0xFE, 0x68];
    code.extend_from_slice(&0x0040_3000u32.to_le_bytes());
    code.push(0x68);
    code.extend_from_slice(&0x0040_1800u32.to_le_bytes());
    assert_eq!(x86_seh_prologue(&code, 3), Some((0, 0x0040_3000, true)));
    let table = words(&[
        0xFFFF_FFFE,
        0,
        0xFFFF_FFCC,
        0,
        0xFFFF_FFFE,
        0x0040_1050,
        0x0040_1060,
        0,
        0,
        0x0040_1070,
        0xFFFF_FFFE,
        0,
        0xFFFF_FF00,
    ]);
    let img = ImageBytes::from_spans(vec![(0x0040_3000, table.as_slice())]);
    let text = TextRanges::for_test(vec![(0x0040_1000, 0x0040_2000)]);
    let s = x86_scope_table(&img, &text, 0x0040_3000, true).expect("table");
    assert_eq!(s.len(), 2);
    assert_eq!(
        s[0].describe(),
        "__try: __except (filter 0x401050) -> 0x401060"
    );
    assert_eq!(
        s[1].describe(),
        "__try (inside level 0): __finally 0x401070"
    );
}

#[test]
fn x86_seh_prolog4_helper_form() {
    let mut code = vec![0x6A, 0x10, 0x68];
    code.extend_from_slice(&0x0040_3000u32.to_le_bytes());
    code.push(0xE8);
    code.extend_from_slice(&[0, 0, 0, 0]);
    assert_eq!(x86_seh_prologue(&code, 0), Some((0, 0x0040_3000, true)));
}

#[test]
fn x86_cxx_eh_prologues() {
    let mut code = vec![0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68];
    code.extend_from_slice(&0x0040_1900u32.to_le_bytes());
    code.extend_from_slice(&[0x64, 0xA1, 0, 0, 0, 0]);
    assert_eq!(x86_eh_prologue(&code, 3), Some((0, 0x0040_1900)));
    let mut code = vec![0x6A, 0x0C, 0xB8];
    code.extend_from_slice(&0x0040_1900u32.to_le_bytes());
    code.push(0xE8);
    code.extend_from_slice(&[0, 0, 0, 0]);
    assert_eq!(x86_eh_prologue(&code, 2), Some((0, 0x0040_1900)));
}

#[test]
fn x86_state_stores_and_handler_returns() {
    let code = [
        0xC7, 0x45, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x90, 0xC6, 0x45, 0xFC, 0x01, 0x83, 0x4D, 0xFC,
        0xFF,
    ];
    assert_eq!(
        x86_state_stores(&code, 0x1000),
        vec![(0x1007, 0), (0x100c, 1), (0x1010, -1)]
    );
    let handler = [0x90, 0xB8, 0x40, 0x10, 0x40, 0x00, 0xC3];
    assert_eq!(
        x86_handler_returns(&handler, 0x401200, 0x401000, 0x401200),
        vec![(0x401206, 0x401040)]
    );
}

#[test]
fn x86_levels_chain_outward() {
    let scope = |enclosing: Option<u32>, handler: u64| SehScope {
        range: None,
        enclosing,
        kind: SehKind::Finally { handler },
    };
    let scopes = [
        scope(None, 0x10),
        scope(Some(0), 0x20),
        scope(Some(1), 0x30),
    ];
    let chain: Vec<u64> = x86_level_chain(&scopes, 2)
        .iter()
        .map(|s| match s.kind {
            SehKind::Finally { handler } => handler,
            _ => 0,
        })
        .collect();
    assert_eq!(chain, vec![0x30, 0x20, 0x10]);
    assert_eq!(
        x86_routine_end(&[0x90, 0x90, 0xC3], 0x1000, 0x1000),
        Some(0x1003)
    );
}

#[test]
fn constant_filter_names() {
    assert_eq!(constant_filter(1), "EXCEPTION_EXECUTE_HANDLER");
    assert_eq!(constant_filter(-1), "EXCEPTION_CONTINUE_EXECUTION");
    assert_eq!(constant_filter(7), "7");
}

#[test]
fn c_specific_handler_names() {
    assert!(is_c_specific_handler("__C_specific_handler"));
    assert!(!is_c_specific_handler("__CxxFrameHandler3"));
}
