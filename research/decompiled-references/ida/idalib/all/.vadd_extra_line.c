// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A71D0
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A71D0 jmp     cs:off_2C790D0
//
// Resolved target: vadd_extra_line
// Target address:  0x63E9F0
// GOT/IAT slot:    0x2C790D0
// Slot symbol:     off_2C790D0
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

