// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1C0
// Name:            .reg_finder_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1C0 jmp     cs:off_350C8
//
// Resolved target: reg_finder_dtr
// Target address:  0x35718
// GOT/IAT slot:    0x350C8
// Slot symbol:     off_350C8
// Target type:     <no type info>
// ============================================================

void .reg_finder_dtr(/* see target signature */)
{
    // Tail-call to reg_finder_dtr via GOT/IAT indirection
    return reg_finder_dtr(/* forwarded args */);
}

