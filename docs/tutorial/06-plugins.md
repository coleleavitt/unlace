# Chapter 6: Plugins

## The Plugin Architecture

Unlace's plugin system lets you extend the decompilation pipeline without
modifying the core codebase. Plugins can hook into three extension points:
**pre-passes** (run on the IR before the standard optimization pipeline),
**post-passes** (run after structuring but before emission), and **output
formatters** (replace or augment the C printer with custom output). The plugin
host supports three runtimes — Lua for quick scripts, Python for integration
with the scientific ecosystem, and WASM for sandboxed, portable, high-performance
extensions.

Plugins are discovered from `~/.config/unlace/plugins/` or a project-local
`.unlace/plugins/` directory. Each plugin is a directory containing a manifest
(`plugin.toml`) and the implementation file(s). The manifest declares the
plugin's name, version, extension point, and runtime:

```toml
[plugin]
name = "rename-globals"
version = "0.1.0"
runtime = "lua"          # or "python", "wasm"
hook = "post-pass"       # or "pre-pass", "formatter"
entry = "init.lua"
```

## Writing a Lua Plugin

Here's a minimal post-pass that renames all functions matching a pattern. Lua
plugins receive the IR as a table and return the modified version:

```lua
-- .unlace/plugins/rename-globals/init.lua
function run(ir)
    for _, func in ipairs(ir.functions) do
        if func.name:match("^sub_") then
            local addr = func.name:sub(5)
            -- Check if this looks like a known allocator pattern
            if func.calls_any({"malloc", "calloc", "realloc"}) then
                func.name = "alloc_wrapper_" .. addr
            end
        end
    end
    return ir
end
```

The Lua API exposes the full IR read/write interface, including access to the
CFG, type annotations, and cross-references. Performance-sensitive plugins
should prefer WASM — the Lua interpreter adds roughly 2ms overhead per function,
which compounds on large binaries with thousands of functions.

## Python and WASM Plugins

Python plugins use the same hook mechanism but receive the IR as a dictionary
via the `unlace` module. They're ideal for integration with machine learning
frameworks (e.g., using a trained model to suggest variable names) or scientific
visualization (matplotlib plots of control flow complexity). WASM plugins are
compiled from any language targeting `wasm32-wasi` and communicate via a
host-defined ABI that passes the IR as a FlatBuffer. They run in a sandboxed
environment with no filesystem or network access, making them safe to share and
execute from untrusted sources.

```python
# .unlace/plugins/ml-namer/init.py
import unlace

def run(ir: unlace.IR) -> unlace.IR:
    for func in ir.functions:
        if func.name.startswith("sub_"):
            predicted = model.predict(func.to_features())
            func.name = predicted if predicted.confidence > 0.8 else func.name
    return ir
```

→ Next: [Collaboration](./07-collaboration.md)
