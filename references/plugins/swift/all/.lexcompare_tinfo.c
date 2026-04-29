// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40F0
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40F0 jmp     cs:off_28060
//
// Resolved target: lexcompare_tinfo
// Target address:  0x299F0
// GOT/IAT slot:    0x28060
// Slot symbol:     off_28060
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

