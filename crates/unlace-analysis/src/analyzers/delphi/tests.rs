use super::*;

const CODE: u64 = 0x40_1000;
const DATA: u64 = 0x50_0000;

fn put(buf: &mut [u8], vma: u64, value: u64) {
    let at = (vma - DATA) as usize;
    buf[at..at + 4].copy_from_slice(&(value as u32).to_le_bytes());
}

fn put16(buf: &mut [u8], vma: u64, value: u16) {
    let at = (vma - DATA) as usize;
    buf[at..at + 2].copy_from_slice(&value.to_le_bytes());
}

fn put_str(buf: &mut [u8], vma: u64, s: &str) {
    let at = (vma - DATA) as usize;
    buf[at] = s.len() as u8;
    buf[at + 1..at + 1 + s.len()].copy_from_slice(s.as_bytes());
}

fn names(out: &AnalysisOutput) -> BTreeMap<String, (u64, SymKind)> {
    out.symbols
        .iter()
        .map(|s| (s.name.clone(), (s.addr, s.kind)))
        .collect()
}

fn function(out: &AnalysisOutput, name: &str) -> Option<u64> {
    names(out)
        .get(name)
        .filter(|(_, k)| *k == SymKind::Function)
        .map(|(a, _)| *a)
}

fn data(out: &AnalysisOutput, name: &str) -> Option<u64> {
    names(out)
        .get(name)
        .filter(|(_, k)| *k == SymKind::Data)
        .map(|(a, _)| *a)
}

/// Two Delphi 2009+ classes, `TObject` and `TFoo`, with `TFoo` overriding
/// `Destroy` and adding two virtuals, a published method, a message handler,
/// a dynamic method and a class type info; plus a dynamic-array type info.
#[test]
fn modern_vmts_name_classes_and_methods() {
    let code = vec![0xc3u8; 0x100];
    let mut d = vec![0u8; 0x500];
    let vmt0 = DATA + 22 * 4;
    put(&mut d, DATA, vmt0);
    put(&mut d, vmt0 - 14 * 4, DATA + 0x200);
    put(&mut d, vmt0 - 13 * 4, 4);
    for i in 0..11u64 {
        put(&mut d, vmt0 - (11 - i) * 4, CODE + 0x10 + i);
    }
    put_str(&mut d, DATA + 0x200, "TObject");

    let vmt1 = DATA + 0x60 + 22 * 4;
    put(&mut d, DATA + 0x60, vmt1);
    put(&mut d, vmt1 - 18 * 4, DATA + 0x404);
    put(&mut d, vmt1 - 16 * 4, DATA + 0x300);
    put(&mut d, vmt1 - 15 * 4, DATA + 0x340);
    put(&mut d, vmt1 - 14 * 4, DATA + 0x210);
    put(&mut d, vmt1 - 13 * 4, 12);
    put(&mut d, vmt1 - 12 * 4, DATA);
    for i in 0..11u64 {
        put(&mut d, vmt1 - (11 - i) * 4, CODE + 0x10 + i);
    }
    put(&mut d, vmt1 - 4, CODE + 0x40);
    put(&mut d, vmt1, CODE + 0x50);
    put(&mut d, vmt1 + 4, CODE + 0x54);
    put_str(&mut d, DATA + 0x210, "TFoo");

    put16(&mut d, DATA + 0x300, 1);
    put16(&mut d, DATA + 0x302, 2 + 4 + 1 + 5);
    put(&mut d, DATA + 0x304, CODE + 0x60);
    put_str(&mut d, DATA + 0x308, "Click");

    put16(&mut d, DATA + 0x340, 2);
    put16(&mut d, DATA + 0x342, 0x000f);
    put16(&mut d, DATA + 0x344, 0xfffe);
    put(&mut d, DATA + 0x346, CODE + 0x70);
    put(&mut d, DATA + 0x34a, CODE + 0x74);

    put(&mut d, DATA + 0x400, DATA + 0x404);
    d[0x404] = TK_CLASS;
    put_str(&mut d, DATA + 0x405, "TFoo");
    put(&mut d, DATA + 0x420, DATA + 0x424);
    d[0x424] = 17;
    put_str(&mut d, DATA + 0x425, "TArray<System.Byte>");

    let img = Image::from_spans(
        vec![(CODE, &code[..]), (DATA, &d[..])],
        vec![(CODE, CODE + code.len() as u64)],
        4,
    );
    let out = recover(&img);

    assert_eq!(data(&out, "TObject::vmt"), Some(vmt0));
    assert_eq!(data(&out, "TFoo::vmt"), Some(vmt1));
    assert_eq!(function(&out, "TObject::Equals"), Some(CODE + 0x10));
    assert_eq!(function(&out, "TObject::Destroy"), Some(CODE + 0x10 + 10));
    assert_eq!(function(&out, "TFoo::Destroy"), Some(CODE + 0x40));
    assert_eq!(function(&out, "TFoo::vfunc_0"), Some(CODE + 0x50));
    assert_eq!(function(&out, "TFoo::vfunc_1"), Some(CODE + 0x54));
    assert_eq!(function(&out, "TFoo::Click"), Some(CODE + 0x60));
    assert_eq!(function(&out, "TFoo::message_WM_PAINT"), Some(CODE + 0x70));
    assert_eq!(function(&out, "TFoo::dynamic_2"), Some(CODE + 0x74));
    assert_eq!(data(&out, "TFoo::typeinfo"), Some(DATA + 0x404));
    assert_eq!(data(&out, "TFoo::method_table"), Some(DATA + 0x300));
    assert_eq!(
        data(&out, "TArray<System.Byte>::typeinfo"),
        Some(DATA + 0x424)
    );
    assert!(out.entries.contains(&(CODE + 0x60)));
    assert!(names(&out).keys().all(|n| !n.starts_with("TFoo::Equals")));
}

