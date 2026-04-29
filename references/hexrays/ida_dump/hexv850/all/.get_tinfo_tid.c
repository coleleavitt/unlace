// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A490
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A490 jmp     cs:off_4C0230
//
// Resolved target: get_tinfo_tid
// Target address:  0x4C31F8
// GOT/IAT slot:    0x4C0230
// Slot symbol:     off_4C0230
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

