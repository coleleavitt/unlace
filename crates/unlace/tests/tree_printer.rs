//! The exported C syntax tree (`unlace::unstable::printer`) end to end on a raw x86-64 blob:
//! the tree prints back to the code, says what each statement is and where it came from, and
//! a printer of another flavour changes only what it overrides.

use unlace::unstable::printer::{
    Kind, Node, Printer, TreeError, Writer, print, print_c, tree_from_json,
};
use unlace::{Decompiler, Language, Target};

/// `f` at 0x1000 calls `g` (0x1020) and `h` (0x1030) and returns its argument:
/// `push rbx; mov ebx, edi; call g; call h; mov eax, ebx; pop rbx; ret`.
fn blob() -> Vec<u8> {
    let mut bytes = vec![0xcc; 0x40];
    bytes[..0x11].copy_from_slice(&[
        0x53, 0x89, 0xfb, 0xe8, 0x18, 0x00, 0x00, 0x00, 0xe8, 0x23, 0x00, 0x00, 0x00, 0x89, 0xd8,
        0x5b, 0xc3,
    ]);
    bytes[0x20] = 0xc3;
    bytes[0x30] = 0xc3;
    bytes
}

fn declared() -> Decompiler {
    Decompiler::from_raw(
        blob(),
        Target::X86_64,
        0x1000,
        &[],
        &[0x1000, 0x1020, 0x1030],
    )
    .unwrap()
    .with_function(0x1000, Some(0x1011), Some("f"))
    .with_function(0x1020, Some(0x1021), Some("g"))
    .with_function(0x1030, Some(0x1031), Some("h"))
    .with_prototype(0x1000, "int f(int a)")
    .with_prototype(0x1020, "void g(void)")
    .with_prototype(0x1030, "void h(void)")
}

fn kinds(node: &Node) -> Vec<Kind> {
    node.children.iter().map(|child| child.kind).collect()
}

#[test]
fn the_tree_prints_back_to_the_code_and_says_what_each_part_is() {
    let mut decompiler = declared();
    let code = decompiler.decompile(0x1000).unwrap().c;
    let tree = decompiler.tree(0x1000).unwrap();
    assert_eq!(print_c(&tree), code);
    assert_eq!(decompiler.decompile(0x1000).unwrap().c, code);

    let [prototype, body] = tree.root.children.as_slice() else {
        panic!("{:?}", kinds(&tree.root));
    };
    assert_eq!(prototype.text, "int f(int a)");
    assert_eq!(kinds(prototype), [Kind::Type, Kind::Func, Kind::Decl]);
    assert_eq!(prototype.children[2].ty.as_deref(), Some("int"));

    let statements: Vec<&Node> = body
        .children
        .iter()
        .filter(|item| item.kind.is_statement())
        .collect();
    let [first, second, last] = statements.as_slice() else {
        panic!("{:?}", kinds(body));
    };
    assert_eq!(
        [first.kind, second.kind, last.kind],
        [Kind::Expr, Kind::Expr, Kind::Return]
    );
    for (statement, callee, address) in [(first, "g", 0x1003), (second, "h", 0x1008)] {
        let call = &statement.children[0];
        assert_eq!(
            (call.kind, call.children[0].text.as_str()),
            (Kind::Call, callee)
        );
        assert_eq!(statement.addresses, [address]);
        assert_eq!(statement.span.line, statement.span.end_line);
    }
    let value = &last.children[0];
    assert_eq!((value.kind, value.ty.as_deref()), (Kind::Var, Some("int")));
    let line = code.lines().nth(last.span.line as usize - 1).unwrap();
    assert_eq!(
        &line[last.span.col as usize..last.span.end_col as usize],
        format!("return {};", value.text)
    );
}

struct RustLike;

impl Printer for RustLike {
    fn prototype(&mut self, w: &mut Writer, node: &Node) {
        let text = |kind| {
            node.children
                .iter()
                .find(|child| child.kind == kind)
                .map_or("_", |child| child.text.as_str())
        };
        w.push(&format!(
            "fn {}() -> {}",
            text(Kind::Func),
            text(Kind::Type)
        ));
    }
}

#[test]
fn a_printer_of_another_flavour_changes_only_what_it_overrides() {
    let mut decompiler = declared();
    let code = decompiler.decompile(0x1000).unwrap().c;
    let tree = decompiler.tree_named("f").unwrap();
    assert_eq!(
        print(&mut RustLike, &tree),
        code.replace("int f(int a)", "fn f() -> int")
    );
}

#[test]
fn a_function_without_a_tree_says_why() {
    let mut rust = declared().with_language(Language::Rust);
    match rust.tree(0x1000) {
        Err(TreeError::Unavailable(reason)) => assert!(reason.contains("C output"), "{reason}"),
        other => panic!("{other:?}"),
    }
    assert!(matches!(
        declared().tree_named("nowhere"),
        Err(TreeError::Decompile(unlace::Error::NotFound { .. }))
    ));
    assert!(matches!(tree_from_json("[]"), Err(TreeError::Json(_))));
}
