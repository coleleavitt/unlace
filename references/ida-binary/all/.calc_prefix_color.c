// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117350
// Name:            .calc_prefix_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117350 jmp     cs:calc_prefix_color_ptr
//
// Resolved target: calc_prefix_color
// Target address:  0x8D7018
// GOT/IAT slot:    0x8A2648
// Slot symbol:     calc_prefix_color_ptr
// Target type:     <no type info>
// ============================================================

void .calc_prefix_color(/* see target signature */)
{
    // Tail-call to calc_prefix_color via GOT/IAT indirection
    return calc_prefix_color(/* forwarded args */);
}

