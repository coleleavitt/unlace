// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AADD0
// Name:            .calc_prefix_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AADD0 jmp     cs:off_2C7AED0
//
// Resolved target: calc_prefix_color
// Target address:  0x42A740
// GOT/IAT slot:    0x2C7AED0
// Slot symbol:     off_2C7AED0
// Target type:     <no type info>
// ============================================================

void .calc_prefix_color(/* see target signature */)
{
    // Tail-call to calc_prefix_color via GOT/IAT indirection
    return calc_prefix_color(/* forwarded args */);
}

