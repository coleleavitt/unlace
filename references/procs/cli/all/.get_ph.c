// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_1A188
//
// Resolved target: get_ph
// Target address:  0x1A458
// GOT/IAT slot:    0x1A188
// Slot symbol:     off_1A188
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

