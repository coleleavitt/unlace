use super::*;

fn fixture_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/objc_sdk")
}

/// The hand-written fixture header: properties yield getter/setter pairs
/// (`getter=` honoured, `readonly` no setter), methods encode by-value
/// structs and class pointers, and an unknown type leaves the selector out.
#[test]
fn reads_the_fixture_header() {
    let sigs = read(&fixture_dir(), &[]).signatures;
    let get = |s: &str| sigs.get(s).cloned().flatten();
    assert_eq!(get("setAlpha:").as_deref(), Some("v@:d"));
    assert_eq!(get("alpha").as_deref(), Some("d@:"));
    assert_eq!(
        get("setFrame:").as_deref(),
        Some("v@:{CGRect={CGPoint=dd}{CGSize=dd}}")
    );
    assert_eq!(get("setTag:").as_deref(), Some("v@:q"));
    assert_eq!(
        sigs.get("setBadge:"),
        Some(&None),
        "Gadget's unspellable setBadge: claims the selector too"
    );
    assert_eq!(
        get("setOnChange:").as_deref(),
        Some("v@:@?"),
        "a block property"
    );
    assert_eq!(
        get("setHandler:").as_deref(),
        Some("v@:@?"),
        "a named block typedef"
    );
    assert_eq!(get("isHidden").as_deref(), Some("B@:"));
    assert_eq!(get("setHidden:").as_deref(), Some("v@:B"));
    assert!(
        !sigs.contains_key("hidden"),
        "getter=isHidden replaces the plain getter"
    );
    assert_eq!(get("superview").as_deref(), Some("@\"Widget\"@:"));
    assert!(
        !sigs.contains_key("setSuperview:"),
        "readonly has no setter"
    );
    assert_eq!(
        get("insertSubview:atIndex:").as_deref(),
        Some("v@:@\"Widget\"q")
    );
    assert_eq!(
        get("setContentMode:").as_deref(),
        Some("v@:q"),
        "NS_ENUM resolves to its base"
    );
    assert_eq!(
        get("animateWithDuration:animations:").as_deref(),
        Some("v@:d@?")
    );
    assert_eq!(
        get("setTitle:").as_deref(),
        Some("v@:@\"NSString\""),
        "a typed-enum string"
    );
    assert_eq!(
        sigs.get("setOpaqueThing:"),
        Some(&None),
        "an unknown struct is not guessed"
    );
    assert_eq!(
        get("convertRect:").as_deref(),
        Some("{CGRect={CGPoint=dd}{CGSize=dd}}@:{CGRect={CGPoint=dd}{CGSize=dd}}")
    );
    assert_eq!(
        get("countByEnumeratingWithState:objects:count:").as_deref(),
        Some(
            "Q@:^{NSFastEnumerationState=\"state\"Q\"itemsPtr\"^@\"mutationsPtr\"^Q\"extra\"[5Q]}^@Q"
        ),
        "a struct pointer carries the struct's layout, an array parameter is a pointer"
    );
}

/// A struct reached through its own member is a `void *` there, a struct
/// whose body this reader cannot spell is pointed to as `void`, and a
/// typedef'd struct is never taken for a class.
#[test]
fn struct_pointers_carry_their_layout() {
    let text = strip_comments(concat!(
        "typedef struct Node { struct Node *next; int value; } Node;\n",
        "typedef struct { int bits : 3; } Packed;\n",
        "typedef struct _Zone Zone;\n",
        "@interface W\n",
        "- (void)link:(Node *)node;\n",
        "- (void)pack:(Packed *)p;\n",
        "- (void)zone:(Zone *)z;\n",
        "- (void)count:(NSInteger *)n;\n",
        "@end\n",
    ));
    let mut types = Types::default();
    types.scan_typedefs(&text);
    let mut sdk = Sdk::default();
    scan_declarations(&text, &types, &mut sdk);
    let out = sdk.signatures;
    let get = |s: &str| out.get(s).cloned().flatten();
    assert_eq!(
        get("link:").as_deref(),
        Some("v@:^{Node=\"next\"^v\"value\"i}")
    );
    assert_eq!(get("pack:").as_deref(), Some("v@:^v"));
    assert_eq!(get("zone:").as_deref(), Some("v@:^v"));
    assert_eq!(get("count:").as_deref(), Some("v@:^q"));
}

/// A lightweight generic parameter is `id`: an array of it is `^@`, so
/// the generic and the plain declaration of one selector agree.
#[test]
fn generic_parameters_are_id() {
    let text = strip_comments(concat!(
        "@protocol E\n- (void)fill:(id _Nullable [_Nonnull])buffer;\n@end\n",
        "@interface Box<K, __covariant V> (Cat) <E>\n",
        "- (void)fill:(K _Nullable [_Nonnull])buffer;\n",
        "- (nullable V)first;\n",
        "@end\n",
    ));
    let types = Types::default();
    let mut sdk = Sdk::default();
    scan_declarations(&text, &types, &mut sdk);
    let out = sdk.signatures;
    assert_eq!(out["fill:"].as_deref(), Some("v@:^@"));
    assert_eq!(out["first"].as_deref(), Some("@@:"));
}

