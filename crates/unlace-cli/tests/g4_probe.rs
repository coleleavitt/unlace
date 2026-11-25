//! TEMP g4 probe (not for merge).
use std::io::Write;
fn run_with_wrapper(extra: &[&str], tag: &str) -> (String, String) {
    let dir = std::env::temp_dir();
    let log = dir.join(format!("g4_child_{tag}.log"));
    let _ = std::fs::remove_file(&log);
    let wrap = dir.join(format!("g4_wrap_{tag}.sh"));
    {
        let mut f = std::fs::File::create(&wrap).unwrap();
        writeln!(f, "#!/bin/sh\nexec \"{}\" decomp_dbg \"$@\" 2>>\"{}\"", env!("CARGO_BIN_EXE_unlace"), log.display()).unwrap();
    }
    use std::os::unix::fs::PermissionsExt;
    std::fs::set_permissions(&wrap, std::fs::Permissions::from_mode(0o755)).unwrap();
    let mut args: Vec<String> = vec!["decompile".into(), "/bin/ls".into(), "main".into(), "--decomp-dbg".into(), wrap.display().to_string()];
    args.extend(extra.iter().map(|s| s.to_string()));
    let out = std::process::Command::new(env!("CARGO_BIN_EXE_unlace")).args(&args).output().unwrap();
    let so = String::from_utf8_lossy(&out.stdout).to_string();
    let se = std::fs::read_to_string(&log).unwrap_or_default();
    (so, se)
}
#[test]
fn g4_probe_ls_main() {
    let (on, _) = run_with_wrapper(&["--option", "stackguard", "on"], "on");
    let (off, _) = run_with_wrapper(&["--option", "stackguard", "off"], "off");
    let (def, _) = run_with_wrapper(&[], "default");
    let mut msg = format!("G4PROBE_BEGIN on={} off={} def={} on_eq_off={} on_eq_def={}\n", on.len(), off.len(), def.len(), on == off, on == def);
    let cnt = |s: &str, p: &str| s.lines().filter(|l| l.contains(p)).count();
    msg.push_str(&format!("on: chk={} v98={} ret={}\noff: chk={} v98={} ret={}\n", cnt(&on, "__stack_chk_fail"), cnt(&on, "v98"), cnt(&on, "return dat_2b210"), cnt(&off, "__stack_chk_fail"), cnt(&off, "v98"), cnt(&off, "return dat_2b210")));
    for (i, (x, y)) in on.lines().zip(off.lines()).enumerate().filter(|(_, (x, y))| x != y).take(12) {
        msg.push_str(&format!("DIFF {}: on=[{}] off=[{}]\n", i, x, y));
    }
    panic!("{}", msg);
}
