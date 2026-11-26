//! Persistent subprocess workers for whole-binary decompilation.
//!
//! The parent fixes loader policy and inventory, schedules chunks dynamically,
//! and merges results into target-order slots. Workers keep one program load
//! across chunks; their assignment pipe also detects a dead parent.
//!
//! This module owns scheduling and recovery. [`synth`] owns synthesized-structure
//! replay; [`wire`] owns the versioned records; [`scratch`] owns temporary
//! storage. Behavior and serial-equivalence limits are in `docs/spec/00-overview.md`.

use std::io::{BufRead, Write};
use std::path::Path;
use std::process::{Command, Stdio};
use std::sync::Mutex;
use std::sync::atomic::{AtomicBool, AtomicUsize, Ordering};
use std::time::{Duration, Instant};

use unlace_console::engine::{EntryProvenance, ObjectLocation};
use unlace_console::project::FuncResult;
use unlace_decomp::structsynth::shard::{self, Replay, SynthRequest};

mod scratch;
mod synth;
mod type_blocks;
mod wire;

use scratch::{ScratchDir, pool_scratch};
use synth::{Named, name_structs_serially};
pub(crate) use type_blocks::merge_type_definitions;
pub(crate) use wire::{ResultWriter, decode_result, encode_result, read_spec};
use wire::{decode_results, encode_spec};

/// Ceiling on an automatically planned chunk, when `--jobs-chunk` is omitted.
/// A chunk is only a scheduling unit here, so this exists to keep the tail of a
/// run from being one indivisible lump, not to bound memory.
const MAX_AUTO_CHUNK: usize = 512;

/// How many chunks the planner aims to give each worker.  More chunks balance
/// the end of a run better and cost nothing but a spec file, since a worker is
/// not restarted between them.
const CHUNKS_PER_JOB: usize = 8;

/// How many functions one worker process handles before the pool retires it.
///
/// This is the memory ceiling, and what it bounds is the allocator arena, not a
/// leak: a counting `#[global_allocator]` over 587 functions of a 274,000-function
/// IL2CPP `.so` shows the LIVE heap flat at 403 -> 411 MB (~14 KB per function
/// retained) while RSS climbs non-monotonically to 3.3 GB and does not come back
/// down.  Per-function transients are freed, but the process keeps their
/// high-water mark, and only a fresh worker returns to the floor.  RSS was
/// measured flat over the 3,000 functions one worker decompiled after its load on
/// an 18 MB PE, so the ceiling is high enough that an ordinary binary never
/// reaches it and pays no second load.
const RECYCLE_AFTER: usize = 4096;

/// Ceiling on `--jobs auto`.  Each worker pays a whole program load, so the
/// pool's memory is `jobs x worker RSS` and the machine that runs out first is a
/// desktop with many cores and ordinary RAM — the shape of the machine in the
/// report this exists for (12 cores, one 18 MB PE).  Beyond this the wall-clock
/// return is small anyway, because the parent's own load is serial.
/// [`affordable_jobs`] trims it further to what the machine's free memory holds.
const MAX_AUTO_JOBS: usize = 16;

/// The decode-lane cap, which is the engine's, not the pool's.
const MAX_DECODE_LANES: usize = unlace_analysis::listing::pdecode::MAX_DECODE_LANES;

/// The parent's word for "no more chunks", and the worker's for "chunk done".
/// Both travel as whole lines over the pipes the pool already needs for
/// liveness, so neither costs a file descriptor or a dependency.  `quit` carries
/// a token, which names the file a retiring worker leaves its type block in.
const QUIT_PREFIX: &str = "quit ";
const ACK_PREFIX: &str = "done ";

/// The parent's word for "install the replayed structures and answer from now
/// on" ([`Worker::force`]).
const SYNTH_LINE: &str = "synth";

/// A worker's exit code when it outlived its parent.  Distinct from anything the
/// engine returns, and it never reaches a user: whoever would have read it is the
/// process that just died.
const EXIT_PARENT_GONE: i32 = 70;

/// A chunk stops re-running once this many of its bystanders have failed again
/// on their own and they outnumber the ones recovered.
const CHUNK_RERUN_FAILURES: usize = 8;

/// A chunk stops re-running once this many of its re-runs have stalled, each of
/// which waited out a whole stall window.
const CHUNK_RERUN_STALLS: usize = 2;

/// No re-run starts while this many re-runs have failed and they outnumber
/// every record the run's workers have delivered.
const RUN_RERUN_FAILURES: usize = 16;

/// Test-only fault injection, comma-separated: `panic:<addr>` panics a worker
/// as it starts the target at `<addr>`, `panic-once:<addr>` only the first time
/// in a run, `stall:<addr>` wedges it there until the stall watchdog kills it,
/// `stall-again:<addr>` only the second time in a run, `spawn:<n>` refuses
/// every worker spawn after the first `n`, `load-abort:<n>` aborts the first
/// `n` worker loads of the run (`*` every one) the way a
/// refused allocation does, before the worker reaches its first chunk,
/// `synth:serial` names synthesized structures by the one-worker serial path,
/// `synth:force` renames no function and `synth:noinstall` makes a worker
/// refuse the replayed structures.  `<addr>` is a byte address (`0x` hex or
/// decimal), or `*` for every target.
pub(crate) const JOBS_FAULT_ENV: &str = "UNLACE_JOBS_FAULT";

/// One decompile target, flattened out of a [`unlace_console::engine::FunctionEntry`]
/// so it can cross a thread and a process boundary (`Address` holds an `Rc`).
///
/// Every field of the entry travels, not just the address: the name, aliases,
/// extent and object coordinates a function is reported under are inventory
/// facts the PARENT resolved, and re-deriving them in a worker whose load skipped
/// discovery is exactly how a sharded document would drift from a serial one.
#[derive(Clone, PartialEq, Eq, Debug)]
pub(crate) struct TargetSpec {
    pub(crate) addr: u64,
    pub(crate) space: String,
    pub(crate) name: String,
    pub(crate) aliases: Vec<String>,
    pub(crate) size: u64,
    pub(crate) object_location: Option<ObjectLocation>,
    pub(crate) provenance: EntryProvenance,
    pub(crate) binding: Option<String>,
    /// (unlace `structsynth`) The name each of this target's ledger lookups is
    /// answered with, in order, when a [`SynthWorker::Force`] worker runs it.
    pub(crate) synth: Option<Vec<Option<String>>>,
}

/// What a worker does with the synthesized-structure ledger (`--jobs-synth`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) enum SynthWorker {
    /// `structsynth off`: the `--stream` pool, whose serial run keeps no
    /// convergence to reproduce either.
    Off,
    /// Record every lookup and let the worker's own ledger answer.
    Record,
    /// Install the parent's replayed structures and answer every lookup with
    /// the name the chunk spec gives it.
    Force,
    /// Decompile the chunk in spec order with the worker's own ledger, then run
    /// the serial convergence sweep over it.
    Serial,
}

impl SynthWorker {
    fn flag(self) -> Option<&'static str> {
        match self {
            SynthWorker::Off => None,
            SynthWorker::Record => Some("record"),
            SynthWorker::Force => Some("force"),
            SynthWorker::Serial => Some("serial"),
        }
    }

    /// Parse the worker's `--jobs-synth` value.
    pub(crate) fn parse(v: &str) -> Result<Self, String> {
        match v {
            "record" => Ok(SynthWorker::Record),
            "force" => Ok(SynthWorker::Force),
            "serial" => Ok(SynthWorker::Serial),
            _ => Err(format!("invalid --jobs-synth value {v:?}")),
        }
    }
}

/// Everything a worker needs on its command line, resolved once by the parent.
pub(crate) struct PoolConfig<'a> {
    pub(crate) jobs: usize,
    /// `--jobs auto` rather than an explicit count, so [`affordable_jobs`] knows
    /// whether it may trim the number or only warn about it.
    pub(crate) jobs_auto: bool,
    pub(crate) chunk: Option<usize>,
    pub(crate) binary: &'a str,
    pub(crate) mode: &'static str,
    pub(crate) options: &'a [(String, String)],
    pub(crate) func_decls: Vec<String>,
    pub(crate) no_vars: bool,
    pub(crate) want_proto: bool,
    pub(crate) want_provenance: bool,
    /// Ask each worker for every variable's storage (`--storage`).
    pub(crate) want_storage: bool,
    /// Ask each worker for its rendered user-defined type definitions — the
    /// `decompile-project` `.h` block, which is a whole-program artifact built
    /// after the loop from types the loop itself interns.
    pub(crate) want_types: bool,
    /// Ask each worker for [`FuncResult::callee_hints`] — the `--stream`
    /// scheduler's frontier, and the only reason a worker reports one.
    pub(crate) want_callee_hints: bool,
    /// Ask each worker for [`FuncResult::pointerargs`]; the parent reconciles
    /// the complete result set.
    pub(crate) want_pointer_arguments: bool,
    pub(crate) max_fn_seconds: u64,
    /// `None` leaves each worker to the cgroup default.
    pub(crate) max_fn_memory: Option<u64>,
    pub(crate) full_load: bool,
    /// How long the PARENT's own load took.  The stall watchdog cannot fire
    /// before a worker could plausibly have finished loading, and this is the
    /// only measurement of that cost anyone has.
    pub(crate) load_seconds: f64,
    pub(crate) isa: Option<&'a str>,
    pub(crate) slice: Option<&'a str>,
    pub(crate) target: Option<&'a str>,
    pub(crate) sleighpath: Option<&'a str>,
    /// (unlace `structsynth`) The parent's ledger before any decompile, when this
    /// run synthesizes structures: the state a [`run_pool`] replays the
    /// workers' lookups from.  `None` runs every worker with `structsynth off`.
    pub(crate) synth_base: Option<Replay>,
    /// (unlace `protoorder`) The serial run this pool replays would have
    /// decompiled callees first, an order no pool takes: the structures a
    /// function mints there are the ones its callees' recovered prototypes lead
    /// it to, so the serial run the replayed names belong to is
    /// `--jobs 1 --option protoorder off` and the report says so.
    pub(crate) serial_callee_first: bool,
    /// (unlace `elemptr`) The pool decompiles a batch of one function, whose
    /// worker types globals and tables as a serial batch of one does; the
    /// workers of any larger pool type neither, as a serial run that is not
    /// callee-first does not.
    pub(crate) elem_objects: bool,
    /// (unlace `armframes`) The parent's frame-recovery record, which a worker
    /// replays instead of searching the image again.
    pub(crate) arm_frames: Option<String>,
    /// Told about the first decompile of every target as its chunk lands — the
    /// `decompile-project --progress` feed.
    pub(crate) watch: Option<&'a dyn PoolWatch>,
}

