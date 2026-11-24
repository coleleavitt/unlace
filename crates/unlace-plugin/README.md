# unlace-plugin: Plugin SDK

`unlace-plugin` is the trait boundary for out-of-tree analyses. A plugin implements
`UnlacePlugin`, returns `PluginFinding`s from the event hooks, and is run by a
`PluginRegistry`. This is the trait model and finding type only. There is no native
shared-library loader and no wasm sandbox.

## The trait

```rust
pub trait UnlacePlugin: Send + Sync {
    fn name(&self) -> &str;
    fn version(&self) -> &str;
    fn option(&self) -> &str;                                              // gating option
    fn on_function(&self, func: &Funcdata) -> Vec<PluginFinding> { vec![] } // default: none
    fn on_binary(&self, image: &dyn LoadImage) -> Vec<PluginFinding> { vec![] }
}
```

- `option` names the `phases.toml` row that gates the plugin. The registry runs a plugin
  only when the caller passes that name in `enabled`. A plugin cannot add a catalog row at
  runtime, so the option catalog stays static; a plugin whose option is not in `phases.toml`
  is never run.
- Hooks take shared references and must be deterministic.

## Running plugins

```rust
let mut registry = PluginRegistry::new();
registry.register(Box::new(MyPlugin));
let findings = registry.run_all_on_function(&funcdata, &["my-option"]);
```

Findings are concatenated in registration order. Plugins whose option is not enabled
contribute nothing.

## Doc example

A minimal plugin that reports each function it sees:

```rust
use unlace_middle::funcdata::Funcdata;
use unlace_plugin::{PluginFinding, UnlacePlugin};

struct Hello;

impl UnlacePlugin for Hello {
    fn name(&self) -> &str { "hello" }
    fn version(&self) -> &str { "0.1.0" }
    fn option(&self) -> &str { "hello" }
    fn on_function(&self, func: &Funcdata) -> Vec<PluginFinding> {
        vec![PluginFinding {
            kind: "hello".into(),
            message: format!("saw {}", func.get_name()),
            addr: None,
        }]
    }
}
```
