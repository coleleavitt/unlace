// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A330
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A330 jmp     cs:off_4BF180
//
// Resolved target: lexcompare_tinfo
// Target address:  0x4C2648
// GOT/IAT slot:    0x4BF180
// Slot symbol:     off_4BF180
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

