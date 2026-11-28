//! Process handling shared by CLI integration tests.

use std::io::{ErrorKind, Read};
use std::process::{Command, Output, Stdio};
use std::thread;
use std::time::{Duration, Instant};

/// A required command must exist and exit successfully.
pub fn required_output(command: &mut Command) -> Output {
    optional_output(command).unwrap_or_else(|| panic!("required command not found: {command:?}"))
}

/// Treat a spawn NotFound as optional; require successful execution otherwise.
pub fn optional_output(command: &mut Command) -> Option<Output> {
    match cc_cache::output(command) {
        Ok(output) => {
            assert!(
                output.status.success(),
                "{command:?} failed ({}):\n{}",
                output.status,
                String::from_utf8_lossy(&output.stderr)
            );
            Some(output)
        }
        Err(error) if error.kind() == ErrorKind::NotFound => None,
        Err(error) => panic!("cannot run {command:?}: {error}"),
    }
}

/// Drain both pipes while polling; kill and reap the child when its cap expires.
pub fn output_with_timeout(
    command: &mut Command,
    cap: Duration,
    poll_interval: Duration,
) -> Option<Output> {
    if let Some(hit) = cc_cache::lookup(command) {
        return Some(hit);
    }
    let key = cc_cache::key(command);
    let mut child = command
        .stdout(Stdio::piped())
        .stderr(Stdio::piped())
        .spawn()
        .unwrap_or_else(|error| panic!("cannot run {command:?}: {error}"));
    let mut stdout = child.stdout.take().expect("stdout piped");
    let mut stderr = child.stderr.take().expect("stderr piped");
    let stdout = thread::spawn(move || {
        let mut bytes = Vec::new();
        stdout.read_to_end(&mut bytes).expect("read child stdout");
        bytes
    });
    let stderr = thread::spawn(move || {
        let mut bytes = Vec::new();
        stderr.read_to_end(&mut bytes).expect("read child stderr");
        bytes
    });
    let deadline = Instant::now() + cap;
    let status = loop {
        match child.try_wait().expect("poll child status") {
            Some(status) => break Some(status),
            None if Instant::now() >= deadline => {
                child.kill().expect("kill timed-out child");
                child.wait().expect("reap timed-out child");
                break None;
            }
            None => thread::sleep(poll_interval),
        }
    };
    let stdout = stdout.join().expect("stdout reader");
    let stderr = stderr.join().expect("stderr reader");
    let output = status.map(|status| Output {
        status,
        stdout,
        stderr,
    });
    if let (Some(key), Some(output)) = (key, output.as_ref()) {
        cc_cache::store(&key, command, output);
    }
    output
}

/// A cache of C compiler runs for the tests that compile fixtures and emitted C. A run is keyed
/// by the compiler, its arguments and the bytes of every input file it names (a scratch file's
/// unique `-<pid>-<n>` suffix is left out), and keeps the exit status, both streams and the
/// `-o` output, under `CARGO_TARGET_TMPDIR/cc-cache`. A later run of the same compile, in this
/// test run or the next, copies the output instead of compiling. `UNLACE_TEST_CC_CACHE=0` turns
/// it off. Only successful runs are kept, and only for C compiler and assembler drivers.
pub mod cc_cache {
    use std::hash::{Hash, Hasher};
    use std::io;
    use std::os::unix::process::ExitStatusExt;
    use std::path::{Path, PathBuf};
    use std::process::{Command, ExitStatus, Output};

    fn enabled() -> bool {
        std::env::var("UNLACE_TEST_CC_CACHE").map_or(true, |v| v != "0")
    }

    fn is_compiler(program: &Path) -> bool {
        let name = program.file_name().and_then(|n| n.to_str()).unwrap_or("");
        let name = name.split('-').next_back().unwrap_or(name);
        matches!(
            name,
            "cc" | "gcc" | "clang" | "c++" | "g++" | "clang++" | "as"
        ) || name.starts_with("clang") && name[5..].chars().all(|c| c.is_ascii_digit() || c == '.')
    }

    fn dir() -> PathBuf {
        PathBuf::from(env!("CARGO_TARGET_TMPDIR")).join("cc-cache")
    }

    /// A scratch file name without its unique `-<pid>-<n>` suffix.
    fn stable_name(path: &Path) -> String {
        let name = path
            .file_name()
            .map(|n| n.to_string_lossy().into_owned())
            .unwrap_or_default();
        let (stem, ext) = name.rsplit_once('.').unwrap_or((&name, ""));
        let mut parts: Vec<&str> = stem.split('-').collect();
        while parts.len() > 1
            && parts
                .last()
                .is_some_and(|p| p.chars().all(|c| c.is_ascii_digit()))
        {
            parts.pop();
        }
        format!("{}.{ext}", parts.join("-"))
    }

