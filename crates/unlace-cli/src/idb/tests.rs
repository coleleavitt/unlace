use super::*;

use idb_rs::database::{Comment, LocalType};

fn function(start: u64, name: &str, prototype: Option<&str>) -> Function {
    Function {
        start,
        end: start + 0x10,
        name: name.to_string(),
        named: true,
        no_return: false,
        library: false,
        thunk: false,
        prototype: prototype.map(str::to_string),
        comment: None,
        repeatable_comment: None,
        tails: Vec::new(),
    }
}

fn local(name: &str, declaration: &str) -> LocalType {
    LocalType {
        ordinal: 0,
        name: name.to_string(),
        declaration: declaration.to_string(),
    }
}

const ALL: Selection = Selection {
    types: true,
    comments: true,
};

#[test]
fn maps_ida_processors_to_sleigh_targets() {
    assert_eq!(
        sleigh_target("metapc", 64, false).as_deref(),
        Some("x86:LE:64:default")
    );
    assert_eq!(
        sleigh_target("metapc", 32, false).as_deref(),
        Some("x86:LE:32:default")
    );
    assert_eq!(
        sleigh_target("ARM", 64, false).as_deref(),
        Some("AARCH64:LE:64:v8A")
    );
    assert_eq!(
        sleigh_target("ARM", 32, false).as_deref(),
        Some("ARM:LE:32:v8")
    );
    assert_eq!(
        sleigh_target("ARMB", 32, true).as_deref(),
        Some("ARM:BE:32:v8")
    );
    assert_eq!(
        sleigh_target("mipsb", 32, true).as_deref(),
        Some("MIPS:BE:32:default")
    );
    assert_eq!(
        sleigh_target("mipsl", 64, false).as_deref(),
        Some("MIPS:LE:64:default")
    );
    assert_eq!(
        sleigh_target("ppc", 32, true).as_deref(),
        Some("PowerPC:BE:32:default")
    );
    assert_eq!(
        sleigh_target("riscv", 64, false).as_deref(),
        Some("RISCV:LE:64:RV64GC")
    );
    assert_eq!(sleigh_target("no-such-cpu", 32, false), None);
}

#[test]
fn rewrites_ida_spellings_into_the_engine_grammar() {
    assert_eq!(sanitize_c("unsigned __int8 *buf", false), "uint1 *buf");
    assert_eq!(sanitize_c("signed __int16 x", false), "int2 x");
    assert_eq!(sanitize_c("__int64 x", false), "int8 x");
    assert_eq!(sanitize_c("_DWORD *p", false), "uint4 *p");
    assert_eq!(
        sanitize_c("void __noreturn __cdecl f(int a)", false),
        "void f(int a)"
    );
    assert_eq!(
        sanitize_c("__int64 __fastcall g(__int64 a)", false),
        "int8 g(int8 a)"
    );
    assert_eq!(
        sanitize_c("int __stdcall h(int a)", true),
        "int __stdcall h(int a)"
    );
    assert_eq!(
        sanitize_c("struct __attribute__((aligned(8))) S {int a;};", false),
        "struct S {int a;};"
    );
}

#[test]
fn qualifies_bare_tag_references() {
    let db = Database {
        types: vec![
            local(
                "_LIST_ENTRY",
                "struct _LIST_ENTRY {_LIST_ENTRY *Flink;_LIST_ENTRY *Blink;};",
            ),
            local("LIST_ENTRY", "typedef _LIST_ENTRY LIST_ENTRY;"),
            local("option", "struct option {const char *name;int has_arg;};"),
        ],
        ..Database::default()
    };
    let tags = Tags::of(&db);
    assert_eq!(
        tags.qualify("struct _LIST_ENTRY {_LIST_ENTRY *Flink;_LIST_ENTRY *Blink;};"),
        "struct _LIST_ENTRY {struct _LIST_ENTRY *Flink;struct _LIST_ENTRY *Blink;};"
    );
    assert_eq!(
        tags.qualify("typedef _LIST_ENTRY LIST_ENTRY;"),
        "typedef struct _LIST_ENTRY LIST_ENTRY;"
    );
    assert_eq!(tags.qualify("int option;"), "int option;");
    assert_eq!(
        tags.qualify("const struct option *longopts"),
        "const struct option *longopts"
    );
}