/// What a [`run_pool`] reports while it runs, before its results are merged.
pub(crate) trait PoolWatch: Sync {
    /// The workers the memory trim left the first pass.
    fn workers(&self, n: usize);
    /// A chunk's first-pass records.  A structure-naming pass that decompiles
    /// some of them again later is not reported.
    fn landed(&self, results: &[FuncResult]);
}

/// How many decode lanes `--jobs` asks the discovery walk for.
///
/// Deliberately NOT the pool count: a pool worker pays a whole program load, so
/// `auto` caps it at [`MAX_AUTO_JOBS`]; a decode lane costs one SLEIGH engine
/// (~48 MB) and saturates much later, so `auto` there is this machine's
/// parallelism capped at [`MAX_DECODE_LANES`]. An explicit `--jobs N` is honoured
/// up to the same cap.
pub(crate) fn decode_lanes(args: &crate::decompile_all::Args) -> usize {
    if args.jobs_auto {
        let cores = std::thread::available_parallelism()
            .map(|n| n.get())
            .unwrap_or(1);
        return cores.clamp(1, MAX_DECODE_LANES);
    }
    args.jobs.min(MAX_DECODE_LANES)
}

/// `--jobs N|auto`: `auto` is this machine's parallelism, capped at
/// [`MAX_AUTO_JOBS`] because every worker pays a whole program load, and trimmed
/// again by [`affordable_jobs`] once the load has shown what one worker costs.
/// The flag is returned alongside the count because it decides whether that
/// later trim may lower the number or must only warn.
pub(crate) fn parse_jobs(value: &str) -> Result<(usize, bool), String> {
    let v = value.trim();
    if v.eq_ignore_ascii_case("auto") {
        let cores = std::thread::available_parallelism()
            .map(|n| n.get())
            .unwrap_or(1);
        return Ok((cores.clamp(1, MAX_AUTO_JOBS), true));
    }
    match v.parse::<usize>() {
        Ok(n) if n >= 1 => Ok((n, false)),
        _ => Err(format!(
            "invalid --jobs value {value:?} (expected a positive integer or `auto`)"
        )),
    }
}

// --- the pool ----------------------------------------------------------------

/// What a pool run produced: one [`FuncResult`] per target in target order, plus
/// the type-definition block if the caller asked for one.
pub(crate) struct PoolOutput {
    pub(crate) results: Vec<FuncResult>,
    pub(crate) types: Option<String>,
}

/// How a pool run brands its stderr: `--jobs` for the static plan, `--stream`
/// for the dynamic frontier, so every line of one run reads as one run.
pub(crate) const JOBS_TAG: &str = "--jobs";
pub(crate) const STREAM_TAG: &str = "--stream";

/// Where a pool thread gets its next chunk.
///
/// The static plan a `--jobs N` run computes up front and the dynamic,
/// result-steered frontier `--stream` schedules from are the same thing to the
/// pool: a source of slot-index lists that eventually runs dry.  Each entry is a
/// list of **slot indices** into the caller's target list, so output order
/// travels independently of the order work is done in.
pub(crate) trait ChunkSource: Sync {
    /// The next chunk, or `None` once no work is left.  Called concurrently by
    /// every pool thread.
    fn next_chunk(&self) -> Option<Vec<usize>>;
}

/// The static `--jobs` plan, handed out through a shared cursor.
struct PlannedChunks {
    plan: Vec<Vec<usize>>,
    cursor: AtomicUsize,
}

impl ChunkSource for PlannedChunks {
    fn next_chunk(&self) -> Option<Vec<usize>> {
        let idx = self.cursor.fetch_add(1, Ordering::SeqCst);
        self.plan.get(idx).cloned()
    }
}

/// Run `targets` across a pool of `cfg.jobs` worker processes.  `inventory` is
/// the parent's full canonical function inventory, replayed into every worker so
/// a discovery-free worker load still resolves every call the serial run did.
///
/// A run that synthesizes structures ([`PoolConfig::synth_base`]) goes on to
/// [`name_structs_serially`] once every function has come back, so each
/// `struct_N` is the name `--jobs 1` gives it.
pub(crate) fn run_pool(
    cfg: &PoolConfig,
    targets: &[TargetSpec],
    inventory: &[TargetSpec],
) -> Result<PoolOutput, String> {
    let total = targets.len();
    if total == 0 {
        return Ok(PoolOutput {
            results: Vec::new(),
            types: None,
        });
    }
    let jobs = affordable_jobs(cfg, JOBS_TAG);
    let session = Session::open(cfg, inventory)?;
    let first = Phase {
        synth: if cfg.synth_base.is_some() {
            SynthWorker::Record
        } else {
            SynthWorker::Off
        },
        table: None,
        watch: cfg.watch,
    };
    // Dispatch order is NOT output order: work is planned longest-first into
    // equal-work chunks, and every result is filed by its slot index, so the
    // merged document does not depend on how the pool scheduled anything.
    let plan = plan_chunks(targets, cfg.chunk, jobs);
    let banner = |plan: &[Vec<usize>], workers: usize| {
        format!(
            "[unlace --jobs] {total} functions, {} chunk(s) of {}..{}, {workers} worker process(es)",
            plan.len(),
            plan.iter().map(Vec::len).min().unwrap_or(0),
            plan.iter().map(Vec::len).max().unwrap_or(0)
        )
    };
    let mut run = run_planned(cfg, &session, jobs, targets, plan, &first, &banner)?;
    let named = match &cfg.synth_base {
        Some(base) => name_structs_serially(cfg, &session, jobs, targets, base.clone(), &mut run)?,
        None => Named {
            kind: first.synth,
            table: None,
        },
    };
    let blocks = session.close(cfg, &named);
    let PlannedRun { results, retries } = run;
    warn_about_anomalies(&results, cfg.max_fn_seconds, retries);
    // After the anomaly warnings, which report the run itself: the type-shard
    // disagreement is a note about one artifact.
    let types =
        (cfg.want_types && !blocks.is_empty()).then(|| merge_type_definitions(&blocks, JOBS_TAG));
    Ok(PoolOutput { results, types })
}

/// What one pool over a fixed plan brought back: a result per target, in
/// target order, and what its re-runs did.
struct PlannedRun {
    results: Vec<FuncResult>,
    retries: Retries,
}

/// Serve `plan` over `targets` with at most `jobs` workers of kind `phase`,
/// filing every result by its slot.
fn run_planned(
    cfg: &PoolConfig,
    session: &Session,
    jobs: usize,
    targets: &[TargetSpec],
    plan: Vec<Vec<usize>>,
    phase: &Phase,
    banner: &dyn Fn(&[Vec<usize>], usize) -> String,
) -> Result<PlannedRun, String> {
    let total = targets.len();
    let workers = jobs.min(plan.len());
    if let Some(watch) = phase.watch {
        watch.workers(workers);
    }
    let banner = banner(&plan, workers);
    let source = PlannedChunks {
        plan,
        cursor: AtomicUsize::new(0),
    };
    let slots: Mutex<Vec<Option<FuncResult>>> = Mutex::new((0..total).map(|_| None).collect());
    let retries = run_pool_with(
        cfg,
        session,
        phase,
        targets,
        &source,
        &PoolReport {
            tag: JOBS_TAG,
            banner,
            workers,
            finish_delivered: false,
        },
        &|indices: &[usize], produced: Vec<FuncResult>| {
            if let Some(watch) = phase.watch {
                watch.landed(&produced);
            }
            let mut slots = slots.lock().unwrap_or_else(|e| e.into_inner());
            for (&slot, r) in indices.iter().zip(produced) {
                slots[slot] = Some(r);
            }
        },
    )?;
    let slots = slots.into_inner().unwrap_or_else(|e| e.into_inner());
    let results = slots
        .into_iter()
        .zip(targets)
        .map(|(slot, t)| slot.unwrap_or_else(|| lost_result(t, NO_RECORD)))
        .collect();
    Ok(PlannedRun { results, retries })
}

/// Which worker a pool spawns, and the replayed structures a
/// [`SynthWorker::Force`] worker installs before its first chunk.
struct Phase<'t> {
    synth: SynthWorker,
    table: Option<&'t [u8]>,
    watch: Option<&'t dyn PoolWatch>,
}

/// The `--stream` pool: the same workers over a caller-supplied dynamic
/// [`ChunkSource`], with each finished chunk handed to `sink` as it lands
/// instead of being filed into a slot table.  Returns each retired worker's
/// type block, unmerged — the streamed caller merges its own factory in as one
/// more shard — and what re-running a dead worker's targets recovered, for the
/// caller's anomaly warnings.
///
/// `workers_out` reports how many workers the memory trim actually left, which
/// is what `.streaming` publishes.
///
/// The caller owns the record keeping a streamed run needs: one record per
/// target, the anomaly warnings and the end-of-run reconciliation.
pub(crate) fn run_pool_streaming(
    cfg: &PoolConfig,
    targets: &[TargetSpec],
    inventory: &[TargetSpec],
    source: &dyn ChunkSource,
    workers_out: &AtomicUsize,
    sink: &(dyn Fn(&[usize], Vec<FuncResult>) + Sync),
) -> Result<(Vec<String>, Retries), String> {
    let total = targets.len();
    if total == 0 {
        return Ok((Vec::new(), Retries::default()));
    }
    let workers = affordable_jobs(cfg, STREAM_TAG).min(total);
    workers_out.store(workers, Ordering::SeqCst);
    let banner = format!(
        "[unlace --stream] {total} functions, entry-point-first dynamic scheduling, \
         {workers} worker process(es)"
    );
    let session = Session::open(cfg, inventory)?;
    let retries = run_pool_with(
        cfg,
        &session,
        &Phase {
            synth: SynthWorker::Off,
            table: None,
            watch: None,
        },
        targets,
        source,
        &PoolReport {
            tag: STREAM_TAG,
            banner,
            workers,
            finish_delivered: true,
        },
        sink,
    )?;
    let blocks = session.close(
        cfg,
        &Named {
            kind: SynthWorker::Off,
            table: None,
        },
    );
    Ok((blocks, retries))
}

