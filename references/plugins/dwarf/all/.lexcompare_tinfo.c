// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA130
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA130 jmp     cs:off_CA080
//
// Resolved target: lexcompare_tinfo
// Target address:  0xD09A0
// GOT/IAT slot:    0xCA080
// Slot symbol:     off_CA080
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

