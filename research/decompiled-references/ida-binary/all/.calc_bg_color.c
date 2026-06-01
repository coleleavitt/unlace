// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114290
// Name:            .calc_bg_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114290 jmp     cs:calc_bg_color_ptr
//
// Resolved target: calc_bg_color
// Target address:  0x8D50F0
// GOT/IAT slot:    0x8A0DE8
// Slot symbol:     calc_bg_color_ptr
// Target type:     <no type info>
// ============================================================

void .calc_bg_color(/* see target signature */)
{
    // Tail-call to calc_bg_color via GOT/IAT indirection
    return calc_bg_color(/* forwarded args */);
}

