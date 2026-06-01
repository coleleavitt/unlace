// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE60
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE60 jmp     cs:off_2C7B718
//
// Resolved target: strrpl
// Target address:  0x841BB0
// GOT/IAT slot:    0x2C7B718
// Slot symbol:     off_2C7B718
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}

