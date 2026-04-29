// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4610
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4610 jmp     cs:off_232F0
//
// Resolved target: ea2node
// Target address:  0x23718
// GOT/IAT slot:    0x232F0
// Slot symbol:     off_232F0
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

