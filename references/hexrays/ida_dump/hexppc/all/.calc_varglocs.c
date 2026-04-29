// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A550
// Name:            .calc_varglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A550 jmp     cs:off_4DA290
//
// Resolved target: calc_varglocs
// Target address:  0x4DCC60
// GOT/IAT slot:    0x4DA290
// Slot symbol:     off_4DA290
// Target type:     <no type info>
// ============================================================

void .calc_varglocs(/* see target signature */)
{
    // Tail-call to calc_varglocs via GOT/IAT indirection
    return calc_varglocs(/* forwarded args */);
}

