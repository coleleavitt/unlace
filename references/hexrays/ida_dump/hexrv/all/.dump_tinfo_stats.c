// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD60
// Name:            .dump_tinfo_stats
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD60 jmp     cs:off_4BFE98
//
// Resolved target: dump_tinfo_stats
// Target address:  0x4C33C0
// GOT/IAT slot:    0x4BFE98
// Slot symbol:     off_4BFE98
// Target type:     <no type info>
// ============================================================

void .dump_tinfo_stats(/* see target signature */)
{
    // Tail-call to dump_tinfo_stats via GOT/IAT indirection
    return dump_tinfo_stats(/* forwarded args */);
}

