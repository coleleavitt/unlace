// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5070
// Name:            .set_cp_validity
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5070 jmp     cs:off_1A020
//
// Resolved target: set_cp_validity
// Target address:  0x1A3A0
// GOT/IAT slot:    0x1A020
// Slot symbol:     off_1A020
// Target type:     <no type info>
// ============================================================

void .set_cp_validity(/* see target signature */)
{
    // Tail-call to set_cp_validity via GOT/IAT indirection
    return set_cp_validity(/* forwarded args */);
}

