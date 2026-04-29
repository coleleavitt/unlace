// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85E0
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85E0 jmp     cs:off_2A2D8
//
// Resolved target: split_sreg_range
// Target address:  0x2A850
// GOT/IAT slot:    0x2A2D8
// Slot symbol:     off_2A2D8
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

