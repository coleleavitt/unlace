// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A800
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A800 jmp     cs:off_4CD3E8
//
// Resolved target: strrpl
// Target address:  0x4CFDD8
// GOT/IAT slot:    0x4CD3E8
// Slot symbol:     off_4CD3E8
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}

