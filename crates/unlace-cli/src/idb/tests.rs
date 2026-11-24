use super::*;

use unlace_idb::{Comment, LocalType, TypeInfo};

fn function(start: u64, name: &str, prototype: Option<&str>) -> Function {
    Function {
        start,
        end: start + 0x10,
        name: name.to_string(),
        named: true,
        no_return: false,
        library: false,
        thunk: false,
        type_info: prototype.map(|_| TypeInfo::default()),
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
fn turns_a_database_into_directives() {
    let mut exit = function(0x2000, ".exit", Some("void _exit(int status)"));
    exit.no_return = true;
    let mut main = function(0x1000, "main", Some("int main(int argc, char **argv)"));
    main.comment = Some("entry\npoint".to_string());
    let mut custom = function(0x3000, "custom", None);
    custom.type_info = Some(TypeInfo::default());
    let db = Database {
        functions: vec![main, exit, custom],
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
    let k = knowledge(&db, ALL);
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
    let k = knowledge(&db, ALL);
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
    let k = knowledge(&db, ALL);
    assert_eq!(k.counts["functions"], db.functions.len());
    assert!(k.counts["prototypes"] > 0);
    assert!(k.counts["types"] > 0);
    assert!(
        db.types
            .iter()
            .any(|t| t.declaration.starts_with("struct option {"))
    );
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

fn strings(args: &[&str]) -> Vec<String> {
    args.iter().map(|a| a.to_string()).collect()
}

fn after<'a>(args: &'a [String], flag: &str) -> Vec<&'a str> {
    args.windows(2)
        .filter(|w| w[0] == flag)
        .map(|w| w[1].as_str())
        .collect()
}

#[test]
fn a_database_input_becomes_a_raw_load() {
    assert!(is_database_file(FIXTURE));
    let mut args = strings(&[FIXTURE, "--json"]);
    let mut temp = Vec::new();
    prepare_args("decompile-all", &mut args, &mut temp).expect("prepares");
    assert_eq!(after(&args, "--target"), ["x86:LE:64:default"]);
    assert!(args.iter().any(|a| a == "--raw-image"));
    assert_eq!(after(&args, "--base"), ["0x400000"]);
    let db = open(FIXTURE, false).unwrap();
    assert_eq!(after(&args, "--entry").len(), db.functions.len());
    let assert_file = after(&args, "--assert");
    assert_eq!(assert_file.len(), 1);
    let path = assert_file[0].strip_prefix('@').expect("an @file");
    assert_eq!(temp, [PathBuf::from(path)]);
    let directives = std::fs::read_to_string(path).expect("written");
    assert!(
        directives
            .lines()
            .any(|l| l.starts_with("function ") && l.ends_with("=main"))
    );
    unlace_console::assertsyntax::parse_directive_flag(assert_file[0]).expect("every line parses");
    let _ = std::fs::remove_file(path);

    let mut again = args.clone();
    prepare_args("decompile-all", &mut again, &mut Vec::new()).unwrap();
    assert_eq!(again, args, "an already raw argument list is left alone");
}

#[test]
fn names_select_through_the_database() {
    let main = function_address(FIXTURE, "main").expect("main");
    assert!(main.starts_with("0x"));
    assert!(function_address(FIXTURE, "no_such_function").is_err());

    let mut args = strings(&[FIXTURE, "--functions", "main", "--json"]);
    let mut temp = Vec::new();
    prepare_args("decompile-all", &mut args, &mut temp).unwrap();
    assert!(!args.iter().any(|a| a == "--functions"));
    assert_eq!(after(&args, "--addr"), [main.as_str()]);
    assert!(after(&args, "--entry").is_empty());
    for path in temp {
        let _ = std::fs::remove_file(path);
    }

    let mut args = strings(&[FIXTURE, "main"]);
    let mut temp = Vec::new();
    prepare_args("decompile", &mut args, &mut temp).unwrap();
    assert!(after(&args, "--entry").is_empty());
    for path in temp {
        let _ = std::fs::remove_file(path);
    }
}

#[test]
fn the_raw_load_maps_segments_and_no_return_functions() {
    let load = raw_load(FIXTURE).unwrap().expect("a database");
    assert!(!load.runs.is_empty());
    assert!(
        load.runs
            .windows(2)
            .all(|w| w[0].0 + w[0].1.len() as u64 <= w[1].0)
    );
    let db = open(FIXTURE, false).unwrap();
    let exit = db
        .functions
        .iter()
        .find(|f| f.no_return)
        .expect("a no-return function");
    assert!(load.noreturn.contains(&exit.start));
    let notice = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/idb/NOTICE.md");
    assert!(!is_database_file(notice));
    assert!(raw_load(notice).unwrap().is_none());
}
