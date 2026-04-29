// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A640
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A640 jmp     cs:off_4B9B08
//
// Resolved target: get_eah
// Target address:  0x4BC510
// GOT/IAT slot:    0x4B9B08
// Slot symbol:     off_4B9B08
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

