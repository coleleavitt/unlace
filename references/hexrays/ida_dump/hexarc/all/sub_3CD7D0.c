// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3CD7D0
// Name:            sub_3CD7D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3CD7D0 jmp     sub_3CD720
//
// Resolved target: sub_3CD720
// Target address:  0x3CD720
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_3CD7D0(/* see target signature */)
{
    // Tail-call to sub_3CD720 via direct jump indirection
    return sub_3CD720(/* forwarded args */);
}

