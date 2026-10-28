//! SPEC Decompiler Benchmark Suite (t456)
//!
//! Standardised benchmarks measuring decompiler throughput, correctness,
//! and scalability across micro/meso/macro categories.

use std::fs;
use std::path::PathBuf;
use std::time::Duration;

use criterion::{BenchmarkId, Criterion, criterion_group, criterion_main};

use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader, SymbolKind};

fn fixtures_dir() -> PathBuf {
    let mut p = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    p.pop();
    p.pop();
    p.push("fixtures");
    p
}

/// Category A: micro-benchmark single known functions
fn bench_category_a_single_function(c: &mut Criterion) {
    let fixture = fixtures_dir().join("medium.elf");
    if !fixture.exists() {
        eprintln!("SKIP: fixtures/medium.elf not found");
        return;
    }

    let data = fs::read(&fixture).expect("read medium.elf");
    let image = ElfLoader::load(&data).expect("parse medium.elf");
    let lifter = get_lifter(image.arch).expect("supported arch");

    let funcs: Vec<_> = image
        .symbols
        .values()
        .filter(|s| s.kind == SymbolKind::Function && s.size > 16 && s.size < 512)
        .take(5)
        .collect();

    let mut group = c.benchmark_group("spec_category_a");
    group.measurement_time(Duration::from_secs(10));
    group.sample_size(20);

    for sym in &funcs {
        group.bench_with_input(BenchmarkId::new("single_fn", &sym.name), &sym, |b, sym| {
            b.iter(|| {
                let text = image.section_by_name(".text").unwrap();
                let offset = (sym.addr - text.vaddr) as usize;
                let end = offset + sym.size as usize;
                if end <= text.data.len() {
                    let code = &text.data[offset..end];
                    let _ = lifter.lift_insn(code, sym.addr);
                }
            });
        });
    }
    group.finish();
}

/// Category B: meso-benchmark full pipeline
fn bench_category_b_full_pipeline(c: &mut Criterion) {
    let fixture = fixtures_dir().join("medium.elf");
    if !fixture.exists() {
        eprintln!("SKIP: fixtures/medium.elf not found");
        return;
    }

    let data = fs::read(&fixture).expect("read medium.elf");

    let mut group = c.benchmark_group("spec_category_b");
    group.measurement_time(Duration::from_secs(20));
    group.sample_size(10);

    group.bench_function("load_parse", |b| {
        b.iter(|| {
            let image = ElfLoader::load(&data).expect("parse");
            criterion::black_box(image);
        });
    });

    group.bench_function("full_lift", |b| {
        let image = ElfLoader::load(&data).expect("parse");
        let lifter = get_lifter(image.arch).expect("supported arch");
        let funcs: Vec<_> = image
            .symbols
            .values()
            .filter(|s| s.kind == SymbolKind::Function && s.size > 0)
            .collect();

        b.iter(|| {
            let mut count = 0usize;
            for sym in &funcs {
                let text = match image.section_by_name(".text") {
                    Some(t) => t,
                    None => continue,
                };
                let offset = sym.addr.wrapping_sub(text.vaddr) as usize;
                if offset >= text.data.len() {
                    continue;
                }
                let end = (offset + sym.size as usize).min(text.data.len());
                let code = &text.data[offset..end];
                if code.len() > 4 {
                    let _ = lifter.lift_insn(code, sym.addr);
                    count += 1;
                }
            }
            criterion::black_box(count);
        });
    });

    group.finish();
}

/// Category C: scalability — throughput vs function count
fn bench_category_c_scalability(c: &mut Criterion) {
    let fixture = fixtures_dir().join("medium.elf");
    if !fixture.exists() {
        eprintln!("SKIP: fixtures/medium.elf not found");
        return;
    }

    let data = fs::read(&fixture).expect("read medium.elf");
    let image = ElfLoader::load(&data).expect("parse");
    let lifter = get_lifter(image.arch).expect("supported arch");

    let all_funcs: Vec<_> = image
        .symbols
        .values()
        .filter(|s| s.kind == SymbolKind::Function && s.size > 0)
        .collect();

    let mut group = c.benchmark_group("spec_category_c_scale");
    group.measurement_time(Duration::from_secs(15));
    group.sample_size(10);

    for &count in &[1usize, 10, 50, 100] {
        let subset: Vec<_> = all_funcs.iter().take(count).collect();
        if subset.len() < count {
            continue;
        }

        group.bench_with_input(BenchmarkId::new("functions", count), &count, |b, _| {
            b.iter(|| {
                let text = match image.section_by_name(".text") {
                    Some(t) => t,
                    None => return,
                };
                for sym in &subset {
                    let offset = sym.addr.wrapping_sub(text.vaddr) as usize;
                    if offset >= text.data.len() {
                        continue;
                    }
                    let end = (offset + sym.size as usize).min(text.data.len());
                    let code = &text.data[offset..end];
                    if code.len() > 4 {
                        let _ = lifter.lift_insn(code, sym.addr);
                    }
                }
            });
        });
    }

    group.finish();
}

criterion_group! {
    name = spec_suite;
    config = Criterion::default()
        .sample_size(10)
        .measurement_time(Duration::from_secs(15))
        .warm_up_time(Duration::from_secs(3));
    targets = bench_category_a_single_function,
              bench_category_b_full_pipeline,
              bench_category_c_scalability
}

criterion_main!(spec_suite);
