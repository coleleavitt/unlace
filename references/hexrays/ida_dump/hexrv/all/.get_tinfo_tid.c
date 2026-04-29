// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A490
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A490 jmp     cs:off_4BF230
//
// Resolved target: get_tinfo_tid
// Target address:  0x4C26F8
// GOT/IAT slot:    0x4BF230
// Slot symbol:     off_4BF230
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

