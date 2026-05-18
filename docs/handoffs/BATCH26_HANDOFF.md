# Batch 26 Handoff: Product Truth, Release, and Documentation

## Status

Open roadmap batch.

## Mission

Align public claims, release artifacts, and documentation with measured
behavior.

## Current State

- `plan.md` and `docs/rebaseline-2026-05-17.md` now distinguish historical
  parity claims from current evidence.
- The plan calls for support-tier docs, split roadmap docs, reproducible
  releases, SBOM, signed artifacts, known limitations, and public benchmark
  fixture metadata.

## Primary Entry Points

- `README.md`
- `plan.md`
- `docs/rebaseline-2026-05-17.md`
- `docs/signed-releases.md`
- `docs/book/`
- `docs/tutorial/`
- `crates/unlace-sbom/src/lib.rs`

## Implementation Plan

1. Rewrite README support claims around measured tiers from Batch 22 and Batch
   23 scorecards.
2. Add `docs/status.md` with architecture, loader, type/debug, and output
   support matrices.
3. Split roadmap docs into current implementation plan, long-term parity
   roadmap, research ideas, and historical session notes.
4. Add reproducible release builds, SBOM, signed artifacts, and known
   limitations.
5. Add public benchmark fixtures with license and redistribution status.

## Verification

- Documentation link check.
- Release artifact reproducibility check.
- SBOM generation test.
- `RUSTC_WRAPPER= cargo test -p unlace-sbom`

## Done When

A new user can tell what works, what is experimental, and what is aspirational
without reading source code.

## Hazards

- Do not advertise support tiers that lack scorecard evidence.
- Keep historical session claims separate from current product status.
