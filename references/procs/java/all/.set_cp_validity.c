// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6080
// Name:            .set_cp_validity
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6080 jmp     cs:off_2D028
//
// Resolved target: set_cp_validity
// Target address:  0x2D528
// GOT/IAT slot:    0x2D028
// Slot symbol:     off_2D028
// Target type:     <no type info>
// ============================================================

void .set_cp_validity(/* see target signature */)
{
    // Tail-call to set_cp_validity via GOT/IAT indirection
    return set_cp_validity(/* forwarded args */);
}