/// What the pools of one run share: the scratch directory every worker was
/// started on, the chunk and retirement counters, the live workers one pool
/// hands to the next, and every retired worker's type blocks with the kind of
/// worker it was when it rendered them.
struct Session {
    scratch: ScratchDir,
    chunk_ids: AtomicUsize,
    retired: AtomicUsize,
    idle: Mutex<Vec<Worker>>,
    blocks: Mutex<Vec<RetiredBlocks>>,
    /// Which replayed table sits in the scratch directory, 0 for none and one
    /// more each time a different one is written, and its bytes.
    table: Mutex<(usize, Vec<u8>)>,
}

/// One retired worker's type blocks: rendered with everything its factory
/// held, and (a worker that took part in naming structures) once more
/// without the structures it minted or installed.
struct RetiredBlocks {
    kind: SynthWorker,
    table: usize,
    full: String,
    rest: Option<String>,
}

impl Session {
    fn open(cfg: &PoolConfig, inventory: &[TargetSpec]) -> Result<Session, String> {
        let scratch = ScratchDir::create()?;
        if !cfg.full_load {
            let path = scratch.path().join(INVENTORY_FILE);
            std::fs::write(&path, encode_spec(inventory)).map_err(|e| {
                format!("cannot write the worker inventory {}: {e}", path.display())
            })?;
            if let Some(record) = &cfg.arm_frames {
                let path = scratch.path().join(ARM_FRAMES_FILE);
                std::fs::write(&path, record).map_err(|e| {
                    format!(
                        "cannot write the worker frame record {}: {e}",
                        path.display()
                    )
                })?;
            }
        }
        Ok(Session {
            scratch,
            chunk_ids: AtomicUsize::new(0),
            retired: AtomicUsize::new(0),
            idle: Mutex::new(Vec::new()),
            blocks: Mutex::new(Vec::new()),
            table: Mutex::new((0, Vec::new())),
        })
    }

    fn path(&self) -> &Path {
        self.scratch.path()
    }

    /// Put `table` where a forcing worker reads it, unless it is there
    /// already, and return its number.
    fn write_table(&self, table: &[u8]) -> Result<usize, String> {
        let mut held = self.table.lock().unwrap_or_else(|e| e.into_inner());
        if held.0 > 0 && held.1 == table {
            return Ok(held.0);
        }
        let path = self.path().join(SYNTH_TABLE_FILE);
        std::fs::write(&path, table).map_err(|e| {
            format!(
                "cannot write the synthesized structures {}: {e}",
                path.display()
            )
        })?;
        *held = (held.0 + 1, table.to_vec());
        Ok(held.0)
    }

    /// The number of the table in the scratch directory, when it is `table`.
    fn table_id(&self, table: &[u8]) -> Option<usize> {
        let held = self.table.lock().unwrap_or_else(|e| e.into_inner());
        (held.0 > 0 && held.1 == table).then_some(held.0)
    }

    /// The number of the latest table.
    fn latest_table(&self) -> usize {
        self.table.lock().unwrap_or_else(|e| e.into_inner()).0
    }

    /// Does a live or retired worker hold `table`?
    fn holds_table(&self, table: &[u8]) -> bool {
        let Some(id) = self.table_id(table) else {
            return false;
        };
        let holds = |kind: SynthWorker, t: usize| kind == SynthWorker::Force && t == id;
        self.idle
            .lock()
            .unwrap_or_else(|e| e.into_inner())
            .iter()
            .any(|w| holds(w.synth, w.table))
            || self
                .blocks
                .lock()
                .unwrap_or_else(|e| e.into_inner())
                .iter()
                .any(|b| holds(b.kind, b.table))
    }

    /// Retiring a worker is where its type blocks come from.
    fn retire(&self, cfg: &PoolConfig, w: Worker) {
        let token = self.retired.fetch_add(1, Ordering::SeqCst);
        let (kind, table) = (w.synth, w.table);
        if let Some((full, rest)) = w.quit(cfg, self.path(), token) {
            self.blocks
                .lock()
                .unwrap_or_else(|e| e.into_inner())
                .push(RetiredBlocks {
                    kind,
                    table,
                    full,
                    rest,
                });
        }
    }

    /// Retire every worker still alive, in parallel, and return the type
    /// blocks that speak for the document: in full from each worker that
    /// ended as `named.kind` (holding `named.table`, when there is one), first;
    /// then every other worker's without the structures it minted, for the
    /// types its functions interned.
    fn close(&self, cfg: &PoolConfig, named: &Named) -> Vec<String> {
        let idle = std::mem::take(&mut *self.idle.lock().unwrap_or_else(|e| e.into_inner()));
        std::thread::scope(|scope| {
            for w in idle {
                scope.spawn(move || self.retire(cfg, w));
            }
        });
        let table = named.table.as_deref().and_then(|t| self.table_id(t));
        let speaks = |b: &RetiredBlocks| {
            b.kind == named.kind && (named.kind != SynthWorker::Force || Some(b.table) == table)
        };
        let blocks = std::mem::take(&mut *self.blocks.lock().unwrap_or_else(|e| e.into_inner()));
        let (full, other): (Vec<RetiredBlocks>, Vec<RetiredBlocks>) =
            blocks.into_iter().partition(speaks);
        // A worker that numbered structures of its own and could not say what
        // it held without them says nothing.
        let rest = other.into_iter().filter_map(|b| match b.kind {
            SynthWorker::Record | SynthWorker::Force => b.rest,
            SynthWorker::Off | SynthWorker::Serial => Some(b.full),
        });
        full.into_iter().map(|b| b.full).chain(rest).collect()
    }
}

/// The stderr brand of a pool run.
struct PoolReport {
    /// `--jobs` or `--stream`: every line this run prints is `[unlace <tag>]`.
    tag: &'static str,
    banner: String,
    workers: usize,
    /// Does the closing line count the targets asked for, or the results that
    /// came back?  A `--jobs` run serves every chunk it planned, so the two are
    /// the same; a streamed one stops where its writer died, and `done: <every
    /// target>` above the error that stopped it reads as a finished export.
    finish_delivered: bool,
}

/// The pool itself: `report.workers` threads, each driving one worker process
/// through chunk after chunk of `source` until it runs dry, with every target's
/// final record handed to `sink` exactly once as `(slot indices, results)`.
/// Returns one rendered user-defined type block per retired worker when
/// `cfg.want_types` asked for them, and what the re-runs recovered.
fn run_pool_with(
    cfg: &PoolConfig,
    session: &Session,
    phase: &Phase,
    targets: &[TargetSpec],
    source: &dyn ChunkSource,
    report: &PoolReport,
    sink: &(dyn Fn(&[usize], Vec<FuncResult>) + Sync),
) -> Result<Retries, String> {
    let workers = report.workers;
    let total = targets.len();
    let exe =
        std::env::current_exe().map_err(|e| format!("cannot locate the unlace binary: {e}"))?;
    if let Some(table) = phase.table {
        session.write_table(table)?;
    }
    eprintln!("{}", report.banner);
    if phase.synth == SynthWorker::Off
        && let Some(note) = structsynth_shard_note(cfg, report.tag)
    {
        eprintln!("{note}");
    }

    let pool = Pool {
        cfg,
        session,
        synth: phase.synth,
        exe: &exe,
        scratch: session.path(),
        tag: report.tag,
        spawned: AtomicUsize::new(0),
        faults: Faults::from_env_reporting(report.tag),
        gate: RetryGate::default(),
        recovered: AtomicUsize::new(0),
        failed_alone: AtomicUsize::new(0),
    };
    let completed = AtomicUsize::new(0);
    let worker_ids = AtomicUsize::new(0);
    let progress = Progress::new(total, workers, report.tag);
    let start = Instant::now();

    std::thread::scope(|scope| {
        for _ in 0..workers {
            scope.spawn(|| {
                let worker_id = worker_ids.fetch_add(1, Ordering::SeqCst);
                // A worker an earlier pool of this run left alive is taken
                // before a new one is spawned: its load is already paid.
                let mut worker: Option<Worker> =
                    session.idle.lock().unwrap_or_else(|e| e.into_inner()).pop();
                let deliver = |indices: &[usize], results: Vec<FuncResult>| {
                    sink(indices, results);
                    let done = completed.fetch_add(indices.len(), Ordering::SeqCst) + indices.len();
                    progress.report(worker_id, done, start);
                };
                while let Some(indices) = source.next_chunk() {
                    pool.serve_with_retries(&mut worker, targets, &indices, &deliver);
                    // Recycling returns a worker to the memory floor a process
                    // cannot reach on its own; it costs a whole program load, so
                    // it is a ceiling rather than a rhythm.
                    if worker
                        .as_ref()
                        .is_some_and(|w| w.functions_done >= RECYCLE_AFTER)
                        && let Some(w) = worker.take()
                    {
                        session.retire(cfg, w);
                    }
                }
                // Parked for the run's next pool; [`Session::close`] retires it.
                if let Some(w) = worker.take() {
                    session
                        .idle
                        .lock()
                        .unwrap_or_else(|e| e.into_inner())
                        .push(w);
                }
            });
        }
    });

    let delivered = completed.load(Ordering::SeqCst);
    progress.finish(
        if report.finish_delivered {
            delivered
        } else {
            total
        },
        start,
    );
    Ok(pool.retries())
}

/// What every pool thread shares besides the caller's source and sink.
struct Pool<'r> {
    cfg: &'r PoolConfig<'r>,
    session: &'r Session,
    synth: SynthWorker,
    exe: &'r Path,
    scratch: &'r Path,
    tag: &'static str,
    spawned: AtomicUsize,
    faults: Faults,
    gate: RetryGate,
    recovered: AtomicUsize,
    failed_alone: AtomicUsize,
}

