// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6F0
// Name:            .round_down_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6F0 jmp     cs:off_4BF360
//
// Resolved target: round_down_power2
// Target address:  0x4C2828
// GOT/IAT slot:    0x4BF360
// Slot symbol:     off_4BF360
// Target type:     <no type info>
// ============================================================

void .round_down_power2(/* see target signature */)
{
    // Tail-call to round_down_power2 via GOT/IAT indirection
    return round_down_power2(/* forwarded args */);
}

