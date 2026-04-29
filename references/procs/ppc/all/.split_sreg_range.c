// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B90
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B90 jmp     cs:off_955B0
//
// Resolved target: split_sreg_range
// Target address:  0x95FF0
// GOT/IAT slot:    0x955B0
// Slot symbol:     off_955B0
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

