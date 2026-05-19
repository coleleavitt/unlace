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
RUSTC_WRAPPER= cargo test -p unlace-lumina --lib     # 61/61 pass
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
| 18 | GET_POP | returns top metadata rows by frequency counter |
| 19 | GET_POP_RESULT | bounded row list encoded by the generic sqlite-backed result writer |
| 20 | LIST_PEERS | reports the active session (no global peer registry yet) |
| 21 | LIST_PEERS_RESULT | active-session peer summary |
| 22 | KILL_SESSIONS | parses requested ids and returns per-id status |
| 23 | KILL_SESSIONS_RESULT | per-id status array |
| 24 | DEL_HISTORY | deletes a bounded newest-history window |
| 25 | DEL_HISTORY_RESULT | deleted row count |
| 26 | SHOW_HISTORY | returns bounded history entries |
| 27 | SHOW_HISTORY_RESULT | history rows with username/timestamp/metadata |
| 28 | DUMP_MD | returns bounded metadata rows |
| 29 | DUMP_MD_RESULT | metadata rows including hash/name/size/blob/counter |
| 30 | CLEAN_DB | clears metadata/history/pushes/telemetry, preserves users |
| 31 | DEBUGCTL | parses string args and returns an acknowledgement list |
| 32 | DECOMPILE | dispatch hook is wired; default handler returns explicit unsupported error |
| 33 | DECOMPILE_RESULT | raw result wrapper for embedding apps that provide a backend |
| 34 | PUSH_TLM | stores raw telemetry payloads |
| 35 | SHOW_TLM_SESSIONS | returns telemetry upload summaries |
| 36 | SHOW_TLM_SESSIONS_RESULT | telemetry id/user/time/payload-length rows |
| 37 | SHOW_PUSHES | returns bounded push log entries |
| 38 | SHOW_PUSHES_RESULT | push rows with username/timestamp/metadata |
| 39 | USER_OPERATION | parses recovered user object + operation type; sqlite supports add/update/delete/sync subset |
| 40 | SHOW_USERS | returns live sqlite users |
| 41 | SHOW_USERS_RESULT | recovered user-object rows plus proto>3 trailing status |
| 42 | SET_PASSWORD | updates/creates sqlite users |
| 43 | GET_LUMINA_INFO | returns `SERVER_BANNER` |
| 44 | GET_LUMINA_INFO_RESULT | mirrored on client side |
| 45 | GET_LUMINA_STATS | sqlite COUNTs over funcs/pushes/history |
| 46 | GET_LUMINA_STATS_RESULT | mirrored on client side |
| 47 | GET_FUNC_HISTORIES | reads N×32-byte hashes and returns per-function histories |
| 48 | GET_FUNC_HISTORIES_RESULT | grouped history entries |
| 49 | HELO_RESULT | proto >= 5 path |

### Still application-specific / compatibility-limited

- `RPC_NOTIFY` (12) remains a transport notification hook.
- `DECOMPILE` (32/33) is wired through the handler trait but needs an
  embedding application to provide the actual decompiler backend. The packet
  layer is just a strict `vuint32 length + raw bytes` request/response wrapper.
- Follow-up MCP pass on `plugins/hexx64.so` confirms the visible batch
  `-lumina` path is the normal metadata path, not packet 32. `sub_368430`
  obtains `get_server_connection()`, `sub_363BA0` builds per-function
  `calc_func_metadata()` records, then calls the libida connection vtable
  slots `+0x30`/`+0x40` to pack and pull metadata. `sub_360E90` uses slot
  `+0x50` to push metadata. The packet-32 `DECOMPILE` transport is the same
  libida vtable's `+0x80` slot (`sub_7D4200` in `libida.so`) and is not
  reached by this hexx64 batch-Lumina path.
- `USER_OPERATION` (39) now has the recovered wire shape:
  `license.id/name/email`, `user_name`, `karma`, `last_active`, `features`,
  `type`. The sqlite store implements the concrete profile operations we
  could tie to SQL (`add/undelete`, `update`, `delete`, vault sync). Password
  changes remain covered by the separate `SET_PASSWORD` packet.
- The history/filter payload accepts the bounded Unlace filter prefix today,
  not the complete upstream 11-field filter object.

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

