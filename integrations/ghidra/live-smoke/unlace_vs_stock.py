#!/usr/bin/env python3
"""Live-smoke: decompile the same functions with the stock Ghidra core and the
unlace_ghidra core inside a REAL Ghidra, and write a side-by-side report with the
same badness-scanner counts the in-tree ghidra-sim harness pins.

This is the manual/dev complement to `cargo test --release -p unlace-ghidra -- --include-ignored` (which needs no Ghidra
at all): it validates the pieces the sim cannot — the extension/exepath spawn,
Java's real query answers, and Java-side rendering (`getC()` runs the token
stream through IllegalCharCppTransformer, which is where unlace's over-wide type
tokens become `unsigned_long__a1`).

Environment:
  GHIDRA_INSTALL_DIR    Ghidra release root (required; pyghidra needs it)
  UNLACE_GHIDRA_EXE       path to the unlace_ghidra binary
                        (default: <repo>/target/release/unlace_ghidra)
  UNLACE_SMOKE_BINARY     the program to analyze (required)
  UNLACE_SMOKE_FUNCTIONS  comma-separated function names (default: main plus the
                        two largest non-thunk functions)
  UNLACE_SMOKE_OUT        output directory (default: ./live-smoke-out)

Run it inside a venv with pyghidra installed (see README.md):
  python3 unlace_vs_stock.py
"""

import os
import re
import sys
import difflib
import traceback

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
UNLACE_GHIDRA = os.environ.get(
    "UNLACE_GHIDRA_EXE",
    os.path.join(REPO, "target", "release", "unlace_ghidra"),
)
BINARY = os.environ.get("UNLACE_SMOKE_BINARY")
FUNCTIONS = [f for f in os.environ.get("UNLACE_SMOKE_FUNCTIONS", "").split(",") if f]
OUT = os.path.abspath(os.environ.get("UNLACE_SMOKE_OUT", "live-smoke-out"))

# ---------------------------------------------------------------------------
# Badness scanners — a small python re-implementation of the rust harness's
# (tests/ghidra_sim/mod.rs). The rust harness harvests the register list from
# the live Sleigh; here a fixed x86-64 set suffices for a smoke report.
# ---------------------------------------------------------------------------

_GPR = []
for base in "AX BX CX DX SI DI BP SP".split():
    _GPR += [f"R{base}", f"E{base}", base]
_GPR += [b[0] + suf for b in ("AX", "BX", "CX", "DX") for suf in ("L", "H")]
_GPR += ["SIL", "DIL", "BPL", "SPL"]
for n in range(8, 16):
    _GPR += [f"R{n}", f"R{n}D", f"R{n}W", f"R{n}B"]
REGISTERS = set(_GPR) | {
    "CF", "PF", "AF", "ZF", "SF", "TF", "IF", "DF", "OF",
    "FS_OFFSET", "GS_OFFSET", "RIP", "EIP",
} | {f"XMM{n}" for n in range(16)} | {f"YMM{n}" for n in range(16)} \
  | {f"ST{n}" for n in range(8)}

IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
HEX = re.compile(r"[0-9a-fA-F]+$")


def identifiers(text):
    return IDENT.findall(text)


def register_leaks(text):
    seen = [i for i in identifiers(text) if i in REGISTERS]
    return len(seen), sorted(set(seen))


def unique_leaks(text):
    count = 0
    for i in identifiers(text):
        for prefix in ("Unique", "Stack"):
            rest = i[len(prefix):] if i.startswith(prefix) else None
            if rest and HEX.match(rest):
                count += 1
                break
    return count


def placeholder_addrs(text):
    out = {}
    for i in identifiers(text):
        for kind in ("sub_", "FUN_", "dat_", "DAT_"):
            rest = i[len(kind):] if i.startswith(kind) else None
            if rest and HEX.match(rest):
                out.setdefault(kind, set()).add(rest.lower())
    return out


def mangled_tokens(text):
    """Identifiers showing the getC() type-mangling signature (double
    underscore from a cleaned ``<space>*`` inside a type token)."""
    return len(re.findall(r"\b[A-Za-z_][A-Za-z0-9_]*__[A-Za-z0-9_]*\b", text))


def diff_ratio(a, b):
    la = [" ".join(l.split()) for l in a.splitlines() if l.split()]
    lb = [" ".join(l.split()) for l in b.splitlines() if l.split()]
    return 1.0 - difflib.SequenceMatcher(a=la, b=lb).ratio()


def scan(text):
    regs, reg_names = register_leaks(text)
    ph = placeholder_addrs(text)
    return {
        "registers": regs,
        "register_names": reg_names,
        "unique": unique_leaks(text),
        "placeholders": sum(len(v) for v in ph.values()),
        "placeholders_by_kind": {k: len(v) for k, v in ph.items()},
        "mangled_like": mangled_tokens(text),
    }


# ---------------------------------------------------------------------------
# The exepath reflection swap (the same seam the UnlaceDecompiler extension uses)
# ---------------------------------------------------------------------------


