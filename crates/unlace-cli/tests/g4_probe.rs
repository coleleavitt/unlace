//! TEMP g4 probe (not for merge).
use std::io::Write;
fn run_with_wrapper(extra: &[&str], tag: &str) -> String {
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
    let mut msg = format!("== {tag} status={:?} stdout_len={} child_stderr_len={}\n", out.status.code(), so.len(), se.len());
    for l in so.lines().filter(|l| l.contains("stack_chk") || l.contains("fs_offset")) { msg.push_str("OUT: "); msg.push_str(l); msg.push('\n'); }
    for l in se.lines().filter(|l| l.contains("G4") || l.contains("panic")).take(300) { msg.push_str("ERR: "); msg.push_str(l); msg.push('\n'); }
    msg.push_str(&String::from_utf8_lossy(&out.stderr));
    msg
}
#[test]
fn g4_probe_ls_main() {
    let m1 = run_with_wrapper(&[], "default");
    let m2 = run_with_wrapper(&["--option", "stackguard", "on"], "opt");
    panic!("G4PROBE_BEGIN\n{}\n{}", m1, m2);
}
