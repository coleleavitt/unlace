// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E0C60
// Name:            sub_3E0C60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E0C60 jmp     sub_3E0900
//
// Resolved target: sub_3E0900
// Target address:  0x3E0900
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, int)
// ============================================================

/* see target sig */ sub_3E0C60(/* see target signature */)
{
    // Tail-call to sub_3E0900 via direct jump indirection
    return sub_3E0900(/* forwarded args */);
}

