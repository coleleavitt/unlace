# unlace-lumina

IDA Pro's Lumina protocol: clients push and pull function metadata (names, prototypes, comments)
keyed by an MD5 of each function's bytes with address operands masked. This crate is the protocol;
`unlace lumina` (crates/unlace-cli/src/lumina.rs) computes the keys from the engine's decode and
drives it. See `docs/cli.md`, "unlace lumina".

| Module | What it holds |
|---|---|
| `wire` | Frames (`u32` big-endian length, packet id, payload), `pack_dd`/`pack_dq`, strings, byte vectors |
| `protocol` | Packet ids 10-49 and the per-command authorization masks of `lumina_server` v9.3 |
| `helo` | `HELO` (13) and `HELO_RESULT` (49, the user object) |
| `messages` | `PULL_MD`/`PULL_MD_RESULT` (14/15), `PUSH_MD`/`PUSH_MD_RESULT` (16/17), `RPC_FAIL` |
| `metadata`, `tinfo` | The metadata blob's chunks (`MDK_*`) and the function-type chunk (IDA type strings) |
| `hash` | The calcrel key: `MD5(bytes & !mask ‖ mask)` |
| `client`, `server`, `db`, `tls` | Blocking client, thread-per-connection server, sqlite store, rustls transport |

Layouts follow the public reimplementations (zhangyoufu/lumina, naim94a/lumen,
synacktiv/lumina_server) and the `lumina_server` v9.3 notes of the original port. Interoperability
with IDA itself is limited by the key: IDA masks what each processor module's `ev_calcrel` says, and
unlace masks the operands SLEIGH resolves to addresses, so keys agree with IDA only where the two
masks do. Keys are always stable between unlace runs, so a self-hosted server (`unlace lumina serve`)
shares names between unlace users.

The server answers `HELO`, `PULL_MD`, `PUSH_MD`, `GET_POP`, `SHOW_HISTORY`, `DUMP_MD`, `GET_LUMINA_INFO` and `GET_LUMINA_STATS`; every
other packet gets `RPC_FAIL`. The original port's placeholder modules (a JSON-over-HTTP annotation
server, collaborative editing, a public annotation database, a sharing policy) were not carried over:
they were behind a never-enabled feature and spoke no Lumina.

Feature `tls` (default) adds rustls with the ring provider. The sqlite store uses rusqlite's bundled
SQLite. Nothing in the crate opens a connection unless a caller asks it to.
