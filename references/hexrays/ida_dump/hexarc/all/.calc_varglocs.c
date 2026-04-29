// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29550
// Name:            .calc_varglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29550 jmp     cs:off_4B9290
//
// Resolved target: calc_varglocs
// Target address:  0x4BBC60
// GOT/IAT slot:    0x4B9290
// Slot symbol:     off_4B9290
// Target type:     <no type info>
// ============================================================

void .calc_varglocs(/* see target signature */)
{
    // Tail-call to calc_varglocs via GOT/IAT indirection
    return calc_varglocs(/* forwarded args */);
}

