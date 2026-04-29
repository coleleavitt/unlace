// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8E0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8E0 jmp     cs:off_4C0C58
//
// Resolved target: ea2node
// Target address:  0x4C3C68
// GOT/IAT slot:    0x4C0C58
// Slot symbol:     off_4C0C58
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

