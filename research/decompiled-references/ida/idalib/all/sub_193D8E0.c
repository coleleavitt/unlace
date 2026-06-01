// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193D8E0
// Name:            sub_193D8E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x193D8E0 jmp     sub_193D760
//
// Resolved target: sub_193D760
// Target address:  0x193D760
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_193D8E0(/* see target signature */)
{
    // Tail-call to sub_193D760 via direct jump indirection
    return sub_193D760(/* forwarded args */);
}

