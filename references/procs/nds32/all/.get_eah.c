// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8530
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8530 jmp     cs:off_2A280
//
// Resolved target: get_eah
// Target address:  0x2A7F0
// GOT/IAT slot:    0x2A280
// Slot symbol:     off_2A280
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

