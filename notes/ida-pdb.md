# PDB import in IDA 9.5, and what unlace needs beyond names (2026-11-24)

Deepens gap 3 of `notes/ida-gaps.md`. unlace's `pdb` pass locates a matching PDB (GUID/age gate, no
network; `analyzers/pdb/locate.rs`) and imports function names (`walk.rs`) and extents
(`pdbinterior.rs`). It reads no type stream: `git grep -i 'type_information\|TypeData' origin/main --
crates/unlace-analysis/src/analyzers/pdb` is empty, although the `pdb` crate it already uses (0.8.0)
parses the TPI stream (`PDB::type_information`, `TypeData::{Class, Union, Enumeration, Procedure,
MemberFunction, Pointer, Array, Bitfield, FieldList}`) and module symbols (`S_REGREL32`, `S_LOCAL` +
`S_DEFRANGE_*`, line programs).

Source: `~/SiteResearch/ida-pro/sqlite/plugins__pdb.sqlite` (1,432 functions) and `cfg/pdb.cfg`.

## 1. What IDA's pdb plugin does

| piece | how | evidence |
|---|---|---|
| Providers | Two back ends behind one symbol interface: MSDIA (Microsoft's DIA; on Linux/macOS only through a remote `win32_remote.exe`/`win64_remote64.exe`) and PDBIDA (Hex-Rays' own reader, MSF 7.0 only). `PDB_MSDIA_FALLBACK` is NO off Windows, so old MSF 2.0 PDBs need the remote server. | `sub_43400`, `sub_40850`, `sub_3F880` ("Loading PDB symbols requires a remote win32 debugger"); pdb.cfg |
| Finding the PDB | CodeView `RSDS`/`NB10` record (`sub_76EA0`), then a symbol path: `_NT_SYMBOL_PATH`, else `SRV*<tmp>/ida*http://msdl.microsoft.com/download/symbols` (`sub_417D0`, `sub_77DD0` parses `srv*`/`cache*` entries). Download with `index2.txt`/`file.ptr` support and HTTP error handling (`sub_78830`). `PDB_NETWORK`: off / PE only / on; the default line is commented out and IDA asks. | strings in the named functions |
| Types | Every type index is converted (`sub_6D2F0`) in a loop with a cancel check every few thousand (`sub_6F920`, "Loading types from PDB file %zd from %zd..."); more than 10,000 pending indices are flushed in batches (`sub_53D40`). COM/OLE base types get IDA's own definitions (`sub_30F90`: `BSTR`, `VARIANT`, `HRESULT`, `CURRENCY`, `DATE`). | `sub_6F920`, `sub_70FD0` (SymTag names) |
| Prototypes | Function symbols get their procedure type, with `this` for member functions; the same function decodes MSVC annotations and WPP/TMF trace calls (`NT_ASSERT("%s"`, `__annotation("%s"`, `TMF:`). | `sub_50C20` |
| Locals | A register-relative local (DIA location type 3) becomes a typed stack variable (`define_stkvar_ea` at the frame offset adjusted for the frame register, then its type set on the frame member); an enregistered one (type 5) a register variable over its range; others are reported ("pdb: unsupported location type %d, tag %d at %a", "stkvar '%s' with no type info"). | `sub_4F240` |
| Registers | A CodeView register-number table (`sub_37830`, 2,240 register-name strings: x86, x64, ARM, ARM64). | `sub_37830` |
| Virtual tables | "Creating virtual function tables ..." from class types and vtable shapes. | `sub_34C10` |
| SDK library | Loads `mssdk`/`ntddk` for the image's subsystem alongside (`sub_33DE0`, see `notes/ida-typelib-pe.md`). | |

## 2. Plan for unlace

The type-library path built for `.til` files (`kuna_til::to_typelib` renders records, typedefs and
prototypes as typelib text; `kuna_typelib::seed` interns what imports and named functions ask for) is
the natural sink: render the PDB's TPI the same way and seed it by address for every PDB function.

| step | what | where | size |
|---|---|---|---|
| 1 | **Types.** `pdbtypes.rs`: walk `type_information()` with a `TypeFinder`; render classes/structs/unions (member offsets are in the field list, no layout needed), enums, typedefs (from `S_UDT`), pointers, arrays, bitfields, procedure types as typelib text. Bound counts and recursion depth (hostile PDB); forward references resolved by name, as `kuna_til` does. | `unlace-analysis/src/analyzers/pdb/` | M |
| 2 | **Prototypes.** For each `S_GPROC32`/`S_LPROC32`, its procedure or member-function type as a prototype at the function address (`prototypes_at`), `this` typed as the class pointer; calling convention from the type record. A PDB prototype outranks `win32sigs`/`cppsig` for that address. | same + `kuna_typelib::seed` | S-M |
| 3 | **Locals.** `S_REGREL32` (frame-register relative), `S_BPREL32`, and `S_LOCAL` with `S_DEFRANGE_REGISTER`/`_FRAMEPOINTER_REL`/`_REGISTER_REL` ranges, imported like `dwarfscopes` imports DWARF locals (names and types per storage and range), including `S_BLOCK32` scopes. | same, through the declared-variables path `dwarfscopes` uses | M |
| 4 | **Lines (optional).** The C13 line program as `file:line` comments, behind the same switch as DWARF lines (`dwarf_lines`). | same | S |
| 5 | **Fetch (opt-in).** `_NT_SYMBOL_PATH`-style `srv*cache*url` download, off unless asked (network on an explicit flag only, as IDA prompts), with the fingerprint gate unchanged. | `locate.rs` | S-M |

Value: every Microsoft system DLL and most shipped Windows software have public PDBs with types for
their exported and many internal functions, so step 1+2 type a large share of a Windows image the way
DWARF does on Linux. Test with a small MSVC fixture built `/Zi` (structs, a class with virtuals,
locals in registers at `/O2`) and one public system PDB pinned by GUID.
