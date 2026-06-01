// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1119B0
// Name:            .set_xrefpos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1119B0 jmp     cs:set_xrefpos_ptr
//
// Resolved target: set_xrefpos
// Target address:  0x8D36D0
// GOT/IAT slot:    0x89F978
// Slot symbol:     set_xrefpos_ptr
// Target type:     <no type info>
// ============================================================

void .set_xrefpos(/* see target signature */)
{
    // Tail-call to set_xrefpos via GOT/IAT indirection
    return set_xrefpos(/* forwarded args */);
}

