// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8000
// Name:            .set_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8000 jmp     cs:off_2C797E8
//
// Resolved target: set_abits
// Target address:  0x3D1FD0
// GOT/IAT slot:    0x2C797E8
// Slot symbol:     off_2C797E8
// Target type:     <no type info>
// ============================================================

void .set_abits(/* see target signature */)
{
    // Tail-call to set_abits via GOT/IAT indirection
    return set_abits(/* forwarded args */);
}

