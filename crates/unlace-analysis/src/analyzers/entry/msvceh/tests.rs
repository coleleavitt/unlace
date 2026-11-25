use super::*;

const BASE: u64 = 0x1_4000_0000;
const RDATA: u64 = BASE + 0x3000;
const TEXT: u64 = BASE + 0x1000;
const SLOT: u64 = BASE + 0x6000;

fn put(buf: &mut [u8], off: u64, bytes: &[u8]) {
    let o = (off - RDATA) as usize;
    buf[o..o + bytes.len()].copy_from_slice(bytes);
}

fn rva(a: u64) -> [u8; 4] {
    ((a - BASE) as u32).to_le_bytes()
}

fn descriptor(buf: &mut [u8], at: u64, name: &str) {
    put(buf, at, &(BASE + 0x5000).to_le_bytes());
    let mut n = name.as_bytes().to_vec();
    n.push(0);
    put(buf, at + 16, &n);
}

fn catchable(buf: &mut [u8], at: u64, props: u32, td: u64, size: u32) {
    put(buf, at, &props.to_le_bytes());
    put(buf, at + 4, &rva(td));
    put(buf, at + 12, &(-1i32).to_le_bytes());
    put(buf, at + 20, &size.to_le_bytes());
}

fn rdata() -> Vec<u8> {
    let mut b = vec![0u8; 0x200];
    descriptor(&mut b, RDATA, ".?AVruntime_error@std@@");
    descriptor(&mut b, RDATA + 0x40, ".?AVexception@std@@");
    descriptor(&mut b, RDATA + 0x80, ".H");
    catchable(&mut b, RDATA + 0x100, 0, RDATA, 0x18);
    catchable(&mut b, RDATA + 0x120, 0, RDATA + 0x40, 0x18);
    put(&mut b, RDATA + 0x140, &2u32.to_le_bytes());
    put(&mut b, RDATA + 0x144, &rva(RDATA + 0x100));
    put(&mut b, RDATA + 0x148, &rva(RDATA + 0x120));
    put(&mut b, RDATA + 0x15c, &rva(RDATA + 0x140));
    catchable(&mut b, RDATA + 0x160, 1, RDATA + 0x80, 4);
    put(&mut b, RDATA + 0x180, &1u32.to_le_bytes());
    put(&mut b, RDATA + 0x184, &rva(RDATA + 0x160));
    put(&mut b, RDATA + 0x190, &1u32.to_le_bytes());
    put(&mut b, RDATA + 0x19c, &rva(RDATA + 0x180));
    b
}

fn infos(data: &[u8]) -> Vec<ThrowInfo> {
    let img = ImageBytes::from_spans(vec![(RDATA, data)]);
    let rk = RefKind::new(true, BASE, End::Little);
    find_throw_infos(
        &img,
        &rk,
        &TextRanges::for_test(vec![(TEXT, TEXT + 0x1000)]),
    )
}

#[test]
fn throw_info_chains_are_found_and_named() {
    let data = rdata();
    let tis = infos(&data);
    assert_eq!(tis.len(), 2, "{tis:#x?}");
    assert_eq!(tis[0].addr, RDATA + 0x150);
    assert_eq!(tis[0].thrown_type(), "std::runtime_error");
    assert_eq!(tis[0].types.len(), 2);
    assert_eq!(tis[0].types[1].name, "std::exception");
    assert_eq!(tis[1].addr, RDATA + 0x190);
    assert_eq!(tis[1].thrown_type(), "int const");
    let names: Vec<String> = label_symbols(&tis).into_iter().map(|s| s.name).collect();
    assert!(names.contains(&"ThrowInfo<std::runtime_error>".to_string()));
    assert!(names.contains(&"ThrowInfo<int const>".to_string()));
    assert!(names.contains(&"CatchableType<std::exception>".to_string()));
    assert!(names.contains(&"CatchableTypeArray<int>".to_string()));
}

