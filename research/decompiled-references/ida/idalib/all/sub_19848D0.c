// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19848D0
// Name:            sub_19848D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x19848D0 jmp     sub_1984720
//
// Resolved target: sub_1984720
// Target address:  0x1984720
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_19848D0(/* see target signature */)
{
    // Tail-call to sub_1984720 via direct jump indirection
    return sub_1984720(/* forwarded args */);
}

