// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2350
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2350 jmp     cs:off_A190
//
// Resolved target: get_ph
// Target address:  0xA458
// GOT/IAT slot:    0xA190
// Slot symbol:     off_A190
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

