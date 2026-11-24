## The problem

`unlace decompile` accepted any `--option` name at all. A misspelled one exited 0,
wrote nothing to stderr, and printed output byte-identical to the run with no
`--option` — so "I turned that decision off and nothing changed" was not evidence
that the decision was innocent.

```console
$ unlace decompile decompiler/crates/unlace-analysis/tests/fixtures/fauxware main \
      --option LOWEREDSWITCH off > /tmp/a.c; echo "rc=$?"
rc=0
$ unlace decompile decompiler/crates/unlace-analysis/tests/fixtures/fauxware main > /tmp/b.c
$ sha256sum /tmp/a.c /tmp/b.c | cut -c1-12
a14c226ac488
a14c226ac488
```

`loweredswitch` is a real option; `LOWEREDSWITCH`, `lowered_switch` and
`loweredswitc` are not, and nothing from outside told the caller which of the two
cases it was in. The other eight `--option`-taking subcommands already rejected
the name — but only after loading the binary, and with no hint.

## The fix

- The option **name** is checked in the parser, before a binary is opened or a
  `decomp_dbg` spawned, on all nine surfaces
  (`unlace-cli/src/optname.rs`). An unrecognized name exits 2 and names itself.
- The accept set is the two tables the engine actually dispatches on —
  `UNLACE_OPTION_NAMES` and `UPSTREAM_OPTION_ELEMENTS` — not a third copy, plus the
  load-time gates. A new in-module test pins `UPSTREAM_OPTION_ELEMENTS` to
  `OptionDatabase::new`'s dispatch map, so the CLI cannot start refusing a name
  the engine still honours.
- The message names the nearest catalogued spelling, since the reported misses
  were all one case, separator or letter away:
  `error: option LOWEREDSWITCH: Unknown option (did you mean "loweredswitch"?); \`unlace catalog\` lists every settable name`.
- Checked up front rather than at dispatch because the subprocess surface cannot
  learn it later: the console reports an unknown name as `Execution error:` on
  **stdout** while keeping the session alive and exiting 0, and the driver
  deliberately does not treat a console diagnostic as a verdict.

## Tests

`unlace-cli/tests/option_name_cli.rs` (4 cases, no `.sla` and no fixture needed):
every surface rejects, a near miss suggests, a catalogued name still gets past
the parser, and the rejection needs no specs. Without the fix, the first two fail.
`tests/cli/unknown-option-name-silently.json` is the promoted acceptance probe.

Gates: `make test` PARITY OK 675/675 · `make test-stages` PARITY OK 640/640 ·
`make rust-test` green · `make check-spec` OK · `make test-cli` 47/47 ·
`unlace catalog --check` OK.

🤖 Generated with [Claude Code](https://claude.com/claude-code)
