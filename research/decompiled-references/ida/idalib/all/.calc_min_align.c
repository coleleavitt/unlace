// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA9C0
// Name:            .calc_min_align
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA9C0 jmp     cs:off_2C7ACC8
//
// Resolved target: calc_min_align
// Target address:  0x3C4180
// GOT/IAT slot:    0x2C7ACC8
// Slot symbol:     off_2C7ACC8
// Target type:     <no type info>
// ============================================================

void .calc_min_align(/* see target signature */)
{
    // Tail-call to calc_min_align via GOT/IAT indirection
    return calc_min_align(/* forwarded args */);
}

