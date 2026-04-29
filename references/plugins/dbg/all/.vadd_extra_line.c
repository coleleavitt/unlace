// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31B0
// Name:            .vadd_extra_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31B0 jmp     cs:off_130C0
//
// Resolved target: vadd_extra_line
// Target address:  0x13438
// GOT/IAT slot:    0x130C0
// Slot symbol:     off_130C0
// Target type:     <no type info>
// ============================================================

void .vadd_extra_line(/* see target signature */)
{
    // Tail-call to vadd_extra_line via GOT/IAT indirection
    return vadd_extra_line(/* forwarded args */);
}

