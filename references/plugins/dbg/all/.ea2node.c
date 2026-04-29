// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34D0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34D0 jmp     cs:off_13250
//
// Resolved target: ea2node
// Target address:  0x135D8
// GOT/IAT slot:    0x13250
// Slot symbol:     off_13250
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

