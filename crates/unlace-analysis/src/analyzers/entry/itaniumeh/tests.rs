use super::*;

fn clause_names(name: &str) -> Vec<(u64, u64, u64, Vec<String>)> {
    let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(path).expect("fixture");
    let file = object::File::parse(&*bytes).expect("elf");
    collect_call_sites(&file)
        .into_iter()
        .map(|s| {
            let names = s
                .clauses
                .iter()
                .map(|c| match c {
                    EhClause::Cleanup => "cleanup".to_string(),
                    EhClause::Catch { type_name, .. } => {
                        type_name.clone().unwrap_or_else(|| "?".into())
                    }
                    EhClause::CatchAll { .. } => "...".to_string(),
                    EhClause::Filter { .. } => "throw()".to_string(),
                })
                .collect();
            (s.start, s.end, s.pad, names)
        })
        .collect()
}

fn site(start: u64, end: u64, pad: u64, names: &[&str]) -> (u64, u64, u64, Vec<String>) {
    (
        start,
        end,
        pad,
        names.iter().map(|n| n.to_string()).collect(),
    )
}

/// `Odd` has hidden visibility, so only its `type_info` name string names it.
#[test]
fn x86_64_lsda_names_a_hidden_class_from_its_name_string() {
    assert_eq!(
        clause_names("ehcatch_x86_64.so"),
        [
            site(0x1607, 0x160c, 0x1610, &["int"]),
            site(0x1637, 0x163c, 0x1641, &["Odd", "..."])
        ]
    );
}

/// The LSDAs sit in `.ARM.extab`, reached through `.ARM.exidx`; the type
/// entries are `R_ARM_TARGET2` words.
#[test]
fn arm_extab_lsda_resolves_target2_type_entries() {
    assert_eq!(
        clause_names("ehcatch_arm.so"),
        [
            site(0x103b8, 0x103bc, 0x103c4, &["int"]),
            site(0x103e0, 0x103e4, 0x103f0, &["Odd", "..."])
        ]
    );
}

#[test]
fn stripped_thumb_lsda_counts_from_the_even_function_start() {
    assert_eq!(
        clause_names("ehcatch_thumb_stripped.so"),
        [
            site(0x103b2, 0x103b6, 0x103ba, &["int"]),
            site(0x103cc, 0x103d0, 0x103d8, &["Odd", "..."])
        ]
    );
}

#[test]
fn notes_name_the_hidden_pads() {
    let bytes = std::fs::read(format!(
        "{}/tests/fixtures/ehcold_x86_64",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    let notes: Vec<String> = eh_notes(&file).into_iter().map(|n| n.text).collect();
    assert!(
        notes
            .iter()
            .any(|i| i == "eh: 1 call site unwinds to C++ landing pads (catch int); not shown"),
        "{notes:?}"
    );
    assert!(
        notes
            .iter()
            .any(|i| i == "eh: 3 call sites unwind to C++ landing pads (3 cleanup); not shown"),
        "{notes:?}"
    );
}

#[test]
fn a_rust_image_reads_rust_eh_personality() {
    let bytes = std::fs::read(format!(
        "{}/tests/fixtures/rust_eh_x86_64",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    let mut seen = Vec::new();
    super::super::for_each_fde_lsda_classified(&file, 8, &mut |_, _, p| seen.push(p));
    assert!(
        !seen.is_empty() && seen.iter().all(|&p| p == super::super::Personality::Rust),
        "{seen:?}"
    );
}

#[test]
fn personality_names_classify() {
    use super::super::Personality as P;
    assert_eq!(P::of_name("DW.ref.__gxx_personality_v0"), P::Cxx);
    assert_eq!(P::of_name("__gxx_personality_sj0"), P::SjLj);
    assert!(!P::of_name("__gxx_personality_sj0").reads_itanium_lsda());
    assert_eq!(P::of_name("rust_eh_personality"), P::Rust);
    assert_eq!(P::of_name("__objc_personality_v0"), P::ObjC);
    assert_eq!(P::of_name("__gcc_personality_v0@GCC_3.3.1"), P::GccC);
    assert_eq!(P::of_name("__gnat_personality_v0"), P::Gnat);
    assert_eq!(P::of_name("my_handler"), P::Unknown);
}

/// `catcher` catches `std::runtime_error const&` (selector 1) and `...`
/// (selector 2) around one call; `cleanup` runs a destructor around two.
#[test]
fn decodes_catch_and_cleanup_pads() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/../unlace-cli/tests/fixtures/itaniumeh/eh_x86_64.elf"
    );
    let bytes = std::fs::read(path).expect("fixture");
    let file = object::File::parse(&*bytes).expect("elf");
    let sites = collect_call_sites(&file);
    let catch = sites
        .iter()
        .find(|s| s.clauses.len() == 2)
        .expect("catch site");
    assert_eq!(
        catch.clauses,
        vec![
            EhClause::Catch {
                selector: 1,
                type_name: Some("std::runtime_error".into())
            },
            EhClause::CatchAll { selector: 2 },
        ]
    );
    assert!(sites.iter().any(|s| s.clauses == vec![EhClause::Cleanup]));
    assert!(sites.iter().all(|s| s.start < s.end && s.pad != 0));
}