    /// The `-o` target, if the run names one.
    fn out_path(command: &Command) -> Option<PathBuf> {
        let args: Vec<_> = command.get_args().collect();
        args.windows(2)
            .find(|w| w[0] == "-o")
            .map(|w| PathBuf::from(w[1]))
    }

    /// The cache key of a compiler run; `None` when it is not one, or cannot be keyed.
    pub fn key(command: &Command) -> Option<String> {
        if !enabled() || !is_compiler(Path::new(command.get_program())) {
            return None;
        }
        if command.get_current_dir().is_some() || command.get_envs().next().is_some() {
            return None;
        }
        let out = out_path(command);
        let args: Vec<&std::ffi::OsStr> = command.get_args().collect();
        // Source on stdin, or output to a file the arguments do not name, cannot be keyed.
        if args
            .iter()
            .any(|a| *a == "-" || a.to_string_lossy().starts_with('@'))
        {
            return None;
        }
        let writes_nothing = args.iter().any(|a| {
            let a = a.to_string_lossy();
            a == "-fsyntax-only"
                || a == "-E"
                || a == "--version"
                || a.starts_with("-dump")
                || a.starts_with("-print-")
        });
        if out.is_none() && !writes_nothing {
            return None;
        }
        if args.iter().any(|a| {
            let a = a.to_string_lossy();
            a.starts_with("-MD")
                || a.starts_with("-MMD")
                || a.starts_with("-save-temps")
                || a.starts_with("-Wl,-Map")
        }) {
            return None;
        }
        let mut h = std::collections::hash_map::DefaultHasher::new();
        let program = command.get_program();
        program.hash(&mut h);
        // A different compiler binary at the same name (an upgrade) is a different key.
        if let Ok(path) = which(program.as_ref())
            && let Ok(meta) = std::fs::metadata(&path)
        {
            meta.len().hash(&mut h);
            meta.modified().ok().hash(&mut h);
        }
        for arg in command.get_args() {
            let path = Path::new(arg);
            if out.as_deref() == Some(path) {
                stable_name(path).hash(&mut h);
            } else if path.is_file() {
                stable_name(path).hash(&mut h);
                std::fs::read(path).ok()?.hash(&mut h);
            } else {
                arg.hash(&mut h);
            }
        }
        Some(format!("{:016x}", h.finish()))
    }

    fn which(program: &Path) -> io::Result<PathBuf> {
        if program.components().count() > 1 {
            return Ok(program.to_path_buf());
        }
        let path = std::env::var_os("PATH").unwrap_or_default();
        std::env::split_paths(&path)
            .map(|d| d.join(program))
            .find(|p| p.is_file())
            .ok_or_else(|| io::Error::from(io::ErrorKind::NotFound))
    }

    /// A cached run of `command`, its `-o` file restored.
    pub fn lookup(command: &Command) -> Option<Output> {
        let entry = dir().join(key(command)?);
        let meta = std::fs::read_to_string(entry.join("status")).ok()?;
        let code: i32 = meta.trim().parse().ok()?;
        if let Some(out) = out_path(command) {
            // A child writes the file, as the compiler would: a write handle opened in this
            // multi-threaded process leaks into children forked meanwhile, and a later exec of
            // the file then fails with ETXTBSY.
            let copied = Command::new("cp")
                .arg("-p")
                .arg("--")
                .arg(entry.join("out"))
                .arg(&out)
                .status()
                .ok()?;
            if !copied.success() {
                return None;
            }
        }
        Some(Output {
            status: ExitStatus::from_raw(code << 8),
            stdout: std::fs::read(entry.join("stdout")).ok()?,
            stderr: std::fs::read(entry.join("stderr")).ok()?,
        })
    }

    /// Keep a successful run under its key (written to a temporary name, then renamed).
    pub fn store(key: &str, command: &Command, output: &Output) {
        if !output.status.success() {
            return;
        }
        let tmp = dir().join(format!(
            "{key}.tmp{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        ));
        let ok = std::fs::create_dir_all(&tmp).is_ok()
            && std::fs::write(tmp.join("stdout"), &output.stdout).is_ok()
            && std::fs::write(tmp.join("stderr"), &output.stderr).is_ok()
            && out_path(command).is_none_or(|out| std::fs::copy(out, tmp.join("out")).is_ok())
            && std::fs::write(tmp.join("status"), "0").is_ok();
        if !ok || std::fs::rename(&tmp, dir().join(key)).is_err() {
            let _ = std::fs::remove_dir_all(&tmp);
        }
    }

    /// `command.output()`, through the cache when it is a compiler run.
    pub fn output(command: &mut Command) -> io::Result<Output> {
        if let Some(hit) = lookup(command) {
            return Ok(hit);
        }
        let key = key(command);
        let output = command.output()?;
        if let Some(key) = key {
            store(&key, command, &output);
        }
        Ok(output)
    }
}
