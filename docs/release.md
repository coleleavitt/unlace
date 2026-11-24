# Versioning & binary releases

How unlace versions itself and how the binary release CI
(`.github/workflows/release.yml`) turns a batch of work on `main` into a tagged
GitHub Release.

## The version scheme: MAJOR.MINOR

unlace versions are **two components only** — `MAJOR.MINOR` (e.g. `0.14`,
`1.3`). There is no patch component.

| Component | Where it lives | Who/what changes it |
|---|---|---|
| **MAJOR** | The top-level `VERSION` file (a single integer). | A maintainer, by editing the file in a PR. `.github/CODEOWNERS` routes any `VERSION` change to maintainer review (enforced once branch protection on `main` requires code-owner review). |
| **MINOR** | Not stored — **derived** from the release tags: a commit tagged `vMAJOR.N` is `MAJOR.N`; any other commit is one past the highest `vMAJOR.*` tag. | Each release, automatically. No bot commits, no push-backs: the release's own tag *is* the bump. |

Consequences worth knowing:

- **Each release bumps the minor by exactly 1**, however many commits it
  batches — a night that merged eight PRs still goes `v1.979` → `v1.980`.
  (Until 2026-10 the minor was the commit count since `VERSION` changed, which
  jumped it by a whole day's merges; `v1.978` is the last release cut that way,
  and the count continues from it.)
- The first release after a `VERSION` edit is `MAJOR.0` — bumping the major
  resets the minor.
- An untagged commit reports the version the *next* release would take, so
  between releases every commit on `main` shares one number; a dev build is
  identified by its commit hash, not its version.

Compute it locally:

```bash
bash scripts/version.sh
```

The script needs the release tags (the minor is read from them) and errors out
on shallow clones; in a clone without the tags it reports the wrong minor, so
`git fetch --tags` first.

## What `unlace --version` reports

Release CI exports `UNLACE_VERSION=<MAJOR.MINOR>` while building; `unlace-cli`
bakes it in via `option_env!` and `unlace --version` prints exactly that (Cargo's
own package version must stay three-part semver, so it is not used for
releases). Dev builds without the env var fall back to the workspace Cargo
version.

## The release workflow

### When it runs

**On demand only.** The workflow has one trigger, `workflow_dispatch`: start it
from the Actions tab or with `gh workflow run release.yml -R coleleavitt/unlace`.
It also re-runs a failed release. There is no schedule and no push trigger yet, so
a release is cut when a maintainer decides a batch of merges is ready; the release
checklist below says what to check first.

There is deliberately **no "has anything changed?" guard**, because the version
scheme already is one: a commit that already carries a release tag reports that
tag's version, so re-running the workflow on a released commit recomputes the same
`MAJOR.MINOR`, the `version` job finds that tag already published, and every
downstream job skips.

### The jobs

1. **version** — computes `MAJOR.MINOR` from a full checkout (history and
   tags) and skips the whole run if tag `vMAJOR.MINOR` already exists (the
   no-op guard above). A failed run creates no tag — the tag is the last thing
   published — so re-running it recomputes the same version.
2. **specs** — compiles every `.slaspec` → `.sla` once on Linux and packages
   the whole `specs/` tree as `unlace-v<ver>-specs.tar.gz`. `.sla` files are
   platform-independent, so one tree serves every OS: each **build** row
   embeds it, and it also ships as an asset (for `UNLACE_SPECS`, and as the
   nightly's speed baseline when the previous nightly left no build).
3. **build** (matrix, after **specs**) — lays the compiled tree over the
   checkout's `specs/`, then `cargo build --release` of `unlace-cli` (with
   `--features unlace-cli/embed-specs`) and `unlace-ghidra` for:
   - Linux `x86_64-unknown-linux-gnu` and `aarch64-unknown-linux-gnu` (native,
     on the `ubuntu-24.04-arm` runner)
   - Linux `x86_64-unknown-linux-musl` — a fully static build (no glibc
     dependency, runs on any Linux). unlace pulls in no C via a `cc`-crate
     dependency, so the musl target links self-contained; `rustup target add`
     is the only extra setup.
   - macOS `aarch64-apple-darwin` and `x86_64-apple-darwin` (the latter
     cross-compiled on the arm64 runner)
   - Windows `x86_64-pc-windows-msvc`
   Each archive (`unlace-v<ver>-<os-arch>.tar.gz`, `.zip` on Windows) contains
   `unlace`, `LICENSE`, `NOTICE` — `unlace` is self-contained: the decompiler
   console (`decomp_dbg`) and the SLEIGH compiler (`slacomp`) are built in
   as hidden subcommands, and `embed-specs` carries the compiled SLEIGH tree.
   Two smoke tests assert `unlace --version` prints the release version and
   that the binary, copied alone into an empty directory with no spec
   override, decompiles a fixture. (`decomp_test_dbg` is not shipped — the
   datatest harness only makes sense inside the repo.) The `unlace_ghidra`
   binaries are not in the archives: each row uploads its binary as a
   `ghidra-bin-<platform>` workflow artifact for the **ghidra-ext** job.
