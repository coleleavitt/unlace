// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2011B0
// Name:            sub_2011B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2011B0 jmp     sub_200F80
//
// Resolved target: sub_200F80
// Target address:  0x200F80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_2011B0(/* see target signature */)
{
    // Tail-call to sub_200F80 via direct jump indirection
    return sub_200F80(/* forwarded args */);
}

