// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_A118
//
// Resolved target: get_eah
// Target address:  0xB3E8
// GOT/IAT slot:    0xA118
// Slot symbol:     off_A118
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

