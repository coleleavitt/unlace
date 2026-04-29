// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29330
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29330 jmp     cs:off_4B9180
//
// Resolved target: lexcompare_tinfo
// Target address:  0x4BBB50
// GOT/IAT slot:    0x4B9180
// Slot symbol:     off_4B9180
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

