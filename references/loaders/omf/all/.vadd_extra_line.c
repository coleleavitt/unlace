// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31D0
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31D0 jmp     cs:off_140D0
//
// Resolved target: vadd_extra_line
// Target address:  0x146B8
// GOT/IAT slot:    0x140D0
// Slot symbol:     off_140D0
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

