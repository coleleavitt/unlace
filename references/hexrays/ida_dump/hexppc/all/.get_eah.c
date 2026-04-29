// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B660
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B660 jmp     cs:off_4DAB18
//
// Resolved target: get_eah
// Target address:  0x4DD520
// GOT/IAT slot:    0x4DAB18
// Slot symbol:     off_4DAB18
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

