// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195D180
// Name:            sub_195D180
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x195D180 jmp     sub_195D010
//
// Resolved target: sub_195D010
// Target address:  0x195D010
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_195D180(/* see target signature */)
{
    // Tail-call to sub_195D010 via direct jump indirection
    return sub_195D010(/* forwarded args */);
}

