// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B560
// Name:            .calc_varglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B560 jmp     cs:off_4ED298
//
// Resolved target: calc_varglocs
// Target address:  0x4F1590
// GOT/IAT slot:    0x4ED298
// Slot symbol:     off_4ED298
// Target type:     <no type info>
// ============================================================

void .calc_varglocs(/* see target signature */)
{
    // Tail-call to calc_varglocs via GOT/IAT indirection
    return calc_varglocs(/* forwarded args */);
}

