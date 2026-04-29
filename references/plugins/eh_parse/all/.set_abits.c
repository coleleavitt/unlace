// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6050
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6050 jmp     cs:off_2F010
//
// Resolved target: set_abits
// Target address:  0x2F680
// GOT/IAT slot:    0x2F010
// Slot symbol:     off_2F010
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

