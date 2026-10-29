// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x451FB0
// Name:            track_value_until_address_jpt
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x451FB0 jmp     track_value_until_address_jpt_0
//
// Resolved target: track_value_until_address_jpt_0
// Target address:  0x451BE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(unsigned __int16 *, __m128i *, __int64)
// ============================================================

/* see target sig */ track_value_until_address_jpt(/* see target signature */)
{
    // Tail-call to track_value_until_address_jpt_0 via direct jump indirection
    return track_value_until_address_jpt_0(/* forwarded args */);
}

