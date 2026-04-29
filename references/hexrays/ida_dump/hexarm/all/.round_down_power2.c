// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D700
// Name:            .round_down_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D700 jmp     cs:off_4E9368
//
// Resolved target: round_down_power2
// Target address:  0x4EBD58
// GOT/IAT slot:    0x4E9368
// Slot symbol:     off_4E9368
// Target type:     <no type info>
// ============================================================

void .round_down_power2(/* see target signature */)
{
    // Tail-call to round_down_power2 via GOT/IAT indirection
    return round_down_power2(/* forwarded args */);
}

