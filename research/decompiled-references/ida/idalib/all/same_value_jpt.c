// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4525D0
// Name:            same_value_jpt
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4525D0 jmp     same_value_jpt_0
//
// Resolved target: same_value_jpt_0
// Target address:  0x451FC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned __int16 *, const __m128i *, int)
// ============================================================

/* see target sig */ same_value_jpt(/* see target signature */)
{
    // Tail-call to same_value_jpt_0 via direct jump indirection
    return same_value_jpt_0(/* forwarded args */);
}

