// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C730
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C730 jmp     cs:off_4EDB80
//
// Resolved target: get_eah
// Target address:  0x4F1EB0
// GOT/IAT slot:    0x4EDB80
// Slot symbol:     off_4EDB80
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

