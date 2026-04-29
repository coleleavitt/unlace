// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D560
// Name:            .calc_varglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D560 jmp     cs:off_4E9298
//
// Resolved target: calc_varglocs
// Target address:  0x4EBC88
// GOT/IAT slot:    0x4E9298
// Slot symbol:     off_4E9298
// Target type:     <no type info>
// ============================================================

void .calc_varglocs(/* see target signature */)
{
    // Tail-call to calc_varglocs via GOT/IAT indirection
    return calc_varglocs(/* forwarded args */);
}

