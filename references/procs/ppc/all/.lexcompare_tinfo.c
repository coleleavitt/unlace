// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x201A0
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x201A0 jmp     cs:off_950B8
//
// Resolved target: lexcompare_tinfo
// Target address:  0x95AE8
// GOT/IAT slot:    0x950B8
// Slot symbol:     off_950B8
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

