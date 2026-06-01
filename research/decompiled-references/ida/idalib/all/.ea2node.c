// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9440
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9440 jmp     cs:off_2C7A208
//
// Resolved target: ea2node
// Target address:  0x3BDCE0
// GOT/IAT slot:    0x2C7A208
// Slot symbol:     off_2C7A208
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

