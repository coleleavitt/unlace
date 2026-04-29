// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7530
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7530 jmp     cs:off_19280
//
// Resolved target: get_eah
// Target address:  0x197B0
// GOT/IAT slot:    0x19280
// Slot symbol:     off_19280
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

