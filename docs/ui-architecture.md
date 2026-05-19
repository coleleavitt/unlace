# UI Architecture

unlace has two interactive surfaces, both built on the same shared
state crate (`unlace-session`):

- **`unlace tui`** — terminal UI via ratatui + crossterm. Lives in
  `crates/unlace-tui/`. Works over SSH; no GPU required.
- **`unlace gui`** — desktop GUI via iced + iced_aw + iced-code-editor.
  Lives in `crates/unlace-gui/`. Cross-platform native window.

## Shared backbone: `Session`

The `unlace-session` crate owns:

- The loaded `BinaryImage`
- User annotations: renames, comments, types, bookmarks, patches
- Current selection (function + address)
- `SessionEvent` stream for change notifications

Both UI crates are clients of this struct. The TUI mutates via
direct method calls; the GUI dispatches `GuiMessage` enums whose
`update(state, msg)` handlers mutate.

```
                   ┌──────────────────────────┐
                   │  unlace-session::Session  │
                   │  Arc<RwLock<...>>         │
                   └────────────┬─────────────┘
                                │
              ┌─────────────────┼─────────────────┐
              ▼                 ▼                 ▼
       ┌────────────┐    ┌────────────┐    ┌────────────┐
       │ unlace-tui │    │ unlace-gui │    │ unlace-cli │
       │  ratatui   │    │   iced     │    │  clap      │
       └────────────┘    └────────────┘    └────────────┘
```

## TUI layout

```
┌──── unlace tui ─ binary: hello_world.elf ────────────────┐
│ ┌──── Functions ─────┐ ┌──── Disassembly ─────────────┐ │
│ │ main         401000│ │ 401000: push rbp             │ │
│ │ puts         401040│ │ 401001: mov  rbp, rsp        │ │
│ │ printf       401060│ │ 401004: ...                  │ │
│ │ ...                │ ├──── Pseudocode ──────────────┤ │
│ │                    │ │ int main(void) {             │ │
│ │                    │ │   puts("Hello");             │ │
│ │                    │ │   return 0;                  │ │
│ │                    │ │ }                            │ │
│ └────────────────────┘ └──────────────────────────────┘ │
│ Status: 401000  Press : for palette, q to quit          │
└──────────────────────────────────────────────────────────┘
```

### Keybindings

| Key       | Closed pane          | Palette open      |
|-----------|---------------------|-------------------|
| `q`       | Quit                | append 'q'        |
| `Tab`     | Focus next pane     | append            |
| `:` / `;` | Open palette        | append            |
| `Esc`     | Ignored             | Close palette     |
| `Enter`   | Ignored             | Submit            |
| `Backspace`| —                  | Backspace input   |

Palette syntax:

| Command                  | Effect                       |
|--------------------------|------------------------------|
| `goto 0x401000`          | Jump to address              |
| `g 401000`               | Same (short form)            |
| `rename 0x401000 main`   | Rename symbol                |
| `n 401000 main`          | Same (short form)            |
| `q` / `quit`             | Quit                         |

## GUI layout

```
┌────── File ─ Edit ─ View ─ Plugins ─ Help ──────────────────────┐
│ ┌─ Functions ─┐ ┌── Disassembly ─ Pseudocode ─ Hex ─────┐ ┌─Xrefs┐│
│ │ main        │ │                                       │ │ ...  ││
│ │ puts        │ │  (current tab content)                │ │      ││
│ │ printf      │ │                                       │ │      ││
│ │ Strings     │ │                                       │ │      ││
│ │ Imports     │ │                                       │ │      ││
│ │ Bookmarks   │ │                                       │ │      ││
│ └─────────────┘ └───────────────────────────────────────┘ └──────┘│
│ ┌──── Output log ─────────────────────────────────────────────┐  │
│ │ [info] Loaded hello_world.elf (5 functions)                 │  │
│ └─────────────────────────────────────────────────────────────┘  │
└──────────────────────────────────────────────────────────────────┘
```

## Why iced over egui/tauri/slint/dioxus/GPUI

See `plan.md` Batch 28 for the full decision matrix. Summary:

- **iced** wins on: ELM message model (fits RE workflow), production
  `iced-code-editor` widget, Halloy/Sniffnet/COSMIC as production
  references, no webview, no Node.
- **egui** rejected: immediate-mode redraw is wasteful for sparse
  user-action workflow. Code editor is less polished.
- **tauri** rejected: webview + Node.js + HTML/CSS. Webview RE tools
  are a known anti-pattern (Binary Ninja chose Qt for the same reason).
- **slint / dioxus / GPUI**: smaller communities, younger ecosystems.

## Reference clones

All in `research/iced-ecosystem/` (gitignored; 412MB):

| Repo | Use |
|------|-----|
| `iced/`, `iced_aw/` | Core + widgets |
| `iced-code-editor/` | Pseudocode pane reference |
| `halloy/` | Multi-pane layout reference |
| `sniffnet/` | High-row-count UI reference |
| `cosmic-files/` | Tree-view + table reference |
| `plotters-iced/` | CFG / call-graph charts |
| `iced_term/`, `frostbyte_terminal/` | Embedded terminal reference |

## Plugin hook points

Both UI crates expose `SessionEvent` listeners. Plugins (loaded via
`unlace-plugin`) subscribe to events of interest. Future hook points
(documented but not yet implemented):

- `BeforeRender` / `AfterRender` — let plugins overlay annotations
- `OnFunctionSelected` — trigger custom analysis on selection
- `OnPatch` — log to a patch journal
- `OnSave` — write extra data into the `.unldb` sections
