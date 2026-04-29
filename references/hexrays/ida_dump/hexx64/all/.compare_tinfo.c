// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8E0
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8E0 jmp     cs:off_4ED458
//
// Resolved target: compare_tinfo
// Target address:  0x4F1750
// GOT/IAT slot:    0x4ED458
// Slot symbol:     off_4ED458
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}

