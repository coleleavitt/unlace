// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A81D0
// Name:            .align_up_to_stack
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A81D0 jmp     cs:off_2C798D0
//
// Resolved target: align_up_to_stack
// Target address:  0x42A430
// GOT/IAT slot:    0x2C798D0
// Slot symbol:     off_2C798D0
// Target type:     <no type info>
// ============================================================

void .align_up_to_stack(/* see target signature */)
{
    // Tail-call to align_up_to_stack via GOT/IAT indirection
    return align_up_to_stack(/* forwarded args */);
}

