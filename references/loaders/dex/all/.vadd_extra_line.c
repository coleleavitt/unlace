// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_280F8
//
// Resolved target: vadd_extra_line
// Target address:  0x285A8
// GOT/IAT slot:    0x280F8
// Slot symbol:     off_280F8
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

