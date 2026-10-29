// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA260
// Name:            .round_up_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA260 jmp     cs:off_2C7A918
//
// Resolved target: round_up_power2
// Target address:  0x826B10
// GOT/IAT slot:    0x2C7A918
// Slot symbol:     off_2C7A918
// Target type:     <no type info>
// ============================================================

void .round_up_power2(/* see target signature */)
{
    // Tail-call to round_up_power2 via GOT/IAT indirection
    return round_up_power2(/* forwarded args */);
}

