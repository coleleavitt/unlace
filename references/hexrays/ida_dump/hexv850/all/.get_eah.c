// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B670
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B670 jmp     cs:off_4C0B20
//
// Resolved target: get_eah
// Target address:  0x4C3B20
// GOT/IAT slot:    0x4C0B20
// Slot symbol:     off_4C0B20
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

