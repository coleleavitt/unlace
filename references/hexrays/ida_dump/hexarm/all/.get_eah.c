// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E6A0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E6A0 jmp     cs:off_4E9B38
//
// Resolved target: get_eah
// Target address:  0x4EC560
// GOT/IAT slot:    0x4E9B38
// Slot symbol:     off_4E9B38
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

