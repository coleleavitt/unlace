// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB860
// Name:            .calc_varglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB860 jmp     cs:off_2C7B418
//
// Resolved target: calc_varglocs
// Target address:  0x6A9400
// GOT/IAT slot:    0x2C7B418
// Slot symbol:     off_2C7B418
// Target type:     <no type info>
// ============================================================

void .calc_varglocs(/* see target signature */)
{
    // Tail-call to calc_varglocs via GOT/IAT indirection
    return calc_varglocs(/* forwarded args */);
}

