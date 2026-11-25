//! Deterministic seeded sweeps over the SLEIGH decode path and the container parsers.
//!
//! Each sweep runs in `cargo test -p unlace-fuzz` with a fixed seed, so a failure
//! reproduces from its iteration number. A failure prints a minimised reproducer as
//! hex, which `unlace-fuzz --minimise` turns into a crash-corpus fixture.
//!
//! 1. `sleigh_decode_sweep`: random code bytes behind a minimal ELF header, for
//!    six architectures. The whole pipeline runs, so SLEIGH decode and lift reach
//!    the entry point. Lift errors are expected and are not findings.
//! 2. `container_mutation_sweep`: mutated copies of real ELF, PE and Mach-O
//!    fixtures, through the pipeline and through the object loader directly.
//! 3. `dyld_cache_mutation_sweep`: mutated copies of a dyld shared cache fixture,
//!    through `DyldCache::open`.
//!
//! `UNLACE_FUZZ_ITERS` scales all three: 1024 is the default scale, so the nightly
//! run goes deeper through the same code.

use std::any::Any;
use std::panic::{AssertUnwindSafe, catch_unwind};
use std::path::PathBuf;

use unlace_analysis::loadimage_object::ObjectLoadImage;
use unlace_analysis::loader::dyldcache::DyldCache;
use unlace_fuzz::{FuzzResult, fuzz_iteration, minimise_crash};

use super::{XorShift64, crate_dir};

const SLEIGH_SEED: u64 = 0x5EED_0DEC_0DE0_0001;
const MUTATION_SEED: u64 = 0x5EED_C0DE_0BAD_0002;
const DYLD_SEED: u64 = 0x5EED_D1D1_CACE_0003;

/// Iterations per architecture in the decode sweep, at the default scale.
const ARCH_ITERATIONS: usize = 8;
/// Random code bytes per decode input.
const MAX_CODE_BYTES: usize = 512;
/// Object-loader mutations at the default scale, shared out over the seed fixtures.
const MUTATION_ITERATIONS: usize = 256;
/// Pipeline (decompile) mutations at the default scale: one per seed. A full
/// decompile of a real binary costs far more than a load, so this stays small.
const PIPELINE_MUTATIONS: usize = 8;
/// Upper bound on pipeline mutations, however large `UNLACE_FUZZ_ITERS` gets.
const PIPELINE_CAP: usize = 256;
/// dyld cache mutations at the default scale.
const DYLD_ITERATIONS: usize = 512;
/// Leading bytes where header fields live; most word edits land here.
const HEADER_WINDOW: usize = 512;

/// Values a header word is set to: the zero, sign and width boundaries.
const EXTREMES: [u64; 9] = [
    0,
    1,
    0x7f,
    0x80,
    0xff,
    0x7fff_ffff,
    0x8000_0000,
    0xffff_ffff,
    u64::MAX,
];

/// Real container fixtures from unlace-analysis: ELF, PE and Mach-O seeds.
const CONTAINER_SEEDS: &[&str] = &[
    "adrnext_x86_64",
    "chkstkdarwin_elf_aarch64",
    "cortexm3_scs.elf",
    "dataptrs_arch_ppc64_elfv1.so",
    "aifbracket_pe_i386.exe",
    "armv4t_thumb_pe.exe",
    "adrnext_macho_arm64",
    "address_taken_stack_buffers_macho",
];

const DYLD_MAIN: &str = "dyld_shared_cache_arm64e";
const DYLD_SUBCACHE: &str = "dyld_shared_cache_arm64e.01";
const DYLD_SYMBOLS: &str = "dyld_shared_cache_arm64e.symbols";

/// One architecture the decode sweep builds a container for.
struct Arch {
    name: &'static str,
    machine: u16,
    class64: bool,
    big_endian: bool,
}

