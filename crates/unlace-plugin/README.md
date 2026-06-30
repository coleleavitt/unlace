# unlace-plugin — Plugin SDK

`unlace-plugin` is the SDK boundary for out-of-tree analyses. A plugin
implements the [`UnlacePlugin`] trait, returns [`PluginFinding`]s from
the host event hooks, and is aggregated by a [`PluginRegistry`]. Trusted
shared libraries can also be loaded at runtime via [`PluginManager`].

See [`examples/hello_plugin.rs`](examples/hello_plugin.rs) for a complete,
compiling worked example (`cargo run -p unlace-plugin --example hello_plugin`).

## The `UnlacePlugin` trait

```rust
pub trait UnlacePlugin: Send + Sync {
    fn name(&self) -> &str;
    fn version(&self) -> &str;
    fn on_function(&self, _func: &SsaFunction) -> Vec<PluginFinding> { vec![] }
    fn on_binary(&self, _image: &BinaryImage) -> Vec<PluginFinding> { vec![] }
}
```

| Method        | Required | Called                          | Receives          | Returns                |
| ------------- | -------- | ------------------------------- | ----------------- | ---------------------- |
| `name`        | yes      | for logging / CLI flags         | `&self`           | `&str` identifier      |
| `version`     | yes      | for diagnostics                 | `&self`           | `&str` SemVer string   |
| `on_function` | no       | once per recovered SSA function | `&SsaFunction`    | `Vec<PluginFinding>`   |
| `on_binary`   | no       | once with the loaded image      | `&BinaryImage`    | `Vec<PluginFinding>`   |

Key contracts:

- The trait is **object-safe** — the registry stores plugins as
  `Box<dyn UnlacePlugin>`.
- Plugins must be `Send + Sync`.
- The event hooks have **empty default implementations**, so you only
  override the hooks you care about (implement just `name` + `version`
  for a no-op plugin).
- Hooks take **`&SsaFunction` / `&BinaryImage` by shared reference** —
  a plugin cannot mutate host state, and the host expects deterministic
  output (same input → same findings).

## The `PluginFinding` shape

Each finding is one observation the plugin wants surfaced. The host
UI / CLI renders them:

```rust
pub struct PluginFinding {
    pub kind: String,       // short tag, e.g. "crypto", "hardening"
    pub message: String,    // human-readable explanation
    pub addr: Option<u64>,  // optional virtual address anchor
}
```

`PluginFinding` derives `Debug, Clone, PartialEq, Eq`.

## Implementing a plugin

```rust
use unlace_ir::ssa::SsaFunction;
use unlace_plugin::{PluginFinding, UnlacePlugin};

struct HelloPlugin;

impl UnlacePlugin for HelloPlugin {
    fn name(&self) -> &str { "hello" }
    fn version(&self) -> &str { "0.1.0" }

    fn on_function(&self, func: &SsaFunction) -> Vec<PluginFinding> {
        vec![PluginFinding {
            kind: "hello".into(),
            message: format!("saw {}", func.function.name),
            addr: Some(func.function.addr),
        }]
    }
}
```

## Registration and dispatch

Register plugins in a `PluginRegistry` and dispatch host events to all
of them. Findings are concatenated in **registration order** — adding or
removing a plugin changes only which findings appear, never the relative
order of the survivors.

```rust
use unlace_plugin::PluginRegistry;

let mut registry = PluginRegistry::new();
registry.register(Box::new(HelloPlugin));

// Dispatch a host event across every registered plugin:
let findings = registry.run_all_on_function(&ssa_func);
// let findings = registry.run_all_on_binary(&image);
```

`PluginRegistry` also exposes `len()`, `is_empty()`, and `plugins()` for
diagnostics.

> Note: there are two `PluginRegistry` types in this crate. The
> top-level `unlace_plugin::PluginRegistry` (above) owns live
> `Box<dyn UnlacePlugin>` instances and dispatches events. The separate
> `unlace_plugin::registry::PluginRegistry` is a *manifest* registry that
> tracks plugin names, `SemVer`s, and dependency resolution — it does not
> hold trait objects.

## Dynamic loading

Trusted shared libraries can be loaded at runtime with `PluginManager`.
Each library must export a C entry point named `PLUGIN_ENTRY`
(`unlace_plugin_create`) that returns a `*mut dyn UnlacePlugin` produced
by `Box::into_raw`:

```rust
use unlace_plugin::PluginManager;

let mut manager = PluginManager::new();
// manager.load_library(path)?;          // load one .so / .dylib / .dll
// manager.load_from_dir(dir)?;          // scan a directory
let findings = manager.run_all_on_function(&ssa_func);
```

Loading a shared library executes arbitrary code, so only load libraries
you trust. Sample in-tree plugins live in
[`src/samples.rs`](src/samples.rs) (entropy analyzer, string-xref,
function-size).
