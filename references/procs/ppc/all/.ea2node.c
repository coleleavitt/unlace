// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20BA0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20BA0 jmp     cs:off_955B8
//
// Resolved target: ea2node
// Target address:  0x95FF8
// GOT/IAT slot:    0x955B8
// Slot symbol:     off_955B8
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

