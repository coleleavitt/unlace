# UnlaceDecompiler — the unlace core inside the stock Ghidra GUI

A standard Ghidra extension that makes the **stock Ghidra GUI** spawn **unlace** (the Rust
port of the Ghidra decompiler, this repository) as its native decompiler backend, in
place of the stock C++ `decompile` binary — the *unchanged* Ghidra GUI (Decompiler
window, analyzers, scripts) running on the unlace engine. It is a drop-in, backwards-
compatible backend: Ghidra's Java side is untouched; only the spawned process changes.

**Status: Phase 2 — unlace decompiles.** The `unlace_ghidra` binary speaks the complete
Ghidra⇄decompiler wire protocol *and* drives unlace's engine, so the Decompiler window
shows **real C produced by unlace**, with working click-to-address. Current scope: simple,
self-contained functions decompile cleanly; a function that references globals/types the
engine can't yet resolve shows placeholder names (`sub_…`/`DAT_…`) and default types —
correct names/types at scale is Phase 3 (the lazy symbol scope). See
[`docs/ghidra-integration.md`](../../../docs/ghidra-integration.md) for the design and
phase plan. Developed against Ghidra **12.2-DEV**; release zips are built against the
latest stable release (currently **12.1.2**). The swap relies on the exact shape of
`DecompileProcessFactory`, which is identical across both (see *How it works* below).

## Install from a GitHub Release (recommended; works airgapped)

