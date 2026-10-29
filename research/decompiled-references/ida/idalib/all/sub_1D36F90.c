// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D36F90
// Name:            sub_1D36F90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D36F90 jmp     sub_19A3E40
//
// Resolved target: sub_19A3E40
// Target address:  0x19A3E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int16 *__fastcall(__int64, unsigned __int16 *, unsigned __int64, unsigned __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D36F90(/* see target signature */)
{
    // Tail-call to sub_19A3E40 via direct jump indirection
    return sub_19A3E40(/* forwarded args */);
}

