use super::*;

fn parse(xml: &str) -> std::rc::Rc<unlace_base::xml::Element> {
    let mut store = unlace_base::xml::DocumentStorage::new();
    store
        .parse_document(xml.as_bytes())
        .unwrap()
        .get_root()
        .clone()
}

/// The nominated model name is read off the element; a spec without one (the
/// common case) yields `None`, which is what leaves the language untouched.
#[test]
fn reads_the_nominated_model_name() {
    let with = parse(
        r#"<compiler_spec>
                 <eval_current_prototype name="__fastcall/__thiscall/__stdcall"/>
               </compiler_spec>"#,
    );
    assert_eq!(
        eval_current_model_name(&with).as_deref(),
        Some("__fastcall/__thiscall/__stdcall")
    );

    let without = parse(r#"<compiler_spec><default_proto/></compiler_spec>"#);
    assert_eq!(eval_current_model_name(&without), None);

    let empty = parse(r#"<compiler_spec><eval_current_prototype name=""/></compiler_spec>"#);
    assert_eq!(
        eval_current_model_name(&empty),
        None,
        "an empty name nominates nothing"
    );
}
