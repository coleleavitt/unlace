// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC9D0
// Name:            .get_tinfo_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC9D0 jmp     cs:off_2C7BCD0
//
// Resolved target: get_tinfo_tid
// Target address:  0x54F250
// GOT/IAT slot:    0x2C7BCD0
// Slot symbol:     off_2C7BCD0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_tid(/* see target signature */)
{
    // Tail-call to get_tinfo_tid via GOT/IAT indirection
    return get_tinfo_tid(/* forwarded args */);
}

