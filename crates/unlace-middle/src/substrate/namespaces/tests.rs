use super::*;

fn path(v: &[&str]) -> Vec<String> {
    v.iter().map(|s| s.to_string()).collect()
}

#[test]
fn minimal_prints_what_the_use_site_cannot_see() {
    let unused = |_: &str, _: usize| false;
    let minimal = NamespaceStrategy::MinimalNamespaces;
    // A sibling class's method, called from a constructor.
    assert_eq!(
        scope_prefix(
            minimal,
            "instance",
            &path(&["UIThemeManager"]),
            &path(&["ArticleListWidget"]),
            &unused
        ),
        path(&["UIThemeManager"])
    );
    // A method of the same class needs nothing.
    assert!(
        scope_prefix(
            minimal,
            "setupLayout",
            &path(&["ArticleListWidget"]),
            &path(&["ArticleListWidget"]),
            &unused
        )
        .is_empty()
    );
    // Two levels, outermost first.
    assert_eq!(
        scope_prefix(
            minimal,
            "smallIconSize",
            &path(&["Gui", "Utils"]),
            &path(&["ArticleListWidget"]),
            &unused
        ),
        path(&["Utils", "Gui"])
    );
    // A global function from inside a class.
    assert!(scope_prefix(minimal, "free", &[], &path(&["ArticleListWidget"]), &unused).is_empty());
    // A global the function shadows with a local of the same name.
    assert_eq!(
        scope_prefix(minimal, "count", &[], &[], &|n: &str, _: usize| n
            == "count"),
        path(&[""])
    );
}

#[test]
fn all_and_none() {
    let unused = |_: &str, _: usize| false;
    let sym = path(&["Gui", "Utils"]);
    assert_eq!(
        scope_prefix(
            NamespaceStrategy::AllNamespaces,
            "f",
            &sym,
            &path(&["Utils", "Gui"]),
            &unused
        ),
        path(&["Utils", "Gui"])
    );
    assert!(scope_prefix(NamespaceStrategy::NoNamespaces, "f", &sym, &[], &unused).is_empty());
    assert_eq!(
        declaration_prefix(NamespaceStrategy::MinimalNamespaces, &sym),
        path(&["Utils", "Gui"])
    );
    assert!(declaration_prefix(NamespaceStrategy::NoNamespaces, &sym).is_empty());
}
