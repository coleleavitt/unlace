# Conference Talk Track

Proposed presentations for security and systems conferences, tracking
unlace's public-facing communication strategy.

## Target Venues

| Conference | Track | Deadline | Status |
|-----------|-------|----------|--------|
| REcon Montreal | Reverse Engineering | March | Draft |
| OffensiveCon Berlin | Exploit Dev / RE | January | Planned |
| BlackHat USA | Arsenal / Briefings | April | Planned |
| ShmooCon | Build It | November | Planned |
| r2con | Reversing | September | Planned |

## Talks

### 1. "unlace: A Ground-Up Rust Rewrite of Hex-Rays"

**Target:** REcon Montreal 2025 (45 min)

**Abstract:**
We present unlace, a fully independent decompiler written from scratch in
Rust that targets Hex-Rays–level output fidelity across 8+ architectures.
This talk covers: (1) the IR design choices that make multi-arch lifting
tractable; (2) how Rust's type system enforces determinism across the
50-pass optimization pipeline; (3) the test harness that validates output
against 113K golden reference functions; (4) performance results showing
competitive throughput without the single-threaded bottleneck. We release
the tool and full source at talk time.

**Outline:**
1. Motivation: why rewrite a decompiler? (5 min)
2. Architecture: IR opcodes, SSA, pass pipeline (15 min)
3. Multi-arch lifting: x86, ARM, RISC-V, MIPS, PPC (10 min)
4. Testing at scale: golden corpus, determinism, fuzzing (10 min)
5. Demo + performance comparison (5 min)

---

### 2. "Decompiler Internals: SSA Construction for Binary Analysis"

**Target:** BlackHat USA Arsenal 2025

**Abstract:**
A deep-dive into SSA construction from raw machine code without compiler
cooperation. We show how unlace builds minimal SSA from lifted IR,
handles memory-SSA for aliased stores, and exploits dominator-tree
properties for efficient copy propagation. Attendees leave with a
practical understanding of how modern decompilers turn bytes into readable
pseudocode.

---

### 3. "Fuzzing Your Decompiler: Finding Crashes Before Attackers Do"

**Target:** ShmooCon 2025

**Abstract:**
Decompilers process attacker-controlled binaries — if the decompiler
crashes on malformed input, that's a denial-of-service against the
analyst. We describe unlace-fuzz, a structured fuzzing harness that has
found 47 panics in our own pipeline, and show how the crash-corpus
database enables regression testing. We also demonstrate how the same
approach can be applied to other analysis tools.

---

## Submission Checklist

- [ ] Abstract (300 words max)
- [ ] Speaker bio
- [ ] Detailed outline (5+ bullet points per section)
- [ ] Demo recording (2 min max)
- [ ] Supporting material (benchmarks, screenshots)
