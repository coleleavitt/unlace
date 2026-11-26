//! `--storage`: the `storage` list of a `--json` variable row, which registers
//! and stack slots hold the variable and in which instruction address ranges. The facts
//! asserted are read off the fixture's own listing (`objdump -d sample.elf`):
//!
//! ```text
//! 1161 <sum_to>: endbr64
//! 1165: push %rbp            1169: mov %edi,-0x14(%rbp)     ; n spilled
//! 116c: movq $0,-0x8(%rbp)   ; acc = 0
//! 1174: movl $1,-0xc(%rbp)   ; i = 1
//! 117b: jmp 118a
//! 117d: mov -0xc(%rbp),%eax  1180: cltq
//! 1182: add %rax,-0x8(%rbp)  ; acc += i
//! 1186: addl $1,-0xc(%rbp)   ; i += 1
//! 118a: mov -0xc(%rbp),%eax  118d: cmp -0x14(%rbp),%eax   1190: jle 117d
//! 1192: mov -0x8(%rbp),%rax  1196: pop %rbp   1197: ret
//! ```
use crate::common;

use serde_json::{Value, json};

fn sample() -> String {
    common::repo_root()
        .join("integrations/web/test/fixtures/sample.elf")
        .to_str()
        .expect("UTF-8 fixture path")
        .to_owned()
}

fn run(args: &[&str]) -> Value {
    run_on(&sample(), args)
}

fn run_on(binary: &str, args: &[&str]) -> Value {
    let specs = common::repo_root().join("specs");
    let mut argv = vec![args[0], binary];
    argv.extend(&args[1..]);
    argv.extend([
        "--json",
        "--sleighpath",
        specs.to_str().expect("UTF-8 path"),
    ]);
    let (stdout, stderr, status) = common::run_unlace(&argv);
    assert_eq!(status, 0, "{args:?}: {stderr}");
    serde_json::from_str(&stdout).expect("--json")
}

/// `(register or space, offset, size, [[start, end)...])` of a variable's pieces.
fn pieces(function: &Value, name: &str, kind: &str) -> Vec<(String, i64, u64, Vec<(u64, u64)>)> {
    let variable = function["variables"]
        .as_array()
        .expect("variables")
        .iter()
        .find(|v| v["name"] == name && v["kind"] == kind)
        .unwrap_or_else(|| panic!("no {kind} {name} in {}", function["variables"]));
    variable["storage"]
        .as_array()
        .expect("storage")
        .iter()
        .map(|piece| {
            (
                piece["register"]
                    .as_str()
                    .unwrap_or_else(|| piece["space"].as_str().expect("space"))
                    .to_owned(),
                piece["offset"].as_i64().expect("offset"),
                piece["size"].as_u64().expect("size"),
                piece["ranges"]
                    .as_array()
                    .expect("ranges")
                    .iter()
                    .map(|r| (r["start"].as_u64().unwrap(), r["end"].as_u64().unwrap()))
                    .collect(),
            )
        })
        .collect()
}

#[test]
fn a_variable_lists_the_registers_and_slots_that_hold_it() {
    let doc = run(&["decompile", "sum_to", "--storage"]);
    let sum_to = &doc["functions"][0];
    // `acc` lives in its slot from the instruction after its first store to
    // the load that returns it.
    assert_eq!(
        pieces(sum_to, "acc", "stack"),
        [("stack".into(), -16, 8, vec![(0x1174, 0x1196)])]
    );
    // `n` arrives in edi, which nothing overwrites before the last compare,
    // and is in its spill slot from the instruction after the spill.
    assert_eq!(
        pieces(sum_to, "n", "arg"),
        [
            ("edi".into(), 0x38, 4, vec![(0x1161, 0x1192)]),
            ("stack".into(), -28, 4, vec![(0x116c, 0x1192)]),
        ]
    );
    // `i` is in its slot from after `i = 1`; eax holds it after each load,
    // until the increment makes the slot the newer value (0x118a reloads it).
    assert_eq!(
        pieces(sum_to, "i", "stack"),
        [
            ("eax".into(), 0, 4, vec![(0x117d, 0x118a), (0x118d, 0x1192)]),
            ("stack".into(), -20, 4, vec![(0x117b, 0x1192)]),
        ]
    );
    // A frame slot no code of the function names keeps its declared home.
    assert_eq!(
        pieces(sum_to, "local_8", "stack"),
        [("stack".into(), -8, 8, vec![])]
    );
}

/// A register holds the variable until the next instruction that writes it,
/// whether or not the decompiler kept that write (`objdump -d sample.elf`):
///
/// ```text
/// 1198 <main>: endbr64          119c: push %rbp
/// 11a4: mov %edi,-0x14(%rbp)    11ab: mov -0x14(%rbp),%eax   ; argc
/// 11ae: mov $0x3,%esi           11b3: mov %eax,%edi          11b5: call add
/// 11ba: mov %eax,-0xc(%rbp)     11bd: mov -0xc(%rbp),%eax    11c0: mov %eax,%edi
/// 11c2: call sum_to             11c7: mov %rax,-0x8(%rbp)    ; v1
/// 11cb: mov -0x8(%rbp),%rax     11cf: mov %rax,%rsi
/// 11d2: lea 0xe2b(%rip),%rax    11d9: mov %rax,%rdi          11dc: mov $0x0,%eax
/// 11e1: call printf             11e6: mov -0x8(%rbp),%rax    11ea: leave   11eb: ret
/// ```
#[test]
fn a_register_holds_a_variable_until_it_is_next_written() {
    let doc = run(&["decompile", "main", "--storage"]);
    let main = &doc["functions"][0];
    let register = |name: &str, kind: &str, register: &str| {
        pieces(main, name, kind)
            .into_iter()
            .find(|piece| piece.0 == register)
            .unwrap_or_else(|| panic!("{name} is never in {register}"))
            .3
    };
    // edi is argc from the entry up to the argument set-up that overwrites it.
    assert_eq!(register("argc", "arg", "edi"), [(0x1198, 0x11b5)]);
    // eax is argc from its load to the call that returns in it.
    assert_eq!(register("argc", "arg", "eax"), [(0x11ae, 0x11ba)]);
    // rax is the result of sum_to until the format string's address goes
    // there, and again from the reload that returns it.
    assert_eq!(
        register("v1", "register", "rax"),
        [(0x11c7, 0x11d9), (0x11ea, 0x11ec)]
    );
}

