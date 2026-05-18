# Long-Term Parity Roadmap

This file is the durable *direction* for unlace — what we want the project to
become, independent of any particular implementation slice. Day-to-day work is
tracked in the per-batch handoffs under `docs/handoffs/`, with the operational
backlog in `plan.md`. Status snapshots live in `docs/status.md`.

The four bands below are intentionally coarse. Their order is *priority*, not
the schedule.

## Band 1 — output correctness

Everything that makes the C output usable for reverse engineers, before any
breadth is added:

- Frame and stack-variable provenance survives into final C (Batch 17).
- Lvar allocation and naming are explainable from data, not after-the-fact text
  cleanup (Batch 18).
- The CTree/printer covers every supported expression and statement node with
  precedence-aware rendering, no string-surgery rewrites (Batch 19).
- Recursive type recovery for nested structs, arrays, unions, bitfields, and
  function pointers, with DWARF/PDB/FLIRT sources fully wired (Batch 20).
- Switch/loop/EH structuring that handles the common patterns without
  arbitrary gotos (Batch 21).

## Band 2 — architecture and loader breadth

Once the production architectures are honest about quality, expand:

- Scorecard-driven architecture support (Batch 22).
- ELF/PE/Mach-O depth — relocations, PLT/GOT, IFUNC, TLS, chained fixups, dyld
  shared cache extraction, Authenticode/CFG/CET, SEH `.pdata`/`.xdata`,
  Android boot/vendor/dex/oat/art (Batch 23).
- Firmware/container formats (Intel HEX, S-record, ESP32, STM32, UEFI, iOS IMG4).
- Managed/VM formats (Wasm/WASI/component, eBPF/BTF, EVM, Java, .NET CIL,
  Python `.pyc`, Lua bytecode).

## Band 3 — interactive workflow

Decompilation has to be more than a one-shot batch tool:

- Persistent `.unlace` project format with rename/comment/type metadata
  surviving reanalysis (Batch 24).
- Plugin SDK boundaries — Rust + WASM sandbox + Python bindings.
- Opt-in Lumina-style shared annotations.
- LSP/TUI/Web UI built only after persistence is real.

## Band 4 — production hardening

The work that makes large-scale or adversarial use possible:

- Lazy lifting + persistent SSA/HIR/type cache (Batch 25).
- Parallel decompilation with deterministic collection order.
- Memory-mapped binary access for huge binaries / dyld shared caches.
- Whole-pipeline fuzz harness with crash corpus and minimised repros.
- Panic-free loader/decompiler paths for attacker-controlled inputs.
- Reproducible release artifacts, SBOM, signed binaries, public benchmarks.

## How this file relates to the others

- `plan.md` — the *active backlog*. Specific tasks, ordered for the current
  push. When a band-level goal here lands, an entry in `plan.md` flips status.
- `docs/handoffs/` — per-batch handoffs. The execution-ready breakdown.
- `docs/status.md` — the present-tense matrix. What is shipped today.
- `research/opencode-sessions/` — historical session transcripts. Kept for
  context, not for status. Anything in there about percentages or completion is
  not current.

If two documents disagree on what is "done", prefer `docs/status.md` — it's the
only one that gets refreshed against verification commands.
