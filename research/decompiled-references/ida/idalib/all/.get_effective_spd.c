// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC360
// Name:            .get_effective_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC360 jmp     cs:off_2C7B998
//
// Resolved target: get_effective_spd
// Target address:  0x5B9480
// GOT/IAT slot:    0x2C7B998
// Slot symbol:     off_2C7B998
// Target type:     <no type info>
// ============================================================

void .get_effective_spd(/* see target signature */)
{
    // Tail-call to get_effective_spd via GOT/IAT indirection
    return get_effective_spd(/* forwarded args */);
}

