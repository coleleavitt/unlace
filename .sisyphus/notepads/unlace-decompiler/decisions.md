# Architectural Decisions

## IR Model
- **Decision**: Model after Ghidra P-code (~70 opcodes)
- **Rationale**: Most battle-tested multi-arch IR. Don't reinvent.

## Lifting Strategy
- **Decision**: Custom lifters per arch (NOT SLEIGH)
- **Rationale**: Maximum control over IR shape, no external spec deps

## Test Strategy
- **Decision**: TDD with hex-rays golden output (AST-equivalent comparison via tree-sitter-c)
- **Rationale**: 113K reference functions available. AST-equiv handles variable name differences.

## Architecture Coverage
- **Decision**: All 7 arches stubbed from day 1, x86-64 fully working first
- **Rationale**: Forces arch trait correctness early without blocking on parallel implementation

## Determinism
- **Decision**: No HashMap in output paths. BTreeMap/IndexMap only.
- **Rationale**: Required for golden file testing — output must be byte-identical across runs
