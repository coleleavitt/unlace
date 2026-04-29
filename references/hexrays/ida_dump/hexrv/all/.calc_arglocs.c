// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0E0
// Name:            .calc_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0E0 jmp     cs:off_4C0058
//
// Resolved target: calc_arglocs
// Target address:  0x4C3588
// GOT/IAT slot:    0x4C0058
// Slot symbol:     off_4C0058
// Target type:     <no type info>
// ============================================================

void .calc_arglocs(/* see target signature */)
{
    // Tail-call to calc_arglocs via GOT/IAT indirection
    return calc_arglocs(/* forwarded args */);
}

