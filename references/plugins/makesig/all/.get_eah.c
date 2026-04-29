// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3420
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3420 jmp     cs:off_201F8
//
// Resolved target: get_eah
// Target address:  0x21B18
// GOT/IAT slot:    0x201F8
// Slot symbol:     off_201F8
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