const ARCHES: &[Arch] = &[
    Arch {
        name: "x86-64",
        machine: 62,
        class64: true,
        big_endian: false,
    },
    Arch {
        name: "aarch64",
        machine: 183,
        class64: true,
        big_endian: false,
    },
    Arch {
        name: "arm",
        machine: 40,
        class64: false,
        big_endian: false,
    },
    Arch {
        name: "mips",
        machine: 8,
        class64: false,
        big_endian: true,
    },
    Arch {
        name: "riscv64",
        machine: 243,
        class64: true,
        big_endian: false,
    },
    Arch {
        name: "ppc",
        machine: 20,
        class64: false,
        big_endian: true,
    },
];

impl XorShift64 {
    /// A value in `0..n`; `n` must be non-zero.
    fn below(&mut self, n: usize) -> usize {
        (self.next_u64() % (n as u64)) as usize
    }
}

/// Iterations for one sweep: `base` at the default scale, multiplied by
/// `UNLACE_FUZZ_ITERS / 1024` when the variable is set to a positive integer.
fn scaled(base: usize) -> usize {
    match std::env::var("UNLACE_FUZZ_ITERS")
        .ok()
        .and_then(|v| v.trim().parse::<usize>().ok())
        .filter(|&n| n > 0)
    {
        Some(n) => (base * n / 1024).max(1),
        None => base,
    }
}

/// Little- or big-endian byte writer for the container builder.
struct Words {
    bytes: Vec<u8>,
    big: bool,
    wide: bool,
}

impl Words {
    fn put(&mut self, le: &[u8], be: &[u8]) {
        self.bytes.extend_from_slice(if self.big { be } else { le });
    }

    fn u16(&mut self, value: u16) {
        self.put(&value.to_le_bytes(), &value.to_be_bytes());
    }

    fn u32(&mut self, value: u32) {
        self.put(&value.to_le_bytes(), &value.to_be_bytes());
    }

    /// An address or file offset: eight bytes in a 64-bit container, else four.
    fn addr(&mut self, value: u64) {
        if self.wide {
            self.put(&value.to_le_bytes(), &value.to_be_bytes());
        } else {
            let narrow = value as u32;
            self.put(&narrow.to_le_bytes(), &narrow.to_be_bytes());
        }
    }
}

/// A one-segment executable whose entry point is the first byte of `code`.
fn minimal_elf(arch: &Arch, code: &[u8]) -> Vec<u8> {
    const BASE: u64 = 0x40_0000;
    let (ehsize, phentsize, code_at): (u64, u64, u64) = if arch.class64 {
        (64, 56, 120)
    } else {
        (52, 32, 84)
    };
    let len = code_at + code.len() as u64;
    let mut w = Words {
        bytes: Vec::with_capacity(code_at as usize + code.len()),
        big: arch.big_endian,
        wide: arch.class64,
    };
    w.bytes.extend_from_slice(b"\x7fELF");
    w.bytes.push(if arch.class64 { 2 } else { 1 });
    w.bytes.push(if arch.big_endian { 2 } else { 1 });
    w.bytes.push(1);
    w.bytes.resize(16, 0);
    w.u16(2); // ET_EXEC
    w.u16(arch.machine);
    w.u32(1); // e_version
    w.addr(BASE + code_at); // e_entry
    w.addr(ehsize); // e_phoff
    w.addr(0); // e_shoff
    w.u32(0); // e_flags
    w.u16(ehsize as u16);
    w.u16(phentsize as u16);
    w.u16(1); // e_phnum
    w.u16(0); // e_shentsize
    w.u16(0); // e_shnum
    w.u16(0); // e_shstrndx
    // One PT_LOAD segment that maps the whole file read-execute.
    w.u32(1); // p_type
    if arch.class64 {
        w.u32(5); // p_flags
        w.addr(0); // p_offset
        w.addr(BASE);
        w.addr(BASE);
        w.addr(len);
        w.addr(len);
    } else {
        w.addr(0); // p_offset
        w.addr(BASE);
        w.addr(BASE);
        w.addr(len);
        w.addr(len);
        w.u32(5); // p_flags
    }
    w.addr(0x1000); // p_align
    w.bytes.extend_from_slice(code);
    w.bytes
}