4. **ghidra-ext** — packages the ready-to-install UnlaceDecompiler Ghidra
   extension, `unlace-v<ver>-UnlaceDecompiler-ghidra_<ghidra-version>.zip`. It
   downloads the pinned Ghidra release (version *and* full asset URL are
   pinned in the workflow's `env`, since the asset filename embeds a build
   date; the zip is cached with `actions/cache` under a key derived from the
   asset filename, so bumping the URL always invalidates it), stages the five
   `ghidra-bin-*` binaries into the extension's `os/<platform>/` dirs
   (restoring the exec bits that artifact upload drops), and runs Ghidra's own
   `support/buildExtension.gradle` via the runner's preinstalled Gradle under
   Java 21. The job asserts with `zipinfo` that all five `os/` binaries are in
   the zip and the four unix ones carry mode 0755 — Ghidra's extension
   installer re-applies exactly those bits at install time. (Gradle 9
   normalizes archive entry modes for reproducibility, which would strip the
   exec bits; the extension's `build.gradle` pins 0755 on the `unlace_ghidra`
   entries explicitly, so the zip is correct under both Gradle 8 and 9.)
   The zip is fully self-contained (`unlace_ghidra` needs no `.sla` files —
   specs arrive over the wire), so it installs airgapped; it is version-locked
   to the pinned Ghidra release, other 12.x installs go through the
   installer's "Install Anyway" dialog. See
   `integrations/ghidra/UnlaceDecompiler/README.md` for the install steps.
5. **release** — `gh release create v<ver>` with all assets, tagging the built
   commit. This is what creates the git tag; no tags are pushed from anywhere
   else. (It downloads only `unlace-*` artifacts — the `ghidra-bin-*` binaries
   are inter-job plumbing, not assets.)

## Assets

Every release publishes these assets, named from the version (`<ver>` is
`MAJOR.MINOR`, e.g. `1.980`):

| Asset | Built by |
|---|---|
| `unlace-v<ver>-linux-x86_64.tar.gz` | `x86_64-unknown-linux-gnu` (build) |
| `unlace-v<ver>-linux-x86_64-musl.tar.gz` | `x86_64-unknown-linux-musl`, fully static (build) |
| `unlace-v<ver>-linux-arm64.tar.gz` | `aarch64-unknown-linux-gnu` (build) |
| `unlace-v<ver>-macos-arm64.tar.gz` | `aarch64-apple-darwin` (build) |
| `unlace-v<ver>-macos-x86_64.tar.gz` | `x86_64-apple-darwin` (build) |
| `unlace-v<ver>-windows-x86_64.zip` | `x86_64-pc-windows-msvc` (build) |
| `unlace-v<ver>-specs.tar.gz` | the compiled SLEIGH tree (specs) |
| `unlace-v<ver>-UnlaceDecompiler-ghidra_<ghidra-version>.zip` | the Ghidra extension (ghidra-ext) |
| `SHA256SUMS` | SHA-256 of every asset above (release job) |
| `SHA256SUMS.sig`, `SHA256SUMS.cert` | keyless cosign signature over `SHA256SUMS` and its Sigstore certificate (release job) |

Each archive unpacks to a directory of the same name holding `unlace` (or
`unlace.exe`), `LICENSE` and `NOTICE`. The `unlace_ghidra` binaries are
not assets; they only go into the Ghidra extension zip.

## Using a released binary

`unlace` is the only file a release needs. It runs its own decompiler console
and SLEIGH compiler, and carries the compiled SLEIGH tree, which it unpacks
once — on first use, under a name derived from the tree's contents — into the
per-user cache directory (`%LOCALAPPDATA%\unlace` on Windows,
`~/Library/Caches/unlace` on macOS, `$XDG_CACHE_HOME/unlace` or `~/.cache/unlace`
elsewhere, and the system temp directory when none of those is writable):

```bash
tar xzf unlace-v<ver>-linux-x86_64.tar.gz
./unlace-v<ver>-linux-x86_64/unlace decompile ./a.out main
```

`UNLACE_SPECS` still overrides the built-in tree (for example with the
`unlace-v<ver>-specs.tar.gz` asset, or a tree of your own); the full list of
overrides is in `docs/cli.md`. A release whose specs did not change reuses
the tree already unpacked. Old trees are never removed automatically; deleting
the cache directory is always safe, and the next run unpacks again.