#[test]
fn turns_a_database_into_directives() {
    let mut exit = function(0x2000, ".exit", Some("void __noreturn .exit(int status)"));
    exit.no_return = true;
    let mut main = function(
        0x1000,
        "main",
        Some("int __cdecl main(int argc, char **argv)"),
    );
    main.comment = Some("entry\npoint".to_string());
    let db = Database {
        functions: vec![
            main,
            exit,
            function(
                0x3000,
                "custom",
                Some("int __usercall custom@<eax>(int a@<ecx>)"),
            ),
        ],
        comments: vec![
            Comment {
                address: 0x1004,
                kind: CommentKind::Regular,
                text: "the loop".to_string(),
            },
            Comment {
                address: 0x1008,
                kind: CommentKind::Regular,
                text: "argc".to_string(),
            },
            Comment {
                address: 0x9000,
                kind: CommentKind::Regular,
                text: "outside every function".to_string(),
            },
        ],
        types: vec![local("DWORD", "typedef unsigned int DWORD;")],
        ..Database::default()
    };
    let k = knowledge(&db, Some("x86:LE:64:default"), ALL);
    assert_eq!(
        k.directives,
        [
            "typedef typedef unsigned int DWORD;",
            "function 0x1000-0x1010=main",
            "function 0x2000-0x2010=.exit",
            "function 0x3000-0x3010=custom",
            "prototype 0x1000 int main(int argc, char **argv)",
            "prototype 0x2000 void _exit(int status)",
            "comment 0x1000 entry point",
            "comment 0x1004 the loop",
        ]
    );
    assert_eq!(k.noreturn, [0x2000]);
    assert_eq!(k.skipped.len(), 1);
    assert_eq!(k.skipped[0].0, "prototype 0x3000");
    for d in &k.directives {
        unlace_console::assertsyntax::parse_directive(d).unwrap_or_else(|e| panic!("{d}: {e}"));
    }
    let bare = knowledge(
        &db,
        None,
        Selection {
            types: false,
            comments: false,
        },
    );
    assert!(
        bare.directives
            .iter()
            .all(|d| d.starts_with("function ") || d.starts_with("prototype "))
    );
}

#[test]
fn a_function_with_tails_has_no_declared_end() {
    let mut f = function(0x1000, "split", None);
    f.tails.push((0x5000, 0x5020));
    let db = Database {
        functions: vec![f],
        ..Database::default()
    };
    let k = knowledge(&db, None, ALL);
    assert_eq!(k.directives, ["function 0x1000=split"]);
}

const FIXTURE: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/idb/cat.i64");

#[test]
fn reads_the_fixture_database() {
    let db = open(FIXTURE, true).expect("the fixture opens");
    assert_eq!(db.info.processor, "metapc");
    assert_eq!(db.info.bitness, 64);
    assert_eq!(
        sleigh_target(&db.info.processor, db.info.bitness, db.info.big_endian).as_deref(),
        Some("x86:LE:64:default")
    );
    assert!(db.functions.iter().any(|f| f.name == "main"));
    let main = db.functions.iter().find(|f| f.name == "main").unwrap();
    assert!(db.memory.iter().any(|run| {
        run.perms.execute
            && run.start <= main.start
            && main.start < run.start + run.bytes.len() as u64
    }));
    let k = knowledge(&db, Some("x86:LE:64:default"), ALL);
    assert_eq!(k.counts["functions"], db.functions.len());
    assert!(k.counts["prototypes"] > 0);
    for d in k.directives.iter().filter(|d| d.starts_with("function ")) {
        unlace_console::assertsyntax::parse_directive(d).unwrap_or_else(|e| panic!("{d}: {e}"));
    }
}

#[test]
fn info_and_list_documents() {
    let db = open(FIXTURE, false).expect("the fixture opens");
    let info = info_json(FIXTURE, &db);
    assert_eq!(info["target"], "x86:LE:64:default");
    assert_eq!(info["counts"]["functions"], db.functions.len());
    for kind in [
        "functions",
        "segments",
        "names",
        "comments",
        "types",
        "entries",
    ] {
        records(&db, kind).unwrap_or_else(|e| panic!("{kind}: {e}"));
    }
    assert!(records(&db, "bogus").is_err());
}
