// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6110
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6110 jmp     cs:off_1D070
//
// Resolved target: get_spd
// Target address:  0x1D560
// GOT/IAT slot:    0x1D070
// Slot symbol:     off_1D070
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

