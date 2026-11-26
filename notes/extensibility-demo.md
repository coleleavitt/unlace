# unlace extensibility: a ten-minute demo (2026-11-26)

These are the features that answer three requests: custom printers, custom passes, and mapping the
output back to the binary. Each section is one command with its real output, from `main`. The plan,
and what came out differently, are in [`extensibility-plan.md`](extensibility-plan.md).

Build once from the repo root:

```sh
cargo build -p unlace-cli -p unlace --examples
export PATH=$PWD/target/debug:$PATH   # the `unlace` binary; examples are in target/debug/examples
```

Every library API used below is in `unlace::unstable`, which has no stability promise yet.

## 1. Custom printers

### A different printer over the syntax tree: `let_flavour`

`crates/unlace/examples/let_flavour.rs` implements the `Printer` trait. It overrides only the
prototype, the declarations and casts; everything else falls back to the C defaults.

```sh
target/debug/examples/let_flavour /usr/bin/true main
```

The example prints the function in C first and then in its own flavour. This is the second half:

```text
fn main(argc: int, argv: char **, envp: char **) -> int
{
  let mut s1: char *; // rdi | stack - 0x10
  
  if (argc != 2)
    return 0;
  sub_32f0(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  sub_6f50(sub_3220);
  s1 = argv[1];
  if (!strcmp(s1,"--help"))
    sub_2ee0(0); // no-return
  if (!strcmp(s1,"--version"))
    sub_6000(stdout,"true","GNU coreutils",dat_a018,sub_3370("Jim Meyering","Jim Meyering"),0);
  return 0;
}
```

### The tree as data: `--ctree`

`decompile --json --ctree` adds the syntax tree that the printer used. Each node has a kind, its
children, its C type, its span in `code` (`line`/`col` to `end_line`/`end_col`), and the
instruction addresses it came from. Addresses are decimal: 10724 is `0x29e4`. Here is the
`if (argc != 2) return 0;` of the function above:

```sh
unlace decompile /usr/bin/true main --json --ctree
```

```json
{
 "kind": "if",
 "line": 5,
 "col": 2,
 "end_line": 6,
 "end_col": 13,
 "addresses": [
  10724,
  10731
 ],
 "children": [
  {
   "kind": "op",
   "op": "ne",
   "form": "binary",
   "text": "!=",
   "spacing": 1,
   "type": "bool",
   "line": 5,
   "col": 6,
   "end_line": 5,
   "end_col": 15,
   "addresses": [
    10724
   ],
   "children": [
    {
     "kind": "var",
     "text": "argc",
     "type": "int",
     "line": 5,
     "col": 6,
     "end_line": 5,
     "end_col": 10,
     "addresses": [
      10724
     ]
    },
    {
     "kind": "const",
     "text": "2",
     "type": "int",
     "line": 5,
     "col": 14,
     "end_line": 5,
     "end_col": 15,
     "addresses": [
      10724
     ]
    }
   ]
  },
  {
   "kind": "return",
   "line": 6,
   "col": 4,
   "end_line": 6,
   "end_col": 13,
   "addresses": [
    10731
   ],
   "children": [
    {
     "kind": "const",
     "text": "0",
     "type": "int",
     "line": 6,
     "col": 11,
     "end_line": 6,
     "end_col": 12,
     "addresses": [
      10731
     ]
    }
   ]
  }
 ]
}
```

Constants carry the type the printer read them with, so the `2` above is an `int`. Rust, Go
and Java output have trees too: `--language rust --ctree` gives a tree whose first node is the
`#[allow(...)]` attribute line, followed by the `fn` prototype.

Printing the tree back gives `code` byte for byte. That was checked on 38,332 functions in 1,482
fixture binaries; `crates/unlace/examples/ctree_roundtrip.rs` is the checker.

### Data-only flavours: `--language-file`

A TOML file renames keywords and operators of a base language. It needs no Rust code.

```toml
base = "c"

[keywords]
return = "yield"

[operators]
boolean_and = "and"
boolean_or = "or"
boolean_not = "not "
```

```sh
unlace decompile /usr/bin/true main --language-file flavour.toml
```

```text
int main(int argc,char **argv,char **envp)
{
  char *s1; // rdi | stack - 0x10
  
  if (argc != 2)
    yield 0;
  sub_32f0(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  sub_6f50(sub_3220);
  s1 = argv[1];
  if (not strcmp(s1,"--help"))
    sub_2ee0(0); // no-return
  if (not strcmp(s1,"--version"))
    sub_6000(stdout,"true","GNU coreutils",dat_a018,sub_3370("Jim Meyering","Jim Meyering"),0);
  yield 0;
}
```

With `--json`, the document says which flavour printed it:

```json
{"language": "c-language", "language_flavour": "demo_flavour"}
```

The flavour's name comes from the `name` key of the file, or from the file name when there is
no `name` key.

## 2. Custom passes

### A p-code rule in Rust: `custom_pass`

`crates/unlace/examples/custom_pass.rs` adds a rule that folds `(a | b) + (a & b)` into `a + b`
(no built-in rule knows this identity). It also adds two phase callbacks that report what they
see.

```sh
target/debug/examples/custom_pass
```

