// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D4A0
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D4A0 jmp     cs:off_4E9238
//
// Resolved target: get_tinfo_tid
// Target address:  0x4EBC28
// GOT/IAT slot:    0x4E9238
// Slot symbol:     off_4E9238
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

