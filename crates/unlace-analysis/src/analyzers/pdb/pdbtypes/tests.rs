use super::*;

fn procs(name: &str, family: Family) -> Vec<Proc> {
    let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
    let file = std::fs::File::open(path).expect("open the fixture pdb");
    let mut pdb = pdb::PDB::open(file).expect("parse the fixture pdb");
    let map = pdb.address_map().expect("address map");
    let dbi = pdb.debug_information().expect("dbi");
    let mut modules = dbi.modules().expect("modules");
    let mut out = Vec::new();
    while let Ok(Some(module)) = modules.next() {
        let Ok(Some(info)) = pdb.module_info(&module) else {
            continue;
        };
        let mut symbols = info.symbols().expect("symbols");
        out.extend(module_procs(
            &mut symbols,
            &map,
            0x1000,
            family,
            &BTreeMap::new(),
        ));
    }
    out
}

fn vars(procs: &[Proc], name: &str) -> Vec<(String, Loc)> {
    let p = procs
        .iter()
        .find(|p| p.name == name)
        .expect("procedure present");
    p.vars.iter().map(|v| (v.name.clone(), v.loc)).collect()
}

/// x64: the clang locals of `rect_area` sit below the return address by the
/// frame `S_FRAMEPROC` records (40 bytes, nothing saved).
#[test]
fn x64_stack_slots_follow_the_frame_size() {
    let procs = procs("pdb_types_x86_64.pdb", Family::X64);
    assert_eq!(
        vars(&procs, "rect_area"),
        [
            ("r".to_string(), Loc::Stack(-16)),
            ("scale".to_string(), Loc::Stack(-4)),
            ("w".to_string(), Loc::Stack(-20)),
            ("h".to_string(), Loc::Stack(-24)),
            ("buf".to_string(), Loc::Stack(-40)),
        ]
    );
}

/// i386: an `EBP` frame puts the arguments above the return address and the
/// locals below the saved `EBP`.
#[test]
fn x86_frame_pointer_slots() {
    let procs = procs("pdb_types_i386.pdb", Family::X86);
    let p = procs
        .iter()
        .find(|p| p.name == "rect_area")
        .expect("rect_area");
    let params: Vec<&str> = parameters(p).iter().map(|v| v.name.as_str()).collect();
    assert_eq!(params, ["r", "scale"]);
    assert_eq!(
        vars(&procs, "rect_area"),
        [
            ("r".to_string(), Loc::Stack(4)),
            ("scale".to_string(), Loc::Stack(8)),
            ("w".to_string(), Loc::Stack(-8)),
            ("h".to_string(), Loc::Stack(-12)),
            ("buf".to_string(), Loc::Stack(-28)),
        ]
    );
}

#[test]
fn frame_bases() {
    let f = FrameProc {
        frame: 32,
        saved_regs: 8,
        flags: (1 << 14) | (1 << 16),
    };
    assert_eq!(f.base(Family::X64, false), Some(Base::StackPointer));
    let rbp = Base::Register(334);
    assert_eq!(
        base_offset(Family::X64, Base::StackPointer, Some(&f), None),
        Some(-40)
    );
    assert_eq!(base_offset(Family::X64, rbp, Some(&f), None), None);
    assert_eq!(
        base_offset(Family::X64, rbp, None, Some((334, -8))),
        Some(-8)
    );
    assert_eq!(base_offset(Family::X64, rbp, None, Some((341, -8))), None);
    assert_eq!(
        base_offset(Family::X86, Base::Register(22), None, None),
        Some(-4)
    );
    assert_eq!(
        base_offset(Family::X86, Base::StackPointer, Some(&f), None),
        Some(-40)
    );
    let vframe = Base::Register(CV_VFRAME);
    assert_eq!(f.base(Family::X86, false), Some(vframe));
    assert_eq!(base_offset(Family::X86, vframe, Some(&f), None), Some(0));
    // A realigned frame: locals off `$T0`, parameters off `EBP`.
    let realigned = FrameProc {
        flags: (1 << 14) | (2 << 16),
        ..f
    };
    assert_eq!(
        base_offset(Family::X86, vframe, Some(&realigned), None),
        None
    );
    assert_eq!(
        base_offset(Family::X86, Base::StackPointer, Some(&realigned), None),
        None
    );
}

/// i386 frame-pointer omission: arguments off `$T0` sit above the return
/// address, an array split into scattered pieces gets no slot, and a
/// realigned frame's `$T0` locals are left alone while its `EBP` argument
/// is placed.
#[test]
fn x86_vframe_slots() {
    let procs = procs("fpo_i386.pdb", Family::X86);
    assert_eq!(
        vars(&procs, "sum_buf"),
        [
            ("n".to_string(), Loc::Stack(4)),
            ("k".to_string(), Loc::Stack(8)),
            ("buf".to_string(), Loc::Unknown),
        ]
    );
    assert_eq!(
        vars(&procs, "aligned"),
        [
            ("n".to_string(), Loc::Stack(4)),
            ("a".to_string(), Loc::Unknown),
        ]
    );
}

#[test]
fn register_names() {
    assert_eq!(sleigh_register(Family::X64, 330).as_deref(), Some("RCX"));
    assert_eq!(sleigh_register(Family::X64, 18).as_deref(), Some("ECX"));
    assert_eq!(sleigh_register(Family::X64, 336).as_deref(), Some("R8"));
    assert_eq!(sleigh_register(Family::X64, 367).as_deref(), Some("R15D"));
    assert_eq!(sleigh_register(Family::X64, 259).as_deref(), Some("XMM15"));
    assert_eq!(sleigh_register(Family::X86, 330), None);
    assert_eq!(sleigh_register(Family::Other, 18), None);
}

#[test]
fn raw_vftable_names() {
    assert_eq!(
        vftable_names("??_7Square@geo@@6B@"),
        Some(("geo::Square".to_string(), None))
    );
    assert_eq!(
        vftable_names("??_7C@@6BB@ns@@@"),
        Some(("C".to_string(), Some("ns::B".to_string())))
    );
    assert_eq!(vftable_names("??_7C@ns@@6BB@1@@"), None, "back-reference");
    assert_eq!(vftable_names("??_7?$V@H@@6B@"), None, "template");
    assert_eq!(vftable_names("?area@Square@geo@@UEBAHXZ"), None);
}

#[test]
fn demangled_vftable_names() {
    assert_eq!(vftable_class("geo::Square::`vftable'"), Some("geo::Square"));
    assert_eq!(
        vftable_class("const geo::Shape::`vftable'"),
        Some("geo::Shape")
    );
    assert_eq!(vftable_class("A::`vftable'{for `B'}"), None);
    assert_eq!(vftable_class("geo::Square::area"), None);
}

#[test]
fn repeated_local_names_are_suffixed() {
    let mut n = Names::default();
    assert_eq!(n.unique("i"), "i");
    assert_eq!(n.unique("i"), "i_1");
    assert_eq!(n.unique("j"), "j");
}
