// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C0
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34C0 jmp     cs:off_14248
//
// Resolved target: split_sreg_range
// Target address:  0x14848
// GOT/IAT slot:    0x14248
// Slot symbol:     off_14248
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

