// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA630
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA630 jmp     cs:off_2C7AB00
//
// Resolved target: compare_tinfo
// Target address:  0x552F20
// GOT/IAT slot:    0x2C7AB00
// Slot symbol:     off_2C7AB00
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}

