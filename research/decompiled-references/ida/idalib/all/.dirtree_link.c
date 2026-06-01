// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A74B0
// Name:            .dirtree_link
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A74B0 jmp     cs:off_2C79240
//
// Resolved target: dirtree_link
// Target address:  0x77A1A0
// GOT/IAT slot:    0x2C79240
// Slot symbol:     off_2C79240
// Target type:     <no type info>
// ============================================================

void .dirtree_link(/* see target signature */)
{
    // Tail-call to dirtree_link via GOT/IAT indirection
    return dirtree_link(/* forwarded args */);
}

