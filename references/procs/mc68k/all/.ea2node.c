// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6520
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6520 jmp     cs:off_1D278
//
// Resolved target: ea2node
// Target address:  0x1D770
// GOT/IAT slot:    0x1D278
// Slot symbol:     off_1D278
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