#[test]
fn disagreeing_declarations_are_dropped_but_classes_are_not_a_disagreement() {
    let mut out = HashMap::new();
    record(&mut out, "setView:".into(), Some("v@:@\"UIView\"".into()));
    record(&mut out, "setView:".into(), Some("v@:@\"NSView\"".into()));
    assert_eq!(
        out["setView:"].as_deref(),
        Some("v@:@"),
        "two classes named: neither is kept"
    );
    record(&mut out, "setFrame:".into(), Some("v@:@\"UIView\"".into()));
    record(&mut out, "setFrame:".into(), Some("v@:@\"UIView\"".into()));
    assert_eq!(out["setFrame:"].as_deref(), Some("v@:@\"UIView\""));
    record(&mut out, "setView:".into(), Some("v@:q".into()));
    assert_eq!(out["setView:"], None);
}

/// Non-ASCII text in a comment, a string literal, a typedef name and a
/// declared type is read without slicing a character apart: the typedef
/// name is not split into ASCII pieces, the type it cannot spell is not
/// guessed, and the neighbouring declarations still encode.
#[test]
fn non_ascii_header_text_is_read_whole() {
    let text = strip_comments(concat!(
        "// Café — résumé\n/* naïve */\n",
        "typedef NSString * CaféName;\n",
        "@interface W\n",
        "- (void)setAlpha:(CGFloat é)alpha;\n",
        "- (void)setBeta:(CGFloat)beta API_DEPRECATED(\"use — setGamma:\", ios(2.0, 13.0));\n",
        "@property (copy) NSString *title; // ünïcode\n",
        "@end\n",
    ));
    assert!(text.contains("\"use — setGamma:\"") && !text.contains("Café —"));
    let mut types = Types::default();
    types.scan_typedefs(&text);
    assert!(!types.typedefs.contains_key("Name") && !types.typedefs.contains_key("Caf"));
    let mut sdk = Sdk::default();
    scan_declarations(&text, &types, &mut sdk);
    let out = sdk.signatures;
    assert_eq!(out.get("setAlpha:"), Some(&None));
    assert_eq!(
        out.get("setBeta:").cloned().flatten().as_deref(),
        Some("v@:d")
    );
    assert_eq!(
        out.get("setTitle:").cloned().flatten().as_deref(),
        Some("v@:@\"NSString\"")
    );
}

/// A parenthesized declarator is a block only when it is a caret: a C
/// function pointer, as an argument or a property, claims its selector as
/// one this reader cannot spell instead of taking a block's `@?`.
#[test]
fn a_function_pointer_is_not_a_block() {
    let text = strip_comments(concat!(
        "typedef void (^Handler)(int);\n",
        "@interface W\n",
        "- (void)setBlock:(void (^)(int))block;\n",
        "- (void)setNullableBlock:(void (^ _Nullable)(int))block;\n",
        "- (void)setHandler:(Handler)handler;\n",
        "- (void)setFunction:(void (*)(int))function;\n",
        "- (void)setCallback:(int (* _Nullable)(void *, int))callback;\n",
        "@property (assign) void (*hook)(int);\n",
        "@property (copy) void (^done)(void);\n",
        "@end\n",
    ));
    let mut types = Types::default();
    types.scan_typedefs(&text);
    let mut sdk = Sdk::default();
    scan_declarations(&text, &types, &mut sdk);
    let out = sdk.signatures;
    let get = |s: &str| out.get(s).cloned();
    assert_eq!(get("setBlock:"), Some(Some("v@:@?".to_string())));
    assert_eq!(get("setNullableBlock:"), Some(Some("v@:@?".to_string())));
    assert_eq!(get("setHandler:"), Some(Some("v@:@?".to_string())));
    assert_eq!(get("setFunction:"), Some(None));
    assert_eq!(get("setCallback:"), Some(None));
    assert_eq!(get("hook"), Some(None));
    assert_eq!(get("setHook:"), Some(None));
    assert_eq!(get("done"), Some(Some("@?@:".to_string())));
}

/// Each `@interface` gives its class a superclass (a category adds methods
/// only) and every declaration its declared result.
#[test]
fn interfaces_give_classes_their_superclass_and_results() {
    let sdk = read(&fixture_dir().with_file_name("objc_sdk_sends"), &[]);
    let class = |c: &str| &sdk.classes[c];
    assert_eq!(class("KNumber").superclass.as_deref(), Some("KValue"));
    assert_eq!(class("KValue").superclass.as_deref(), Some("KObject"));
    assert_eq!(class("KObject").superclass, None);
    let method = |c: &str, cm: bool, s: &str| {
        class(c)
            .methods
            .get(&(cm, s.to_string()))
            .map(|m| (m.label.clone(), m.returns.clone()))
    };
    assert_eq!(
        method("KNumber", true, "numberWithLongLong:"),
        Some((
            "+[KNumber numberWithLongLong:]".to_string(),
            Some(ObjcReturn::Class("KNumber".into()))
        ))
    );
    assert_eq!(
        method("KValue", false, "stringValue").and_then(|m| m.1),
        Some(ObjcReturn::Class("KString".into()))
    );
    assert_eq!(
        method("KObject", true, "alloc").and_then(|m| m.1),
        Some(ObjcReturn::Instancetype)
    );
    assert_eq!(
        method("KNumber", false, "longLongValue"),
        Some(("-[KNumber longLongValue]".to_string(), None))
    );
}

#[test]
fn comments_and_preprocessor_lines_are_dropped() {
    let t = strip_comments(
        "#import <X.h>\n- (void)a; // c\n/* multi\nline */ - (void)b;\n#define Y \\\n  1\n@property (copy) NSString *s; // \"quoted\"\n",
    );
    assert!(!t.contains("import") && !t.contains("multi") && !t.contains("define"));
    assert!(t.contains("- (void)a;") && t.contains("- (void)b;") && t.contains("NSString *s;"));
}
