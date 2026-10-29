// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1CF2840
// Name:            sub_1CF2840
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1CF2840 jmp     sub_1CF2670
//
// Resolved target: sub_1CF2670
// Target address:  0x1CF2670
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __int64, unsigned __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1CF2840(/* see target signature */)
{
    // Tail-call to sub_1CF2670 via direct jump indirection
    return sub_1CF2670(/* forwarded args */);
}

