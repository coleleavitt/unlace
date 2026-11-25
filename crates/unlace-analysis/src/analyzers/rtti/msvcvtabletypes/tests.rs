use super::*;

fn table(offset: i64, base: u64, slots: &[u64]) -> Table {
    Table {
        offset,
        vt: VfTable {
            base,
            slots: slots.to_vec(),
        },
    }
}

fn base(td: u64, mdisp: i64) -> Base {
    Base {
        td,
        mdisp,
        vbase: None,
    }
}

/// The fixture's hierarchy (`msvc_classes.cpp`): Shape (never instantiated),
/// Square and Circle over it, Named (never instantiated), and Tagged over
/// Square at 0 and Named at 0x18.
fn hierarchy() -> BTreeMap<u64, Class> {
    const SHAPE: u64 = 0x10;
    const SQUARE: u64 = 0x20;
    const CIRCLE: u64 = 0x30;
    const NAMED: u64 = 0x40;
    const TAGGED: u64 = 0x50;
    let class = |name: &str, bases: Vec<Base>, tables: Vec<Table>| Class {
        name: name.to_string(),
        bases,
        tables,
    };
    BTreeMap::from([
        (SHAPE, class("Shape", vec![], vec![])),
        (
            SQUARE,
            class(
                "Square",
                vec![base(SHAPE, 0)],
                vec![table(0, 0x2018, &[0x1110, 0x1120])],
            ),
        ),
        (
            CIRCLE,
            class(
                "geo::Circle",
                vec![base(SHAPE, 0)],
                vec![table(0, 0x21f8, &[0x1160, 0x1130])],
            ),
        ),
        (NAMED, class("Named", vec![], vec![])),
        (
            TAGGED,
            class(
                "Tagged",
                vec![base(SQUARE, 0), base(SHAPE, 0), base(NAMED, 0x18)],
                vec![
                    table(0, 0x20d8, &[0x1110, 0x1140]),
                    table(0x18, 0x20f0, &[0x1150]),
                ],
            ),
        ),
    ])
}

#[test]
fn classes_take_their_slots_and_every_override() {
    let names = HashMap::from([(0x1110, "area".to_string())]);
    let facts = facts(&hierarchy(), &names, 8);
    let class = |n: &str| facts.classes.iter().find(|c| c.class == n).unwrap();

    let shape = class("Shape");
    assert_eq!(shape.slots.len(), 2);
    assert_eq!(shape.slots[0].name, "area");
    assert_eq!(shape.slots[0].targets, vec![0x1110, 0x1160]);
    assert_eq!(shape.slots[1].name, "vfn_1");
    assert_eq!(shape.slots[1].targets, vec![0x1120, 0x1130, 0x1140]);
    assert!(shape.msvc);

    let square = class("Square");
    assert_eq!(square.slots[1].targets, vec![0x1120, 0x1140]);
    assert_eq!(class("Circle").slots[0].targets, vec![0x1160]);
    assert_eq!(class("Named").slots[0].targets, vec![0x1150]);
    assert_eq!(class("Tagged").bases, vec![("Named".to_string(), 0x18)]);
}

#[test]
fn this_is_the_subobject_the_vftable_serves() {
    let facts = facts(&hierarchy(), &HashMap::new(), 8);
    let this = |f: u64| {
        facts
            .this_types
            .iter()
            .find(|(g, _)| *g == f)
            .map(|(_, c)| c.as_str())
    };
    assert_eq!(
        this(0x1110),
        Some("Square"),
        "Square's own and inherited by Tagged"
    );
    assert_eq!(this(0x1140), Some("Tagged"));
    assert_eq!(this(0x1130), Some("Circle"));
    assert_eq!(
        this(0x1150),
        Some("Named"),
        "Tagged's override in Named's vftable"
    );
}

#[test]
fn code_two_classes_share_takes_their_common_base() {
    let mut classes = hierarchy();
    classes.get_mut(&0x30).unwrap().tables[0].vt.slots[1] = 0x1120;
    let facts = facts(&classes, &HashMap::new(), 8);
    assert!(facts.this_types.contains(&(0x1120, "Shape".to_string())));
}

#[test]
fn folded_code_in_unrelated_classes_types_no_this() {
    let mut classes = hierarchy();
    classes.get_mut(&0x30).unwrap().tables[0].vt.slots[1] = 0x1150;
    let facts = facts(&classes, &HashMap::new(), 8);
    assert!(!facts.this_types.iter().any(|(f, _)| *f == 0x1150));
}

#[test]
fn a_virtual_base_vftable_types_none_of_its_functions() {
    let mut classes = hierarchy();
    classes
        .get_mut(&0x30)
        .unwrap()
        .tables
        .push(table(0x40, 0x2300, &[0x1170, 0x1160]));
    let facts = facts(&classes, &HashMap::new(), 8);
    assert!(
        !facts
            .this_types
            .iter()
            .any(|(f, _)| *f == 0x1170 || *f == 0x1160)
    );
    assert!(facts.slot_ranges.contains(&(0x2300, 0x230f)));
}

