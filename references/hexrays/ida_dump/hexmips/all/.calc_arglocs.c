// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0F0
// Name:            .calc_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0F0 jmp     cs:off_4CE060
//
// Resolved target: calc_arglocs
// Target address:  0x4D0AB8
// GOT/IAT slot:    0x4CE060
// Slot symbol:     off_4CE060
// Target type:     <no type info>
// ============================================================

void .calc_arglocs(/* see target signature */)
{
    // Tail-call to calc_arglocs via GOT/IAT indirection
    return calc_arglocs(/* forwarded args */);
}

