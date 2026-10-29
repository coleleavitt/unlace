// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1859ED0
// Name:            sub_1859ED0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1859ED0 jmp     sub_1859130
//
// Resolved target: sub_1859130
// Target address:  0x1859130
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *, __int64, int, __int64, __int64, __int64, __m128, __int64, int, unsigned __int16 *, unsigned int)
// ============================================================

/* see target sig */ sub_1859ED0(/* see target signature */)
{
    // Tail-call to sub_1859130 via direct jump indirection
    return sub_1859130(/* forwarded args */);
}