impl Pool<'_> {
    /// Serve the chunk at `indices`, then re-run alone each target its worker
    /// died before delivering, in [`retry_order`].  What will not be re-run
    /// reaches `deliver` at once and each re-run as it lands, so every target
    /// is delivered exactly once whatever happens to the re-runs; a target the
    /// chunk stops before keeps its record, marked as not re-run.
    fn serve_with_retries(
        &self,
        worker: &mut Option<Worker>,
        targets: &[TargetSpec],
        indices: &[usize],
        deliver: &dyn Fn(&[usize], Vec<FuncResult>),
    ) {
        let chunk: Vec<TargetSpec> = indices.iter().map(|&i| targets[i].clone()).collect();
        let served = self.serve(worker, &chunk);
        let reruns = retry_order(served.ending, &served.delivered);
        if reruns.is_empty() {
            deliver(indices, served.results);
            return;
        }
        let mut results: Vec<Option<FuncResult>> = served.results.into_iter().map(Some).collect();
        let order: Vec<(usize, bool)> = reruns
            .suspect
            .map(|p| (p, true))
            .into_iter()
            .chain(reruns.bystanders.iter().map(|&p| (p, false)))
            .collect();
        let mut rerun = vec![false; chunk.len()];
        for &(p, _) in &order {
            rerun[p] = true;
        }
        let (now, landed): (Vec<usize>, Vec<FuncResult>) = (0..chunk.len())
            .filter(|&p| !rerun[p])
            .filter_map(|p| Some((indices[p], results[p].take()?)))
            .unzip();
        if !now.is_empty() {
            deliver(&now, landed);
        }

        let (mut kept, mut kept_results) = (Vec::new(), Vec::new());
        let mut stopped: Option<String> = None;
        let mut tally = ChunkReruns::default();
        for (p, suspect) in order {
            let Some(original) = results[p].take() else {
                continue;
            };
            if let Some(why) = &stopped {
                kept.push(indices[p]);
                kept_results.push(not_rerun(original, why));
                continue;
            }
            if !self.gate.allows() {
                if self.gate.first_refusal() {
                    eprintln!(
                        "[unlace {}] warning: {RUN_RERUN_FAILURES} or more re-runs have failed or \
                         could not start, more than the workers have delivered, so functions a \
                         worker leaves unfinished are not re-run while that lasts.",
                        self.tag
                    );
                }
                kept.push(indices[p]);
                kept_results.push(not_rerun(original, NOT_RERUN_RUN));
                continue;
            }
            let solo = self.serve(worker, std::slice::from_ref(&chunk[p]));
            if !solo.ending.started() {
                self.gate.failed();
                let cause = solo.results[0].error.clone().unwrap_or_default();
                let why = format!("its re-run could not start ({cause})");
                kept.push(indices[p]);
                kept_results.push(not_rerun(original, &why));
                stopped = Some(why);
                continue;
            }
            let recovered = solo.delivered[0];
            if recovered {
                self.recovered.fetch_add(1, Ordering::SeqCst);
            } else {
                self.failed_alone.fetch_add(1, Ordering::SeqCst);
                self.gate.failed();
            }
            let stalled = matches!(solo.ending, Ending::Died { stalled: true, .. });
            stopped = tally
                .record(suspect, recovered, stalled)
                .map(str::to_string);
            deliver(&[indices[p]], solo.results);
        }
        if !kept.is_empty() {
            deliver(&kept, kept_results);
        }
    }

    /// Hand one chunk to this thread's worker, starting one first if the thread
    /// has none (its first chunk, or the one after a crash or a recycle).
    fn serve(&self, worker: &mut Option<Worker>, chunk: &[TargetSpec]) -> Served {
        // Names each chunk's spec and result files, so a re-run takes a fresh one.
        let idx = self.session.chunk_ids.fetch_add(1, Ordering::SeqCst);
        // A recording worker, or a forcing one holding an older table, takes the
        // latest table on the spot; any other worker of the wrong kind is
        // retired and replaced.
        if let Some(w) = worker.as_mut() {
            let table = self.session.latest_table();
            let usable = if self.synth == SynthWorker::Force {
                !w.stale_for(table) || w.force(table)
            } else {
                w.synth == self.synth
            };
            if !usable && let Some(w) = worker.take() {
                self.session.retire(self.cfg, w);
            }
        }
        if let Err(e) = std::fs::write(self.scratch.join(spec_name(idx)), encode_spec(chunk)) {
            return Served::not_run(chunk, &format!("{SPEC_WRITE_FAILED}: {e}"));
        }
        if worker.is_none() {
            match self.spawn() {
                Ok(w) => *worker = Some(w),
                Err(e) => {
                    let _ = std::fs::remove_file(self.scratch.join(spec_name(idx)));
                    return Served::not_run(chunk, &format!("{SPAWN_FAILED}: {e}"));
                }
            }
        }
        let w = worker.as_mut().expect("just spawned");
        let (produced, reason, ending) = w.run_chunk(self.cfg, self.scratch, idx, chunk.len());
        if ending != Ending::Finished {
            *worker = None;
        }
        let (results, delivered) = merge_chunk(chunk, produced, &reason);
        self.gate
            .delivered(delivered.iter().filter(|&&d| d).count());
        Served {
            results,
            delivered,
            ending,
        }
    }

    fn spawn(&self) -> std::io::Result<Worker> {
        let n = self.spawned.fetch_add(1, Ordering::SeqCst);
        if self.faults.refuses_spawn(n) {
            return Err(std::io::Error::other(format!(
                "{JOBS_FAULT_ENV} refused spawn {n}"
            )));
        }
        let mut w = Worker::spawn(self.cfg, self.synth, self.exe, self.scratch)?;
        if self.synth == SynthWorker::Force {
            w.table = self.session.latest_table();
        }
        Ok(w)
    }

    fn retries(&self) -> Retries {
        Retries {
            recovered: self.recovered.load(Ordering::SeqCst),
            failed_alone: self.failed_alone.load(Ordering::SeqCst),
        }
    }
}

/// What re-running a dead worker's targets came to over a run.
#[derive(Debug, Default, Clone, Copy, PartialEq, Eq)]
pub(crate) struct Retries {
    /// Re-runs that came back with the worker's own record for the function.
    pub(crate) recovered: usize,
    /// Re-runs whose worker failed again, leaving that re-run's `error` record.
    pub(crate) failed_alone: usize,
}

/// How a chunk handed to a worker ended.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Ending {
    /// The worker acknowledged it.
    Finished,
    /// No worker ran it: its spec could not be written or no worker started.
    NotRun,
    /// The worker exited, or the stall watchdog killed it, first.  `started`:
    /// it had opened this chunk's result file, which it does after its load,
    /// its spec and its rehydration, just before its first target.  `running`:
    /// the chunk position it last said it was starting, from a worker that
    /// holds its records back ([`SynthWorker::Serial`]).
    Died {
        stalled: bool,
        started: bool,
        running: Option<usize>,
    },
}

impl Ending {
    /// Did a worker get as far as the chunk's first target?
    fn started(self) -> bool {
        matches!(self, Ending::Finished | Ending::Died { started: true, .. })
    }
}

/// One served chunk: a record per target in chunk order, and which of them a
/// worker produced rather than the pool filling the gap.
struct Served {
    results: Vec<FuncResult>,
    delivered: Vec<bool>,
    ending: Ending,
}

impl Served {
    fn not_run(chunk: &[TargetSpec], reason: &str) -> Self {
        Served {
            results: lost_chunk(chunk, reason),
            delivered: vec![false; chunk.len()],
            ending: Ending::NotRun,
        }
    }
}

/// Why the functions a chunk stops before are not re-run, appended to the
/// record their chunk left them so [`count_anomalies`] still classifies it.
const NOT_RERUN_STALLED: &str = "two functions re-run from its chunk stalled";
const NOT_RERUN_CRASHING: &str = "most functions re-run from its chunk failed again";
const NOT_RERUN_RUN: &str =
    "re-runs in this run had failed more often than workers had delivered when it came up";

fn not_rerun(mut r: FuncResult, why: &str) -> FuncResult {
    if let Some(error) = r.error.as_mut() {
        error.push_str("; not re-run: ");
        error.push_str(why);
    }
    r
}

/// The positions of a chunk to re-run alone: the function its worker died in,
/// then the ones that never started.
#[derive(Debug, Default, PartialEq, Eq)]
struct Reruns {
    suspect: Option<usize>,
    bystanders: Vec<usize>,
}

impl Reruns {
    fn is_empty(&self) -> bool {
        self.suspect.is_none() && self.bystanders.is_empty()
    }
}

/// What to re-run of a chunk whose worker ended as `ending`.
///
/// Only a worker that died leaves anything to re-run.  Its records are a prefix
/// of the chunk, so the first position without one is the function it was on
/// (the suspect) and every later one never started.  A worker that holds its
/// records back until its sweep has run delivers none, so the function it was
/// on is the one it last said it was starting, and every other target is a
/// bystander.  The suspect goes first,
/// onto the fresh worker the thread spawns next, so a crash it repeats is its
/// own; the bystanders follow in [`spread`] order.  A stalled suspect is not
/// re-run: it already ran past four times the per-function budget, and a second
/// attempt would cost the same stall window again.  A worker that never opened
/// this chunk ran none of it, so its targets are all bystanders — including when
/// it died in its own load, which the parent has already survived on the same
/// binary: there the usual cause is the machine (an allocation refused while N
/// workers load at once), and a load that fails every time is bounded by the
/// re-run gate instead.
fn retry_order(ending: Ending, delivered: &[bool]) -> Reruns {
    let Ending::Died {
        stalled,
        started,
        running,
    } = ending
    else {
        return Reruns::default();
    };
    let missing: Vec<usize> = (0..delivered.len()).filter(|&p| !delivered[p]).collect();
    let on = running
        .filter(|&p| delivered.get(p) == Some(&false))
        .or_else(|| missing.first().copied());
    let (suspect, rest): (Option<usize>, Vec<usize>) = match (started, on) {
        (false, _) => (None, missing),
        (true, None) => return Reruns::default(),
        (true, Some(on)) => (
            (!stalled).then_some(on),
            missing.into_iter().filter(|&p| p != on).collect(),
        ),
    };
    Reruns {
        suspect,
        bystanders: spread(rest.len()).into_iter().map(|k| rest[k]).collect(),
    }
}

/// `0..count` in bit-reversed order, so every prefix of it is spread across the
/// whole range: a chunk's first re-runs sample all of it instead of one run of
/// size-sorted neighbours.  The pattern it serves worst is a crasher at every
/// other place, since its first half is the even offsets.
fn spread(count: usize) -> Vec<usize> {
    let span = count.next_power_of_two();
    let bits = span.trailing_zeros();
    (0..span)
        .map(|k| {
            if bits == 0 {
                k
            } else {
                k.reverse_bits() >> (usize::BITS - bits)
            }
        })
        .filter(|&k| k < count)
        .collect()
}

/// One chunk's re-runs so far.  Stalls count whoever stalled, since each cost a
/// window; failures and recoveries count bystanders only, since the function
/// that was running is expected to fail again.
#[derive(Default)]
struct ChunkReruns {
    failed: usize,
    recovered: usize,
    stalled: usize,
}