Every unlace release ships a ready-to-install extension zip —
`unlace-v<ver>-UnlaceDecompiler-ghidra_<ghidra-version>.zip` on the
[releases tab](https://github.com/coleleavitt/unlace/releases) — with prebuilt `unlace_ghidra`
backends for **all platforms** already inside: Linux x86_64 and arm64, macOS x86_64 and
arm64, Windows x86_64 (`unlace_ghidra.exe`). Ghidra picks the right one at runtime, and
its built-in arm→x86 fallbacks cover the rest (Windows-on-ARM runs the x86_64 binary
under emulation; an Apple-Silicon install missing `mac_arm_64` would fall back to
`mac_x86_64` under Rosetta). No cargo, no network, no separate specs download —
`unlace_ghidra` receives everything over the wire, so the zip plus a Ghidra release
install are the only two files an airgapped machine needs.

1. Download the `…UnlaceDecompiler-ghidra_<version>.zip` asset from the unlace releases tab.
2. In Ghidra's project window: **File → Install Extensions… → `+` → select the zip**,
   then restart Ghidra when prompted.
3. Enable the plugin: open a program in the CodeBrowser, then **File → Configure →
   Miscellaneous** and check **UnlaceDecompilerPlugin**.

The zip is built against — and version-locked to — the Ghidra version in its filename
(the extension installer compares versions). On another Ghidra 12.x, the installer shows
an **Extension Version Mismatch** dialog; **Install Anyway** generally works because the
factory seam the plugin relies on is stable across 12.x, but those pairings are
unverified.

The sections below are the from-source paths: building the backend and the zip yourself.

## How it works

Every decompiler consumer in Ghidra funnels process creation through one static
factory, `ghidra.app.decompiler.DecompileProcessFactory`, which resolves the executable
once and caches it in a `private static String exepath` field. There is no property,
env var, or ExtensionPoint to substitute it — so at plugin load,
`UnlaceDecompilerPlugin` resolves the `unlace_ghidra` binary shipped in this extension's
`os/<platform>/` directory (or the `-Dunlace.decompiler.exe` override) and writes that
field by reflection, before the lazily-spawned first decompiler process exists. A
Tools-menu checkbox toggles between the unlace core and the stock one at runtime.

## Run the unlace backend in a real Ghidra instance

The whole flow, against a **Ghidra release install** — build the backend, package the
extension, install it, enable the plugin, decompile:

```bash
# 1. Build the unlace_ghidra backend and package the extension in one step.
#    build.sh compiles the release binary, stages it into os/<platform>/, and
#    (because GHIDRA_INSTALL_DIR is set) builds the installable zip.
cd integrations/ghidra/UnlaceDecompiler
GHIDRA_INSTALL_DIR=/abs/path/to/ghidra_12.2 ./build.sh
#    -> dist/ghidra_12.2_..._UnlaceDecompiler.zip
```

2. **Install the extension:** in Ghidra's project window, **File → Install Extensions… →
   `+` → select `dist/…_UnlaceDecompiler.zip`**, then restart Ghidra when prompted.
3. **Enable the plugin:** open a program in the CodeBrowser, then **File → Configure →
   Miscellaneous** and check **UnlaceDecompilerPlugin**. On load it swaps the decompiler
   core and logs `Decompiler core is now UNLACE: <path>`.
4. **Decompile:** open any function — the Decompiler window now shows unlace's C. (Try a
   small, self-contained function first; see the status note above for what Phase 2 does
   and doesn't yet resolve.)
5. **Toggle / revert** at runtime with **Tools → Unlace Decompiler → Use Unlace Core** (see
   *Revert* below).

Manual equivalents and the dev-checkout path are in the sections below.

### Just the binary (manual)

`build.sh` with no `GHIDRA_INSTALL_DIR` builds + stages the binary only; the equivalent
by hand, from the repo root:

```bash
cargo build --release -p unlace-ghidra
cp target/release/unlace_ghidra integrations/ghidra/UnlaceDecompiler/os/linux_x86_64/
```

The binary is a gitignored build artifact; it must be present under
`os/<platform>/` **before** building the extension zip so it gets packaged (`build.sh`
picks the right `os/<platform>/` dir for your host; for other platforms see
`os/linux_x86_64/README.md`).

## Build & install the extension

### Against a Ghidra release install

Use the Gradle version named by `application.gradle.min` in
`<GHIDRA_INSTALL_DIR>/Ghidra/application.properties`:

```bash
cd integrations/ghidra/UnlaceDecompiler
gradle -PGHIDRA_INSTALL_DIR=<Absolute path to Ghidra> buildExtension
# -> dist/ghidra_<version>_<release>_<date>_UnlaceDecompiler.zip
```

Then in Ghidra's project window: **File → Install Extensions… → + → select the zip**,
and restart Ghidra when prompted.

### Against a Ghidra source (dev) checkout

No zip needed — inject this directory as an external module when launching Ghidra
(this is the seam GhidraDev/VSCode dev launches use,
`GhidraApplicationLayout.java:174-181`):

```
-Dghidra.external.modules=/abs/path/to/unlace/integrations/ghidra/UnlaceDecompiler
```

added to the launcher's VM args (e.g. the Eclipse/VSCode launch configuration created
by `gradle prepDev` / the VSCode integration), with the extension's Java compiled into
the project. During development you can skip copying the binary and instead pass
`-Dunlace.decompiler.exe=/abs/path/to/unlace/target/release/unlace_ghidra`.

## Enable the plugin

Open a program in the CodeBrowser, then **File → Configure → Miscellaneous** (the
gear/"Configure All Plugins" view) and check **UnlaceDecompilerPlugin**. On load it
performs the swap and logs `Decompiler core is now UNLACE: <path>` to the application
log; if the binary is missing it shows an error dialog with the build/copy commands and
leaves the stock core active.

## Verify

- Run the bundled script `UnlaceCoreStatus.java` (Script Manager, category *Unlace*): it
  prints the executable path currently installed in `DecompileProcessFactory` and
  whether the next decompiler process is the unlace or stock core.
- Decompile a small, self-contained function: the Decompiler window shows unlace's C, and
  clicking a token navigates to its address — proof that the stock GUI is running on the
  unlace engine. If a function can't be decompiled yet (an un-supported engine path), the
  window shows a clean per-function message instead of hanging.
- Sanity check that it's really unlace and not the stock core: the two decompilers produce
  cosmetically different C, and `UnlaceCoreStatus.java` reports the `unlace_ghidra` path.

## Revert

- **Runtime:** uncheck **Tools → Unlace Decompiler → Use Unlace Core** — future decompiler
  spawns use the stock binary again. Programs with an already-running decompiler
  process keep it until that process restarts (reopen the program, or the process is
  reset after an error/timeout); reopening the program is the reliable nudge.
