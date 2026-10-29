// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7600
// Name:            .set_xrefpos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7600 jmp     cs:off_2C792E8
//
// Resolved target: set_xrefpos
// Target address:  0x59F240
// GOT/IAT slot:    0x2C792E8
// Slot symbol:     off_2C792E8
// Target type:     <no type info>
// ============================================================

void .set_xrefpos(/* see target signature */)
{
    // Tail-call to set_xrefpos via GOT/IAT indirection
    return set_xrefpos(/* forwarded args */);
}

