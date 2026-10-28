//! Hex-Rays Throughput Comparison Benchmarks (t458)
//!
//! Measures unlace throughput to compare against Hex-Rays reference timings.
//! Target: ≤2× Hex-Rays wall-clock time for full-binary decompilation.

use std::fs;
use std::path::PathBuf;
use std::time::{Duration, Instant};

use criterion::{Criterion, criterion_group, criterion_main};

use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader};

use unlace_cli::args::EmitFormat;
use unlace_cli::pipeline::{self, PipelineConfig};

fn fixtures_dir() -> PathBuf {
    let mut p = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    p.pop();
    p.pop();
    p.push("fixtures");
    p
}

/// Full-binary throughput: decompile all functions and measure funcs/sec
fn bench_full_binary_throughput(c: &mut Criterion) {
    let fixture = fixtures_dir().join("medium.elf");
    if !fixture.exists() {
        eprintln!("SKIP: fixtures/medium.elf not found");
        return;
    }

    let data = fs::read(&fixture).expect("read medium.elf");
    let image = ElfLoader::load(&data).expect("parse medium.elf");
    let lifter = get_lifter(image.arch);

    let functions = pipeline::discover_functions(&image, None).unwrap_or_default();
    let config = PipelineConfig {
        timeout: Duration::from_secs(10),
        print_config: None,
        annotations: None,
        flirt: pipeline::FlirtConfig::default(),
        dwarf_sidecar: None,
        symbol_context: None,
    };

    let mut group = c.benchmark_group("hexrays_throughput");
    group.measurement_time(Duration::from_secs(30));
    group.sample_size(10);

    group.bench_function("all_functions", |b| {
        b.iter(|| {
            let mut succeeded = 0usize;
            for entry in &functions {
                if pipeline::decompile_function(
                    &image,
                    lifter.as_ref(),
                    entry,
                    EmitFormat::C,
                    &config,
                    None,
                )
                .is_ok()
                {
                    succeeded += 1;
                }
            }
            criterion::black_box(succeeded);
        });
    });

    group.finish();
}

/// Per-function latency distribution measurement
fn bench_per_function_latency(c: &mut Criterion) {
    let fixture = fixtures_dir().join("medium.elf");
    if !fixture.exists() {
        eprintln!("SKIP: fixtures/medium.elf not found");
        return;
    }

    let data = fs::read(&fixture).expect("read medium.elf");
    let image = ElfLoader::load(&data).expect("parse medium.elf");
    let lifter = get_lifter(image.arch);

    let functions = pipeline::discover_functions(&image, None).unwrap_or_default();
    let config = PipelineConfig {
        timeout: Duration::from_secs(10),
        print_config: None,
        annotations: None,
        flirt: pipeline::FlirtConfig::default(),
        dwarf_sidecar: None,
        symbol_context: None,
    };

    // Measure individual latencies for percentile analysis
    let mut group = c.benchmark_group("hexrays_latency");
    group.measurement_time(Duration::from_secs(20));
    group.sample_size(10);

    group.bench_function("latency_distribution", |b| {
        b.iter(|| {
            let mut latencies = Vec::with_capacity(functions.len());
            for entry in &functions {
                let start = Instant::now();
                let _ = pipeline::decompile_function(
                    &image,
                    lifter.as_ref(),
                    entry,
                    EmitFormat::C,
                    &config,
                    None,
                );
                latencies.push(start.elapsed());
            }
            criterion::black_box(latencies);
        });
    });

    group.finish();
}

criterion_group! {
    name = hexrays_comparison;
    config = Criterion::default()
        .sample_size(10)
        .measurement_time(Duration::from_secs(30))
        .warm_up_time(Duration::from_secs(5));
    targets = bench_full_binary_throughput,
              bench_per_function_latency
}

criterion_main!(hexrays_comparison);
