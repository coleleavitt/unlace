// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A92C0
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A92C0 jmp     cs:off_2C7A148
//
// Resolved target: lexcompare_tinfo
// Target address:  0x549020
// GOT/IAT slot:    0x2C7A148
// Slot symbol:     off_2C7A148
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

