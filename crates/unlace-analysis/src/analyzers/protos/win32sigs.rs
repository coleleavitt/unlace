//! (unlace) `win32sigs` — built-in Win32 API prototypes, parked by ENTRY ADDRESS.
//!
//! [`super::LibProtoPass`] and [`super::libcsigs::LibcSigsPass`] carry libc.
//! Nothing in the tree carries a single Windows API signature, so on a PE every
//! `LoadLibraryExW` / `CreateFileW` / `WriteFile` call arrives at
//! `ActionDefaultParams` with an empty prototype and its arguments have to be
//! recovered from the call site alone. Where that recovery loses — the ordinary
//! case for an image that writes its outgoing slots well before the call — the
//! call renders `LoadLibraryExW()` and the argument stores are left behind as
//! mapped stack locals, which is the difference between 8 declarations and 47.
//!
//! ## Two halves, because either alone is inert
//!
//! **The table.** Ghidra applies its `.gdt` archives here; unlace cannot vendor
//! them, so this is the same deliberate stand-in [`super::LibProtoPass`] already
//! is, for the Win32 half. Ranking is measured, not intuited: an import
//! histogram over the 54 PE images of the repipe arena corpus admits a name at
//! **>= 5 images**. The resource/loader family below that bar is admitted
//! separately and named as such — it is the family the RE need was filed
//! against, and a resource loader is what a Windows reverser reads first.
//!
//! **The address key.** A by-name park is a silent no-op on one half of a PE
//! import: `pe_iat` registers TWO FunctionSymbols per import — the size-0 IAT
//! slot the engine constant-folds through, and the `FF 25` thunk veneer a direct
//! `call` targets — and the global by-name query answers with the slot, while
//! `ActionDefaultParams` reads `callee_proto_pieces(entry)` at the thunk. Like
//! the libc passes, this pass emits into
//! [`crate::pass::AnalysisOutput::prototypes_at`], keyed by every address the
//! import resolver names, and lands on both.
//!
//! ## Where the signatures come from, and the wrongness axis
//!
//! No Windows SDK header can be reduced on the build host, so each entry is
//! transcribed from the documented Win32 declaration and then **reduced to
//! [`Ty`]'s width-stable vocabulary**: `HANDLE`/`HMODULE`/`HWND`/`HRSRC`/
//! `LPVOID` are `void *`, `DWORD`/`UINT`/`LCID` are `unsigned int`, `BOOL`/`int`/
//! `LONG` are `int`, `SIZE_T` is pointer-width, `LPCSTR` is `char *`, `LPCWSTR` is
//! `wchar_t *`, `LPDWORD` is `unsigned int *`. A declaration with a slot that has
//! no honest spelling is REJECTED rather than approximated, which is why
//! `SetFilePointerEx` (a by-value `LARGE_INTEGER`), `RtlVirtualUnwind` and
//! `RtlLookupFunctionEntry` (by-value `DWORD64`) and `LCMapStringEx` are absent.
//!
//! The load-bearing field is the **arity**, not the types: the x86 PE default
//! model is `__stdcall` with `extrapop="unknown"`, so a locked N-parameter
//! prototype also tells the engine the callee pops `4 + 4N` bytes. Every name
//! here is a `WINAPI`/`APIENTRY` (callee-cleans) export for that reason — no CRT
//! name is admitted, `__cdecl` msvcrt spellings included, because those already
//! belong to the libc tables and would get the wrong cleanup here.
//!
//! Applied only at addresses the resolver identifies as genuine imports. Exact
//! import provenance remains safe even if the image exports the same spelling;
//! this pass emits no ambiguous global by-name stream.

use super::{Sig, Ty, resolved_import_addrs, seed_resolved_prototypes};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// Seed the built-in Win32 API signatures onto a PE's imported API names.
pub struct Win32SigsPass;

