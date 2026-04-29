// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_B080
//
// Resolved target: vadd_extra_line
// Target address:  0xB328
// GOT/IAT slot:    0xB080
// Slot symbol:     off_B080
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

