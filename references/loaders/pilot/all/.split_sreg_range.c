// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_8120
//
// Resolved target: split_sreg_range
// Target address:  0x8300
// GOT/IAT slot:    0x8120
// Slot symbol:     off_8120
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

