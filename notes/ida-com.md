# COM GUIDs and interfaces: IDA's comhelper, and a plan for unlace (2026-11-24)

Deepens gap 9 of `notes/ida-gaps.md`.

**Status:** implemented by #277, before this note, along the plan below and past it: the GUID and interface tables are built in (generated from the `windows` crate, MIT/Apache; 5,239 ids, 4,401 interfaces with typed Vtbls), so step 2 does not wait for `.til` support. Not done: runtime `clsid.cfg` input, `CoCreateInstanceEx`. A Windows binary that uses COM passes 16-byte GUIDs to
`CoCreateInstance`/`QueryInterface` and then calls through `(*p)->lpVtbl[n]`. Without names for the
GUIDs and types for the interfaces, every such call is `(*(code **)(*(long *)v + 0x18))(v, ...)`.

## 1. IDA (plugins__comhelper.sqlite, 104 functions)

- **Table.** `cfg/clsid.cfg`: 16,117 lines `guid {XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX} Name` (interfaces,
  classes, Bluetooth/WPD/Media Foundation GUIDs); on Windows the registry is consulted first. Parsed by
  `sub_2580` (`guid {%x-%hx-%hx-%hx-%2x...} %1024s`), loaded by `sub_42E0`.
- **Scan.** `sub_3780` ("Scanning for CLSIDs...", "Found %d CLSIDs") makes a `GUID` (or `_GUID`) type,
  walks every data head from the start of the database (`next_that` with a filter, `sub_23E0`), and for
  each 16-byte candidate calls `sub_3280`.
- **Name and type** (`sub_3280`): look the 16 bytes up (`sub_30F0`); unless the item already has a user
  name, name it after the table entry, prefixed `CLSID_` or `IID_` when the bare name is not itself a
  type in the loaded type libraries; then copy `<Name>Vtbl` (and once `IDispatchVtbl`) from the type
  libraries into the database so the interface's method table is available as a type; finally
  `apply_tinfo(GUID)` on the item.
- **On type change** (`sub_35E0`, event 50): when the user or analysis gives a data item a type whose
  name contains `GUID` or `CLSID`, the same naming runs for that item.
- There is no data-flow step: IDA names and types the GUIDs and makes the `Vtbl` types exist; typing the
  interface pointer at a `CoCreateInstance` call comes from the mssdk prototype
  (`LPVOID *ppv`) only as far as the user retypes it. Hex-Rays then prints `IID_IFoo` as the argument.

## 2. Plan for unlace

unlace already has the same machinery for UEFI: `analyzers/uefi/mod.rs` names every 16-byte value in a
data section that equals a known GUID and types it `EFI_GUID`, and `uefi/protocols` types a protocol
lookup's interface out-parameter from its GUID argument. COM is the same shape with different tables
and call sites.

| step | what | size |
|---|---|---|
| 1 | **GUID names.** On a PE, read a GUID table at run time (IDA's `clsid.cfg` format, from an env path such as `UNLACE_CLSID` or `<ida>/cfg/clsid.cfg`; never committed, as for `.til` files) plus a small built-in set of the COM core interfaces whose GUIDs are public constants (`IUnknown`, `IClassFactory`, `IDispatch`). Name matching 16-byte data `IID_<Name>`/`CLSID_<Name>`, typed `GUID`. Factor the UEFI data-section GUID scan into a shared helper. | S |
| 2 | **Interface out-parameters.** At `CoCreateInstance(rclsid, outer, ctx, riid, ppv)`, `CoCreateInstanceEx`, `CoGetClassObject` and a vtable-slot-0 call (`QueryInterface(this, riid, ppv)`), type `*ppv` as `I<Name> *` when the riid argument is a named IID and the type library (`notes/ida-typelib-pe.md`) defines `I<Name>`/`I<Name>Vtbl`; the existing `vtabletypes`-style slot naming then prints `p->lpVtbl->Method(p, ...)`. Same P5 per-call output-type mechanism as the UEFI protocol lookup. | M |
| 3 | **Without a type library.** Still type `*ppv` as a pointer to a struct whose first member is a pointer to a vtable of the method count known for core interfaces (3 for `IUnknown`, 7 for `IDispatch`), so `Release`/`AddRef`/`QueryInterface` read by name. | S |

Value: COM is pervasive in Windows malware (WMI, scheduled tasks, BITS, shell links) and in Office/shell
code; naming the IIDs alone tells a reader which subsystem a call drives.

Re-check: `sqlite3 -readonly ~/SiteResearch/ida-pro/sqlite/plugins__comhelper.sqlite "select text from pseudocode where ea in (0x3780,0x3280,0x35E0)"`.
