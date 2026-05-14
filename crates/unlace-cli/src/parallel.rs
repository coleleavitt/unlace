//! # Parallel Decompilation Engine (t455)
//!
//! Provides a higher-level parallel decompilation facility that goes beyond
//! the basic `rayon::par_iter` in `batch.rs`. Key features:
//!
//! - **Work-stealing scheduler** with configurable thread pool sizing
//! - **Progress callbacks** so callers (CLI progress bars, IDE status) can
//!   report incremental completion without polling
//! - **Per-function timeout** enforcement via rayon's panic-catching
//! - **Priority ordering** — smaller functions first to maximise early
//!   throughput and keep all cores saturated
//! - **Result aggregation** with structured error classification

use std::sync::atomic::{AtomicUsize, Ordering};
use std::sync::Arc;
use std::time::{Duration, Instant};

use rayon::prelude::*;

use unlace_ir::Lifter;
use unlace_loader::{BinaryImage, DwarfInfo};

use crate::args::EmitFormat;
use crate::pipeline::{self, FunctionEntry, PipelineConfig};

/// Strategy for ordering functions before parallel dispatch.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PriorityStrategy {
    /// Decompile smallest functions first.
    SmallestFirst,
    /// Decompile largest functions first.
    LargestFirst,
    /// Preserve discovery order (address-sorted).
    AddressOrder,
}

/// Configuration for the parallel decompilation engine.
#[derive(Debug, Clone)]
pub struct ParallelConfig {
    /// Maximum threads to use. `0` means auto-detect.
    pub max_threads: usize,
    /// Per-function decompilation timeout.
    pub per_function_timeout: Duration,
    /// Function scheduling priority.
    pub priority: PriorityStrategy,
    /// Output format.
    pub emit: EmitFormat,
}

impl Default for ParallelConfig {
    fn default() -> Self {
        Self {
            max_threads: 0,
            per_function_timeout: Duration::from_secs(30),
            priority: PriorityStrategy::SmallestFirst,
            emit: EmitFormat::C,
        }
    }
}

/// Outcome of decompiling a single function in the parallel engine.
#[derive(Debug, Clone)]
pub struct ParallelResult {
    pub addr: u64,
    pub name: String,
    pub size: u64,
    pub output: std::result::Result<String, ParallelError>,
    pub elapsed: Duration,
}

/// Structured error from a parallel decompilation attempt.
#[derive(Debug, Clone)]
pub enum ParallelError {
    Timeout { limit: Duration },
    Pipeline(String),
    Panic(String),
}

impl std::fmt::Display for ParallelError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Timeout { limit } => write!(f, "timeout after {limit:?}"),
            Self::Pipeline(e) => write!(f, "pipeline error: {e}"),
            Self::Panic(msg) => write!(f, "panic: {msg}"),
        }
    }
}

/// Progress information passed to the user-supplied callback.
#[derive(Debug, Clone)]
pub struct ProgressInfo {
    pub completed: usize,
    pub total: usize,
    pub last_function: String,
    pub last_ok: bool,
}

/// A thread-safe progress callback type.
pub type ProgressCallback = dyn Fn(ProgressInfo) + Send + Sync;

/// The parallel decompilation engine.
pub struct ParallelEngine {
    config: ParallelConfig,
}

impl ParallelEngine {
    pub fn new(config: ParallelConfig) -> Self {
        Self { config }
    }

    /// Effective thread count after resolving `0` → system default.
    pub fn thread_count(&self) -> usize {
        if self.config.max_threads == 0 {
            std::thread::available_parallelism()
                .map(|n| n.get())
                .unwrap_or(1)
        } else {
            self.config.max_threads
        }
    }

    /// Decompile all functions in parallel. Returns results in address order.
    pub fn decompile_all(
        &self,
        image: &BinaryImage,
        functions: &[FunctionEntry],
        lifter: &dyn Lifter,
        pipeline_config: &PipelineConfig,
        dwarf: Option<&DwarfInfo>,
        progress: Option<&ProgressCallback>,
    ) -> Vec<ParallelResult> {
        let thread_count = self.thread_count();
        let pool = rayon::ThreadPoolBuilder::new()
            .num_threads(thread_count)
            .thread_name(|idx| format!("unlace-par-{idx}"))
            .build()
            .expect("failed to create rayon thread pool");

        let mut indexed: Vec<(usize, &FunctionEntry)> =
            functions.iter().enumerate().collect();

        match self.config.priority {
            PriorityStrategy::SmallestFirst => {
                indexed.sort_by_key(|(_, f)| f.size);
            }
            PriorityStrategy::LargestFirst => {
                indexed.sort_by_key(|(_, f)| std::cmp::Reverse(f.size));
            }
            PriorityStrategy::AddressOrder => {}
        }

        let completed = Arc::new(AtomicUsize::new(0));
        let total = functions.len();
        let timeout = self.config.per_function_timeout;
        let emit = self.config.emit;
        let progress_arc: Option<Arc<&ProgressCallback>> = progress.map(Arc::new);

        let results: Vec<(usize, ParallelResult)> = pool.install(|| {
            indexed
                .par_iter()
                .map(|&(orig_idx, entry)| {
                    let start = Instant::now();

                    let fn_config = PipelineConfig {
                        timeout,
                        print_config: pipeline_config.print_config.clone(),
                        annotations: pipeline_config.annotations.clone(),
                    };

                    let outcome = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
                        pipeline::decompile_function(
                            image, lifter, entry, emit, &fn_config, dwarf,
                        )
                    }));

                    let elapsed = start.elapsed();

                    let output = match outcome {
                        Ok(Ok(text)) => Ok(text),
                        Ok(Err(e)) => {
                            let msg = format!("{e:#}");
                            if msg.contains("timeout") || elapsed >= timeout {
                                Err(ParallelError::Timeout { limit: timeout })
                            } else {
                                Err(ParallelError::Pipeline(msg))
                            }
                        }
                        Err(payload) => {
                            let msg = if let Some(s) = payload.downcast_ref::<&'static str>() {
                                (*s).to_string()
                            } else if let Some(s) = payload.downcast_ref::<String>() {
                                s.clone()
                            } else {
                                "<non-string panic>".to_string()
                            };
                            Err(ParallelError::Panic(msg))
                        }
                    };

                    let count = completed.fetch_add(1, Ordering::Relaxed) + 1;
                    if let Some(ref cb) = progress_arc {
                        cb(ProgressInfo {
                            completed: count,
                            total,
                            last_function: entry.name.clone(),
                            last_ok: output.is_ok(),
                        });
                    }

                    (orig_idx, ParallelResult {
                        addr: entry.addr,
                        name: entry.name.clone(),
                        size: entry.size,
                        output,
                        elapsed,
                    })
                })
                .collect()
        });

        let mut sorted = results;
        sorted.sort_by_key(|(idx, _)| *idx);
        sorted.into_iter().map(|(_, r)| r).collect()
    }
}