/// Delphi 2 VMTs have no self pointer: `TObject` is found by name and
/// `TFoo` by its parent, the `TObject` VMT itself.
#[test]
fn delphi2_vmts_follow_the_parent_chain() {
    let code = vec![0xc3u8; 0x100];
    let mut d = vec![0u8; 0x300];
    let vmt0 = DATA + 13 * 4;
    put(&mut d, vmt0 - 7 * 4, DATA + 0x200);
    put(&mut d, vmt0 - 6 * 4, 4);
    for i in 0..4u64 {
        put(&mut d, vmt0 - (4 - i) * 4, CODE + 0x10 + i);
    }
    put_str(&mut d, DATA + 0x200, "TObject");

    let vmt1 = DATA + 0x40 + 13 * 4;
    put(&mut d, vmt1 - 7 * 4, DATA + 0x210);
    put(&mut d, vmt1 - 6 * 4, 8);
    put(&mut d, vmt1 - 5 * 4, vmt0);
    for i in 0..4u64 {
        put(&mut d, vmt1 - (4 - i) * 4, CODE + 0x10 + i);
    }
    put(&mut d, vmt1 - 4, CODE + 0x40);
    put(&mut d, vmt1, CODE + 0x50);
    put_str(&mut d, DATA + 0x210, "TFoo");

    let img = Image::from_spans(
        vec![(CODE, &code[..]), (DATA, &d[..])],
        vec![(CODE, CODE + code.len() as u64)],
        4,
    );
    let out = recover(&img);

    assert_eq!(data(&out, "TObject::vmt"), Some(vmt0));
    assert_eq!(data(&out, "TFoo::vmt"), Some(vmt1));
    assert_eq!(function(&out, "TObject::DefaultHandler"), Some(CODE + 0x10));
    assert_eq!(function(&out, "TObject::Destroy"), Some(CODE + 0x13));
    assert_eq!(function(&out, "TFoo::Destroy"), Some(CODE + 0x40));
    assert_eq!(function(&out, "TFoo::vfunc_0"), Some(CODE + 0x50));
}

/// An image without the `TObject` class name is not read at all.
#[test]
fn a_non_delphi_image_yields_nothing() {
    let code = vec![0xc3u8; 0x100];
    let d = vec![0u8; 0x100];
    let img = Image::from_spans(
        vec![(CODE, &code[..]), (DATA, &d[..])],
        vec![(CODE, CODE + code.len() as u64)],
        4,
    );
    let out = recover(&img);
    assert!(out.symbols.is_empty());
    assert!(out.entries.is_empty());
}

#[test]
fn message_names() {
    assert_eq!(message_name(0x000f), "WM_PAINT");
    assert_eq!(message_name(0xbd11), "CN_COMMAND");
    assert_eq!(message_name(0xb005), "b005");
}