impl ChunkReruns {
    /// Record one re-run; why the chunk stops re-running, once it does.
    fn record(&mut self, suspect: bool, recovered: bool, stalled: bool) -> Option<&'static str> {
        self.stalled += usize::from(stalled);
        if !suspect {
            if recovered {
                self.recovered += 1;
            } else {
                self.failed += 1;
            }
        }
        if self.stalled >= CHUNK_RERUN_STALLS {
            return Some(NOT_RERUN_STALLED);
        }
        (self.failed >= CHUNK_RERUN_FAILURES && self.failed > self.recovered)
            .then_some(NOT_RERUN_CRASHING)
    }
}

/// The run-wide check on re-running, asked each time a re-run would start: no
/// while [`RUN_RERUN_FAILURES`] or more re-runs have failed or could not start
/// and they outnumber every record the workers delivered, planned or re-run.
/// Workers that die whatever they are given deliver nothing, so they pay a
/// bounded number of extra loads; since held-back re-runs cannot fail,
/// deliveries catch up and re-running resumes in a run whose workers mostly
/// work.
#[derive(Default)]
struct RetryGate {
    failed: AtomicUsize,
    delivered: AtomicUsize,
    refused: AtomicBool,
}

impl RetryGate {
    fn allows(&self) -> bool {
        let failed = self.failed.load(Ordering::SeqCst);
        failed < RUN_RERUN_FAILURES || failed <= self.delivered.load(Ordering::SeqCst)
    }

    fn delivered(&self, records: usize) {
        self.delivered.fetch_add(records, Ordering::SeqCst);
    }

    fn failed(&self) {
        self.failed.fetch_add(1, Ordering::SeqCst);
    }

    /// `true` only the first time a re-run is held back, so the run warns once.
    fn first_refusal(&self) -> bool {
        !self.refused.swap(true, Ordering::SeqCst)
    }
}

/// One live worker process, its assignment pipe and its acknowledgement channel.
///
/// A worker outlives the chunk it is working on, which is the whole point: on an
/// 18 MB PE a worker's load costs 17 s, against ~70 ms for the average function,
/// so paying it per chunk made a 12-way run **slower** than the serial one
/// (1,500 `mpengine.dll` functions: 113 s serial, 327 s across 34 single-load
/// chunks).  Loading once and taking chunk after chunk down the pipe pays it
/// `--jobs` times for the whole run, and leaves chunks free to be small enough
/// that no worker sits idle at the end.
struct Worker {
    child: std::process::Child,
    /// The assignment pipe, and by construction the liveness pipe: the parent
    /// holds the only write end for as long as this worker should live.
    stdin: std::process::ChildStdin,
    /// Chunk indices the worker has acknowledged.  Disconnects when the worker's
    /// stdout closes, which is how a crash is noticed.
    acks: std::sync::mpsc::Receiver<usize>,
    /// Functions handed to this process so far — what [`RECYCLE_AFTER`] bounds.
    functions_done: usize,
    /// Has this worker finished a chunk?  Until it has, the stall watchdog must
    /// allow for a whole program load on top of the per-function budget.
    warm: bool,
    /// What it does with the structure ledger now.
    synth: SynthWorker,
    /// Which of the session's tables it holds, when it forces.
    table: usize,
}

impl Worker {
    fn spawn(
        cfg: &PoolConfig,
        synth: SynthWorker,
        exe: &Path,
        scratch: &Path,
    ) -> std::io::Result<Self> {
        let mut cmd = Command::new(exe);
        crate::loadtime::apply_invocation(&mut cmd);
        cmd.arg("decompile-all")
            .arg(cfg.binary)
            .arg("--jobs-worker")
            .arg(scratch)
            .arg("--mode")
            .arg(cfg.mode)
            .arg("--max-fn-seconds")
            .arg(cfg.max_fn_seconds.to_string());
        if let Some(mib) = cfg.max_fn_memory {
            cmd.arg("--max-fn-memory").arg(mib.to_string());
        }
        if cfg.no_vars {
            cmd.arg("--no-vars");
        }
        if cfg.elem_objects {
            cmd.arg("--jobs-objects");
        }
        if cfg.want_proto {
            cmd.arg("--jobs-proto");
        }
        if cfg.want_provenance {
            cmd.arg("--jobs-provenance");
        }
        if cfg.want_storage {
            cmd.arg("--jobs-storage");
        }
        if cfg.want_types {
            cmd.arg("--jobs-types");
        }
        if cfg.want_callee_hints {
            cmd.arg("--jobs-callees");
        }
        if cfg.want_pointer_arguments {
            cmd.arg("--jobs-pointerargs");
        }
        if cfg.full_load {
            cmd.arg("--jobs-full-load");
        }
        for (flag, value) in [
            ("--isa", cfg.isa),
            ("--slice", cfg.slice),
            ("--target", cfg.target),
            ("--sleighpath", cfg.sleighpath),
        ] {
            if let Some(v) = value {
                cmd.arg(flag).arg(v);
            }
        }
        for decl in &cfg.func_decls {
            cmd.arg("--define-function").arg(decl);
        }
        // The parent's resolved options, verbatim — except the one decision a
        // worker must NOT inherit.  `fast_funcdisc` is the whole-binary function
        // discovery the parent has already run and is about to hand over; leaving
        // it on makes every worker redo it (31 s and 1.97 GB each on an 18 MB PE,
        // against 17 s and 469 MB without).  The parent's list is the merged one,
        // so its `--mode` preset spells this option out and a worker-side default
        // would read as an explicit choice and lose.
        for (name, value) in cfg.options {
            if !cfg.full_load && name == "fast_funcdisc" {
                continue;
            }
            cmd.arg("--option").arg(name).arg(value);
        }
        if !cfg.full_load {
            cmd.arg("--option").arg("fast_funcdisc").arg("off");
        }
        // See [`structsynth_shard_note`] and [`name_structs_serially`].
        match synth.flag() {
            Some(flag) => {
                cmd.arg("--jobs-synth").arg(flag);
            }
            None => {
                cmd.arg("--option").arg("structsynth").arg("off");
            }
        }
        // Same reasoning one flag further in: the parent's own load ran the
        // discovery walk on N decode lanes and is handing the inventory over, so
        // a worker must not run N more of them. Forced rather than merely left
        // unset, because the variable can also reach a worker from the user's
        // environment or through `--jobs-full-load`.
        cmd.env(unlace_analysis::listing::pdecode::DECODE_JOBS_ENV, "1");
        // stdin carries the assignments AND the liveness signal; stdout carries
        // the acknowledgements; stderr is the user's, shared with the parent.
        cmd.stdin(Stdio::piped())
            .stdout(Stdio::piped())
            .stderr(Stdio::inherit());

        let mut child = cmd.spawn()?;
        let stdin = child.stdin.take().expect("stdin was piped");
        let stdout = child.stdout.take().expect("stdout was piped");
        let (tx, acks) = std::sync::mpsc::channel();
        // A line the engine itself printed is not an acknowledgement: only the
        // exact `done <n>` shape counts, so nothing on stdout can fake progress.
        std::thread::spawn(move || {
            for line in std::io::BufReader::new(stdout)
                .lines()
                .map_while(Result::ok)
            {
                if let Some(rest) = line.strip_prefix(ACK_PREFIX)
                    && let Ok(idx) = rest.trim().parse::<usize>()
                    && tx.send(idx).is_err()
                {
                    return;
                }
            }
        });
        Ok(Self {
            child,
            stdin,
            acks,
            functions_done: 0,
            warm: false,
            synth,
            table: 0,
        })
    }

    /// Does this worker lack table `table` for a forced chunk?
    fn stale_for(&self, table: usize) -> bool {
        self.synth == SynthWorker::Record
            || (self.synth == SynthWorker::Force && self.table != table)
    }

    /// Make this worker a forcing one holding table `table`: it forgets the
    /// structures it minted or installed and installs the one in the scratch
    /// directory before its next chunk. `false` when the pipe is gone, which
    /// leaves the worker for the caller to replace.
    fn force(&mut self, table: usize) -> bool {
        let sent = writeln!(self.stdin, "{SYNTH_LINE}")
            .and_then(|()| self.stdin.flush())
            .is_ok();
        if sent {
            self.synth = SynthWorker::Force;
            self.table = table;
        }
        sent
    }

    /// Decompile chunk `idx`, returning what the worker delivered, the reason any
    /// target of it is missing, and how the chunk ended — anything but
    /// [`Ending::Finished`] leaves the worker unusable.
    fn run_chunk(
        &mut self,
        cfg: &PoolConfig,
        scratch: &Path,
        idx: usize,
        len: usize,
    ) -> (Vec<FuncResult>, String, Ending) {
        self.functions_done += len;
        let out_path = scratch.join(result_name(idx));
        let assigned = writeln!(self.stdin, "{idx}").and_then(|()| self.stdin.flush());
        let outcome = match assigned {
            Ok(()) => self.await_chunk(cfg, idx, &out_path),
            Err(e) => {
                let _ = self.child.kill();
                let _ = self.child.wait();
                Wait::Failed(format!("cannot assign the chunk: {e}"))
            }
        };
        // Read only once the worker is acknowledged or gone, so whether the file
        // exists is final: the worker creates it just before its first target.
        let file = std::fs::read(&out_path);
        let started = file.is_ok();
        let frames = file.ok().and_then(|b| decode_results(&b));
        let running = frames.as_ref().and_then(|f| f.running);
        let produced = frames.map(|f| f.results).unwrap_or_default();
        let _ = std::fs::remove_file(scratch.join(spec_name(idx)));
        let _ = std::fs::remove_file(&out_path);
        match outcome {
            Wait::Done => {
                self.warm = true;
                (
                    produced,
                    format!("{NO_RECORD} for this function"),
                    Ending::Finished,
                )
            }
            Wait::Stalled => (
                produced,
                format!("{STALLED} ({}s); the worker was killed", cfg.max_fn_seconds),
                Ending::Died {
                    stalled: true,
                    started,
                    running,
                },
            ),
            Wait::Failed(why) => (
                produced,
                format!("{CHUNK_FAILED} ({why})"),
                Ending::Died {
                    stalled: false,
                    started,
                    running,
                },
            ),
        }
    }

