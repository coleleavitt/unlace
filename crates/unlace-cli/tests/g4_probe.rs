//! TEMP g4 probe (not for merge).
#[test]
fn g4_probe_ls_main() {
    let out = std::process::Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(["decompile", "/bin/ls", "main"])
        .output()
        .unwrap();
    let out2 = std::process::Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(["decompile", "/bin/ls", "main", "--option", "stackguard", "on"])
        .output()
        .unwrap();
    let so2 = String::from_utf8_lossy(&out2.stdout);
    let se2 = String::from_utf8_lossy(&out2.stderr);
    let mut msg0 = String::from("RUN2\n");
    for l in so2.lines().filter(|l| l.contains("stack_chk") || l.contains("fs_offset")) { msg0.push_str("OPT_OUT: "); msg0.push_str(l); msg0.push('\n'); }
    for l in se2.lines().filter(|l| l.contains("G4") || l.contains("panic") || l.contains("rror")).take(20) { msg0.push_str("OPT_ERR: "); msg0.push_str(l); msg0.push('\n'); }
    let so = String::from_utf8_lossy(&out.stdout);
    let se = String::from_utf8_lossy(&out.stderr);
    let mut msg = String::from("G4PROBE_BEGIN\n");
    for l in so.lines().filter(|l| l.contains("stack_chk") || l.contains("fs_offset") || l.contains("G4")) {
        msg.push_str("OUT: "); msg.push_str(l); msg.push('\n');
    }
    for l in se.lines().filter(|l| l.contains("G4") || l.contains("panic")).take(400) {
        msg.push_str("ERR: "); msg.push_str(l); msg.push('\n');
    }
    msg.push_str(&msg0);
    msg.push_str(&format!("status={:?} stdout_len={} stderr_len={}\n", out.status.code(), so.len(), se.len()));
    panic!("{}", msg);
}
