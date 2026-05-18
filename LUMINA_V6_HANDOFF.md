# Lumina v6 binary protocol — handoff

## Branch

`lumina-v6-protocol` (created from `master` at `14ce07b49`).

## Files added

- `crates/unlace-lumina/src/wire.rs` — frame and primitive codec (vuint32 in
  3 buckets + 0xff escape, u64-split, cstring, raw bytes).
- `crates/unlace-lumina/src/protocol.rs` — `Packet` enum for ids 10..49,
  `AUTH_MASK` table mirroring `dword_1B6840`, `ADMIN_BIT`, helpers.
- `crates/unlace-lumina/src/helo.rs` — HELO (id 13) + HELO_RESULT (id 49)
  encode/decode with the `protocol_version > 2` username/password gate.
- `crates/unlace-lumina/src/server.rs` — async TCP listener, handshake,
  auth-mask gate, dispatch loop, `Handler` trait, `InMemoryHandler`.
- `crates/unlace-lumina/src/client.rs` — async client used by tests + CLI.
- `crates/unlace-lumina/src/db.rs` — `SqliteStore` (rusqlite + bundled) with
  `funcs`, `calcrel_hash`, `func_freqs`, `history`, `pushes`, `users`.
- `crates/unlace-lumina/src/legacy_json.rs` — old JSON-over-HTTP placeholder,
  moved here so existing tests keep passing.
- `crates/unlace-lumina/tests/v6_roundtrip.rs` — integration test driving
  the full HELO → PUSH_MD → PULL_MD round-trip across a loopback socket.

## Files modified

- `crates/unlace-lumina/src/lib.rs` — re-exports of the new modules plus
  the legacy API at the crate root for back-compat (`Annotation`,
  `AnnotationServer`, `router`, ...).
- `crates/unlace-lumina/Cargo.toml` — added `async-trait`, `rusqlite`
  (bundled feature), `tokio` `io-util`.
- `crates/unlace-cli/Cargo.toml` — added `unlace-lumina` + `tokio` deps.
- `crates/unlace-cli/src/args.rs` — new `Cmd::Lumina` subcommand and
  `LuminaAction { Serve, Push, Pull }`.
- `crates/unlace-cli/src/main.rs` — `run_lumina` dispatcher that spins up
  tokio only when needed.

## Commands run

```bash
RUSTC_WRAPPER= cargo check -p unlace-lumina          # ok
RUSTC_WRAPPER= cargo test -p unlace-lumina --lib     # 60/60 pass
RUSTC_WRAPPER= cargo test -p unlace-lumina --test v6_roundtrip  # 2/2 pass
RUSTC_WRAPPER= cargo check --workspace               # ok
RUSTC_WRAPPER= cargo test -p unlace-cli              # (see below)
```

The CLI test run completes the build; the rebuilt unlace binary runs
without any errors related to the lumina wiring. Existing CLI tests are
unchanged.

## Packet coverage

### Real, end-to-end implemented

| ID | Name | Notes |
|----|------|-------|
| 10 | RPC_OK | written as 0-length reply |
| 11 | RPC_FAIL | wraps a cstring message |
| 13 | HELO | full decode incl. v>2 credentials |
| 14 | PULL_MD | reads N×32-byte hashes, returns matching `funcs` rows |
| 15 | PULL_MD_RESULT | same shape parsed by `Client::pull_md` |
| 16 | PUSH_MD | inserts into `funcs`, `calcrel_hash`, `func_freqs`, logs `pushes`/`history` |
| 17 | PUSH_MD_RESULT | per-record status array |
| 43 | GET_LUMINA_INFO | returns `SERVER_BANNER` |
| 44 | GET_LUMINA_INFO_RESULT | mirrored on client side |
| 45 | GET_LUMINA_STATS | sqlite COUNTs over funcs/pushes/history |
| 46 | GET_LUMINA_STATS_RESULT | mirrored on client side |
| 49 | HELO_RESULT | proto >= 5 path |

### Stubbed (returns `RPC_FAIL` with `not implemented`)