(Inside a repo checkout none of this applies — a plain `cargo build` carries no
specs, and they are found from the repo root, each `.sla` compiled into the `.sla` cache on
first use. `cargo build --release -p unlace-cli --features embed-specs` builds the
self-contained binary locally; its build script compiles every language through the same cache.)

The `unlace-v<ver>-UnlaceDecompiler-ghidra_<ghidra-version>.zip` asset is not an
archive to extract — install it from inside Ghidra (**File → Install
Extensions… → `+`**); see `integrations/ghidra/UnlaceDecompiler/README.md`.

## Release checklist

Run these in order. The release job does not run the test suite, so the gates are
the maintainer's job before dispatch.

### Before dispatch

1. **Versioning.** Read the MAJOR: `cat VERSION`. The MINOR is never edited; it is
   derived from the tags. To change the MAJOR, land a PR that edits `VERSION`
   (CODEOWNERS routes it to the code owner's review); the next release
   is then `MAJOR.0`. Compute the number the run will publish from a full clone:
   `git fetch --tags && bash scripts/version.sh`. Confirm the tag is free:
   `git ls-remote --tags origin "refs/tags/v<ver>"` prints nothing. If it prints a
   line, the run skips (a re-run of a released commit).
2. **Changelog.** There is no CHANGELOG file. The GitHub release notes are generated
   by `gh release create --generate-notes` from the merged PR titles since the
   previous tag, followed by the fixed notes in the workflow. List what will ship:
   `git log --oneline v<previous>..origin/main`. If a title would mislead a user,
   fix the release notes after publishing (`gh release edit`) rather than rewording
   history.
3. **Gates on `origin/main`.** Check the last CI run is green:
   `gh run list -R coleleavitt/unlace --workflow tests.yml --branch main --limit 3`.
   Then run the gates from [`docs/dev-setup.md` § Gates](dev-setup.md#gates) on a
   clean checkout of `main`: the fmt check, the parity target, `check_spec`, the
   Python unittests, the `tests/cli` probes, `catalog --check`, the determinism run,
   clippy on `unlace-cli`, `unlace-base` and `unlace-num`, and the workspace
   nextest suite. The gate list there is the one owner; this step only names it.
4. **Ghidra pin.** If `GHIDRA_VERSION` or `GHIDRA_ZIP_URL` changes in
   `release.yml`, change both together, check the URL downloads, and update the
   version-lock sentence in `integrations/ghidra/UnlaceDecompiler/README.md`.

### Dispatch

5. Start the run: `gh workflow run release.yml -R coleleavitt/unlace` (or the
   Actions tab). Watch it with `gh run watch -R coleleavitt/unlace`.

### After publish

6. **A failed run creates no tag**, so nothing is half-published. Fix the cause and
   re-run the failed jobs (`gh run rerun <run-id> -R coleleavitt/unlace --failed`);
   the version is recomputed the same way.
7. **Assets.** `gh release view v<ver> -R coleleavitt/unlace --json assets -q '.assets[].name'`
   must list the eleven assets in [Assets](#assets).
8. **Smoke.** Extract `unlace-v<ver>-linux-x86_64.tar.gz` and run
   `unlace --version`; it must print `unlace <ver>`. The Ghidra zip is checked
   for structure by CI only, so install it into a Ghidra install once when a
   release changes the extension.

### Withdrawing a release

A published release is public and may already be cached or downloaded. Deleting
one (`gh release delete v<ver> --cleanup-tag -R coleleavitt/unlace`) needs the
owner's confirmation first; prefer publishing a fixed release.

## Verifying a download

Every release signs `SHA256SUMS` with cosign, keyless (Sigstore). The signing
identity is the release workflow run, so no key has to be trusted in advance.
Download an asset and the three checksum files, then:

```bash
cosign verify-blob \
  --certificate SHA256SUMS.cert \
  --signature SHA256SUMS.sig \
  --certificate-identity="https://github.com/coleleavitt/unlace/.github/workflows/release.yml@refs/heads/main" \
  --certificate-oidc-issuer="https://token.actions.githubusercontent.com" \
  SHA256SUMS
sha256sum -c SHA256SUMS --ignore-missing
```

The identity ends in the ref the workflow was dispatched from; it is
`refs/heads/main` for a release cut from `main`. A verify that names another
ref fails on purpose. `--ignore-missing` skips the checksums of assets you did not
download. The release job signs the sums after all builds have passed, and a
failed run creates no tag (see [After publish](#after-publish)).
