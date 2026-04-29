// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A10
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A10 jmp     cs:off_754F0
//
// Resolved target: split_sreg_range
// Target address:  0x75D48
// GOT/IAT slot:    0x754F0
// Slot symbol:     off_754F0
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