/// A branch and the instruction in its delay slot are one instruction: what
/// the delay slot writes takes effect with the branch
/// (`unlace disassemble bejoin_discard_mips32_O1.o drop`):
///
/// ```text
/// 40001c: addiu sp,sp,-0x20     400020: sw ra,0x1c(sp)    400024: sra v0,a0,0x1f
/// 400028: sw a0,0x14(sp)        40002c: sw v0,0x10(sp)
/// 400030: jal ext               400034: nop
/// 400038: lw v1,0x14(sp)        40003c: lw v0,0x10(sp)    400040: or v0,zero,zero
/// 400044: lw ra,0x1c(sp)        400048: jr ra             40004c: addiu sp,sp,0x20
/// ```
#[test]
fn a_delay_slot_belongs_to_its_branch() {
    let doc = run_on(
        &common::fixture("bejoin_discard_mips32_O1.o"),
        &["decompile", "drop", "--storage"],
    );
    assert_eq!(
        pieces(&doc["functions"][0], "param_1", "arg"),
        [
            // Loaded back after the call, and returned in it.
            ("v1".into(), 0xc, 4, vec![(0x40003c, 0x400050)]),
            // The argument register, up to and including the call.
            ("a0".into(), 0x10, 4, vec![(0x40001c, 0x400038)]),
            // The spill slot, from the instruction after the store.
            ("stack".into(), -12, 4, vec![(0x40002c, 0x400050)]),
        ]
    );
}

/// A conditional move is one instruction per path for the walk, so its write
/// counts only where it is made (`unlace disassemble ptx.o compare_words`):
///
/// ```text
/// 400017: mov 0x8(%rsi),%r10    40001b: mov 0x8(%rdi),%r9     40001f: cmp %r9,%r10
/// 400022: mov %r9,%rcx          400025: cmovle %r10,%rcx      400029: cmpb $0x0,ignore_case
/// ```
#[test]
fn a_conditional_move_writes_on_the_path_that_makes_it() {
    let doc = run_on(
        &common::fixture("ptx.o"),
        &["decompile", "compare_words", "--storage"],
    );
    let in_rcx = |address: u64| -> Vec<&str> {
        let holds = |piece: &Value| {
            let ranges = piece["ranges"].as_array().expect("ranges").iter();
            piece["register"] == "rcx"
                && ranges.clone().any(|r| {
                    r["start"].as_u64() <= Some(address) && Some(address) < r["end"].as_u64()
                })
        };
        doc["functions"][0]["variables"]
            .as_array()
            .expect("variables")
            .iter()
            .filter(|v| v["storage"].as_array().expect("storage").iter().any(holds))
            .map(|v| v["name"].as_str().expect("name"))
            .collect()
    };
    // After the move rcx is `length`, the smaller of the two, on both paths.
    assert_eq!(in_rcx(0x400029), ["length"]);
    // On entry to it rcx is the copy of r9 alone: not yet `length`, and never
    // the r10 the move may take.
    let before = in_rcx(0x400025);
    assert_eq!(before.len(), 1, "{before:?}");
    assert_ne!(before[0], "length");
}

/// The key is opt-in, so a document that does not ask for it is the document
/// it was, and it goes where the variables go.
#[test]
fn storage_is_asked_for_and_goes_with_the_variables() {
    let plain = run(&["decompile", "sum_to"]);
    assert!(!plain.to_string().contains("\"storage\""));
    let mut with = run(&["decompile", "sum_to", "--storage"]);
    for variable in with["functions"][0]["variables"]
        .as_array_mut()
        .expect("variables")
    {
        assert!(
            variable
                .as_object_mut()
                .unwrap()
                .remove("storage")
                .is_some()
        );
    }
    assert_eq!(with, plain);
    let doc = run(&["decompile", "sum_to", "--storage", "--no-vars"]);
    assert_eq!(doc["functions"][0]["variables"], json!([]));
    let doc = run(&["decompile", "sum_to", "--storage", "--omit", "variables"]);
    assert!(doc["functions"][0].get("variables").is_none());
    assert!(!doc.to_string().contains("\"storage\""));
}

/// A `--jobs` worker's record carries the same storage the serial run reports.
#[test]
fn storage_crosses_the_worker_pool() {
    let common = [
        "decompile-all",
        "--storage",
        "--option",
        "protoorder",
        "off",
    ];
    let serial = run(&common);
    let pooled = run(&[&common[..], &["--jobs", "2"]].concat());
    let variables = |doc: &Value| -> Vec<Value> {
        doc["functions"]
            .as_array()
            .expect("functions")
            .iter()
            .map(|f| f["variables"].clone())
            .collect()
    };
    assert_eq!(variables(&serial), variables(&pooled));
    assert!(
        serial.to_string().contains("\"ranges\":[{"),
        "no storage ranges at all"
    );
}
