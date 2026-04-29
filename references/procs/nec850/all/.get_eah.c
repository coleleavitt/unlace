// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9680
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9680 jmp     cs:off_2E328
//
// Resolved target: get_eah
// Target address:  0x2E998
// GOT/IAT slot:    0x2E328
// Slot symbol:     off_2E328
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

