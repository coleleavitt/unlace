// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8160
// Name:            .reg_finder_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8160 jmp     cs:off_2A098
//
// Resolved target: reg_finder_ctr
// Target address:  0x2A608
// GOT/IAT slot:    0x2A098
// Slot symbol:     off_2A098
// Target type:     <no type info>
// ============================================================

void .reg_finder_ctr(/* see target signature */)
{
    // Tail-call to reg_finder_ctr via GOT/IAT indirection
    return reg_finder_ctr(/* forwarded args */);
}