    /// Wait for this chunk's acknowledgement, killing the worker if it stops
    /// producing records for longer than [`stall_deadline`] allows.
    ///
    /// The in-process watchdog is **cooperative**: the decompile drive polls a
    /// deadline, so a function wedged where nothing polls runs straight through
    /// it — which is how one function can hold a whole export open.  A pool is
    /// the first arrangement that can enforce the budget for real, because the
    /// enforcer is not the process that is stuck.  Progress is measured by the
    /// result file growing, since a worker flushes one frame per finished
    /// function.
    fn await_chunk(&mut self, cfg: &PoolConfig, idx: usize, out_path: &Path) -> Wait {
        let mut last_progress = Instant::now();
        let mut last_size = 0u64;
        let mut saw_record = false;
        loop {
            match self.acks.recv_timeout(Duration::from_millis(250)) {
                Ok(acked) if acked == idx => return Wait::Done,
                // An acknowledgement for another chunk cannot happen (a worker
                // serves one at a time) but is not a reason to give up on this one.
                Ok(_) => continue,
                Err(std::sync::mpsc::RecvTimeoutError::Disconnected) => {
                    let status = self.child.wait();
                    return Wait::Failed(match status {
                        Ok(s) => format!("worker exited: {s}"),
                        Err(e) => format!("cannot wait for the worker: {e}"),
                    });
                }
                Err(std::sync::mpsc::RecvTimeoutError::Timeout) => {}
            }
            let size = std::fs::metadata(out_path).map(|m| m.len()).unwrap_or(0);
            if size > last_size {
                last_size = size;
                saw_record = true;
                last_progress = Instant::now();
            }
            let Some(allowed) = stall_deadline(cfg, self.warm || saw_record) else {
                continue;
            };
            if last_progress.elapsed() > allowed {
                let _ = self.child.kill();
                let _ = self.child.wait();
                return Wait::Stalled;
            }
        }
    }

    /// Retire a worker that is between chunks: `quit <token>` on the assignment
    /// pipe, so it exits without mistaking the closed pipe for a dead parent and
    /// sweeping the scratch directory its siblings are still using.
    ///
    /// `quit` is also when a `--jobs-types` worker renders its type block, and
    /// the token names the file it leaves it in.  Per WORKER, not per chunk: a
    /// worker's type factory accumulates over every chunk it served, so its final
    /// rendering is the only one that speaks for all of them.
    fn quit(
        self,
        cfg: &PoolConfig,
        scratch: &Path,
        token: usize,
    ) -> Option<(String, Option<String>)> {
        let Self {
            mut child,
            mut stdin,
            ..
        } = self;
        let _ = writeln!(stdin, "{QUIT_PREFIX}{token}");
        let _ = stdin.flush();
        drop(stdin);
        let deadline = Instant::now() + Duration::from_secs(30);
        loop {
            match child.try_wait() {
                Ok(Some(_)) | Err(_) => break,
                Ok(None) if Instant::now() >= deadline => {
                    let _ = child.kill();
                    let _ = child.wait();
                    break;
                }
                Ok(None) => std::thread::sleep(Duration::from_millis(20)),
            }
        }
        if !cfg.want_types {
            return None;
        }
        let read = |rest: bool| {
            let path = scratch.join(types_name(token, rest));
            let block = std::fs::read_to_string(&path).ok();
            let _ = std::fs::remove_file(&path);
            block
        };
        let rest = read(true);
        Some((read(false)?, rest))
    }
}

enum Wait {
    Done,
    Stalled,
    Failed(String),
}

/// How long a worker may produce nothing before the parent kills it, or `None`
/// when `--max-fn-seconds 0` has disabled the budget and therefore this too.
///
/// Deliberately loose: `4x` the per-function budget, and before the worker's
/// first record a whole program load on top of it, because it is competing with
/// `jobs-1` siblings for the machine and the parent's own load time is the only
/// measurement of that cost anyone has.  The point is to bound a function wedged
/// where nothing probes the cooperative deadline, not to second-guess a slow one.
fn stall_deadline(cfg: &PoolConfig, warm: bool) -> Option<Duration> {
    if cfg.max_fn_seconds == 0 {
        return None;
    }
    let budget = Duration::from_secs_f64(4.0 * cfg.max_fn_seconds as f64);
    if warm {
        return Some(budget);
    }
    Some(budget + Duration::from_secs_f64(60.0 + 3.0 * cfg.load_seconds))
}

/// Why a pool gives its workers `structsynth off`, or `None` when the run had
/// turned it off anyway: the `--stream` pool, whose serial run writes each body
/// as it lands and runs no convergence sweep for [`name_structs_serially`] to
/// reproduce.
///
/// A synthesized `struct_N` is named by the process that minted it, so two
/// workers can each define a different `struct_0`: one document would use a name
/// for two layouts, and one `.h` cannot declare both.
fn structsynth_shard_note(cfg: &PoolConfig, tag: &str) -> Option<String> {
    let explicit = cfg
        .options
        .iter()
        .rev()
        .find(|(name, _)| name == "structsynth");
    if explicit.is_some_and(|(_, value)| value == "off") {
        return None;
    }
    Some(format!(
        "[unlace {tag}] note: structsynth is off in the worker processes: each process would \
         number its own struct_N, so one name could stand for two layouts. Re-run with \
         --jobs 1 for synthesized structures."
    ))
}

/// Every `error` record the POOL itself produced, as opposed to one the engine
/// produced for a function it genuinely could not decompile.  Kept as constants
/// because [`count_anomalies`] classifies by them.
const NO_RECORD: &str = "worker produced no record";
const CHUNK_FAILED: &str = "worker chunk failed";
const SPAWN_FAILED: &str = "cannot spawn worker";
const SPEC_WRITE_FAILED: &str = "chunk spec write failed";
const STALLED: &str = "worker stalled past the per-function watchdog";

/// `(watchdog trips, functions lost to a failed worker)`.
fn count_anomalies(results: &[FuncResult]) -> (usize, usize) {
    count_error_anomalies(results.iter().filter_map(|r| r.error.as_deref()))
}

fn count_error_anomalies<'a>(errors: impl Iterator<Item = &'a str>) -> (usize, usize) {
    let mut tripped = 0;
    let mut lost = 0;
    for e in errors {
        if e.contains("budget exceeded") {
            tripped += 1;
        }
        if [
            NO_RECORD,
            CHUNK_FAILED,
            SPAWN_FAILED,
            SPEC_WRITE_FAILED,
            STALLED,
        ]
        .iter()
        .any(|m| e.starts_with(m))
        {
            lost += 1;
        }
    }
    (tripped, lost)
}

/// The two ways `--jobs N` can end up disagreeing with `--jobs 1`, both of which
/// would otherwise be silent.
///
/// The per-function watchdog is a **wall-clock** deadline, so a function that
/// finished just inside it serially can miss it under N-way CPU contention and
/// degrade to an `error`.  The budget itself is resolved once by the parent and
/// passed to every worker, so the policy is identical — only the wall clock
/// moves.
///
/// A worker can also simply die (OOM killer, SIGSEGV, an operator's `kill`, or
/// the parent's own stall kill).  The functions of its chunk it had not flushed
/// are re-run on their own ([`retry_order`]), and whatever still has no result
/// becomes an `error` record.  The run legitimately continues — one bad function
/// must not kill a 33,000-function export — but exiting 0 without a word about
/// it is not reporting, and neither is hiding that a worker died when every
/// function it left behind was recovered.
fn warn_about_anomalies(results: &[FuncResult], max_fn_seconds: u64, retries: Retries) {
    for line in anomaly_lines(count_anomalies(results), max_fn_seconds, JOBS_TAG, retries) {
        eprintln!("{line}");
    }
}

/// The same warnings for a run whose results were consumed as they landed
/// (`--stream`), which keeps only the error strings.
pub(crate) fn warn_about_streamed_anomalies(
    errors: &[String],
    max_fn_seconds: u64,
    retries: Retries,
) {
    let counts = count_error_anomalies(errors.iter().map(String::as_str));
    for line in anomaly_lines(counts, max_fn_seconds, STREAM_TAG, retries) {
        eprintln!("{line}");
    }
}

fn anomaly_lines(
    (tripped, lost): (usize, usize),
    max_fn_seconds: u64,
    tag: &str,
    retries: Retries,
) -> Vec<String> {
    let mut lines = Vec::new();
    if tripped > 0 && max_fn_seconds > 0 {
        lines.push(format!(
            "[unlace {tag}] warning: {tripped} function(s) hit the {max_fn_seconds}s per-function \
             watchdog. It is wall-clock, so heavy functions can trip it under parallel load that \
             would pass serially — re-run with a larger --max-fn-seconds (or 0) if you need them."
        ));
    }
    if retries.recovered > 0 {
        lines.push(format!(
            "[unlace {tag}] {} function(s) left unfinished by a failed worker process were re-run \
             one at a time and recovered.",
            retries.recovered
        ));
    }
    if lost > 0 {
        let again = match retries.failed_alone {
            0 => String::new(),
            n => format!(" {n} of them failed again when re-run on their own."),
        };
        lines.push(format!(
            "[unlace {tag}] warning: {lost} function(s) have no result because their worker process \
             failed (crash, OOM kill, an external signal, or the stall watchdog); they are `error` \
             records in the output.{again} Re-run those functions, with fewer --jobs if the \
             machine ran out of memory."
        ));
    }
    lines
}

// --- how many workers, and what each one gets --------------------------------

/// Trim `--jobs auto` to what this machine's free memory can hold, and say so
/// when an explicit `--jobs N` asks for more than that.
///
/// `auto` is a promise not to wreck the machine, so it yields; an explicit
/// number is an instruction, so it is obeyed with a warning. Free memory is
/// [`unlace_decomp::hostmem::available`]: under a cgroup v2 `memory.max`
/// it is that cap's headroom when the cap is the tighter bound.
fn affordable_jobs(cfg: &PoolConfig, tag: &str) -> usize {
    let (Some(per_worker), Some(free)) = (
        worker_estimate(cfg.full_load),
        unlace_decomp::hostmem::available(),
    ) else {
        return cfg.jobs;
    };
    let available = free.bytes;
    // Two thirds of what is free: the parent keeps its own load on several of
    // these surfaces, and a worker's peak is an estimate, not a bound.
    let affordable = (available.saturating_mul(2) / 3 / per_worker.max(1)).max(1) as usize;
    if cfg.jobs <= affordable {
        return cfg.jobs;
    }
    let gb = |b: u64| b as f64 / (1024.0 * 1024.0 * 1024.0);
    let capped = if free.cgroup {
        " under a cgroup's memory.max"
    } else {
        ""
    };
    if cfg.jobs_auto {
        eprintln!(
            "[unlace {tag}] auto: {affordable} worker(s), not {} — one worker needs about {:.1} GB \
             here and {:.1} GB is free{capped}. Pass --jobs N to override.",
            cfg.jobs,
            gb(per_worker),
            gb(available)
        );
        return affordable;
    }
    let place = if free.cgroup {
        capped
    } else {
        " on this machine"
    };
    eprintln!(
        "[unlace {tag}] warning: {} workers at about {:.1} GB each is more than the {:.1} GB free\
         {place}; expect swapping or an OOM kill. {affordable} would fit.",
        cfg.jobs,
        gb(per_worker),
        gb(available)
    );
    cfg.jobs
}