/// A `CatchableType`'s copy function is its class's copy constructor and
/// a `ThrowInfo`'s unwind function the thrown class's destructor; one
/// address two classes claim is left alone.
#[test]
fn copy_constructors_and_destructors_are_named() {
    let mut data = rdata();
    put(&mut data, RDATA + 0x100 + 24, &rva(TEXT + 0x100));
    put(&mut data, RDATA + 0x120 + 24, &rva(TEXT + 0x140));
    put(&mut data, RDATA + 0x154, &rva(TEXT + 0x200));
    let names: Vec<(u64, String)> = member_symbols(&infos(&data))
        .into_iter()
        .map(|s| (s.addr, s.name))
        .collect();
    assert_eq!(
        names,
        [
            (
                TEXT + 0x100,
                "std::runtime_error::runtime_error".to_string()
            ),
            (TEXT + 0x140, "std::exception::exception".to_string()),
            (
                TEXT + 0x200,
                "std::runtime_error::~runtime_error".to_string()
            ),
        ]
    );
    put(&mut data, RDATA + 0x120 + 24, &rva(TEXT + 0x100));
    let folded: Vec<u64> = member_symbols(&infos(&data))
        .into_iter()
        .map(|s| s.addr)
        .collect();
    assert_eq!(folded, [TEXT + 0x200]);
}

#[test]
fn a_broken_array_entry_drops_the_throw_info() {
    let mut data = rdata();
    put(&mut data, RDATA + 0x148, &rva(RDATA + 0x1f0));
    let tis = infos(&data);
    assert_eq!(tis.len(), 1);
    assert_eq!(tis[0].thrown_type(), "int const");
}

#[test]
fn x64_throw_and_rethrow_sites() {
    let ti = RDATA + 0x150;
    let mut code = vec![0x90u8; 0x40];
    let lea_at = TEXT + 4;
    code[4..7].copy_from_slice(&[0x48, 0x8D, 0x15]);
    code[7..11].copy_from_slice(&((ti - (lea_at + 7)) as u32).to_le_bytes());
    let call1 = TEXT + 0x10;
    code[0x10..0x12].copy_from_slice(&[0xFF, 0x15]);
    code[0x12..0x16].copy_from_slice(&((SLOT - (call1 + 6)) as u32).to_le_bytes());
    code[0x20..0x24].copy_from_slice(&[0x33, 0xD2, 0x33, 0xC9]);
    let call2 = TEXT + 0x24;
    code[0x24..0x26].copy_from_slice(&[0xFF, 0x15]);
    code[0x26..0x2a].copy_from_slice(&((SLOT - (call2 + 6)) as u32).to_le_bytes());
    let targets: FxHashSet<u64> = [SLOT].into_iter().collect();
    let tis: FxHashSet<u64> = [ti].into_iter().collect();
    let sites = find_throw_sites(&[(TEXT, code.as_slice())], true, &targets, &tis);
    assert_eq!(
        sites,
        vec![
            ThrowSite {
                call: call1,
                kind: ThrowKind::Throw(ti)
            },
            ThrowSite {
                call: call2,
                kind: ThrowKind::Rethrow
            },
        ]
    );
}

#[test]
fn x86_push_of_a_throw_info() {
    let ti = 0x0040_3150u64;
    let slot = 0x0040_6000u64;
    let mut code = vec![0x90u8; 0x20];
    code[2] = 0x68;
    code[3..7].copy_from_slice(&(ti as u32).to_le_bytes());
    code[0x0c..0x0e].copy_from_slice(&[0xFF, 0x15]);
    code[0x0e..0x12].copy_from_slice(&(slot as u32).to_le_bytes());
    let targets: FxHashSet<u64> = [slot].into_iter().collect();
    let tis: FxHashSet<u64> = [ti].into_iter().collect();
    let sites = find_throw_sites(&[(0x0040_1000, code.as_slice())], false, &targets, &tis);
    assert_eq!(sites.len(), 1);
    assert_eq!(sites[0].kind, ThrowKind::Throw(ti));
}

#[test]
fn type_names() {
    assert_eq!(type_name(".?AVruntime_error@std@@"), "std::runtime_error");
    assert_eq!(type_name(".H"), "int");
    assert_eq!(type_name(".PEBD"), "char const *");
    assert_eq!(type_name(".PAD"), "char *");
    assert_eq!(type_name(".PEAX"), "void *");
    assert_eq!(type_name(".?"), "?");
}

