//! End-to-end gate for `aifpoolslide` on the `poolentry` fixture
//! (`cortexm_poolentry_le32`, see `verify_poolentry.rs` for its three shapes),
//! with the byte-granular gap cursor (`aif on`), `poolentry` off, and
//! `aifdataveto` off (it drops `F`, whose first word `G` reads as data).
//!
//! Off, the gap walk plants an entry one halfword into each literal pool and the
//! function behind it is never probed. On, both accepts are planted on the
//! function after the pool, including the UNPAIRED one `poolentry` must keep. The
//! SPLIT shape, where `G`'s literal reference resolves onto `F`'s own first word,
//! moves `F`'s entry four bytes in, as `poolentry` does; it is pinned here.

use unlace_console::engine::bootstrap_from_object;

use unlace_testkit::repo_root;

fn bootstrap(slide: bool) -> unlace_console::engine::ConsoleProgram {
    let specs = repo_root().join("specs");
    let bin = repo_root().join("crates/unlace-analysis/tests/fixtures/cortexm_poolentry_le32");
    let mut prog =
        bootstrap_from_object(bin.to_str().unwrap(), "", &[specs.to_str().unwrap().into()])
            .expect("bootstrap fixture with built processor specs");
    for (name, on) in [
        ("listing", true),
        ("funcstart_patterns", true),
        ("aif", true),
        ("poolentry", false),
        ("aifpoolslide", slide),
        ("aifdataveto", false),
    ] {
        prog.arch_mut()
            .set_unlace_option(name, if on { "on" } else { "off" })
            .unwrap();
    }
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");
    prog
}

fn listed(prog: &unlace_console::engine::ConsoleProgram, names: [&str; 6]) -> [bool; 6] {
    names.map(|name| prog.lookup_symbol(name).is_some())
}

/// `sub_800014a` and `sub_800015e` sit one halfword into `POOL1` and `POOL2`; `B`
/// (`sub_800014c`) and `D` (`sub_8000160`) are the functions behind them.
const SHAPES: [&str; 6] = [
    "sub_800014a",
    "sub_800014c",
    "sub_800015e",
    "sub_8000160",
    "sub_8000170",
    "sub_8000174",
];

#[test]
fn off_plants_both_entries_inside_the_pools() {
    assert_eq!(
        listed(&bootstrap(false), SHAPES),
        [true, false, true, false, true, false]
    );
}

#[test]
fn on_plants_both_entries_on_the_functions_after_the_pools() {
    assert_eq!(
        listed(&bootstrap(true), SHAPES),
        [false, true, false, true, false, true]
    );
}
