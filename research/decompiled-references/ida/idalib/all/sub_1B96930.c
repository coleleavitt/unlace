// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1B96930
// Name:            sub_1B96930
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1B96930 jmp     sub_1B967E0
//
// Resolved target: sub_1B967E0
// Target address:  0x1B967E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1B96930(/* see target signature */)
{
    // Tail-call to sub_1B967E0 via direct jump indirection
    return sub_1B967E0(/* forwarded args */);
}

