// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C180
// Name:            .round_up_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C180 jmp     cs:off_4C00A8
//
// Resolved target: round_up_power2
// Target address:  0x4C35D8
// GOT/IAT slot:    0x4C00A8
// Slot symbol:     off_4C00A8
// Target type:     <no type info>
// ============================================================

void .round_up_power2(/* see target signature */)
{
    // Tail-call to round_up_power2 via GOT/IAT indirection
    return round_up_power2(/* forwarded args */);
}

