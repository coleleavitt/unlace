// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B830
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B830 jmp     cs:off_4ED400
//
// Resolved target: strrpl
// Target address:  0x4F16F8
// GOT/IAT slot:    0x4ED400
// Slot symbol:     off_4ED400
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}