/// Corrupt a copy of `seed` with one deterministic edit: flipped bits, an
/// extreme or random header word in either byte order, a truncation, or a span
/// set to all zeros or all ones.
fn mutate(prng: &mut XorShift64, seed: &[u8]) -> Vec<u8> {
    let mut out = seed.to_vec();
    if out.is_empty() {
        return out;
    }
    match prng.below(4) {
        0 => {
            for _ in 0..=prng.below(8) {
                let at = prng.below(out.len());
                out[at] ^= 1u8 << prng.below(8);
            }
        }
        1 => {
            let width = [2usize, 4, 8][prng.below(3)];
            if out.len() >= width {
                let window = out.len().min(HEADER_WINDOW);
                let at = prng.below(window - width + 1);
                let value = if prng.below(2) == 0 {
                    EXTREMES[prng.below(EXTREMES.len())]
                } else {
                    prng.next_u64()
                };
                let little = prng.below(2) == 0;
                for k in 0..width {
                    let byte = if little { k } else { width - 1 - k };
                    let shift = 8 * byte;
                    out[at + k] = (value >> shift) as u8;
                }
            }
        }
        2 => {
            let keep = prng.below(out.len());
            out.truncate(keep);
        }
        _ => {
            let at = prng.below(out.len());
            let len = 1 + prng.below(64usize.min(out.len() - at));
            let byte = if prng.below(2) == 0 { 0x00 } else { 0xff };
            out[at..at + len].fill(byte);
        }
    }
    out
}

fn hex(bytes: &[u8]) -> String {
    bytes.iter().map(|byte| format!("{byte:02x}")).collect()
}

/// Text of a `catch_unwind` payload.
fn panic_text(payload: &(dyn Any + Send)) -> String {
    if let Some(text) = payload.downcast_ref::<&str>() {
        (*text).to_string()
    } else if let Some(text) = payload.downcast_ref::<String>() {
        text.clone()
    } else {
        "<non-string panic payload>".to_string()
    }
}

fn fixture_dir() -> PathBuf {
    crate_dir()
        .join("..")
        .join("unlace-analysis")
        .join("tests")
        .join("fixtures")
}

#[test]
fn sleigh_decode_sweep() {
    let iterations = scaled(ARCH_ITERATIONS);
    let mut any_loaded = false;

    for (index, arch) in ARCHES.iter().enumerate() {
        let mut prng = XorShift64::new(SLEIGH_SEED ^ (index as u64 + 1));
        for i in 0..iterations {
            let len = 1 + prng.below(MAX_CODE_BYTES);
            let mut code = vec![0u8; len];
            prng.fill(&mut code);
            let elf = minimal_elf(arch, &code);
            match fuzz_iteration(&elf) {
                FuzzResult::Panicked { stage, payload } => {
                    let small = minimise_crash(&elf);
                    panic!(
                        "sleigh decode sweep: {} iteration {i} ({len} code bytes) panicked in \
                         stage `{stage}`: {payload}\n\
                         minimised input ({} bytes, arch {} machine {}): {}",
                        arch.name,
                        small.len(),
                        arch.name,
                        arch.machine,
                        hex(&small),
                    );
                }
                FuzzResult::Ok { .. } => any_loaded = true,
                FuzzResult::NotBinary => panic!(
                    "sleigh decode sweep: the minimal ELF for {} failed the magic gate",
                    arch.name
                ),
                FuzzResult::LoadFailed(_) => {}
            }
        }
    }

    // Without the specs every input stops at load, and the sweep would only check
    // for panics. Missing specs are a failure, as in the rest of the workspace.
    assert!(
        any_loaded,
        "no minimal ELF loaded: the SLEIGH specs are missing (UNLACE_SPECS), or the container builder is wrong"
    );
}