All of: `RPC_NOTIFY` (12), `GET_POP` (18/19), `LIST_PEERS` (20/21),
`KILL_SESSIONS` (22/23), `DEL_HISTORY` (24/25), `SHOW_HISTORY` (26/27),
`DUMP_MD` (28/29), `CLEAN_DB` (30), `DEBUGCTL` (31), `DECOMPILE` (32/33),
`PUSH_TLM` (34), `SHOW_TLM_SESSIONS` (35/36), `SHOW_PUSHES` (37/38),
`USER_OPERATION` (39), `SHOW_USERS` (40/41), `SET_PASSWORD` (42),
`GET_FUNC_HISTORIES` (47/48). Admin-only ones are also correctly rejected
by the auth-mask gate before reaching the stub.

## Auth model

Per `dword_1B6840`/`sub_421D0`:

- The high bit `0x40000000` flags admin-required commands.
- The low nibble holds feature gates (`0x01` metadata/history,
  `0x02` decompile-as-a-service, `0x04` telemetry).
- `SqliteStore` runs in "open mode" when the `users` table is empty (admin
  granted to every connection — useful for fresh deploys and tests). As
  soon as one user is provisioned, every session must authenticate or the
  HELO is rejected with `Operation failed`, matching the C source.

## Known weak spots / data-section reverse engineering needed

1. **`DECOMPILE` (32/33) payload shape** — the C source dispatches into the
   IDA decompiler core; the payload is opaque to the framing layer. Need
   to decode `sub_6B0C0`/`sub_6AFD0` and the surrounding ctree serializer.
2. **`PUSH_TLM` / telemetry frame** — telemetry layout in `sub_74C70` uses
   helper packers I haven't transcribed yet; needs the `__stat_*` accessor
   strings from the binary.
3. **`DUMP_MD` / `SHOW_HISTORY` filter object** — `sub_84820.c` exposes 11
   filter fields (flags, license_id[], time_ranges[], push_id_ranges[],
   idbs[], inputs[], funcs[], usernames[], input_hashes[], calcrel_hashes[],
   max_entries). The wire encoding of each (especially the variable-length
   arrays) needs more reading.
4. **Exact error strings beyond `Invalid license ID`, `Invalid license`,
   `Lumina protocol version not compatible with server`, `Operation failed`**
   — the C binary references additional context-specific messages (per-
   command audit logs, license-expiry copy) that I haven't enumerated.
5. **License blob format** — currently treated as opaque bytes. IDA's
   `license_t` serialization (`sub_5D0A0` + companion encoders) is not
   decoded, so any client we'd interoperate with from real IDA needs that
   round-tripped, not stored verbatim.
6. **`idbs`, `inputs`, `hostnames` tables** — referenced by the
   un-implemented bodies above; their column layouts (especially for
   `inputs.id_hash` -> binary identity mapping) need another pass through
   the reverse-engineered SQL strings before I'd commit to a schema.
7. **HELO_RESULT trailing fields** — `sub_73600` writes a few extra fields
   past the welcome/features pair (server time, license-expiry, push-quota
   counters). Older clients silently ignore them; an IDA peer might rely
   on them. Current encoder writes only the documented prefix.
8. **Large-packet flag** — `sub_1692C0` consults a transport flag at
   `*(_BYTE *)(a1 + 69)` to bypass the 0x2000 cap. We expose the cap as a
   parameter (`DEFAULT_MAX_PAYLOAD`, `ABSOLUTE_MAX_PAYLOAD`) but never
   negotiate or set the per-session bit. Sessions that legitimately need
   bigger frames (e.g. DECOMPILE) will need this wired into the handshake.

## Reference files consulted

`research/lumina/all/sub_1692C0.c`, `sub_169470.c`, `sub_1694E0.c`,
`sub_196CD0.c`, `sub_196ED0.c`, `sub_196FF0.c`, `sub_6B1B0.c`,
`sub_6AE40.c`, `sub_6CCA0.c`, `sub_38E40.c`, `sub_84820.c`.
