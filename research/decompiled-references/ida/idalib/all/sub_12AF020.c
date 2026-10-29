// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12AF020
// Name:            sub_12AF020
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x12AF020 jmp     sub_12230A0
//
// Resolved target: sub_12230A0
// Target address:  0x12230A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, __int64, __int64 *, __int64, __int64)
// ============================================================

/* see target sig */ sub_12AF020(/* see target signature */)
{
    // Tail-call to sub_12230A0 via direct jump indirection
    return sub_12230A0(/* forwarded args */);
}

