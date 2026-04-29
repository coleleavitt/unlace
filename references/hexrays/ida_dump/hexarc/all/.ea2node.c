// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B0 jmp     cs:off_4B9C40
//
// Resolved target: ea2node
// Target address:  0x4BC658
// GOT/IAT slot:    0x4B9C40
// Slot symbol:     off_4B9C40
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

