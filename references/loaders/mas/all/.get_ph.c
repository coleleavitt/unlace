// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_4090
//
// Resolved target: get_ph
// Target address:  0x45B0
// GOT/IAT slot:    0x4090
// Slot symbol:     off_4090
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

