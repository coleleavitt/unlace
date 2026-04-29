// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D8B0
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D8B0 jmp     cs:off_4E9440
//
// Resolved target: compare_tinfo
// Target address:  0x4EBE30
// GOT/IAT slot:    0x4E9440
// Slot symbol:     off_4E9440
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}

