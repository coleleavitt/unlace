// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11F0 jmp     cs:off_50E0
//
// Resolved target: get_eah
// Target address:  0x5328
// GOT/IAT slot:    0x50E0
// Slot symbol:     off_50E0
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

