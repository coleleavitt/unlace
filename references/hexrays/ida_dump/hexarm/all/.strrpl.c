// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D810
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D810 jmp     cs:off_4E93F0
//
// Resolved target: strrpl
// Target address:  0x4EBDE0
// GOT/IAT slot:    0x4E93F0
// Slot symbol:     off_4E93F0
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}

