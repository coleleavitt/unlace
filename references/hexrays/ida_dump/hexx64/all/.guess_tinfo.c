// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B740
// Name:            .guess_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B740 jmp     cs:off_4ED388
//
// Resolved target: guess_tinfo
// Target address:  0x4F1680
// GOT/IAT slot:    0x4ED388
// Slot symbol:     off_4ED388
// Target type:     <no type info>
// ============================================================

void .guess_tinfo(/* see target signature */)
{
    // Tail-call to guess_tinfo via GOT/IAT indirection
    return guess_tinfo(/* forwarded args */);
}

