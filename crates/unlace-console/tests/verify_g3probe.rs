//! (g3 probe, temporary) trace which pass re-adds the ls.stripped cold stub.
use unlace_console::engine::bootstrap_from_object;

#[test]
fn g3_probe_ls_trace() {
    unsafe { std::env::set_var("UNLACE_ENTRY_TRACE", "0x512c") };
    let bin = "/tmp/coreutils-cmp/ls.stripped";
    let spec_roots = vec!["/home/cole/RustProjects/active/unlace-wt-g3/specs".to_string()];
    let mut prog = bootstrap_from_object(bin, "", &spec_roots).unwrap();
    prog.arch_mut().set_unlace_option("listing", "on").unwrap();
    prog.arch_mut().set_unlace_option("functails", "on").unwrap();
    prog.commit_pending_analysis().unwrap();
    let names: Vec<String> = prog
        .function_entries_canonical()
        .into_iter()
        .filter(|e| (0x5100..0x5200).contains(&e.addr.get_offset()))
        .map(|e| format!("{:x}:{:?}", e.addr.get_offset(), e.name))
        .collect();
    panic!("PROBE names={:?}", names);
}
