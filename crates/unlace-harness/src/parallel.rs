//! The datatest corpus across worker processes. Load-time options travel in process environment
//! variables and the engine keeps process-wide caches, so files cannot share a process
//! concurrently. Instead [`run_test_files_parallel`] starts `jobs` copies of `decomp_test_dbg
//! -worker`, hands each the next file as it finishes the last, and returns the runs in file
//! order: the same [`FileRun`]s [`run_test_files_each`] gives, so the summary and the parity
//! comparison do not change. A worker that dies costs only the file it was running, which is
//! reported as an execution failure, and a fresh worker takes its place. `UNLACE_DATATEST_TIMES=1`
//! prints each file's wall time to stderr. Each run records the times in
//! `$TMPDIR/unlace-datatest-times.tsv`, and the next run hands out the slowest files first.

use std::io::{BufRead, BufReader, Write};
use std::path::{Path, PathBuf};
use std::process::{Child, ChildStdin, ChildStdout, Command, Stdio};
use std::sync::Mutex;
use std::sync::atomic::{AtomicUsize, Ordering};

use crate::testfunction::{FileRun, run_test_files_each};

/// The `decomp_test_dbg` argument that turns it into a worker.
pub const WORKER_FLAG: &str = "-worker";

/// The line a worker prints when a file's result is on disk.
const DONE: &str = "@@unlace-worker-done ";

/// Stack for the thread a file runs on (the parity test's in-process runner uses the same).
const STACK: usize = 256 << 20;

/// The worker loop: read `<result path>\t<test file>` lines from stdin, run each file, write
/// its [`FileRun`] to the result path and print [`DONE`]. Ends at end of input.
pub fn worker_main(spec_roots: &[String]) {
    let roots = spec_roots.to_vec();
    let worker = std::thread::Builder::new()
        .name("datatest-worker".into())
        .stack_size(STACK)
        .spawn(move || {
            let stdin = std::io::stdin();
            for line in stdin.lock().lines() {
                let Ok(line) = line else { break };
                let Some((result, test)) = line.split_once('\t') else {
                    continue;
                };
                let run = run_test_files_each(&[test.to_string()], &roots)
                    .pop()
                    .unwrap_or_default();
                let written = std::fs::write(result, encode(&run)).is_ok();
                let mut out = std::io::stdout().lock();
                let _ = writeln!(out, "{DONE}{}", if written { "ok" } else { "unwritten" });
                let _ = out.flush();
            }
        })
        .expect("spawn the worker thread");
    let _ = worker.join();
}

/// `applied succeeded failures\n`, then each failure as `<bytes>\n<text>`, then the output.
fn encode(run: &FileRun) -> Vec<u8> {
    let mut b = format!("{} {} {}\n", run.applied, run.succeeded, run.failures.len()).into_bytes();
    for f in &run.failures {
        b.extend(format!("{}\n", f.len()).bytes());
        b.extend(f.bytes());
    }
    b.extend(run.output.bytes());
    b
}

fn decode(file: &str, bytes: &[u8]) -> Option<FileRun> {
    let text = std::str::from_utf8(bytes).ok()?;
    let (head, mut rest) = text.split_once('\n')?;
    let mut nums = head.split(' ').map(|n| n.parse::<i64>().ok());
    let (applied, succeeded, n) = (nums.next()??, nums.next()??, nums.next()??);
    let mut failures = Vec::new();
    for _ in 0..n {
        let (len, tail) = rest.split_once('\n')?;
        let len: usize = len.parse().ok()?;
        failures.push(tail.get(..len)?.to_string());
        rest = tail.get(len..)?;
    }
    Some(FileRun {
        file: file.to_string(),
        output: rest.to_string(),
        failures,
        applied: i32::try_from(applied).ok()?,
        succeeded: i32::try_from(succeeded).ok()?,
        wall_ms: 0,
    })
}

/// What a file's run says when its worker died under it (the serial runner's
/// `Execution failed` shape, so the parity stream still names the file).
fn died(file: &str, why: &str) -> FileRun {
    let line = format!("Error executing {file}: the worker process {why}");
    FileRun {
        file: file.to_string(),
        output: format!("{line}\n"),
        failures: vec![line],
        applied: 0,
        succeeded: 0,
        wall_ms: 0,
    }
}

struct Worker {
    child: Child,
    stdin: ChildStdin,
    stdout: BufReader<ChildStdout>,
}

fn spawn(exe: &Path, spec_roots: &[String]) -> std::io::Result<Worker> {
    let mut cmd = Command::new(exe);
    cmd.arg(WORKER_FLAG);
    for r in spec_roots {
        cmd.arg("-sleighpath").arg(r);
    }
    let mut child = cmd
        .stdin(Stdio::piped())
        .stdout(Stdio::piped())
        .stderr(Stdio::inherit())
        .spawn()?;
    let stdin = child.stdin.take().expect("piped stdin");
    let stdout = BufReader::new(child.stdout.take().expect("piped stdout"));
    Ok(Worker {
        child,
        stdin,
        stdout,
    })
}

