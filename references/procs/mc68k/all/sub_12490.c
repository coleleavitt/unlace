// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12490
// Name:            sub_12490
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x12490 jmp     sub_11720
//
// Resolved target: sub_11720
// Target address:  0x11720
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, unsigned __int8 *, double, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_12490(/* see target signature */)
{
    // Tail-call to sub_11720 via direct jump indirection
    return sub_11720(/* forwarded args */);
}

