# The project file

A project file holds what a person or an agent has worked out about one binary: function entries and
names, prototypes, local names and types, `typedef`s, data declarations, comments, call-site targets,
byte patches, bookmarks, and the rest of the `--assert` vocabulary (`docs/cli.md`, "--assert"). It is
the durable form of an `--assert @file`, in a format scripts can query.

It replaces old unlace's `.unlace`/`.unldb` session file (`crates/unlace-session`, a JSON or
postcard+zstd blob). The kinds of state are the same: renames, comments, type overlays, bookmarks,
patches, variable type overrides, call overrides, and the like. The store is now a SQLite database:
- agents and scripts can read it with plain SQL;
- writes are transactional and safe to run concurrently;
- the whole state is one file.

The code is in `crates/unlace-project` (the store) and `crates/unlace-cli/src/project.rs` (the CLI).

## The file

`<binary>.unlace` by default, beside the binary. It is an ordinary SQLite 3 database:

- `PRAGMA application_id` is `0x554e4c43` ("UNLC"), which marks the file as a project.
- `PRAGMA user_version` is the schema version (1).
- `schema_migrations(version, applied_at)` records each migration.

Opening a file runs any pending migrations, in order, inside one `BEGIN IMMEDIATE` transaction. A file
whose version is newer than the running unlace is refused rather than half-read.

### Binary identity

`binary(id = 1, sha256, path, size)` holds the binary's identity. The SHA-256 of the file's bytes is the
identity; the path and size are only informational. `decompile --project` hashes the binary it was
given and refuses a project made for other bytes. For an `archive:member` or a dyld-cache image, the
hash is of the file on disk. To bind a project to one member, extract it and `init` the extracted file.

### Tables (schema v1)

`unlace project schema --json` prints every table and column with a one-line description; the
descriptions live in `crates/unlace-project/src/schema.rs` (`DESCRIPTION`), and a unit test keeps them
equal to the real columns.

Each table stores one kind of `--assert` directive, keyed so that a later `set` of the same key
replaces the earlier value.

| table | columns | key | directive it renders |
|---|---|---|---|
| `types` | `name`, `declaration` | the declared name (`struct point`, `point_t`) | `typedef <declaration>` |
| `functions` | `address`, `end_address`, `name` | `address` | `function <address>[-<end>][=<name>]` |
| `data` | `address`, `declaration` | `address` | `data <address> <declaration>` |
| `prototypes` | `function`, `declaration` | `function` (a name or address, as written) | `prototype <function> <declaration>` |
| `patches` | `address`, `bytes` (BLOB) | `address` | `bytes <address> <hex>` |
| `assertions` | `kind`, `target`, `directive` | `kind`, `target` | the stored directive (`param`, `return`, `flow`, `format`, `readonly`, `volatile`, `register`, `noreturn`) |
| `callsites` | `target`, `callee`, `prototype` | `target` (`[<func>::]<callsite>`) | `callee …`, `callproto …` |
| `locals` | `target`, `name`, `type`, `isolate` | `target` (`[<func>::]<symbol>`) | `isolate …`, `type …`, `name …` |
| `comments` | `target`, `text` | `target` (`[<func>::]<addr>`) | `comment <target> <text>` |
| `bookmarks` | `address`, `title`, `description` | `address` | none: a bookmark is for the reader, not the engine |

Addresses are SQLite integers holding the 64-bit address bit for bit. An address above `i64::MAX`,
such as a kernel address, reads as a negative number, so print one with `printf('0x%x', address)`. A
`set` of one column (`name`, `type`, a function's name or extent) keeps the row's other columns.

## How the decompiler uses it

`unlace decompile` and `unlace decompile-all` (and `functions`, `decompile-project` and
`decompile-graph`, which share that parser) take `--project FILE`. The project's rows are rendered
back into `--assert` directives in the table order above:
1. types first, so later directives can name them;
2. function entries before anything keyed by a function name;
3. a local's `type` before its `name`, so the retype still reaches the original symbol.

These directives go into the run ahead of the command line's own `--assert` flags. A directive given
on the command line for the same thing is applied later, so it wins. The engine path is the one
`--assert @file` takes: each project directive is reported in the run's `assertions` array, and
`--assert-strict` makes a rejected one fatal. `--jobs N` with a project that holds directives is
refused, for the same reason it is refused with `--assert`.

`unlace project set` checks every directive against the engine's grammar before storing it, so a
stored directive always parses. Whether the engine *applies* it is still decided per run, as for
`--assert`. A `bytes <addr> @FILE` is read when it is set and stored as bytes.

## Reading it

`unlace project query FILE "<SELECT ...>"` runs any statement SQLite reports as read-only and
refuses any other before it runs; the connection is also `query_only` while the query runs. Rows come
back as objects keyed by column name: one document with `--json`, one object per line with `--jsonl`
(also on `get` and `list`), which streams into `jq` or a line-oriented agent.

## Concurrent writers

The database runs in WAL mode with a 5-second busy timeout, and every write (one `set`, `unset` or
`import`) is a single `BEGIN IMMEDIATE` transaction. Writers take turns. A writer that waits longer
than the timeout fails with "database is locked" and changes nothing. Readers, including a
`decompile --project` that is running, see a consistent snapshot and never block a writer. Two writers
setting the same key: the later commit wins. A `set` of several directives is all or nothing.

## From an IDA database

`unlace idb import <db.i64|db.idb> [--project FILE | --binary BIN]` fills a project from an IDA
database: its local types, functions (entries, extents, names), prototypes and comments, as the
`typedef`, `function`, `prototype` and `comment` rows above. The database records the hash of the
file IDA loaded; importing into a project bound to other bytes is refused unless `--force`. See
`docs/cli.md`, "unlace idb".

## Review in git

`unlace project export FILE` writes the whole state as canonical JSON. Every list is sorted by its key,
addresses are `0x` hex strings, patches are hex, and the output ends with a newline, so the same state
always gives the same bytes and a diff shows only what changed. `unlace project import FILE JSON`
writes it back in one transaction. Rows merge, and the imported value wins per key; with `--replace`,
the tables are emptied first. An export made from another binary is refused.
