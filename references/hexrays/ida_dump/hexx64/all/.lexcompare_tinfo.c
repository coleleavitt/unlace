// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B340
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B340 jmp     cs:off_4ED188
//
// Resolved target: lexcompare_tinfo
// Target address:  0x4F1480
// GOT/IAT slot:    0x4ED188
// Slot symbol:     off_4ED188
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

