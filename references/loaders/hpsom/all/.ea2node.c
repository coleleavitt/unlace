// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1210
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1210 jmp     cs:off_50F0
//
// Resolved target: ea2node
// Target address:  0x5290
// GOT/IAT slot:    0x50F0
// Slot symbol:     off_50F0
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

