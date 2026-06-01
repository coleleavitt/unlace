// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D20
// Name:            .reg_finder_find
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D20 jmp     cs:off_2C79678
//
// Resolved target: reg_finder_find
// Target address:  0x5029C0
// GOT/IAT slot:    0x2C79678
// Slot symbol:     off_2C79678
// Target type:     <no type info>
// ============================================================

void .reg_finder_find(/* see target signature */)
{
    // Tail-call to reg_finder_find via GOT/IAT indirection
    return reg_finder_find(/* forwarded args */);
}

