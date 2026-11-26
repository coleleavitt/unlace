use super::*;

fn table() -> ObjcClassTable {
    let mut t = ObjcClassTable::default();
    let mut base = ObjcClass::default();
    let m = |label: &str, imp| ObjcMethod {
        label: label.into(),
        imp,
        returns: None,
    };
    base.methods
        .insert((false, "count".into()), m("-[Base count]", 0x100));
    base.methods
        .insert((true, "alloc".into()), m("+[Base alloc]", 0x200));
    let mut sub = ObjcClass {
        superclass: Some("Base".into()),
        ..Default::default()
    };
    sub.methods
        .insert((false, "x".into()), m("-[Sub x]", 0x300));
    t.classes.insert("Base".into(), base);
    t.classes.insert("Sub".into(), sub);
    t
}

#[test]
fn resolution_walks_the_superclass_chain() {
    let t = table();
    let at = |c, s, cm| t.resolve(c, s, cm).map(|m| (m.label.as_str(), m.imp));
    assert_eq!(at("Sub", "x", false), Some(("-[Sub x]", 0x300)));
    assert_eq!(at("Sub", "count", false), Some(("-[Base count]", 0x100)));
    assert_eq!(at("Sub", "alloc", true), Some(("+[Base alloc]", 0x200)));
    assert_eq!(
        at("Sub", "count", true),
        None,
        "a class method is not an instance one"
    );
    assert_eq!(at("Other", "count", false), None);
}

#[test]
fn instancetype_selectors() {
    assert!(allocates("alloc") && allocates("new") && !allocates("init"));
    assert!(
        returns_receiver("initWithFrame:")
            && returns_receiver("self")
            && !returns_receiver("count")
    );
}

#[test]
fn a_factory_names_its_class() {
    assert!(factory_of("NSNumber", "numberWithLongLong:"));
    assert!(factory_of("NSMutableString", "stringWithFormat:"));
    assert!(factory_of("NSURL", "URLWithString:"));
    assert!(!factory_of("NSNumber", "stringWithFormat:"));
    assert!(!factory_of("NSData", "dataTaskWithURL:") && !factory_of("NSNumber", "WithX:"));
}
