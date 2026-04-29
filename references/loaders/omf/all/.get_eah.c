// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3470
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3470 jmp     cs:off_14220
//
// Resolved target: get_eah
// Target address:  0x14818
// GOT/IAT slot:    0x14220
// Slot symbol:     off_14220
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

