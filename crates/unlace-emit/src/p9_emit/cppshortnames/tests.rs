use super::*;

#[test]
fn a_qualified_function_name_loses_its_inline_namespace() {
    assert_eq!(
        short_type("std::__cxx11::basic_string::_M_append"),
        "std::basic_string::_M_append"
    );
    assert_eq!(
        short_type("std::__1::vector::push_back"),
        "std::vector::push_back"
    );
    assert_eq!(short_type("main"), "main");
}

#[test]
fn a_character_template_over_its_defaults_prints_its_alias() {
    for (long, short) in [
        (
            "std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >",
            "std::string",
        ),
        (
            "basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >",
            "std::wstring",
        ),
        (
            "std::basic_ostream<char, std::char_traits<char> >",
            "std::ostream",
        ),
        ("std::basic_istream<wchar_t>", "std::wistream"),
        (
            "std::__1::basic_string_view<char16_t>",
            "std::u16string_view",
        ),
        (
            "class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >",
            "class std::string",
        ),
        (
            "std::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >",
            "std::ostringstream",
        ),
    ] {
        assert_eq!(short_type(long), short, "{long}");
    }
}

#[test]
fn a_container_loses_only_its_own_defaults() {
    for (long, short) in [
        ("std::vector<int, std::allocator<int> >", "std::vector<int>"),
        (
            "std::map<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<int>, std::allocator<std::pair<int const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >",
            "std::map<int, std::string>",
        ),
        (
            "std::unique_ptr<Foo, std::default_delete<Foo> >",
            "std::unique_ptr<Foo>",
        ),
        (
            "std::vector<int, std::allocator<long> >",
            "std::vector<int, std::allocator<long>>",
        ),
        (
            "std::set<int, std::greater<int> >",
            "std::set<int, std::greater<int>>",
        ),
        (
            "std::pair<int, std::less<int> >",
            "std::pair<int, std::less<int>>",
        ),
    ] {
        assert_eq!(short_type(long), short, "{long}");
    }
}

#[test]
fn other_names_print_as_they_are() {
    for name in [
        "basic_string<char>",
        "mystd::__cxx11::thing",
        "std::basic_string<char, MyTraits>",
        "std::basic_ostream<char16_t>",
        "int",
        "std::vector<int",
        "Foo<std::bar>>",
    ] {
        assert_eq!(short_type(name), name, "{name}");
    }
    assert_eq!(
        short_type("std::__cxx11::list<int>::iterator"),
        "std::list<int>::iterator"
    );
}

#[test]
fn deep_nesting_is_left_alone() {
    let deep = format!("{}int{}", "std::vector<".repeat(40), ">".repeat(40));
    assert_eq!(short_type(&deep), deep.as_str());
}

#[test]
fn an_inline_namespace_scope_goes_only_after_std() {
    let path = |v: &[&str]| v.iter().map(|s| s.to_string()).collect::<Vec<_>>();
    assert_eq!(
        short_scopes(path(&["std", "__cxx11", "basic_string"])),
        path(&["std", "basic_string"])
    );
    assert_eq!(
        short_scopes(path(&["ns", "__1", "x"])),
        path(&["ns", "__1", "x"])
    );
}
