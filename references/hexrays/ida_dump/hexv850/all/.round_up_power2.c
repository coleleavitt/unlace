// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C190
// Name:            .round_up_power2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C190 jmp     cs:off_4C10B0
//
// Resolved target: round_up_power2
// Target address:  0x4C40E0
// GOT/IAT slot:    0x4C10B0
// Slot symbol:     off_4C10B0
// Target type:     <no type info>
// ============================================================

void .round_up_power2(/* see target signature */)
{
    // Tail-call to round_up_power2 via GOT/IAT indirection
    return round_up_power2(/* forwarded args */);
}

