// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_5038
//
// Resolved target: strrpl
// Target address:  0x5378
// GOT/IAT slot:    0x5038
// Slot symbol:     off_5038
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}

