// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3350
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3350 jmp     cs:off_29190
//
// Resolved target: get_eah
// Target address:  0x29540
// GOT/IAT slot:    0x29190
// Slot symbol:     off_29190
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

