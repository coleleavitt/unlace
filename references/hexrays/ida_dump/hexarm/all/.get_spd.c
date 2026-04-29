// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3E0
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3E0 jmp     cs:off_4E91D8
//
// Resolved target: get_spd
// Target address:  0x4EBBC8
// GOT/IAT slot:    0x4E91D8
// Slot symbol:     off_4E91D8
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

