// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x180CF80
// Name:            sub_180CF80
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x180CF80 jmp     sub_180CDC0
//
// Resolved target: sub_180CDC0
// Target address:  0x180CDC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __m128i *__fastcall(__int64, __int64, const __m128i *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_180CF80(/* see target signature */)
{
    // Tail-call to sub_180CDC0 via direct jump indirection
    return sub_180CDC0(/* forwarded args */);
}

