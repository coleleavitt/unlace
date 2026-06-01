// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D95930
// Name:            sub_1D95930
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D95930 jmp     sub_1D95770
//
// Resolved target: sub_1D95770
// Target address:  0x1D95770
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __int64, unsigned __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D95930(/* see target signature */)
{
    // Tail-call to sub_1D95770 via direct jump indirection
    return sub_1D95770(/* forwarded args */);
}