#[test]
fn throw_import_names() {
    assert!(is_throw_name(b"_CxxThrowException"));
    assert!(is_throw_name(b"_CxxThrowException@8"));
    assert!(!is_throw_name(b"_CxxFrameHandler3"));
}

/// The clang-cl fixture: three throws, a rethrow in a catch funclet, and a
/// try with three handlers.
#[test]
fn clang_cl_fixture() {
    let path = format!(
        "{}/tests/fixtures/msvceh_x64.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
    let file = object::File::parse(&bytes[..]).expect("parse");
    let out = collect(&file, &bytes);
    let sym = |a: u64| {
        out.symbols
            .iter()
            .find(|s| s.addr == a)
            .map(|s| s.name.clone())
            .unwrap_or_default()
    };
    assert!(sym(0x1_4000_2198).starts_with("ThrowInfo<") && sym(0x1_4000_2198).contains("Err"));
    assert!(sym(0x1_4000_2200).contains("Derived"));
    assert_eq!(sym(0x1_4000_2238), "ThrowInfo<int>");
    let comment = |a: u64| {
        out.comments
            .iter()
            .find(|c| c.addr == a)
            .map(|c| (c.func_addr, c.text.clone()))
    };
    assert_eq!(
        comment(0x1_4000_102c),
        Some((0x1_4000_1000, "throw int".to_string()))
    );
    assert_eq!(
        comment(0x1_4000_1161),
        Some((0x1_4000_114f, "rethrow".to_string()))
    );
    let tries: Vec<&str> = out
        .header_comments
        .iter()
        .filter(|c| c.func_addr == 0x1_4000_109f && c.text.starts_with("eh: try"))
        .map(|c| c.text.as_str())
        .collect();
    assert_eq!(tries.len(), 1, "{tries:?}");
    assert!(
        tries[0].contains("catch (...) -> 0x14000110d"),
        "{}",
        tries[0]
    );
    assert!(
        out.header_comments
            .iter()
            .any(|c| c.func_addr == 0x1_4000_10c7 && c.text.contains("handler of 0x14000109f"))
    );
    let renamed = |a: u64| {
        out.fid_names
            .iter()
            .find(|m| m.addr == a)
            .map(|m| m.name.clone())
    };
    assert_eq!(
        renamed(0x1_4000_10c7).as_deref(),
        Some("sub_14000109f$catch$0")
    );
    assert_eq!(
        renamed(0x1_4000_110d).as_deref(),
        Some("sub_14000109f$catch$2")
    );
    assert_eq!(
        renamed(0x1_4000_114f).as_deref(),
        Some("sub_14000112f$catch$0")
    );
    let site = out
        .msvc_eh_sites
        .iter()
        .find(|s| s.pad == 0x1_4000_10c7)
        .expect("catch (Err &) record");
    assert_eq!((site.start, site.end), (0x1_4000_10b8, 0x1_4000_10be));
    assert_eq!(
        out.msvc_eh_sites
            .iter()
            .filter(|s| s.start == 0x1_4000_10b8)
            .count(),
        3
    );
    let funclet = out
        .msvc_funclets
        .iter()
        .find(|f| f.pad == 0x1_4000_10c7)
        .expect("catch funclet");
    assert_eq!(funclet.frame_reg.as_deref(), Some("RBP"));
    assert_eq!(funclet.frame_offset, 0x40);
    assert_eq!(funclet.returns, vec![(0x1_4000_10ea, 0x1_4000_10be)]);
    assert!(
        out.msvc_funclets
            .iter()
            .any(|f| f.pad == 0x1_4000_114f && f.returns.is_empty())
    );
    for f in [0x1_4000_10c7, 0x1_4000_10eb, 0x1_4000_110d, 0x1_4000_114f] {
        assert!(out.entries.contains(&f), "{f:#x} not discovered");
    }
}

#[test]
fn owners_by_pdata_range() {
    let owners = [(0x1000, 0x1040, 0x1000), (0x1080, 0x10c0, 0x1000)];
    assert_eq!(owner_of(&owners, 0x1010), Some(0x1000));
    assert_eq!(owner_of(&owners, 0x1090), Some(0x1000));
    assert_eq!(owner_of(&owners, 0x1050), None);
    assert_eq!(owner_of(&owners, 0x0fff), None);
}
