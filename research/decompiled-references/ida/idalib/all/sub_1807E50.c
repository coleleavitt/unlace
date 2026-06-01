// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1807E50
// Name:            sub_1807E50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1807E50 jmp     sub_1807A70
//
// Resolved target: sub_1807A70
// Target address:  0x1807A70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __m128i *__fastcall(__int64, __int64, const __m128i *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_1807E50(/* see target signature */)
{
    // Tail-call to sub_1807A70 via direct jump indirection
    return sub_1807A70(/* forwarded args */);
}

