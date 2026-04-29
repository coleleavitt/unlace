// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8D0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8D0 jmp     cs:off_4DAC50
//
// Resolved target: ea2node
// Target address:  0x4DD668
// GOT/IAT slot:    0x4DAC50
// Slot symbol:     off_4DAC50
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

