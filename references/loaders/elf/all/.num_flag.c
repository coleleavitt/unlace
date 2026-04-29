// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9980
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9980 jmp     cs:off_894A8
//
// Resolved target: num_flag
// Target address:  0x8C7D8
// GOT/IAT slot:    0x894A8
// Slot symbol:     off_894A8
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}

