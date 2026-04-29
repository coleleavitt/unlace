// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B720
// Name:            .round_down_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B720 jmp     cs:off_4ED378
//
// Resolved target: round_down_power2
// Target address:  0x4F1670
// GOT/IAT slot:    0x4ED378
// Slot symbol:     off_4ED378
// Target type:     <no type info>
// ============================================================

void .round_down_power2(/* see target signature */)
{
    // Tail-call to round_down_power2 via GOT/IAT indirection
    return round_down_power2(/* forwarded args */);
}

