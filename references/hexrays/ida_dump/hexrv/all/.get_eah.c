// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B660
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B660 jmp     cs:off_4BFB18
//
// Resolved target: get_eah
// Target address:  0x4C3018
// GOT/IAT slot:    0x4BFB18
// Slot symbol:     off_4BFB18
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