/// What one worker will cost, from the only measurement the parent has: its own
/// peak resident size, which is only knowable after the load.
///
/// A `--jobs-full-load` worker runs the parent's exact load, so that peak IS the
/// estimate.  A default worker skips the whole-binary discovery the parent ran
/// and takes its inventory instead, which is most of a load's memory — 469 MB
/// against the parent's 1.99 GB on an 18 MB PE with 33,214 functions.  A quarter
/// rounds that ratio against us, with a floor for small programs where the
/// constant costs dominate and the ratio means nothing.
fn worker_estimate(full_load: bool) -> Option<u64> {
    Some(worker_estimate_from(
        unlace_decomp::hostmem::peak_resident_bytes()?,
        unlace_analysis::listing::pdecode::lane_peak_excess_bytes(),
        full_load,
    ))
}

/// The estimate's arithmetic. `lane_excess` is what the parent's own decode
/// lanes added to its peak (`--jobs N` runs them during the load) — a cost no
/// worker pays, because every worker is forced back to one lane, so leaving it
/// in prices a worker ~1.5x too high and shrinks the pool that does 96% of the
/// work.
fn worker_estimate_from(parent_peak: u64, lane_excess: u64, full_load: bool) -> u64 {
    const FLOOR: u64 = 256 * 1024 * 1024;
    let parent = parent_peak.saturating_sub(lane_excess);
    if full_load {
        parent
    } else {
        (parent / 4).max(FLOOR)
    }
}

/// Plan the chunks: which targets each worker invocation gets, in dispatch
/// order. Each entry is a list of **slot indices**, so output order travels
/// independently of the order work is done in.
///
/// A chunk is a unit of *scheduling*, not of process lifetime — a worker takes
/// the next one the moment it finishes the last — so the packing only has to
/// balance the end of the run.  Chunks are packed to roughly equal estimated
/// work over a longest-first order, aiming at [`CHUNKS_PER_JOB`] per worker: the
/// expensive functions go out first and mostly alone, the long cheap tail
/// batches, and a worker that draws a slow chunk simply draws fewer of them.
/// An explicit `--jobs-chunk` overrides the packing with a fixed size, keeping
/// the ordering.  Depends only on the targets and `jobs`, so the plan is
/// deterministic.
fn plan_chunks(targets: &[TargetSpec], explicit: Option<usize>, jobs: usize) -> Vec<Vec<usize>> {
    let total = targets.len();
    if total == 0 {
        return Vec::new();
    }
    let cost: Vec<u64> = targets
        .iter()
        .map(|t| t.size.clamp(1, EXTENT_CAP))
        .collect();
    let mut order: Vec<usize> = (0..total).collect();
    order.sort_by(|&a, &b| cost[b].cmp(&cost[a]).then(a.cmp(&b)));

    if let Some(size) = explicit {
        return order.chunks(size.max(1)).map(<[usize]>::to_vec).collect();
    }

    let quantum = (cost.iter().sum::<u64>() / (jobs.max(1) * CHUNKS_PER_JOB) as u64).max(1);
    let mut plan: Vec<Vec<usize>> = Vec::new();
    let mut current: Vec<usize> = Vec::new();
    let mut work: u64 = 0;
    for &i in &order {
        current.push(i);
        work = work.saturating_add(cost[i]);
        // No floor on the size: a function estimated to be a long pole is worth a
        // chunk to itself, while cheap functions never reach the quantum alone
        // and batch up anyway.
        if work >= quantum || current.len() >= MAX_AUTO_CHUNK {
            plan.push(std::mem::take(&mut current));
            work = 0;
        }
    }
    if !current.is_empty() {
        plan.push(current);
    }
    plan
}

/// Per-target cost estimate cap, in bytes.  The inventory's own extent is the
/// estimate; the cap keeps one enormous (or unmeasured, hence `0` → `1`) entry
/// from swallowing a chunk's whole budget.
const EXTENT_CAP: u64 = 0x8000;

/// Line the worker's records back up with the chunk it was given, one result per
/// target, and say which of them the worker produced.  A worker that died hard
/// (SIGSEGV/OOM) delivers only the prefix it flushed, so the rest degrade to
/// `error` records — which [`retry_order`] then decides whether to re-run — and
/// the run continues: one bad function must not kill a 33,000-function export.
fn merge_chunk(
    chunk: &[TargetSpec],
    produced: Vec<FuncResult>,
    reason: &str,
) -> (Vec<FuncResult>, Vec<bool>) {
    #[expect(
        clippy::disallowed_types,
        reason = "Lookup only; chunk order determines output and duplicate targets consume once."
    )]
    let mut by_addr: std::collections::HashMap<u64, FuncResult> =
        produced.into_iter().map(|r| (r.byte_address, r)).collect();
    chunk
        .iter()
        .map(|t| match by_addr.remove(&t.addr) {
            Some(r) => (r, true),
            None => (lost_result(t, reason), false),
        })
        .unzip()
}

/// The `error` record a target gets when nothing produced one for it — the
/// `--stream` reconciliation's filler, classified as a lost function by
/// [`warn_about_streamed_anomalies`] exactly as the pool's own gap is.
pub(crate) fn missing_result(t: &TargetSpec) -> FuncResult {
    lost_result(t, NO_RECORD)
}

fn lost_chunk(chunk: &[TargetSpec], reason: &str) -> Vec<FuncResult> {
    chunk.iter().map(|t| lost_result(t, reason)).collect()
}

fn lost_result(t: &TargetSpec, reason: &str) -> FuncResult {
    FuncResult {
        name: t.name.clone(),
        address: t.addr,
        byte_address: t.addr,
        size: t.size as i64,
        code: None,
        error: Some(reason.to_string()),
        proto: None,
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: Vec::new(),
        types: Vec::new(),
        stack_objects: Vec::new(),
        globals: Vec::new(),
        field_calls: Vec::new(),
        line_mappings: Vec::new(),
        aliases: t.aliases.clone(),
        object_location: t.object_location.clone(),
        callee_hints: Vec::new(),
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    }
}

// --- worker-side assignments and parent liveness ------------------------------

/// The chunk a worker should decompile next, and — by the same pipe — whether it
/// still has a parent to decompile it for.
///
/// A worker's stdin is a pipe whose only write end is a
/// [`std::process::ChildStdin`] the parent holds for the worker's lifetime.  The
/// parent writes one chunk index per line down it and finishes with
/// [`QUIT_PREFIX`]; the returned channel closes when either that line or the end
/// of the pipe arrives, which is what ends the worker's loop.
///
/// The distinction between the two matters.  `quit` is the parent saying it is
/// done with this worker while its siblings run on, so the worker exits and
/// touches nothing.  End-of-pipe without it means every write end is closed,
/// which happens when the parent goes away *however* it goes away — normally,
/// panicking, SIGINT, SIGTERM or SIGKILL, the last of which no in-process
/// handler could ever cover.  Then there is no one left to consume any result,
/// so the worker removes the pool's scratch directory (with the whole program's
/// symbol inventory and every function's C in it) and exits, instead of running
/// to completion reparented to init.
pub(crate) fn listen_for_assignments(scratch: &str) -> std::sync::mpsc::Receiver<Assignment> {
    let dir = pool_scratch(scratch);
    let (tx, rx) = std::sync::mpsc::channel();
    std::thread::spawn(move || {
        for line in std::io::BufReader::new(std::io::stdin())
            .lines()
            .map_while(Result::ok)
        {
            let line = line.trim();
            if line == SYNTH_LINE {
                if tx.send(Assignment::Force).is_err() {
                    return;
                }
                continue;
            }
            let sent = match line.strip_prefix(QUIT_PREFIX) {
                Some(token) => match token.parse::<usize>() {
                    Ok(token) => {
                        let _ = tx.send(Assignment::Quit(token));
                        return;
                    }
                    Err(_) => return,
                },
                None => match line.parse::<usize>() {
                    Ok(idx) => tx.send(Assignment::Chunk(idx)).is_ok(),
                    Err(_) => continue,
                },
            };
            if !sent {
                return;
            }
        }
        if let Some(dir) = dir {
            let _ = std::fs::remove_dir_all(dir);
        }
        std::process::exit(EXIT_PARENT_GONE);
    });
    rx
}

/// What the parent just told this worker to do.
pub(crate) enum Assignment {
    /// Decompile the targets in this chunk's spec file.
    Chunk(usize),
    /// Stop.  The token names the file to leave a `--jobs-types` block in.
    Quit(usize),
    /// Forget the structures this worker minted, install the replayed table and
    /// answer every lookup from the chunk specs from now on.
    Force,
}

/// A worker's chunk-spec / result / type-block paths inside the pool scratch
/// directory.
pub(crate) fn spec_name(idx: usize) -> String {
    format!("chunk{idx}.spec")
}

pub(crate) fn result_name(idx: usize) -> String {
    format!("chunk{idx}.res")
}

fn types_name(token: usize, rest: bool) -> String {
    format!("types{token}{}.blk", if rest { ".rest" } else { "" })
}

/// Leave this worker's rendered user-defined type definitions where the parent's
/// `quit` said to (see [`merge_type_definitions`]); `rest` is the rendering
/// without the synthesized structures ([`Session::close`]).
pub(crate) fn write_type_block(
    scratch: &str,
    token: usize,
    rest: bool,
    text: &str,
) -> Result<(), String> {
    let path = Path::new(scratch).join(types_name(token, rest));
    std::fs::write(&path, text)
        .map_err(|e| format!("cannot write the worker type block {}: {e}", path.display()))
}

/// The inventory hand-off file, written once by the parent and read by every
/// worker that did not run its own discovery.
pub(crate) const INVENTORY_FILE: &str = "inventory.spec";

/// The parent's `armframes` record, replayed by every worker that did not run
/// its own discovery.
pub(crate) const ARM_FRAMES_FILE: &str = "armframes.record";

/// The replayed synthesized structures a [`SynthWorker::Force`] worker installs.
pub(crate) const SYNTH_TABLE_FILE: &str = "synth.table";

