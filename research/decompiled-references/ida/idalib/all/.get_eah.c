// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9520
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9520 jmp     cs:off_2C7A278
//
// Resolved target: get_eah
// Target address:  0x3FB8D0
// GOT/IAT slot:    0x2C7A278
// Slot symbol:     off_2C7A278
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

