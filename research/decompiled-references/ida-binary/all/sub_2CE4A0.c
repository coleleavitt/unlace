// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE4A0
// Name:            sub_2CE4A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2CE4A0 jmp     sub_2CD240
//
// Resolved target: sub_2CD240
// Target address:  0x2CD240
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, double, __m128, __m128, __m128, double, double, __m128, __m128)
// ============================================================

/* see target sig */ sub_2CE4A0(/* see target signature */)
{
    // Tail-call to sub_2CD240 via direct jump indirection
    return sub_2CD240(/* forwarded args */);
}

