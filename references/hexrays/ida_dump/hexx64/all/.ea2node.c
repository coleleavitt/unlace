// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C9C0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C9C0 jmp     cs:off_4EDCC8
//
// Resolved target: ea2node
// Target address:  0x4F2000
// GOT/IAT slot:    0x4EDCC8
// Slot symbol:     off_4EDCC8
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

