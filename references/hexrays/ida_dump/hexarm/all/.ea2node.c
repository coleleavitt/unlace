// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E910
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E910 jmp     cs:off_4E9C70
//
// Resolved target: ea2node
// Target address:  0x4EC6A8
// GOT/IAT slot:    0x4E9C70
// Slot symbol:     off_4E9C70
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

