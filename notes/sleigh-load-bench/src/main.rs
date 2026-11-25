//! Times the ways a test can run one decompile: spawn the `unlace` binary per case (what the
//! unlace-cli tests do), load and decompile in this process per case, or load once and
//! decompile every case; plus one C compile, which many CLI tests also do.
use std::process::Command;
use std::time::Instant;

fn main() {
    let args: Vec<String> = std::env::args().collect();
    let mode = args[1].as_str();
    let fixture = &args[2];
    let unlace_bin = &args[3];
    let addrs: Vec<u64> = args[4..]
        .iter()
        .map(|a| u64::from_str_radix(a.trim_start_matches("0x"), 16).unwrap())
        .collect();
    let start = Instant::now();
    let mut bytes = 0usize;
    match mode {
        "spawn" => {
            for a in &addrs {
                let out = Command::new(unlace_bin)
                    .args(["decompile", fixture, &format!("{a:#x}")])
                    .output()
                    .unwrap();
                assert!(out.status.success(), "{}", String::from_utf8_lossy(&out.stderr));
                bytes += out.stdout.len();
            }
        }
        "inproc-fresh" => {
            for a in &addrs {
                let mut d = unlace::Decompiler::open(fixture).unwrap();
                bytes += d.decompile(*a).unwrap().c.len();
            }
        }
        "inproc-shared" => {
            let mut d = unlace::Decompiler::open(fixture).unwrap();
            for a in &addrs {
                bytes += d.decompile(*a).unwrap().c.len();
            }
        }
        "load-only" => {
            for _ in &addrs {
                let mut d = unlace::Decompiler::open(fixture).unwrap();
                bytes += d.functions().unwrap().len();
            }
        }
        "raw-fresh" => {
            // mov eax, edi; add eax, esi; ret
            let code = [0x89u8, 0xf8, 0x01, 0xf0, 0xc3];
            for _ in &addrs {
                let mut d = unlace::Decompiler::from_raw(code, unlace::Target::X86_64, 0x1000, &[], &[0x1000]).unwrap();
                bytes += d.decompile(0x1000).unwrap().c.len();
            }
        }
        "cc" => {
            let dir = std::env::temp_dir().join("unlace-testbench-cc");
            std::fs::create_dir_all(&dir).unwrap();
            let src = dir.join("t.c");
            std::fs::write(&src, "int f(int *a, int n) { int s = 0; for (int i = 0; i < n; i++) s += a[i] * 3; return s; }\nint main(void) { int a[4] = {1,2,3,4}; return f(a, 4) == 30 ? 0 : 1; }\n").unwrap();
            for _ in &addrs {
                let st = Command::new("cc")
                    .args(["-O2", "-o"])
                    .arg(dir.join("t"))
                    .arg(&src)
                    .status()
                    .unwrap();
                assert!(st.success());
            }
        }
        _ => panic!("mode"),
    }
    let ms = start.elapsed().as_secs_f64() * 1000.0;
    println!("{mode}: {} cases, {:.1} ms total, {:.1} ms per case ({bytes} bytes of C)", addrs.len(), ms, ms / addrs.len() as f64);
}
