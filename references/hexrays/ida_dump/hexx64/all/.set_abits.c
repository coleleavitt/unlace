// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B070
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B070 jmp     cs:off_4ED020
//
// Resolved target: set_abits
// Target address:  0x4F1310
// GOT/IAT slot:    0x4ED020
// Slot symbol:     off_4ED020
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