/// Summary statistics from a parallel decompilation run.
#[derive(Debug, Clone)]
pub struct ParallelStats {
    pub total: usize,
    pub succeeded: usize,
    pub failed: usize,
    pub timed_out: usize,
    pub panicked: usize,
    pub total_wall_time: Duration,
    pub total_cpu_time: Duration,
    pub parallelism_factor: f64,
}

impl ParallelStats {
    pub fn from_results(results: &[ParallelResult], wall_time: Duration) -> Self {
        let total = results.len();
        let succeeded = results.iter().filter(|r| r.output.is_ok()).count();
        let timed_out = results
            .iter()
            .filter(|r| matches!(&r.output, Err(ParallelError::Timeout { .. })))
            .count();
        let panicked = results
            .iter()
            .filter(|r| matches!(&r.output, Err(ParallelError::Panic(_))))
            .count();
        let failed = total - succeeded;
        let total_cpu_time: Duration = results.iter().map(|r| r.elapsed).sum();
        let parallelism_factor = if wall_time.as_nanos() > 0 {
            total_cpu_time.as_secs_f64() / wall_time.as_secs_f64()
        } else {
            1.0
        };

        Self {
            total,
            succeeded,
            failed,
            timed_out,
            panicked,
            total_wall_time: wall_time,
            total_cpu_time,
            parallelism_factor,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn default_config_auto_detects_threads() {
        let engine = ParallelEngine::new(ParallelConfig::default());
        assert!(engine.thread_count() >= 1);
    }

    #[test]
    fn explicit_thread_count() {
        let config = ParallelConfig { max_threads: 4, ..Default::default() };
        assert_eq!(ParallelEngine::new(config).thread_count(), 4);
    }

    #[test]
    fn priority_strategy_ordering() {
        let entries = vec![
            FunctionEntry { name: "big".into(), addr: 0x1000, size: 1000 },
            FunctionEntry { name: "small".into(), addr: 0x2000, size: 10 },
            FunctionEntry { name: "med".into(), addr: 0x3000, size: 100 },
        ];
        let mut indexed: Vec<(usize, &FunctionEntry)> = entries.iter().enumerate().collect();
        indexed.sort_by_key(|(_, f)| f.size);
        assert_eq!(indexed[0].1.name, "small");
        assert_eq!(indexed[2].1.name, "big");
    }

    #[test]
    fn stats_from_empty() {
        let stats = ParallelStats::from_results(&[], Duration::from_secs(1));
        assert_eq!(stats.total, 0);
        assert_eq!(stats.succeeded, 0);
    }

    #[test]
    fn stats_classification() {
        let results = vec![
            ParallelResult {
                addr: 0x1000, name: "ok".into(), size: 100,
                output: Ok("int f(){}".into()), elapsed: Duration::from_millis(50),
            },
            ParallelResult {
                addr: 0x2000, name: "to".into(), size: 200,
                output: Err(ParallelError::Timeout { limit: Duration::from_secs(30) }),
                elapsed: Duration::from_secs(30),
            },
            ParallelResult {
                addr: 0x3000, name: "pa".into(), size: 50,
                output: Err(ParallelError::Panic("oops".into())),
                elapsed: Duration::from_millis(5),
            },
        ];
        let stats = ParallelStats::from_results(&results, Duration::from_secs(31));
        assert_eq!(stats.total, 3);
        assert_eq!(stats.succeeded, 1);
        assert_eq!(stats.timed_out, 1);
        assert_eq!(stats.panicked, 1);
    }

    #[test]
    fn parallel_error_display() {
        assert!(ParallelError::Timeout { limit: Duration::from_secs(30) }.to_string().contains("timeout"));
        assert!(ParallelError::Pipeline("bad".into()).to_string().contains("bad"));
        assert!(ParallelError::Panic("crash".into()).to_string().contains("crash"));
    }
}
