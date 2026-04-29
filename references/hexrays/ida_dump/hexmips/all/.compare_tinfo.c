// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A0
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A0 jmp     cs:off_4CD438
//
// Resolved target: compare_tinfo
// Target address:  0x4CFE28
// GOT/IAT slot:    0x4CD438
// Slot symbol:     off_4CD438
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}

