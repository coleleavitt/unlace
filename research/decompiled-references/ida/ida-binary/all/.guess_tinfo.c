// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118EE0
// Name:            .guess_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118EE0 jmp     cs:guess_tinfo_ptr
//
// Resolved target: guess_tinfo
// Target address:  0x8D8108
// GOT/IAT slot:    0x8A3410
// Slot symbol:     guess_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .guess_tinfo(/* see target signature */)
{
    // Tail-call to guess_tinfo via GOT/IAT indirection
    return guess_tinfo(/* forwarded args */);
}

