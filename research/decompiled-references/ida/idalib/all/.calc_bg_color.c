// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9150
// Name:            .calc_bg_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9150 jmp     cs:off_2C7A090
//
// Resolved target: calc_bg_color
// Target address:  0x42A650
// GOT/IAT slot:    0x2C7A090
// Slot symbol:     off_2C7A090
// Target type:     <no type info>
// ============================================================

void .calc_bg_color(/* see target signature */)
{
    // Tail-call to calc_bg_color via GOT/IAT indirection
    return calc_bg_color(/* forwarded args */);
}

