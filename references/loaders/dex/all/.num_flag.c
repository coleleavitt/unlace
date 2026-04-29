// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36E0
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36E0 jmp     cs:off_28358
//
// Resolved target: num_flag
// Target address:  0x28820
// GOT/IAT slot:    0x28358
// Slot symbol:     off_28358
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}