def get_exepath_field():
    from ghidra.app.decompiler import DecompileProcessFactory
    cls = DecompileProcessFactory.class_
    try:
        f = cls.getDeclaredField("exepath")
        f.setAccessible(True)
        return f
    except Exception as e:
        print(f"FATAL: DecompileProcessFactory has no 'exepath' field here: {e}")
        print("Declared fields:")
        for fld in cls.getDeclaredFields():
            print(f"  {fld}")
        sys.exit(2)


def decompile_one(ifc, func, out_path, timeout=120):
    from ghidra.util.task import ConsoleTaskMonitor
    diag = {"function": str(func.getName()), "entry": str(func.getEntryPoint())}
    code = None
    try:
        res = ifc.decompileFunction(func, timeout, ConsoleTaskMonitor())
        diag["decompileCompleted"] = bool(res.decompileCompleted())
        diag["errorMessage"] = str(res.getErrorMessage())
        dfunc = res.getDecompiledFunction()
        code = str(dfunc.getC()) if dfunc is not None else None
    except Exception:
        diag["exception"] = traceback.format_exc()
    diag["lastMessage"] = str(ifc.getLastMessage())
    with open(out_path, "w") as fh:
        fh.write(code if code else "/* NO OUTPUT */\n")
    return code or "", diag


def main():
    if not BINARY:
        print("usage: UNLACE_SMOKE_BINARY=/path/to/prog [UNLACE_SMOKE_FUNCTIONS=a,b] "
              "python3 unlace_vs_stock.py")
        sys.exit(1)
    if not os.path.exists(UNLACE_GHIDRA):
        print(f"FATAL: unlace_ghidra not built at {UNLACE_GHIDRA} "
              "(cargo build --release -p unlace-ghidra)")
        sys.exit(1)
    os.makedirs(OUT, exist_ok=True)

    import pyghidra
    pyghidra.start()
    from ghidra.app.decompiler import DecompInterface

    field = get_exepath_field()
    report = []

    with pyghidra.open_program(
        BINARY,
        project_location=os.path.join(OUT, "ghidra_project"),
        project_name="unlace_live_smoke",
        analyze=True,
    ) as flat:
        program = flat.getCurrentProgram()
        fm = program.getFunctionManager()
        print(f"[+] {program.getName()}: {fm.getFunctionCount()} functions, "
              f"lang={program.getLanguageID()}")

        def find(name):
            for f in fm.getFunctions(True):
                if str(f.getName()) == name:
                    return f
            return None

        targets = []
        if FUNCTIONS:
            for name in FUNCTIONS:
                f = find(name)
                if f is None:
                    print(f"WARNING: no function named {name}")
                else:
                    targets.append(f)
        else:
            main_f = find("main")
            if main_f is not None:
                targets.append(main_f)
            rest = [f for f in fm.getFunctions(True)
                    if not f.isThunk() and not f.isExternal() and f not in targets]
            rest.sort(key=lambda f: -f.getBody().getNumAddresses())
            targets += rest[:2]
        if not targets:
            print("FATAL: no target functions")
            sys.exit(1)

        for core, exe in (("stock", None), ("unlace", UNLACE_GHIDRA)):
            field.set(None, exe)
            print(f"[+] {core} pass (exepath override: {field.get(None)})")
            ifc = DecompInterface()
            ifc.openProgram(program)
            for f in targets:
                name = str(f.getName())
                out_path = os.path.join(OUT, f"{core}_{name}.c")
                code, diag = decompile_one(ifc, f, out_path)
                counts = scan(code)
                report.append((core, name, diag, counts))
                print(f"    {name}: completed={diag.get('decompileCompleted')} "
                      f"err={diag.get('errorMessage')!r} scan={counts}")
            ifc.dispose()
        field.set(None, None)

    # Side-by-side report with the per-function gap.
    lines = ["# unlace_ghidra vs stock core — live smoke report", ""]
    names = []
    for core, name, _, _ in report:
        if name not in names:
            names.append(name)
    for name in names:
        stock_c = unlace_c = ""
        for core, n, diag, counts in report:
            if n != name:
                continue
            lines.append(f"## {core} / {name}")
            lines.append(f"    completed={diag.get('decompileCompleted')} "
                         f"error={diag.get('errorMessage')!r}")
            lines.append(f"    scan: {counts}")
            path = os.path.join(OUT, f"{core}_{name}.c")
            text = open(path).read()
            if core == "stock":
                stock_c = text
            else:
                unlace_c = text
        if stock_c and unlace_c:
            lines.append(f"## diff_ratio({name}) = "
                         f"{diff_ratio(unlace_c, stock_c):.3f} (unlace vs stock)")
        lines.append("")
    report_path = os.path.join(OUT, "REPORT.md")
    with open(report_path, "w") as fh:
        fh.write("\n".join(lines))
    print(f"[+] report: {report_path}")
    print(f"[+] per-function C: {OUT}/<core>_<function>.c")


if __name__ == "__main__":
    main()