/// Run one file on `w`; `Err` when the worker is gone (it must be replaced).
fn run_on(w: &mut Worker, file: &str, result: &Path) -> Result<FileRun, String> {
    let _ = std::fs::remove_file(result);
    writeln!(w.stdin, "{}\t{file}", result.display())
        .and_then(|()| w.stdin.flush())
        .map_err(|_| "closed its input".to_string())?;
    let mut line = String::new();
    loop {
        line.clear();
        match w.stdout.read_line(&mut line) {
            Ok(0) | Err(_) => {
                let status = w.child.wait().map(|s| s.to_string()).unwrap_or_default();
                return Err(format!("exited ({status})"));
            }
            Ok(_) => {}
        }
        if line.starts_with(DONE) {
            break;
        }
        // Anything else the engine printed to stdout goes where a serial run would show it.
        eprint!("{line}");
    }
    let bytes = std::fs::read(result).map_err(|e| format!("wrote no result ({e})"))?;
    let _ = std::fs::remove_file(result);
    decode(file, &bytes).ok_or_else(|| "wrote an unreadable result".to_string())
}

/// The wall times of earlier runs, by file (`<seconds>\t<file>` lines).
fn read_times(path: &Path) -> std::collections::BTreeMap<String, f64> {
    std::fs::read_to_string(path)
        .unwrap_or_default()
        .lines()
        .filter_map(|l| {
            let (secs, file) = l.split_once('\t')?;
            Some((file.to_string(), secs.parse().ok()?))
        })
        .collect()
}

fn write_times(path: &Path, times: &std::collections::BTreeMap<String, f64>) {
    let text: String = times
        .iter()
        .map(|(f, s)| format!("{s:.3}\t{f}\n"))
        .collect();
    let tmp = path.with_extension(format!("tmp{}", std::process::id()));
    if std::fs::write(&tmp, text).is_ok() {
        let _ = std::fs::rename(&tmp, path);
    }
}

/// The order files are handed out: the slowest of the last run first (a file it never timed
/// counts as slow), so a long file does not start last and hold up the end.
fn longest_first(files: &[String], known: &std::collections::BTreeMap<String, f64>) -> Vec<usize> {
    let mut order: Vec<usize> = (0..files.len()).collect();
    order.sort_by(|&a, &b| {
        let t = |i: usize| known.get(&files[i]).copied().unwrap_or(f64::INFINITY);
        t(b).total_cmp(&t(a)).then(a.cmp(&b))
    });
    order
}

/// Run `files` across `jobs` worker processes of `exe` (a `decomp_test_dbg`); the runs come
/// back in file order. With `jobs <= 1` the files run in this process, as
/// [`run_test_files_each`] runs them.
pub fn run_test_files_parallel(
    files: &[String],
    spec_roots: &[String],
    jobs: usize,
    exe: &Path,
) -> Vec<FileRun> {
    if jobs <= 1 || files.len() <= 1 {
        return run_test_files_each(files, spec_roots);
    }
    let dir: PathBuf =
        std::env::temp_dir().join(format!("unlace-datatests-{}", std::process::id()));
    let _ = std::fs::create_dir_all(&dir);
    let times_path = std::env::temp_dir().join("unlace-datatest-times.tsv");
    let known = read_times(&times_path);
    let order = longest_first(files, &known);
    let elapsed: Mutex<Vec<(String, f64)>> = Mutex::new(Vec::new());
    let next = AtomicUsize::new(0);
    let timed = std::env::var_os("UNLACE_DATATEST_TIMES").is_some();
    let runs: Mutex<Vec<Option<FileRun>>> = Mutex::new(vec![None; files.len()]);
    std::thread::scope(|s| {
        for slot in 0..jobs.min(files.len()) {
            let (next, runs, dir, timed, order, elapsed) =
                (&next, &runs, &dir, timed, &order, &elapsed);
            s.spawn(move || {
                let result = dir.join(format!("worker-{slot}.run"));
                let mut worker = spawn(exe, spec_roots).ok();
                loop {
                    let Some(&i) = order.get(next.fetch_add(1, Ordering::Relaxed)) else {
                        break;
                    };
                    let file = &files[i];
                    let started = std::time::Instant::now();
                    let mut run = match worker.as_mut() {
                        None => died(file, "could not be started"),
                        Some(w) => match run_on(w, file, &result) {
                            Ok(run) => run,
                            Err(why) => {
                                worker = spawn(exe, spec_roots).ok();
                                died(file, &why)
                            }
                        },
                    };
                    let secs = started.elapsed().as_secs_f64();
                    run.wall_ms = u64::try_from(started.elapsed().as_millis()).unwrap_or(u64::MAX);
                    if timed {
                        eprintln!("datatest time {secs:7.2} s  {file}");
                    }
                    elapsed
                        .lock()
                        .unwrap_or_else(|e| e.into_inner())
                        .push((file.clone(), secs));
                    runs.lock().unwrap_or_else(|e| e.into_inner())[i] = Some(run);
                }
                if let Some(mut w) = worker {
                    drop(w.stdin);
                    let _ = w.child.wait();
                }
            });
        }
    });
    let _ = std::fs::remove_dir_all(&dir);
    let mut times = known;
    times.extend(elapsed.into_inner().unwrap_or_else(|e| e.into_inner()));
    write_times(&times_path, &times);
    runs.into_inner()
        .unwrap_or_else(|e| e.into_inner())
        .into_iter()
        .zip(files)
        .map(|(r, f)| r.unwrap_or_else(|| died(f, "never ran it")))
        .collect()
}

#[cfg(test)]
mod tests;
