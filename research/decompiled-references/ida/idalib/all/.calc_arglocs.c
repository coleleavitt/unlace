// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A97E0
// Name:            .calc_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A97E0 jmp     cs:off_2C7A3D8
//
// Resolved target: calc_arglocs
// Target address:  0x6A9370
// GOT/IAT slot:    0x2C7A3D8
// Slot symbol:     off_2C7A3D8
// Target type:     <no type info>
// ============================================================

void .calc_arglocs(/* see target signature */)
{
    // Tail-call to calc_arglocs via GOT/IAT indirection
    return calc_arglocs(/* forwarded args */);
}

