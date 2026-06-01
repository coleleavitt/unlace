// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1144E0
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1144E0 jmp     cs:lexcompare_tinfo_ptr
//
// Resolved target: lexcompare_tinfo
// Target address:  0x8D5270
// GOT/IAT slot:    0x8A0F10
// Slot symbol:     lexcompare_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

