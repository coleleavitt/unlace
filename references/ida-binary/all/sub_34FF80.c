// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34FF80
// Name:            sub_34FF80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x34FF80 jmp     sub_34FE90
//
// Resolved target: sub_34FE90
// Target address:  0x34FE90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__m128, __m128, __m128, __m128, double, double, __m128, __m128)
// ============================================================

/* see target sig */ sub_34FF80(/* see target signature */)
{
    // Tail-call to sub_34FE90 via direct jump indirection
    return sub_34FE90(/* forwarded args */);
}

