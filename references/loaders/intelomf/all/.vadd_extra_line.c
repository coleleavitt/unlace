// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_5038
//
// Resolved target: vadd_extra_line
// Target address:  0x5280
// GOT/IAT slot:    0x5038
// Slot symbol:     off_5038
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

