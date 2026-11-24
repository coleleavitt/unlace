# Live-smoke: unlace_ghidra inside a real Ghidra

A **manual/dev** rig (not CI) that runs the one thing the in-tree ghidra-sim
harness (`cargo test --release -p unlace-ghidra -- --include-ignored`, see `docs/ghidra-integration.md` §11) cannot: a
REAL Ghidra as the other end of the decompile-process pipe. It decompiles the
same functions twice — once with the stock native core, once with
`unlace_ghidra` swapped in — and writes a side-by-side report carrying the same
badness-scanner counts the sim pins (raw-register leaks, `Unique<hex>` tokens,
`sub_`/`dat_` placeholder rate, the `unsigned_long__`-style `getC()` mangling
signature, and a unlace-vs-stock line-diff ratio).

The core swap uses the same seam as the `UnlaceDecompiler` extension
(`integrations/ghidra/UnlaceDecompiler/`): a reflection write of
`DecompileProcessFactory.exepath`, which the factory consults before spawning
the native process. No extension install is needed for the smoke.

## Setup

1. A Ghidra release (12.x), e.g. `~/tools/ghidra_12.1.2_PUBLIC`.
2. A venv with **pyghidra**. Ghidra bundles the wheels, so this works fully
   offline (the PyPI `pyghidra` also works when you have network):

   ```bash
   python3 -m venv ~/.virtualenvs/unlace-ghidra
   source ~/.virtualenvs/unlace-ghidra/bin/activate
   pip install --no-index --find-links \
       "$GHIDRA_INSTALL_DIR/Ghidra/Features/PyGhidra/pypkg/dist" pyghidra
   ```

3. The `unlace_ghidra` binary — NOT part of `cargo build --release -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli`; build it directly:

   ```bash
   cargo build --release -p unlace-ghidra
   ```

   (produces `target/release/unlace_ghidra`).

## Run

```bash
source ~/.virtualenvs/unlace-ghidra/bin/activate
export GHIDRA_INSTALL_DIR=~/tools/ghidra_12.1.2_PUBLIC
export UNLACE_SMOKE_BINARY=$PWD/tests/bug-repro/faillog   # any program
# optional:
#   export UNLACE_GHIDRA_EXE=…/target/release/unlace_ghidra  (default)
#   export UNLACE_SMOKE_FUNCTIONS=main,usage    (default: main + 2 largest)
#   export UNLACE_SMOKE_OUT=./live-smoke-out    (default)
python3 integrations/ghidra/live-smoke/unlace_vs_stock.py
```

Outputs, under `UNLACE_SMOKE_OUT`:

- `stock_<fn>.c` / `unlace_<fn>.c` — the `getC()` text per core, per function;
- `REPORT.md` — completion status, per-function scanner counts, and the
  unlace-vs-stock diff ratio.

A working local example (the machine this rig was built on):
`GHIDRA_INSTALL_DIR=/home/mahaloz/ctf/tools/ghidra_12.1.2_PUBLIC` with the venv
`/home/mahaloz/.virtualenvs/unlace-ghidra`.

## Notes / learnings baked in

- **`analyze=True` matters**: the stock analyzers create the `FUN_…` function
  symbols and types that Java answers queries from; an unanalyzed program
  makes both cores look artificially bad.
- **`getC()` is not the GUI panel**: `DecompileResults.getDecompiledFunction()`
  runs every funcname/variable/type/field/label token through Java's
  `IllegalCharCppTransformer`, so a token unlace emits with spaces/stars inside
  (`"unsigned long *"` as ONE `<type>` token) reads back as
  `unsigned_long__…`. The GUI panel renders token text verbatim. The sim
  harness replicates the `getC()` behavior, so its numbers and this rig's line
  up.
- The python scanners here are a small re-implementation of the rust ones
  (`crates/unlace-ghidra/tests/ghidra_sim/mod.rs`) with a fixed
  x86-64 register set; the rust harness (which harvests the register list from
  the live Sleigh) is authoritative for pinned numbers.
- Decompile timeouts are process murder (Java disposes the child); if the unlace
  pass hangs, look for the spawned `unlace_ghidra` PID and its stderr.
