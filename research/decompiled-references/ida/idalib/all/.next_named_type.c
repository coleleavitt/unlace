// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF10
// Name:            .next_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF10 jmp     cs:off_2C7B770
//
// Resolved target: next_named_type
// Target address:  0x64F800
// GOT/IAT slot:    0x2C7B770
// Slot symbol:     off_2C7B770
// Target type:     <no type info>
// ============================================================

void .next_named_type(/* see target signature */)
{
    // Tail-call to next_named_type via GOT/IAT indirection
    return next_named_type(/* forwarded args */);
}

