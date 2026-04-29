// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25A880
// Name:            sub_25A880
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x25A880 jmp     sub_25A800
//
// Resolved target: sub_25A800
// Target address:  0x25A800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_25A880(/* see target signature */)
{
    // Tail-call to sub_25A800 via direct jump indirection
    return sub_25A800(/* forwarded args */);
}