/// The built-in Win32 API prototype table.
///
/// Disjoint from both libc tables by construction (`table_is_disjoint_from_libc`)
/// and from the CRT entirely: every entry is a `WINAPI` export.
pub(super) const WIN32: &[(&str, Sig)] = &[
    // --- process / thread (kernel32) ---
    (
        "CreateThread",
        Sig {
            ret: Ty::VoidPtr,
            params: &[
                Ty::VoidPtr,
                Ty::Size,
                Ty::VoidPtr,
                Ty::VoidPtr,
                Ty::UInt,
                Ty::UIntPtr,
            ],
            vararg: -1,
        },
    ),
    (
        "CreateToolhelp32Snapshot",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "ExitProcess",
        Sig {
            ret: Ty::Void,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "GetCurrentProcess",
        Sig {
            ret: Ty::VoidPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetCurrentProcessId",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetCurrentThread",
        Sig {
            ret: Ty::VoidPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetCurrentThreadId",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetExitCodeProcess",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UIntPtr],
            vararg: -1,
        },
    ),
    (
        "GetStartupInfoA",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetStartupInfoW",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "OpenProcess",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::UInt, Ty::Int, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "ResumeThread",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "Sleep",
        Sig {
            ret: Ty::Void,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SuspendThread",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "TerminateProcess",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "TerminateThread",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "WaitForSingleObject",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    // --- module / loader (kernel32) ---
    (
        "FreeLibrary",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetModuleFileNameA",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr, Ty::CharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "GetModuleFileNameW",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr, Ty::WCharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "GetModuleHandleA",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "GetModuleHandleExW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::WCharPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetModuleHandleW",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "GetProcAddress",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "LoadLibraryA",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "LoadLibraryExA",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::CharPtr, Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "LoadLibraryExW",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::WCharPtr, Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "LoadLibraryW",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    // --- resource loading (kernel32).  Below the >= 5-image bar; admitted
    //     because it is the family the RE need was filed against.
    (
        "EnumResourceNamesW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::WCharPtr, Ty::VoidPtr, Ty::Long],
            vararg: -1,
        },
    ),
    (
        "EnumResourceTypesW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Long],
            vararg: -1,
        },
    ),
    (
        "FindResourceA",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::CharPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "FindResourceW",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::WCharPtr, Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "FreeResource",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "LoadResource",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "LockResource",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SizeofResource",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    // --- heap / virtual memory (kernel32) ---
    (
        "GetProcessHeap",
        Sig {
            ret: Ty::VoidPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "HeapAlloc",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::UInt, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "HeapCreate",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::UInt, Ty::Size, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "HeapDestroy",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "HeapFree",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "HeapReAlloc",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::UInt, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "HeapSize",
        Sig {
            ret: Ty::Size,
            params: &[Ty::VoidPtr, Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "VirtualAlloc",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::Size, Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "VirtualFree",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::Size, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "VirtualProtect",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::Size, Ty::UInt, Ty::UIntPtr],
            vararg: -1,
        },
    ),
    (
        "VirtualQuery",
        Sig {
            ret: Ty::Size,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    // --- files / handles / console (kernel32) ---
    (
        "CloseHandle",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "CreateFileW",
        Sig {
            ret: Ty::VoidPtr,
            params: &[
                Ty::WCharPtr,
                Ty::UInt,
                Ty::UInt,
                Ty::VoidPtr,
                Ty::UInt,
                Ty::UInt,
                Ty::VoidPtr,
            ],
            vararg: -1,
        },
    ),
    (
        "DuplicateHandle",
        Sig {
            ret: Ty::Int,
            params: &[
                Ty::VoidPtr,
                Ty::VoidPtr,
                Ty::VoidPtr,
                Ty::VoidPtr,
                Ty::UInt,
                Ty::Int,
                Ty::UInt,
            ],
            vararg: -1,
        },
    ),
    (
        "FindClose",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "FindFirstFileExW",
        Sig {
            ret: Ty::VoidPtr,
            params: &[
                Ty::WCharPtr,
                Ty::Int,
                Ty::VoidPtr,
                Ty::Int,
                Ty::VoidPtr,
                Ty::UInt,
            ],
            vararg: -1,
        },
    ),
    (
        "FindNextFileW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "FlushFileBuffers",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetConsoleMode",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UIntPtr],
            vararg: -1,
        },
    ),
    (
        "GetConsoleOutputCP",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetFileSizeEx",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetFileType",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetStdHandle",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "ReadConsoleW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::UInt, Ty::UIntPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "ReadFile",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::UInt, Ty::UIntPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SetFilePointer",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr, Ty::Int, Ty::IntPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SetStdHandle",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "WriteConsoleW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::UInt, Ty::UIntPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "WriteFile",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::UInt, Ty::UIntPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    // --- environment / command line (kernel32) ---
    (
        "FreeEnvironmentStringsA",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "FreeEnvironmentStringsW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "GetCommandLineA",
        Sig {
            ret: Ty::CharPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetCommandLineW",
        Sig {
            ret: Ty::WCharPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetEnvironmentStrings",
        Sig {
            ret: Ty::CharPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetEnvironmentStringsW",
        Sig {
            ret: Ty::WCharPtr,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetEnvironmentVariableW",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::WCharPtr, Ty::WCharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SetEnvironmentVariableW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::WCharPtr, Ty::WCharPtr],
            vararg: -1,
        },
    ),
    // --- locale / code pages (kernel32) ---
    (
        "CompareStringW",
        Sig {
            ret: Ty::Int,
            params: &[
                Ty::UInt,
                Ty::UInt,
                Ty::WCharPtr,
                Ty::Int,
                Ty::WCharPtr,
                Ty::Int,
            ],
            vararg: -1,
        },
    ),
    (
        "EnumSystemLocalesW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "GetACP",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetCPInfo",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetLocaleInfoW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::UInt, Ty::WCharPtr, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "GetOEMCP",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetStringTypeA",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::UInt, Ty::CharPtr, Ty::Int, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetStringTypeW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::WCharPtr, Ty::Int, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetUserDefaultLCID",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "IsValidCodePage",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "IsValidLocale",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "LCMapStringA",
        Sig {
            ret: Ty::Int,
            params: &[
                Ty::UInt,
                Ty::UInt,
                Ty::CharPtr,
                Ty::Int,
                Ty::CharPtr,
                Ty::Int,
            ],
            vararg: -1,
        },
    ),
    (
        "LCMapStringW",
        Sig {
            ret: Ty::Int,
            params: &[
                Ty::UInt,
                Ty::UInt,
                Ty::WCharPtr,
                Ty::Int,
                Ty::WCharPtr,
                Ty::Int,
            ],
            vararg: -1,
        },
    ),
    (
        "MultiByteToWideChar",
        Sig {
            ret: Ty::Int,
            params: &[
                Ty::UInt,
                Ty::UInt,
                Ty::CharPtr,
                Ty::Int,
                Ty::WCharPtr,
                Ty::Int,
            ],
            vararg: -1,
        },
    ),
    (
        "WideCharToMultiByte",
        Sig {
            ret: Ty::Int,
            params: &[
                Ty::UInt,
                Ty::UInt,
                Ty::WCharPtr,
                Ty::Int,
                Ty::CharPtr,
                Ty::Int,
                Ty::CharPtr,
                Ty::IntPtr,
            ],
            vararg: -1,
        },
    ),
    // --- synchronization / TLS (kernel32) ---
    (
        "AcquireSRWLockExclusive",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "DeleteCriticalSection",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "EnterCriticalSection",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "FlsAlloc",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "FlsFree",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "FlsGetValue",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "FlsSetValue",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "InitializeCriticalSection",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "InitializeCriticalSectionAndSpinCount",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "InitializeCriticalSectionEx",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "InitializeSListHead",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "LeaveCriticalSection",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "ReleaseSRWLockExclusive",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SleepConditionVariableSRW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "TlsAlloc",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "TlsFree",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "TlsGetValue",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "TlsSetValue",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "WakeAllConditionVariable",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    // --- diagnostics / errors / timing (kernel32) ---
    (
        "CheckRemoteDebuggerPresent",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::IntPtr],
            vararg: -1,
        },
    ),
    (
        "DecodePointer",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "EncodePointer",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetLastError",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "GetSystemTimeAsFileTime",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "GetTickCount",
        Sig {
            ret: Ty::UInt,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "IsDebuggerPresent",
        Sig {
            ret: Ty::Int,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "IsProcessorFeaturePresent",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "OutputDebugStringA",
        Sig {
            ret: Ty::Void,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "QueryPerformanceCounter",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "QueryPerformanceFrequency",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "RaiseException",
        Sig {
            ret: Ty::Void,
            params: &[Ty::UInt, Ty::UInt, Ty::UInt, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SetLastError",
        Sig {
            ret: Ty::Void,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SetUnhandledExceptionFilter",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "UnhandledExceptionFilter",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    // --- thread context (kernel32) ---
    (
        "GetThreadContext",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SetThreadContext",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    // --- OLE Automation BSTR / VARIANT / SAFEARRAY (oleaut32) ---
    (
        "SafeArrayAccessData",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SafeArrayDestroy",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SafeArrayUnaccessData",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "SysAllocString",
        Sig {
            ret: Ty::WCharPtr,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "SysAllocStringByteLen",
        Sig {
            ret: Ty::WCharPtr,
            params: &[Ty::CharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SysAllocStringLen",
        Sig {
            ret: Ty::WCharPtr,
            params: &[Ty::WCharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SysFreeString",
        Sig {
            ret: Ty::Void,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "SysReAllocString",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "SysReAllocStringLen",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::WCharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "SysStringByteLen",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "SysStringLen",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::WCharPtr],
            vararg: -1,
        },
    ),
    (
        "VariantClear",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "VariantCopy",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "VariantInit",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    // --- WinSock-only exports (ws2_32 / wsock32) ---
    (
        "WSACleanup",
        Sig {
            ret: Ty::Int,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "WSAGetLastError",
        Sig {
            ret: Ty::Int,
            params: &[],
            vararg: -1,
        },
    ),
    (
        "WSASetLastError",
        Sig {
            ret: Ty::Void,
            params: &[Ty::Int],
            vararg: -1,
        },
    ),
    (
        "closesocket",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Size],
            vararg: -1,
        },
    ),
    (
        "ioctlsocket",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Size, Ty::Int, Ty::UIntPtr],
            vararg: -1,
        },
    ),
    // --- user32 / gdi32 / advapi32 ---
    (
        "CryptReleaseContext",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Size, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "GetDC",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "MessageBoxA",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::CharPtr, Ty::CharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "MessageBoxW",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::WCharPtr, Ty::WCharPtr, Ty::UInt],
            vararg: -1,
        },
    ),
];

/// (unlace `typelib`) `true` when this table declares `name`. A Windows type
/// library replaces such a declaration with its own, whose handles and
/// records keep their SDK names where this table spells them `void *`.
pub fn declares(name: &str) -> bool {
    WIN32.iter().any(|(n, _)| *n == name)
}

/// Every address the import resolver names as a genuine import.
///
/// One name yields SEVERAL addresses on a PE — the IAT slot and the `FF 25`
/// thunk veneer that jumps through it — and the prototype belongs on all of them:
/// a direct `call thunk` and a `call [slot]` are the same callee, and which one
/// `ActionDefaultParams` asks about depends on how the image spells the call.
fn imported_addrs_by_name(file: &object::File, bytes: &[u8]) -> Vec<(String, u64)> {
    resolved_import_addrs(file, bytes)
}

impl AnalysisPass for Win32SigsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "win32sigs"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if !matches!(
            ctx.file.format(),
            object::BinaryFormat::Pe | object::BinaryFormat::Coff
        ) {
            return out;
        }
        let types = ctx.arch.types();
        let (_addr_size, word_size) = ctx.arch.data_org();
        let imports = imported_addrs_by_name(ctx.file, ctx.bytes);
        seed_resolved_prototypes(&mut out, &imports, WIN32, types, word_size, super::L);
        out
    }
}

#[cfg(test)]
mod tests;