/// Read the table [`name_structs_serially`] left for a forced worker.
pub(crate) fn read_synth_table(scratch: &str) -> Result<Vec<(String, SynthRequest)>, String> {
    let path = Path::new(scratch).join(SYNTH_TABLE_FILE);
    let bytes = std::fs::read(&path).map_err(|e| {
        format!(
            "cannot read the synthesized structures {}: {e}",
            path.display()
        )
    })?;
    shard::decode_table(&bytes)
        .ok_or_else(|| format!("malformed synthesized-structure table {}", path.display()))
}

/// Tell the parent chunk `idx` is written and closed.  The only line on a
/// worker's stdout the parent acts on.
pub(crate) fn ack_chunk(idx: usize) {
    let mut out = std::io::stdout();
    let _ = writeln!(out, "{ACK_PREFIX}{idx}");
    let _ = out.flush();
}

// --- test-only fault injection -------------------------------------------------

/// The failures [`JOBS_FAULT_ENV`] asks for.  Empty in every real run, where
/// each check below is a loop over nothing.
#[derive(Debug, Default, Clone, PartialEq, Eq)]
pub(crate) struct Faults {
    at: Vec<(Fault, Option<u64>)>,
    spawn_after: Option<usize>,
    /// `load-abort:<n>`: how many worker loads abort (`usize::MAX` for `*`).
    load_aborts: usize,
    /// `synth:serial`: name the synthesized structures by the one-worker serial
    /// path even when the replay holds, so a test can reach it.
    synth_serial: bool,
    /// `synth:force`: rename no function, so every one that asked the ledger
    /// is decompiled again with the replayed names.
    synth_force: bool,
    /// `synth:noinstall`: a worker refuses the replayed structures, which is
    /// what a field type it cannot rebuild would do to it.
    synth_noinstall: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Fault {
    Panic,
    PanicOnce,
    Stall,
    StallAgain,
}

impl Faults {
    pub(crate) fn from_env() -> Faults {
        unlace_base::env::var(JOBS_FAULT_ENV)
            .map(|raw| Faults::parse(&raw).0)
            .unwrap_or_default()
    }

    /// The parent's copy, which also says which directives it could not read,
    /// once, so a mistyped fault cannot pass for a test that injected nothing.
    fn from_env_reporting(tag: &str) -> Faults {
        let Ok(raw) = unlace_base::env::var(JOBS_FAULT_ENV) else {
            return Faults::default();
        };
        let (faults, rejected) = Faults::parse(&raw);
        for directive in rejected {
            eprintln!(
                "[unlace {tag}] warning: ignoring unreadable {JOBS_FAULT_ENV} directive {directive:?}"
            );
        }
        faults
    }

    fn parse(raw: &str) -> (Faults, Vec<String>) {
        let mut faults = Faults::default();
        let mut rejected = Vec::new();
        for directive in raw.split(',').map(str::trim).filter(|d| !d.is_empty()) {
            let parsed = directive.split_once(':').and_then(|(kind, arg)| {
                let arg = arg.trim();
                let fault = match kind.trim() {
                    "spawn" => {
                        faults.spawn_after = Some(arg.parse().ok()?);
                        return Some(());
                    }
                    "load-abort" => {
                        faults.load_aborts = if arg == "*" {
                            usize::MAX
                        } else {
                            arg.parse().ok()?
                        };
                        return Some(());
                    }
                    "synth" if arg == "serial" => {
                        faults.synth_serial = true;
                        return Some(());
                    }
                    "synth" if arg == "force" => {
                        faults.synth_force = true;
                        return Some(());
                    }
                    "synth" if arg == "noinstall" => {
                        faults.synth_noinstall = true;
                        return Some(());
                    }
                    "panic" => Fault::Panic,
                    "panic-once" => Fault::PanicOnce,
                    "stall" => Fault::Stall,
                    "stall-again" => Fault::StallAgain,
                    _ => return None,
                };
                let addr = match arg.strip_prefix("0x").or_else(|| arg.strip_prefix("0X")) {
                    _ if arg == "*" => None,
                    Some(hex) => Some(u64::from_str_radix(hex, 16).ok()?),
                    None => Some(arg.parse().ok()?),
                };
                faults.at.push((fault, addr));
                Some(())
            });
            if parsed.is_none() {
                rejected.push(directive.to_string());
            }
        }
        (faults, rejected)
    }

    /// Worker side, as the target at `addr` starts.  `panic-once` and
    /// `stall-again` remember the first start with a marker file in the pool's
    /// scratch directory, which every worker of the run shares.
    pub(crate) fn before_target(&self, scratch: &Path, addr: u64) {
        let first = |kind: &str| {
            let marker = scratch.join(format!("fault-{kind}-{addr:x}"));
            std::fs::OpenOptions::new()
                .write(true)
                .create_new(true)
                .open(marker)
                .is_ok()
        };
        for &(fault, at) in &self.at {
            if at.is_some_and(|at| at != addr) {
                continue;
            }
            let stall = match fault {
                Fault::Panic => panic!("{JOBS_FAULT_ENV}: injected panic at {addr:#x}"),
                Fault::PanicOnce if first("once") => {
                    panic!("{JOBS_FAULT_ENV}: injected panic at {addr:#x}")
                }
                Fault::PanicOnce => false,
                Fault::Stall => true,
                Fault::StallAgain => !first("again"),
            };
            if stall {
                fault_line(format_args!(
                    "{JOBS_FAULT_ENV}: injected stall at {addr:#x}"
                ));
                loop {
                    std::thread::sleep(Duration::from_secs(3600));
                }
            }
        }
    }

    /// Worker side, once its load is done: abort as an allocation failure does
    /// if this is one of the first `load-abort` loads of the run, counted with
    /// marker files in the pool's shared scratch directory.
    pub(crate) fn after_load(&self, scratch: &Path) {
        let fire = self.load_aborts == usize::MAX
            || (0..self.load_aborts).any(|k| {
                let marker = scratch.join(format!("fault-load-{k}"));
                std::fs::OpenOptions::new()
                    .write(true)
                    .create_new(true)
                    .open(marker)
                    .is_ok()
            });
        if fire {
            fault_line(format_args!("{JOBS_FAULT_ENV}: injected load abort"));
            std::alloc::handle_alloc_error(std::alloc::Layout::new::<[u8; 1 << 20]>());
        }
    }

    /// Worker side: does this worker refuse the replayed structures?
    pub(crate) fn refuses_synth_install(&self) -> bool {
        self.synth_noinstall
    }

    /// Parent side: does spawn number `n` (from 0) fail?
    fn refuses_spawn(&self, n: usize) -> bool {
        self.spawn_after.is_some_and(|after| n >= after)
    }
}

/// Write one fault line to stderr in a single write. `eprintln!` writes each
/// piece of its format separately, so two workers failing at once could splice
/// their lines together on the shared pipe, and a test counting the lines
/// would miss one.
fn fault_line(line: std::fmt::Arguments) {
    let _ = std::io::stderr()
        .lock()
        .write_all(format!("{line}\n").as_bytes());
}

// --- progress ----------------------------------------------------------------

/// Throttled `functions done / total, elapsed, ETA` on **stderr** (stdout stays
/// byte-clean for `--json`).  A 33,000-function export runs for many minutes and
/// otherwise prints nothing at all until it finishes.
struct Progress {
    state: Mutex<ProgressState>,
    total: usize,
    tag: &'static str,
}

struct ProgressState {
    last: Instant,
    warmed: Vec<bool>,
    warm_count: usize,
    observed_done: usize,
    baseline: Option<(usize, Instant)>,
}

impl ProgressState {
    fn new(workers: usize, now: Instant) -> Self {
        Self {
            last: now,
            warmed: vec![false; workers],
            warm_count: 0,
            observed_done: 0,
            baseline: None,
        }
    }

    fn observe(
        &mut self,
        worker_id: usize,
        done: usize,
        now: Instant,
    ) -> (usize, Option<(usize, f64)>) {
        self.observed_done = self.observed_done.max(done);
        if !self.warmed[worker_id] {
            self.warmed[worker_id] = true;
            self.warm_count += 1;
            if self.warm_count == self.warmed.len() {
                self.baseline = Some((self.observed_done, now));
            }
            return (self.observed_done, None);
        }
        let sample = self.baseline.and_then(|(baseline_done, baseline_at)| {
            self.observed_done
                .checked_sub(baseline_done)
                .map(|n| (n, now.duration_since(baseline_at).as_secs_f64()))
        });
        (self.observed_done, sample)
    }
}

impl Progress {
    fn new(total: usize, workers: usize, tag: &'static str) -> Self {
        Self {
            state: Mutex::new(ProgressState::new(workers, Instant::now())),
            total,
            tag,
        }
    }

    fn report(&self, worker_id: usize, done: usize, start: Instant) {
        let mut state = self.state.lock().unwrap_or_else(|e| e.into_inner());
        let now = Instant::now();
        let (done, sample) = state.observe(worker_id, done, now);
        if now.duration_since(state.last) < Duration::from_secs(2) && done < self.total {
            return;
        }
        state.last = now;
        let elapsed = start.elapsed().as_secs_f64();
        let frac = done as f64 / self.total.max(1) as f64;
        let eta = sample
            .and_then(|(sample_done, sample_seconds)| {
                progress_eta(self.total, done, sample_done, sample_seconds)
            })
            .map(|seconds| format!(", ETA {}", hms(seconds)))
            .unwrap_or_default();
        eprintln!(
            "[unlace {}] {done}/{} functions ({:.1}%), {} elapsed{eta}",
            self.tag,
            self.total,
            frac * 100.0,
            hms(elapsed)
        );
    }

    /// The closing line.  `count` is the run's own answer to "how many": every
    /// target for a plan that was served in full, and the results that actually
    /// came back for a run that stopped early.
    fn finish(&self, count: usize, start: Instant) {
        eprintln!(
            "[unlace {}] done: {count} functions in {}",
            self.tag,
            hms(start.elapsed().as_secs_f64())
        );
    }
}

fn progress_eta(total: usize, done: usize, sample_done: usize, sample_seconds: f64) -> Option<f64> {
    if sample_done == 0 || !sample_seconds.is_finite() || sample_seconds <= 0.0 {
        return None;
    }
    Some(total.saturating_sub(done) as f64 * sample_seconds / sample_done as f64)
}

fn hms(seconds: f64) -> String {
    let s = seconds.max(0.0) as u64;
    if s >= 3600 {
        format!("{}h{:02}m{:02}s", s / 3600, (s % 3600) / 60, s % 60)
    } else if s >= 60 {
        format!("{}m{:02}s", s / 60, s % 60)
    } else {
        format!("{s}s")
    }
}

#[cfg(test)]
mod tests;