#[test]
fn container_mutation_sweep() {
    let dir = fixture_dir();
    let seeds: Vec<(&str, Vec<u8>)> = CONTAINER_SEEDS
        .iter()
        .map(|name| {
            let bytes = std::fs::read(dir.join(name))
                .unwrap_or_else(|error| panic!("missing container seed {name}: {error}"));
            (*name, bytes)
        })
        .collect();

    // The object loader on every mutation: the cheap, wide pass.
    let iterations = scaled(MUTATION_ITERATIONS);
    let mut prng = XorShift64::new(MUTATION_SEED);
    for i in 0..iterations {
        let (name, seed) = &seeds[i % seeds.len()];
        let input = mutate(&mut prng, seed);
        if let Err(payload) = catch_unwind(AssertUnwindSafe(|| {
            ObjectLoadImage::from_bytes_silent(name, &input)
        })) {
            panic!(
                "object loader sweep: iteration {i} (seed {name}, {} bytes) panicked: {}\n\
                 minimised input: {}",
                input.len(),
                panic_text(&*payload),
                hex(&minimise_object_panic(name, &input)),
            );
        }
    }

    // The whole pipeline on a few mutations: load, discovery and decompile.
    let pipeline = scaled(PIPELINE_MUTATIONS).min(PIPELINE_CAP);
    let mut prng = XorShift64::new(MUTATION_SEED ^ 0xA5A5);
    for i in 0..pipeline {
        let (name, seed) = &seeds[i % seeds.len()];
        let input = mutate(&mut prng, seed);
        if let FuzzResult::Panicked { stage, payload } = fuzz_iteration(&input) {
            let small = minimise_crash(&input);
            panic!(
                "container sweep: pipeline iteration {i} (seed {name}, {} bytes) panicked in \
                 stage `{stage}`: {payload}\nminimised input ({} bytes): {}",
                input.len(),
                small.len(),
                hex(&small),
            );
        }
    }
}

/// Shrink an input that panics the object loader, for the failure message only.
fn minimise_object_panic(name: &str, input: &[u8]) -> Vec<u8> {
    unlace_fuzz::minimise_crash_with(input, |bytes| {
        catch_unwind(AssertUnwindSafe(|| {
            ObjectLoadImage::from_bytes_silent(name, bytes)
        }))
        .is_err()
    })
}

#[test]
fn dyld_cache_mutation_sweep() {
    let dir = fixture_dir().join("dyld_cache_arm64e");
    let main_seed = std::fs::read(dir.join(DYLD_MAIN))
        .unwrap_or_else(|error| panic!("missing dyld cache seed: {error}"));

    let work = std::env::temp_dir().join(format!("unlace-fuzz-dyld-{}", std::process::id()));
    std::fs::create_dir_all(&work).expect("create the dyld sweep directory");
    for sibling in [DYLD_SUBCACHE, DYLD_SYMBOLS] {
        std::fs::copy(dir.join(sibling), work.join(sibling))
            .unwrap_or_else(|error| panic!("missing dyld cache sibling {sibling}: {error}"));
    }
    let main_path = work.join(DYLD_MAIN);
    // The unmutated fixture must open, or the sweep below would only test rejections.
    std::fs::write(&main_path, &main_seed).expect("write the seed cache");
    DyldCache::open(&main_path).expect("the unmutated dyld cache fixture opens");

    let iterations = scaled(DYLD_ITERATIONS);
    let mut prng = XorShift64::new(DYLD_SEED);
    for i in 0..iterations {
        let input = mutate(&mut prng, &main_seed);
        std::fs::write(&main_path, &input).expect("write the mutated cache");

        let outcome = catch_unwind(AssertUnwindSafe(|| -> Result<(), String> {
            let cache = DyldCache::open(&main_path)?;
            let base = cache.base();
            let _ = cache.read_va(base, 64);
            cache.select_all(None).map(|_| ())
        }));
        if let Err(payload) = outcome {
            let _ = std::fs::remove_dir_all(&work);
            panic!(
                "dyld cache sweep: iteration {i} ({} bytes) panicked: {}",
                input.len(),
                panic_text(&*payload),
            );
        }
    }
    let _ = std::fs::remove_dir_all(&work);
}
