use super::*;

fn el(name: &str, attrs: &[(&str, &str)], children: Vec<Rc<Element>>) -> Rc<Element> {
    let mut e = Element::new();
    e.set_name(name);
    for (k, v) in attrs {
        e.add_attribute(k, v.as_bytes());
    }
    for c in children {
        e.add_child(c);
    }
    Rc::new(e)
}

fn reg_entry(name: &str, attrs: &[(&str, &str)]) -> Rc<Element> {
    let mut a = vec![("minsize", "1"), ("maxsize", "8")];
    a.extend_from_slice(attrs);
    el("pentry", &a, vec![register(name)])
}

fn names(e: &Element, child: &str) -> Vec<String> {
    e.get_children()
        .iter()
        .filter(|c| c.get_name() == child)
        .filter_map(|c| {
            c.get_children()
                .iter()
                .find(|r| r.get_name() == "register")
                .and_then(|r| {
                    r.get_attribute_value("name")
                        .ok()
                        .map(|v| String::from_utf8_lossy(v).into_owned())
                })
        })
        .collect()
}

/// An AArch64-shaped default: `x8` hidden return, `x0`..`x1` returns, the
/// 17-byte indirect rule.
fn aarch64_like() -> Rc<Element> {
    let input = el(
        "input",
        &[],
        vec![
            reg_entry("x8", &[("storage", "hiddenret")]),
            reg_entry("x0", &[]),
            reg_entry("x1", &[]),
        ],
    );
    let output = el(
        "output",
        &[],
        vec![
            reg_entry("x0", &[]),
            reg_entry("x1", &[]),
            el(
                "rule",
                &[],
                vec![
                    el("datatype", &[("name", "any"), ("minsize", "17")], vec![]),
                    el("hidden_return", &[("voidlock", "true")], vec![]),
                ],
            ),
            el(
                "rule",
                &[],
                vec![
                    el("datatype", &[("name", "any")], vec![]),
                    el("join", &[], vec![]),
                ],
            ),
        ],
    );
    let unaffected = el(
        "unaffected",
        &[],
        vec![register("x20"), register("x21"), register("x22")],
    );
    el(
        "prototype",
        &[("name", "default"), ("extrapop", "0"), ("stackshift", "0")],
        vec![input, output, unaffected],
    )
}

#[test]
fn swift_models_add_the_context_self_and_four_word_returns() {
    let proto = aarch64_like();
    let m = derive_model(
        &proto,
        SWIFTASYNCCALL_THROWS,
        "x20",
        Some("x21"),
        Some("x22"),
    );
    assert_eq!(
        m.get_attribute_value("name").unwrap(),
        b"__swiftasynccall_throws"
    );
    let input = m
        .get_children()
        .iter()
        .find(|c| c.get_name() == "input")
        .unwrap();
    assert_eq!(names(input, "pentry"), ["x22", "x20", "x8", "x0", "x1"]);
    let classes: Vec<String> = input
        .get_children()
        .iter()
        .map(|c| {
            String::from_utf8_lossy(c.get_attribute_value("storage").unwrap_or(b"general"))
                .into_owned()
        })
        .collect();
    assert_eq!(
        classes,
        ["class2", "class1", "hiddenret", "general", "general"]
    );
    let output = m
        .get_children()
        .iter()
        .find(|c| c.get_name() == "output")
        .unwrap();
    assert_eq!(names(output, "pentry"), ["x0", "x1", "x2", "x3"]);
    let rules: Vec<Rc<Element>> = output
        .get_children()
        .iter()
        .filter(|c| c.get_name() == "rule")
        .cloned()
        .collect();
    assert_eq!(
        rules[0].get_children()[0]
            .get_attribute_value("minsize")
            .unwrap(),
        b"33"
    );
    let unaffected = m
        .get_children()
        .iter()
        .find(|c| c.get_name() == "unaffected")
        .unwrap();
    assert_eq!(names(unaffected, "register").len(), 0);
    let killed = m
        .get_children()
        .iter()
        .find(|c| c.get_name() == "killedbycall")
        .unwrap();
    assert_eq!(
        killed.get_children()[0]
            .get_attribute_value("name")
            .unwrap(),
        b"x21"
    );
    // The plain model: no context, the error register still preserved.
    let plain = derive_model(&proto, SWIFTCALL, "x20", None, None);
    let input = plain
        .get_children()
        .iter()
        .find(|c| c.get_name() == "input")
        .unwrap();
    assert_eq!(names(input, "pentry"), ["x20", "x8", "x0", "x1"]);
    assert!(
        plain
            .get_children()
            .iter()
            .all(|c| c.get_name() != "killedbycall")
    );
}

#[test]
fn x86_64_takes_rax_as_the_indirect_result() {
    let input = el(
        "input",
        &[],
        vec![reg_entry("RDI", &[]), reg_entry("RSI", &[])],
    );
    let output = el(
        "output",
        &[],
        vec![
            reg_entry("RAX", &[]),
            reg_entry("RDX", &[]),
            el(
                "rule",
                &[],
                vec![
                    el("datatype", &[("name", "any"), ("maxsize", "16")], vec![]),
                    el("join_dual_class", &[], vec![]),
                ],
            ),
            el(
                "rule",
                &[],
                vec![
                    el("datatype", &[("name", "any")], vec![]),
                    el("hidden_return", &[], vec![]),
                ],
            ),
        ],
    );
    let proto = el("prototype", &[("name", "__stdcall")], vec![input, output]);
    let m = derive_model(&proto, SWIFTCALL, "R13", None, None);
    let input = m
        .get_children()
        .iter()
        .find(|c| c.get_name() == "input")
        .unwrap();
    assert_eq!(names(input, "pentry"), ["R13", "RAX", "RDI", "RSI"]);
    let output = m
        .get_children()
        .iter()
        .find(|c| c.get_name() == "output")
        .unwrap();
    assert_eq!(names(output, "pentry"), ["RAX", "RDX", "RCX", "R8"]);
    let rules: Vec<Rc<Element>> = output
        .get_children()
        .iter()
        .filter(|c| c.get_name() == "rule")
        .cloned()
        .collect();
    assert_eq!(
        rules[0].get_children()[0]
            .get_attribute_value("maxsize")
            .unwrap(),
        b"32"
    );
}
