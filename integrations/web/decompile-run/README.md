# decompile.run

The published files for **[decompile.run](https://decompile.run)**, the in-browser
decompiler from [Unlace](https://github.com/coleleavitt/unlace). The decompiler runs as
WebAssembly entirely in the visitor's browser; nothing they open is uploaded.

**Do not edit this repository or open pull requests here.** Every file is generated, and
each deploy replaces the whole branch with a single new commit.

## How it relates to Unlace

- The source lives in [coleleavitt/unlace](https://github.com/coleleavitt/unlace), under
  `integrations/web/` (the page) and `decompiler/` (the engine, built to `wasm32-wasip1`).
  This README itself is `integrations/web/decompile-run/README.md` there.
- On every push to Unlace's `main` that touches the site, the engine, or the processor specs,
  Unlace's `.github/workflows/pages.yml` builds the site, splits it with
  `integrations/web/split-sites.sh`, and force-pushes the decompiler half here with a
  deploy key. Each commit message names the Unlace commit it was built from.
- GitHub Pages serves this branch at `decompile.run`. The other half, Unlace's landing page,
  stays at [coleleavitt.github.io/unlace](https://coleleavitt.github.io/unlace), whose `/decompile/` forwards here.

To change the site, change Unlace. Bugs go to
[Unlace's issues](https://github.com/coleleavitt/unlace/issues).

## Contents

| Path | What |
|---|---|
| `index.html`, `decompile/` | The page and its modules |
| `unlace_wasm.wasm` | The decompiler engine |
| `unlace-web.js`, `unlace-worker*.js`, `zip.js`, `sha256.js`, `vendor/` | The Worker that runs the engine, and its helpers and WASI runtime |
| `specs/`, `specs-small.json` | Processor specifications, fetched as each program needs them |
| `assets/` | Fonts, styles, and the code highlighter |