1. **`DECOMPILE` (32/33) backend** — the MCP pass confirms the packet codec
   only wraps an opaque byte blob (`sub_6A910`/`sub_6AEF0` and
   `sub_6A960`/`sub_6AF60`; `libida.so` packet factories at ids 32/33 do the
   same raw-vector wrapping). Turning that blob into C requires an embedding
   decompiler backend outside `unlace-lumina`.
   - `libida.so` constructs the Lumina connection object in `sub_7D5120`
     with vtable `0x2BFBF60`.
   - Relevant vtable slots: `+0x30 = sub_7D3D80` (per-function metadata/request
     packing), `+0x40 = sub_7D4450` (metadata pull), `+0x50 = sub_7D5A70`
     (metadata push), `+0x80 = sub_7D4200` (packet-32 raw `DECOMPILE` send,
     expects packet 33).
   - `hexx64.so::sub_363BA0` consumes metadata results as: status array at
     result object `+0x10`, count at `+0x18`, and successful 64-byte result
     records at `+0x28`. Status `-2` means no result; status `0` means a
     usable metadata result; any other value hits the debug BUG path.
   - `hexx64.so::sub_3623A0` parses an optional TLV inside the result record's
     raw vector at offset `+0x20`: repeated `u32 tag`, `u32 length`, `bytes`.
     Tag `2` carries the saved-time `u64` used by the
     `"skipped because of lumina"` / saved-time accounting.
   - That hexx64 path still only applies/scopes function metadata
     (`score_metadata`, `apply_metadata`) and may skip local redecompilation.
     It does not provide a server-side pseudocode generator for packet 32.
   - Static `xxd`/`llvm-readelf`/`llvm-objdump` pass on the IDA 9.3 SP1
     install gives the same result. `libida.so` section mapping puts
     `.data.rel.ro` at VA `0x2B25620`, file offset `0x2B24620`; therefore the
     connection vtable VA `0x2BFBF60` is file offset `0x2BFAF60`. At
     vtable slot `+0x80` (VA `0x2BFBFE0`, file offset `0x2BFAFE0`), the
     relocation is `R_X86_64_RELATIVE 7d4200`. `sub_7D4200` builds packet id
     `0x20`, moves the caller-supplied qvector into the packet object, sends
     through the generic RPC helper, expects packet id `0x21`, then swaps the
     returned qvector back into the caller's argument. It does not serialize a
     richer request schema.
   - `plugins/hexx64.so` imports `get_server_connection`, `calc_func_metadata`,
     and `apply_metadata`; the `-lumina` path decompiles to calls through
     connection slots `+0x30`, `+0x40`, and `+0x50`, not `+0x80`.
     All other `plugins/hex*.so` binaries expose the same Lumina/import string
     surface, so loading another architecture decompiler plugin is unlikely to
     reveal a different packet-32 schema.
   - `ida`/`libidalib.so` import `get_server_connection2` and contain the UI
     actions/feature checks for Lumina. Static callsites checked so far only
     test feature bit `0x2` at connection offset `+0xB0`, call metadata slots
     such as `+0x10`, `+0x30`, `+0x48`, `+0x50`, `+0x60`, and `+0x68`, or
     manage metadata UI state. They do not build a packet-32 blob in the
     traced paths.
   - If continuing in IDA, load `libida.so.i64` for packet-32 transport and
     `ida.i64` only to label/check the GUI feature-gate callsites. Loading the
     live `ida` executable instead of the `.i64` database is not necessary
     unless the existing database is stale. `hexx64.so.i64` was the correct
     decompiler-plugin target and has already shown the metadata path.
   - Current conclusion: the missing IDA-compatible packet-32 schema is the
     producer of the raw qvector passed into `sub_7D4200`, not the network
     packet wrapper. It may live behind an SDK/idalib/private API path that is
     not exercised by the normal Lumina metadata UI, or it may be generated by
     a client not present in the public plugin path. A runtime breakpoint on
     `libida.so:0x7D4200` during any "cloud decompile" action is the most
     direct next check.
   - `sub_7D4200` argument layout on Linux x86-64 SysV:
     `RDI = this/lumina_connection`, `RSI = qvector<uint8_t> *raw_blob`,
     `RDX = qstring *error_out`. The qvector at `RSI` is the standard
     three-pointer layout: `+0x00 data`, `+0x08 size`, `+0x10 capacity`.
     Break at function entry (`libida.so + 0x7D4200`) or before `0x7D4232`.
     The function steals the vector immediately:
     `0x7D421C` loads `size/capacity` from `[RSI+8]`,
     `0x7D4232` zeros `[RSI+8..+0x17]`,
     `0x7D4246` loads `data` from `[RSI]`, and
     `0x7D4249` zeros `[RSI]`.
   - In the current MCP run, IDA's PID was `1641690` and `libida.so` mapped at
     base `0x7F0263600000`, making the live entry address
     `0x7F0263DD4200`. That address is ASLR-dependent; recompute from
     `/proc/<ida-pid>/maps` each run as
     `mapping_start - mapping_file_offset + 0x7D4200`.
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
5. **HELO license blob format** — currently treated as opaque bytes. IDA's
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

## Unlace-native decompile format proposal

For our own clients, do not wait on IDA's private qvector payload. Keep packet
32 as a raw envelope and version the inner payload ourselves:

- Request magic/version: `UNLCDEC\0`, `u16 version`, `u16 flags`.
- Target identity: architecture string, bitness, endianness, compiler/ABI
  hints, image base, function start/end, and optional entry address.
- Code bytes: one or more `{ ea, permissions, bytes }` ranges so the backend
  can decompile isolated functions or whole-image slices.
- Analysis context: optional symbols, imports, relocations, stack-frame hints,
  known prototypes, named types, xrefs, and caller/callee summaries.
- Output options: desired language (`c`, later `cpp`/`rustlike`), formatting
  flags, max diagnostics, and whether to include IR/CFG/line map.
- Response: status code, diagnostics, pseudocode text, function prototype,
  recovered locals/types, warnings, optional line map `{ source_line, ea }`,
  and backend metadata.

That gives Unlace a real backend contract now while the IDA-compatible packet
32 blob stays a separate reverse-engineering target.

## Reference files consulted

`research/lumina/all/sub_1692C0.c`, `sub_169470.c`, `sub_1694E0.c`,
`sub_196CD0.c`, `sub_196ED0.c`, `sub_196FF0.c`, `sub_6B1B0.c`,
`sub_6AE40.c`, `sub_6CCA0.c`, `sub_38E40.c`, `sub_43680.c`,
`sub_436F0.c`, `sub_439C0.c`, `sub_45B60.c`, `sub_6A910.c`,
`sub_6A960.c`, `sub_6AEF0.c`, `sub_6AF60.c`, `sub_6E800.c`,
`sub_6E8A0.c`, `sub_6E940.c`, `sub_6EB50.c`, `sub_6EC40.c`,
`sub_6E970.c`, `sub_762E0.c`, `sub_82CB0.c`, `sub_830F0.c`,
`sub_84820.c`.
