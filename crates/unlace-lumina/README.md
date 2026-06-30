# unlace-lumina

A Rust reimplementation of the **Hex-Rays IDA Pro Lumina** binary server
protocol, derived from a full reverse-engineering of `lumina_server` v9.3
(see `research/lumina/all/` in this repo). It lets `unlace` host and speak to
a Lumina metadata service — pushing and pulling function metadata keyed by
IDA's `calcrel_hash` identity hash.

## Protocol version

* **Wire protocol:** Lumina **v6** (the `HELO.protocol_version` field; this
  client/server negotiate up to and including version 6).
* **Server identity banner:** `Hex-Rays IDA Pro Lumina Server v9.3, 2026`
  (this implementation reports `Hex-Rays IDA Pro Lumina Server v9.3, 2026
  (unlace)` so peers and operators can tell it apart from the upstream
  binary — see `server::SERVER_BANNER`).

### Handshake / version behaviour

The client opens with a `HELO` (packet id 13) carrying a protocol version and,
for versions > 2, a username/password:

* **proto >= 5** — the server replies with `HELO_RESULT` (id 49) carrying the
  welcome banner, the feature mask, and the admin flag.
* **proto <= 4** — the server replies with a bare `RPC_OK` (id 10); there is no
  `HELO_RESULT` and no banner.

The bundled `Client` defaults to driving the handshake at version 6.

## Wire format

Frames are `u32` big-endian length + `u8` packet id + payload (`wire::Frame`,
`wire::{read_frame, write_frame}`). Payload primitives are `vuint32`
(variable-length u32), a two-half `u64` split encoding, NUL-terminated
C-strings, and length-prefixed raw byte blobs (`wire.rs`).

## Packet set

Packet ids and names mirror the reverse-engineered string table (`unk_237640`)
and are enumerated in `protocol::Packet` (ids 10–49):

| Category    | Packets |
|-------------|---------|
| RPC framing | `RPC_OK` (10), `RPC_FAIL` (11), `RPC_NOTIFY` (12) |
| Handshake   | `HELO` (13), `HELO_RESULT` (49) |
| Metadata    | `PULL_MD` (14) / `PULL_MD_RESULT` (15), `PUSH_MD` (16) / `PUSH_MD_RESULT` (17), `DUMP_MD` (28) / `DUMP_MD_RESULT` (29), `CLEAN_DB` (30) |
| Popularity  | `GET_POP` (18) / `GET_POP_RESULT` (19) |
| History     | `DEL_HISTORY` (24) / `DEL_HISTORY_RESULT` (25), `SHOW_HISTORY` (26) / `SHOW_HISTORY_RESULT` (27), `SHOW_PUSHES` (37) / `SHOW_PUSHES_RESULT` (38), `GET_FUNC_HISTORIES` (47) / `GET_FUNC_HISTORIES_RESULT` (48) |
| Admin/peers | `LIST_PEERS` (20) / `LIST_PEERS_RESULT` (21), `KILL_SESSIONS` (22) / `KILL_SESSIONS_RESULT` (23), `DEBUGCTL` (31), `USER_OPERATION` (39), `SHOW_USERS` (40) / `SHOW_USERS_RESULT` (41), `SET_PASSWORD` (42) |
| Decompile   | `DECOMPILE` (32) / `DECOMPILE_RESULT` (33) |
| Telemetry   | `PUSH_TLM` (34), `SHOW_TLM_SESSIONS` (35) / `SHOW_TLM_SESSIONS_RESULT` (36) |
| Info/stats  | `GET_LUMINA_INFO` (43) / `GET_LUMINA_INFO_RESULT` (44), `GET_LUMINA_STATS` (45) / `GET_LUMINA_STATS_RESULT` (46) |

Each command packet (ids 14–48) carries a feature/auth mask taken verbatim
from `dword_1B6840` (`protocol::AUTH_MASK`). Commands whose mask includes the
admin bit `0x4000_0000` (`protocol::ADMIN_BIT`) require an admin session; the
low nibble selects a feature (`features::{METADATA, DECOMPILE, TELEMETRY}`).

## Crate layout

* `wire` — frame + primitive codec.
* `protocol` — `Packet` id enum, `AUTH_MASK` table, `admin_required`.
* `helo` — `HELO` (13) / `HELO_RESULT` (49) encode/decode.
* `server` — async TCP server (`serve`, `run_listener`, `serve_connection`),
  handshake, per-command auth-masked dispatch, the `Handler` trait,
  `FuncMetadata` record type, and `InMemoryHandler` for tests.
* `db` — `SqliteStore`, a sqlite-backed `Handler` (`open` / `open_in_memory`).
* `client` — minimal async `Client` (`connect`, `helo`, `push_md`, `pull_md`).
* `legacy_json` and friends — the pre-rewrite JSON-over-HTTP placeholder, kept
  compiling for legacy callers; **not** part of the v6 protocol.

## Quick round-trip

```rust,ignore
use std::sync::Arc;
use unlace_lumina::client::Client;
use unlace_lumina::server::{FuncMetadata, InMemoryHandler, run_listener};

// Start a server on a loopback port, HELO, push a record, pull it back by hash.
let mut client = Client::connect(addr).await?;
client.helo(6, "user", "").await?;
let rec = FuncMetadata { name: "f".into(), size: 0x10,
    metadata: vec![1, 2, 3], counter: 1, calcrel_hash: [0xAB; 32] };
client.push_md(&[rec.clone()]).await?;          // -> vec![0]  (ok)
let got = client.pull_md(&[rec.calcrel_hash]).await?;
assert_eq!(got[0].as_ref().unwrap().metadata, rec.metadata);
```

See `tests/roundtrip.rs` and `tests/v6_roundtrip.rs` for the full end-to-end
client/server round-trip exercised against both `InMemoryHandler` and the
sqlite-backed `SqliteStore`.

## Compatibility

* Implements the Lumina **v6** wire protocol against the upstream
  `lumina_server` v9.3 packet set; protocol versions **<= 4** are accepted at
  handshake but receive a bare `RPC_OK` (no `HELO_RESULT`).
* The packet id table, auth/feature masks, and admin gate are reproduced from
  the v9.3 reverse-engineering; ids outside `10..=49` are rejected.
* This is a clean-room reimplementation, not the Hex-Rays binary. It targets
  protocol compatibility with IDA Pro Lumina clients/servers of the v9.3 era;
  newer IDA releases that bump the protocol version are not yet covered.
* The `legacy_json` module is an unrelated, pre-v6 placeholder and carries no
  compatibility guarantee.
