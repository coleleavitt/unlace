// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2558C0
// Name:            sub_2558C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2558C0 jmp     sub_255840
//
// Resolved target: sub_255840
// Target address:  0x255840
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD **, _QWORD **)
// ============================================================

/* see target sig */ sub_2558C0(/* see target signature */)
{
    // Tail-call to sub_255840 via direct jump indirection
    return sub_255840(/* forwarded args */);
}

