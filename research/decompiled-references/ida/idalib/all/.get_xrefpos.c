// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8210
// Name:            .get_xrefpos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8210 jmp     cs:off_2C798F0
//
// Resolved target: get_xrefpos
// Target address:  0x59F160
// GOT/IAT slot:    0x2C798F0
// Slot symbol:     off_2C798F0
// Target type:     <no type info>
// ============================================================

void .get_xrefpos(/* see target signature */)
{
    // Tail-call to get_xrefpos via GOT/IAT indirection
    return get_xrefpos(/* forwarded args */);
}

