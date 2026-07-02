#!/usr/bin/env bash
# Stop hook: run `clippy -D warnings` on the crates touched this session so
# warnings are caught before the CI clippy gate. Scoped to changed crates to
# stay cheap; no-ops when nothing under crates/ changed. Loop-guarded via
# stop_hook_active so a block does not re-trigger itself indefinitely.
#
# Disable by removing the Stop hook from .claude/settings.json if it is too slow.
set -uo pipefail

input=$(cat)

# Avoid infinite loops: if we already blocked once for this stop, let it through.
if [ "$(printf '%s' "$input" | jq -r '.stop_hook_active // false')" = "true" ]; then
  exit 0
fi

cd "${CLAUDE_PROJECT_DIR:-.}" || exit 0

# Crates with changed / staged / untracked .rs files under crates/<name>/.
# The [^.] guard skips dotted dirs like crates/.codegraph that are not packages.
mapfile -t crates < <(
  {
    git diff --name-only
    git diff --cached --name-only
    git ls-files --others --exclude-standard
  } 2>/dev/null \
    | grep -E '^crates/[^.][^/]*/.*\.rs$' \
    | sed -E 's#^crates/([^/]+)/.*#\1#' \
    | sort -u
)

[ "${#crates[@]}" -eq 0 ] && exit 0

mapfile -t workspace_packages < <(cargo metadata --no-deps --format-version 1 2>/dev/null \
  | jq -r '.packages[].name' 2>/dev/null \
  | sort -u)

declare -A package_exists
for pkg in "${workspace_packages[@]}"; do
  package_exists[$pkg]=1
done

declare -A logs
failed=""
for pkg in "${crates[@]}"; do
  if [ "${#workspace_packages[@]}" -gt 0 ] && [ -z "${package_exists[$pkg]+x}" ]; then
    continue
  fi
  log="$(mktemp)"
  # shellcheck disable=SC1007  # RUSTC_WRAPPER= intentionally empties sccache for this command
  if ! RUSTC_WRAPPER= cargo clippy -p "$pkg" --quiet -- -D warnings >"$log" 2>&1; then
    failed="$failed $pkg"
    logs[$pkg]="$log"
  else
    rm -f "$log"
  fi
done

if [ -n "$failed" ]; then
  echo "clippy -D warnings failed for touched crate(s):$failed" >&2
  for pkg in $failed; do
    echo "--- $pkg ---" >&2
    grep -E 'warning:|error(\[|:)' "${logs[$pkg]}" | head -8 >&2
    rm -f "${logs[$pkg]}"
  done
  echo "Fix the above before stopping (CI runs: cargo clippy --workspace -- -D warnings)." >&2
  exit 2
fi

exit 0
