// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E90
// Name:            .round_down_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E90 jmp     cs:off_2C79F30
//
// Resolved target: round_down_power2
// Target address:  0x826B40
// GOT/IAT slot:    0x2C79F30
// Slot symbol:     off_2C79F30
// Target type:     <no type info>
// ============================================================

void .round_down_power2(/* see target signature */)
{
    // Tail-call to round_down_power2 via GOT/IAT indirection
    return round_down_power2(/* forwarded args */);
}