```text
// default pipeline
int mix(int a,int b)
{
  return (a | b) + (a & b);
}

P2 mix: 35 ops lifted
P8 mix: 3 ops left
// with the orandsum rule
int mix(int a,int b)
{
  return a + b;
}
```

### The same rule as a TOML file: `--rules`

```toml
[[rule]]
name = "orandsum"
group = "analysis"
match = "INT_ADD(INT_OR(x, y), INT_AND(x, y))"
replace = "INT_ADD(x, y)"
```

The input is the same nine bytes, as a raw image (`mov eax,edi; or eax,esi; and edi,esi; add
eax,edi; ret`), decompiled without and then with the rule file:

```sh
unlace decompile mix.bin 0x100000 --raw-image --target x86:LE:64:default:gcc --base 0x100000
unlace decompile mix.bin 0x100000 --raw-image --target x86:LE:64:default:gcc --base 0x100000 \
    --rules tests/stages/fixtures/rewriterules/orandsum.toml
```

```text
int sub_100000(unsigned int a0,unsigned int a1)
{
  return (a0 | a1) + (a0 & a1);
}

int sub_100000(int a0,int a1)
{
  return a0 + a1;
}
```

The parameter types change too. Without the OR and the AND, nothing marks the inputs as unsigned
any more.

Each rule file is checked when it loads, and a bad rule is reported with its file, line and name:

```sh
unlace decompile /usr/bin/true main --rules tests/stages/fixtures/rewriterules/refused.toml
```

```text
error: tests/stages/fixtures/rewriterules/refused.toml:8: rule "narrower": replace: the replacement is not as wide as the matched op's output: it is 1 byte, the output is 2 bytes
exit status 2
```

### Rewriting the syntax tree: `tree_hook`

`crates/unlace/examples/tree_hook.rs` registers a tree callback that drops the calls to one
callee before the function prints. Here the callee is `setlocale`:

```sh
target/debug/examples/tree_hook /usr/bin/true main setlocale
```

```text
int main(int argc,char **argv,char **envp)
{
  char *s1; // rdi | stack - 0x10
  
  if (argc != 2)
    return 0;
  sub_32f0(*argv);
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  sub_6f50(sub_3220);
  s1 = argv[1];
  if (!strcmp(s1,"--help"))
    sub_2ee0(0); // no-return
  if (!strcmp(s1,"--version"))
    sub_6000(stdout,"true","GNU coreutils",dat_a018,sub_3370("Jim Meyering","Jim Meyering"),0);
  return 0;
}
```

## 3. From the output back to the binary

### `unlace map`

From an output line (or a `--span L1:C1-L2:C2`) to the instructions it came from:

```sh
unlace map /usr/bin/true main --line 7
```

```text
0x29f0
0x29f8
```

From an address to the output spans it produced and the variables live there:

```sh
unlace map /usr/bin/true main --addr 0x29f0
```

```text
span 7:11-7:16	*argv
var argv	char **	rsi(8)
```

### Where each variable lives: `--storage`

`decompile --json --storage` lists the storage pieces of each variable, with the address ranges in
which each piece holds it. The variable `s1` above is in `rdi` over two ranges, and in the stack
slot at `-0x10` over one:

```json
{
 "name": "s1",
 "type": "char *",
 "kind": "register",
 "arg_index": null,
 "stack_offset": null,
 "size": 8,
 "line_numbers": [
  12,
  13,
  15
 ],
 "addresses": [
  10821,
  10830,
  10835,
  10851,
  10856
 ],
 "storage": [
  {
   "space": "register",
   "register": "rdi",
   "offset": 56,
   "size": 8,
   "ranges": [
    {
     "start": 10825,
     "end": 10835
    },
    {
     "start": 10842,
     "end": 10856
    }
   ]
  },
  {
   "space": "stack",
   "register": null,
   "offset": -16,
   "size": 8,
   "ranges": [
    {
     "start": 10830,
     "end": 10856
    }
   ]
  }
 ]
}
```

For C, C++ and Rust, this agrees with the DWARF location info for 94–97% of bytes
(`tools/storage_dwarf.py`).

### Every token: `--tokens`

`decompile --json --tokens` gives each output token its position, kind, type, and the variable,
op or address it stands for. This is the same token map the web study view uses.

```json
[
 {
  "line": 1,
  "col": 0,
  "len": 3,
  "kind": "type",
  "color": "type",
  "text": "int",
  "decl": "return",
  "type": "int"
 },
 {
  "line": 1,
  "col": 4,
  "len": 4,
  "kind": "funcname",
  "color": "funcname",
  "text": "main",
  "decl": "function"
 },
 {
  "line": 1,
  "col": 8,
  "len": 1,
  "kind": "syntax",
  "color": "none",
  "text": "("
 },
 {
  "line": 1,
  "col": 9,
  "len": 3,
  "kind": "type",
  "color": "type",
  "text": "int",
  "decl": "param",
  "type": "int"
 },
 {
  "line": 1,
  "col": 13,
  "len": 4,
  "kind": "variable",
  "color": "var",
  "text": "argc",
  "var": 0,
  "decl": "param"
 }
]
```
