//! (g3 probe, temporary) ls.stripped cold-stub acceptance for functails.
use unlace_console::engine::bootstrap_from_object;

#[test]
fn g3_probe_ls_cold_stubs() {
    let bin = "/tmp/coreutils-cmp/ls.stripped";
    let bytes = std::fs::read(bin).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let owners = unlace_analysis::entry::ehcold::cold_tail_owners(&file, &bytes);
    let bodies = unlace_analysis::entry::fdeinterior::scan_fde_bodies(&file);
    let near: Vec<_> = bodies.iter().filter(|b| b.0 >= 0x5100 && b.0 < 0x5140).collect();
    let owners_hex: Vec<String> = owners.iter().take(40).map(|(b, o)| format!("{:x}-{:x}<-{:x}-{:x}", b.0, b.1, o.0, o.1)).collect();
    let spec_roots = vec!["/home/cole/RustProjects/active/unlace-wt-g3/specs".to_string()];
    let mut prog = bootstrap_from_object(bin, "", &spec_roots).unwrap();
    prog.arch_mut().set_unlace_option("functails", "on").unwrap();
    prog.commit_pending_analysis().unwrap();
    let names: Vec<String> = prog
        .function_entries_canonical()
        .into_iter()
        .filter(|e| (0x5100..0x5200).contains(&e.addr.get_offset()))
        .map(|e| format!("{:x}:{:?}", e.addr.get_offset(), e.name))
        .collect();
    panic!("PROBE owners={} first={:?} near_bodies={:?} names={:?}", owners.len(), owners_hex, near, names);
}
