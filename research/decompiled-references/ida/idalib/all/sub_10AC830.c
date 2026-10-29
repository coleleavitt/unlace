// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10AC830
// Name:            sub_10AC830
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x10AC830 jmp     sub_102F020
//
// Resolved target: sub_102F020
// Target address:  0x102F020
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void *__fastcall(__int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_10AC830(/* see target signature */)
{
    // Tail-call to sub_102F020 via direct jump indirection
    return sub_102F020(/* forwarded args */);
}

