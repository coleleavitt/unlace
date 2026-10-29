// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8CF0
// Name:            .split_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8CF0 jmp     cs:off_2C79E60
//
// Resolved target: split_sreg_range
// Target address:  0x51CA60
// GOT/IAT slot:    0x2C79E60
// Slot symbol:     off_2C79E60
// Target type:     <no type info>
// ============================================================

void .split_sreg_range(/* see target signature */)
{
    // Tail-call to split_sreg_range via GOT/IAT indirection
    return split_sreg_range(/* forwarded args */);
}

