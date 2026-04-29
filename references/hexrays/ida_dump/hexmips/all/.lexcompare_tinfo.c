// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A330
// Name:            .lexcompare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A330 jmp     cs:off_4CD180
//
// Resolved target: lexcompare_tinfo
// Target address:  0x4CFB70
// GOT/IAT slot:    0x4CD180
// Slot symbol:     off_4CD180
// Target type:     <no type info>
// ============================================================

void .lexcompare_tinfo(/* see target signature */)
{
    // Tail-call to lexcompare_tinfo via GOT/IAT indirection
    return lexcompare_tinfo(/* forwarded args */);
}

