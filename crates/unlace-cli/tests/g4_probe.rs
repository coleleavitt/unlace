//! TEMP g4 probe (not for merge).
#[test]
fn g4_probe_ls_main() {
    let out = std::process::Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(["decompile", "/bin/ls", "main"])
        .output()
        .unwrap();
    let so = String::from_utf8_lossy(&out.stdout);
    let se = String::from_utf8_lossy(&out.stderr);
    let mut msg = String::from("G4PROBE_BEGIN\n");
    for l in so.lines().filter(|l| l.contains("stack_chk") || l.contains("fs_offset") || l.contains("G4")) {
        msg.push_str("OUT: "); msg.push_str(l); msg.push('\n');
    }
    for l in se.lines().filter(|l| l.contains("G4") || l.contains("panic")) {
        msg.push_str("ERR: "); msg.push_str(l); msg.push('\n');
    }
    msg.push_str(&format!("status={:?} stdout_len={} stderr_len={}\n", out.status.code(), so.len(), se.len()));
    panic!("{}", msg);
}
