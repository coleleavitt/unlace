// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10240
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10240 jmp     cs:off_2E108
//
// Resolved target: get_eah
// Target address:  0x36D80
// GOT/IAT slot:    0x2E108
// Slot symbol:     off_2E108
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

