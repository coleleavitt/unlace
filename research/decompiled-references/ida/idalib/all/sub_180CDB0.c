// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x180CDB0
// Name:            sub_180CDB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x180CDB0 jmp     sub_180CBF0
//
// Resolved target: sub_180CBF0
// Target address:  0x180CBF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __m128i *__fastcall(__int64, __int64, const __m128i *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_180CDB0(/* see target signature */)
{
    // Tail-call to sub_180CBF0 via direct jump indirection
    return sub_180CBF0(/* forwarded args */);
}