/// `msvc_vbases.cpp`: Base is a virtual base of Left and Right, Both derives
/// from both. Both's vftable at 0 serves Both and Right; the one at 0x38
/// serves the virtual base, which only the vbtable places. Base and Left
/// keep no vftable of their own.
fn virtual_hierarchy() -> BTreeMap<u64, Class> {
    const BASE: u64 = 0x60;
    const LEFT: u64 = 0x70;
    const RIGHT: u64 = 0x80;
    const BOTH: u64 = 0x90;
    let vbase = |td: u64| Base {
        td,
        mdisp: 0,
        vbase: Some((24, 4)),
    };
    BTreeMap::from([
        (
            BASE,
            Class {
                name: "Base".to_string(),
                ..Class::default()
            },
        ),
        (
            LEFT,
            Class {
                name: "Left".to_string(),
                ..Class::default()
            },
        ),
        (
            RIGHT,
            Class {
                name: "Right".to_string(),
                ..Class::default()
            },
        ),
        (
            BOTH,
            Class {
                name: "Both".to_string(),
                bases: vec![base(LEFT, 24), vbase(BASE), base(RIGHT, 0), vbase(BASE)],
                tables: vec![
                    table(0, 0x2020, &[0x10b0]),
                    table(0x38, 0x2038, &[0x1090, 0x10a0]),
                ],
            },
        ),
    ])
}

#[test]
fn a_vftable_serving_a_virtual_base_is_placed_by_the_vbtable_order() {
    let facts = facts(&virtual_hierarchy(), &HashMap::new(), 8);
    let class = |n: &str| facts.classes.iter().find(|c| c.class == n);
    let base = class("Base").expect("the virtual base is typed");
    assert_eq!(base.slots[0].targets, vec![0x1090]);
    assert_eq!(base.slots[1].targets, vec![0x10a0]);
    assert!(facts.this_types.contains(&(0x1090, "Base".to_string())));
    assert!(facts.this_types.contains(&(0x10a0, "Base".to_string())));
    assert!(facts.this_types.contains(&(0x10b0, "Both".to_string())));
    assert!(class("Left").is_none(), "Left keeps no vftable");
    assert_eq!(
        class("Both").unwrap().bases,
        vec![("Left".to_string(), 24)],
        "a virtual base is not embedded"
    );
    let t = facts.tables.iter().find(|t| t.addr == 0x2038).unwrap();
    assert_eq!((t.class.as_str(), t.slots), ("Base", 2));
}

#[test]
fn a_virtual_base_whose_own_vftable_disagrees_is_not_placed() {
    let mut classes = virtual_hierarchy();
    classes
        .get_mut(&0x60)
        .unwrap()
        .tables
        .push(table(0, 0x2300, &[0x1300, 0x1310, 0x1320]));
    let facts = facts(&classes, &HashMap::new(), 8);
    assert!(!facts.this_types.iter().any(|(f, _)| *f == 0x1090));
}

/// SensorService.dll: `Sensors::BrSensor`'s vftable is directly followed by
/// an RPC server's dispatch table, so its walk took 15 slots where its
/// derived classes keep 4.
#[test]
fn a_walk_into_the_next_table_is_cut() {
    let mut classes = hierarchy();
    let square = classes.get_mut(&0x20).unwrap();
    square.tables[0].vt.slots.extend([0x1500, 0x1510, 0x1520]);
    let circle = classes.get_mut(&0x30).unwrap();
    circle.tables[0].vt.slots.extend([0x1600, 0x1610]);
    let referenced = HashSet::from([0x21f8 + 3 * 8]);
    trim_overruns(&mut classes, &referenced, 8);
    assert_eq!(classes[&0x20].tables[0].vt.slots, vec![0x1110, 0x1120]);
    assert_eq!(
        classes[&0x30].tables[0].vt.slots,
        vec![0x1160, 0x1130, 0x1600]
    );
    assert_eq!(classes[&0x50].tables[0].vt.slots.len(), 2);
}

#[test]
fn every_typed_vftable_is_listed_under_its_rtti_label() {
    let facts = facts(&hierarchy(), &HashMap::new(), 8);
    let t = |a: u64| facts.tables.iter().find(|t| t.addr == a).unwrap();
    assert_eq!(t(0x2018).class, "Square");
    assert_eq!(t(0x21f8).label, "geo::Circle::vftable");
    assert_eq!(t(0x21f8).class, "Circle");
    assert_eq!(t(0x20f0).class, "Named");
    assert_eq!(t(0x20f0).label, "Tagged::vftable");
    assert_eq!(t(0x20f0).slots, 1);
}

#[test]
fn method_names_come_from_the_msvc_mangling() {
    assert_eq!(
        method_name("?area@Square@@UEBAHH@Z").as_deref(),
        Some("area")
    );
    assert_eq!(method_name("??1Square@@UEAA@XZ").as_deref(), Some("dtor"));
    assert_eq!(
        method_name("??_GSquare@@UEAAPEAXI@Z").as_deref(),
        Some("deleting_dtor")
    );
    assert_eq!(
        method_name("??_ESquare@@UEAAPEAXI@Z").as_deref(),
        Some("deleting_dtor")
    );
    assert_eq!(method_name("??0Square@@QEAA@XZ"), None);
    assert_eq!(method_name("main"), None);
}
