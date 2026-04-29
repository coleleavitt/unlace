// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A710
// Name:            .guess_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A710 jmp     cs:off_4BF370
//
// Resolved target: guess_tinfo
// Target address:  0x4C2838
// GOT/IAT slot:    0x4BF370
// Slot symbol:     off_4BF370
// Target type:     <no type info>
// ============================================================

void .guess_tinfo(/* see target signature */)
{
    // Tail-call to guess_tinfo via GOT/IAT indirection
    return guess_tinfo(/* forwarded args */);
}

