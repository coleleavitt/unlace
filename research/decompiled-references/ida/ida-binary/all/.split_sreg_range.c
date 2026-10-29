// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113C10
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113C10 jmp     cs:split_sreg_range_ptr
//
// Resolved target: split_sreg_range
// Target address:  0x8D4CF8
// GOT/IAT slot:    0x8A0AA8
// Slot symbol:     split_sreg_range_ptr
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

