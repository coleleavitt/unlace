// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3D0
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3D0 jmp     cs:off_4BF1D0
//
// Resolved target: get_spd
// Target address:  0x4C2698
// GOT/IAT slot:    0x4BF1D0
// Slot symbol:     off_4BF1D0
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

