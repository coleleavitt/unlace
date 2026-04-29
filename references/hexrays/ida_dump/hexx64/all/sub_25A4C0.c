// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25A4C0
// Name:            sub_25A4C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x25A4C0 jmp     sub_25A440
//
// Resolved target: sub_25A440
// Target address:  0x25A440
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_25A4C0(/* see target signature */)
{
    // Tail-call to sub_25A440 via direct jump indirection
    return sub_25A440(/* forwarded args */);
}

