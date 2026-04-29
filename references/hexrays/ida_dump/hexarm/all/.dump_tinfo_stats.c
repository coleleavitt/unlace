// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EDA0
// Name:            .dump_tinfo_stats
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EDA0 jmp     cs:off_4E9EB8
//
// Resolved target: dump_tinfo_stats
// Target address:  0x4EC908
// GOT/IAT slot:    0x4E9EB8
// Slot symbol:     off_4E9EB8
// Target type:     <no type info>
// ============================================================

void .dump_tinfo_stats(/* see target signature */)
{
    // Tail-call to dump_tinfo_stats via GOT/IAT indirection
    return dump_tinfo_stats(/* forwarded args */);
}

