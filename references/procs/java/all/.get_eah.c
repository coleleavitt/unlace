// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6540
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6540 jmp     cs:off_2D288
//
// Resolved target: get_eah
// Target address:  0x2D788
// GOT/IAT slot:    0x2D288
// Slot symbol:     off_2D288
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

