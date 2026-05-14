# Contributing to unlace

Thank you for your interest in contributing to unlace! This document
covers the process for submitting changes, coding standards, and project
governance.

## Quick Start

```bash
# Fork and clone
git clone https://github.com/<your-username>/unlace.git
cd unlace

# Build
cargo build --workspace

# Run tests
cargo test --workspace

# Run a single crate's tests
cargo test -p unlace-passes

# Format and lint
cargo fmt --all
cargo clippy --workspace -- -D warnings
```

## Development Workflow

1. **Pick a task**: Check the issue tracker or `docs/PARITY_PLAN.md` for
   open items. Comment on the issue to claim it.
2. **Branch**: Create a branch from `master` named `feat/tNNN-short-description`.
3. **Implement**: Write code + tests. Every new pass needs at least one
   snapshot test (`insta`).
4. **Test**: `cargo test --workspace` must pass.
5. **Push & PR**: Push your branch and open a pull request. Include the
   task ID (e.g., `t455`) in the PR title.

## Coding Standards

### Rust Style
- Edition 2024, stable toolchain only (no nightly features)
- `cargo fmt` with default settings (see `rustfmt.toml`)
- `cargo clippy` must be warning-free
- Maximum line width: 100 characters (soft limit)

### Documentation
- All public items must have doc comments
- Module-level docs explain the "why" (not just the "what")
- Use `//!` for module docs, `///` for item docs

### Testing
- Unit tests in `#[cfg(test)] mod tests` within each file
- Integration tests in `tests/`
- Snapshot tests (insta) for pass output validation
- Benchmark-sensitive code needs criterion benchmarks

### Commit Messages
- First line: `tNNN: short imperative description` (≤72 chars)
- Body: explain *why*, not just *what*
- Reference related tasks/issues

### Architecture Rules
- No `unsafe` without a `// SAFETY:` comment and approval
- No `unwrap()` in library code (use `?` or `expect("reason")`)
- New crates require workspace-level approval
- Cross-crate dependencies must be declared in workspace `Cargo.toml`

## Pull Request Checklist

- [ ] `cargo test --workspace` passes
- [ ] `cargo clippy --workspace` is clean
- [ ] `cargo fmt --all -- --check` passes
- [ ] New public API has doc comments
- [ ] Commit message includes task ID
- [ ] PR description explains the change and links to task

## Code Review

- All PRs need at least one approval
- CI must be green (tests + clippy + fmt)
- Reviewers look for: correctness, performance, readability, test coverage
- Large changes (>500 lines) should be discussed in an issue first

## Architecture Decision Records

Major design decisions are recorded in `docs/` as markdown files. If your
change introduces a new pattern or makes a significant architectural
choice, document it.

## Reporting Bugs

- Use GitHub Issues with the "bug" label
- Include: binary (or minimal reproducer), expected output, actual output
- If it's a crash, include the panic backtrace

## Security Issues

For security-sensitive bugs (crashes on attacker-controlled input, etc.),
email security@unlace.dev instead of filing a public issue.

---

# Governance

## Project Structure

unlace is maintained by a small core team with the following roles:

### Maintainers
- **Lead**: Final say on architecture, releases, and roadmap
- **Core**: Commit access, review authority, release management

### Contributors
- Anyone who has had a PR merged
- Listed in `AUTHORS` file

### Decision Making
- Technical decisions: consensus among core maintainers
- Tie-breaking: lead maintainer decides
- New maintainers: nominated by existing maintainers, requires unanimous approval

## Release Process

1. All tests pass on `master`
2. Version bump in workspace `Cargo.toml`
3. Changelog updated
4. Tagged release: `git tag -s v0.X.Y`
5. CI builds and publishes artifacts
6. Announce on project channels

## Code of Conduct

We follow the [Rust Code of Conduct](https://www.rust-lang.org/policies/code-of-conduct).
Be respectful, constructive, and collaborative.

## License

unlace is dual-licensed under MIT and Apache 2.0. Contributions are
accepted under the same terms (see the `LICENSE-MIT` and `LICENSE-APACHE`
files).
