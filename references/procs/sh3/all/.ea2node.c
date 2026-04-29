// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5550
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5550 jmp     cs:off_15290
//
// Resolved target: ea2node
// Target address:  0x16328
// GOT/IAT slot:    0x15290
// Slot symbol:     off_15290
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

