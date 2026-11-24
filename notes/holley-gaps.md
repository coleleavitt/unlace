# Holley EFI decompilation gaps (IDA 9.5, angr, unlace)

Fixture set: the Holley EFI V6 PC software, compared function by function against
IDA 9.5 (idalib, headless) and angr 9.2 (CFGFast + Decompiler). The vendor binaries are
not committed; each fix ships with a small synthetic fixture reproducing the shape.

| Binary | SHA-256 | What it is |
|---|---|---|
| `app/Holley.exe` | `0f1a0b682fa4ae481044eeb7ebecf26c51e2dd2630105b7a270e20606f5f97a9` | PE32 i386, MSVC 14.34 (VS 2022), MFC 140, dynamic UCRT, 7 MB `.text` |
| `app/USBCAN-Driver.dll` | `44722f8a9a9bb348fb5d58174319863d08a61af4d4758859900dfadcbaa5f28d` | PE32 i386 DLL, MSVC 14.27, static CRT (/MT), WinUSB CAN driver, C++ exports (`CUsbCanDriver::*`) plus extern "C" wrappers |
| `app/USBDriver/Holley-USBCAN-Driver-Setup.exe` | `6e82122905be2f90e135edaa591388649e2eb5b4d16013e9ad315e6f1db4574b` | Inno Setup Delphi stub |

"unlace after" is what the merged change is written to produce. It was not run here:
this track did not build. Each PR's CLI test pins it, and the lead's build checks it.

## Gaps and fixes

| Construct | Address | IDA 9.5 | angr | unlace before | unlace after (PR) |
|---|---|---|---|---|---|
| MSVC-mangled DLL export as the only declaration (`?SendFrame@CUsbCanDriver@@QAEHPAUcan_frame@@I@Z`) | USBCAN `0x10003ab0` and 27 other `CUsbCanDriver::*` exports | `int __thiscall(CUsbCanDriver *this, can_frame *, unsigned int)` | `int (void *this, can_frame *, unsigned int)` | `unsigned int (int *a0, void *a1, int a2)`: `cppsig` read no PE export names | export name's declaration applied (#520) |
| `/GS` checker kills the return value (x86-32, checker pop unstated) | USBCAN `CUsbCanDriver_SendFrame` `0x10003d70` (8 /GS user functions) | `BOOL`, cookie hidden (FLIRT names `__security_check_cookie`) | `void`, cookie shown | `void`, cookie shown | `int`, the return survives the kept checker (#532) |
| Pushes for a later `__thiscall` taken by an EH-framed register-only callee (`ss << name << ... << err`) | USBCAN `CUsbCanDriver::ReadThreadFunc` `0x10002c26..0x10002c58` | drops both string literals, passes `err` to the wrong `operator<<` | chains the calls and keeps the literals, then gives the last `operator<<(err)` two junk arguments | first `__fastcall` `operator<<` takes `err` and a junk push | with `--option calleeargsmsvc on` the EH frame and cookie no longer hide the callee's extent (#541, default off) |
| Import address cached in a frame slot (`mov eax,[__imp_GetLastError]; mov [ebp-0x3c],eax`) | USBCAN `ReadThreadFunc`, 7 slots | `v50 = GetLastError` | `v35()`, unnamed | `v45 = dat_10022044` | `v45 = &GetLastError` (#554) |
| C++ dynamic initializers behind `_initterm(__xc_a, __xc_z)` (dynamic CRT) | Holley.exe table `0xafa840..0xafc944`, 2,113 entries | all listed (60,106 functions in total) | not measured on Holley.exe (30 MB) | 20,415 functions; `CSerialMFC::vfunc_21` at `0x401cfe` "spans" 975 KiB | each non-null entry is a function start (#570) |
| The same tables with a statically linked, anonymous `_initterm` | USBCAN `0x10022190` (`__xc`), `0x100221ac` (`__xi`), `0x100221c8`: 14 initializers | all listed | all listed | 4 missing (`0x10001000`, `0x1000102e`, `0x10008c05`, `0x100134ab`) | read when the table has the CRT's shape (#585) |
| MSVC vftable walk running past the table into UTF-16 text inside a large `.text` | Holley.exe `CGDIPCrank::vfunc_95..vfunc_101` (`0x52000a`, `0x65006e`, `0x690067`, `0x6e0045`, `0x6f0069`), `type_info::vfunc_1` (`0x700061`) | no such entries (each address is inside a function) | no MSVC RTTI | bogus function starts splitting real functions | the walk stops at the first word the base-relocation table does not list (#576) |

Only the stream-chain case is one where IDA and angr are both wrong and unlace ends up
right, and only under `calleeargsmsvc on`. In every other row IDA is right. Each of
those rows was an unlace-only gap.

## Checked and found equal

- Switch tables: IDA finds 666 in Holley.exe (437 dense, 229 two-level byte-indexed).
  I sampled 30 of them across 23 functions, and unlace recovers a `switch` in every one,
  with no errors and no unstructured gotos.
- MSVC C++ RTTI class names, the `std::` exception classes and the COMDAT-folded
  `can_id_t` / `hefi_can_id_t` `operator=` (both names on one address): unlace names
  them all.

## Open (not fixed here)

- The `calleeargs` walk could also bound an MSVC callee that calls an import or a stack-moving helper.
  The `ReadThreadFunc` chain needs both of its `operator<<` callees' extents. #541 removes
  the escapes I could see, but it has not been confirmed on the real function.
- A frame-slot copy of an import (`call [ebp-0x3c]`) is still an untyped indirect call.
  IDA types it from the import's prototype.
- The parameter slot reused as a temporary (`mov [ebp+8],0x2710; div [ebp+8]` in
  `CUsbCanDriver_ReadFrame`) prints the dead store `a0 = (void *)0x2710;`.
- With no other stack argument, an x86-32 `/GS` checker whose extent is unknown (an
  `int3` failure path) takes the slot at the top of the stack as a second argument
  (`sub_10001030(cookie, a0)` in a minimal frame).
- On the Inno Setup Delphi stub with `--option delphi on`, 155 of IDA's 465 functions are
  missing, and 132 of unlace's functions are not in IDA's list. The Delphi teams own this
  one, so it is not triaged here.
