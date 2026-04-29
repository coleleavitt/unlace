// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6530
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6530 jmp     cs:off_8D280
//
// Resolved target: get_eah
// Target address:  0x8D820
// GOT/IAT slot:    0x8D280
// Slot symbol:     off_8D280
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