- **Plugin off:** un-check the plugin in File → Configure (its dispose restores the
  stock core), or **File → Install Extensions…** and uncheck UnlaceDecompiler, then
  restart Ghidra.

## Alternative: the no-code file-drop seam

You can run unlace under Ghidra without this extension at all: copy the unlace binary
**named `decompile`** to

```
<GHIDRA_INSTALL_DIR>/Ghidra/Features/Decompiler/build/os/<platform>/decompile
```

`Application.getModuleOSFile` searches a module's `build/os/<platform>/` *before*
`os/<platform>/`, so this shadows the stock binary without overwriting it (delete the
`build/os` copy to revert). Tradeoffs versus the extension:

- applies **unconditionally** to that install — every project, every tool, no toggle,
  no logging of which core is active;
- invisible: nothing in the GUI indicates the core was swapped (use
  `UnlaceCoreStatus.java`'s output path, or the phase-1 message, to tell);
- survives extension uninstalls but may be wiped by Ghidra upgrades/rebuilds;
- per-install file surgery rather than a distributable artifact.

The extension is the recommended path; the file drop is handy for quick experiments on
a release install.

## Use with PyGhidra (headless / scripting)

Build the backend once (`cargo build --release -p unlace-ghidra`), install
pyghidra (`pip install "$GHIDRA_INSTALL_DIR"/Ghidra/Features/PyGhidra/pypkg/dist/pyghidra-*.whl`,
or `pip install pyghidra`), and set `GHIDRA_INSTALL_DIR`. Then pick one of two ways to make
Ghidra use unlace.

### In-script toggle — recommended (no file changes)

The GUI plugin can't load headless, but you can do exactly what it does — set
`DecompileProcessFactory`'s cached `exepath` by reflection — straight from Python. This
flips the core on and off at runtime with **no file surgery**; it takes effect on the next
decompiler-process spawn (a freshly constructed `DecompInterface`):

```python
import os, pyghidra
pyghidra.start()
from ghidra.app.decompiler import DecompileProcessFactory, DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

def _exepath():
    f = DecompileProcessFactory.class_.getDeclaredField("exepath")
    f.setAccessible(True)
    return f
def enable_unlace(exe):  _exepath().set(None, exe)    # unlace ON  (abs path to unlace_ghidra)
def disable_unlace():    _exepath().set(None, None)   # back to the stock decompiler
def active_core():     return _exepath().get(None)  # what Ghidra will spawn next

with pyghidra.open_program("a.out") as flat:        # analyze=True by default
    program = flat.getCurrentProgram()
    enable_unlace(os.environ["UNLACE_GHIDRA_EXE"])       # target/release/unlace_ghidra
    ifc = DecompInterface(); ifc.openProgram(program)
    for func in program.getFunctionManager().getFunctions(True):
        print(ifc.decompileFunction(func, 60, ConsoleTaskMonitor()).getDecompiledFunction().getC())
    ifc.dispose()
    disable_unlace()                                   # later DecompInterfaces use stock again
```

`enable_unlace`/`disable_unlace` are the headless equivalent of the extension's
**Tools → Unlace Decompiler → Use Unlace Core** checkbox (which already toggles the GUI at
runtime). An already-open `DecompInterface` keeps its current core until it respawns, so
toggle *before* constructing the one you want to run.

### Persistent swap — the file-drop seam

When you can't inject Python (e.g. `analyzeHeadless`) or want *every* Ghidra invocation to
use unlace, drop the binary named `decompile` into the module's `build/os/<platform>/` (Ghidra
searches it before `os/<platform>/`, so it shadows the stock binary without overwriting it —
delete the copy to revert):

```bash
PLAT=mac_arm_64   # or linux_x86_64 | mac_x86_64 | linux_arm_64 (see build.sh)
DROP="$GHIDRA_INSTALL_DIR/Ghidra/Features/Decompiler/build/os/$PLAT"
mkdir -p "$DROP" && cp target/release/unlace_ghidra "$DROP/decompile"
```
