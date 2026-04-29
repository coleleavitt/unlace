// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6D0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6D0 jmp     cs:off_35350
//
// Resolved target: get_eah
// Target address:  0x359A0
// GOT/IAT slot:    0x35350
// Slot symbol:     off_35350
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

