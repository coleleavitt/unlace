// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8290
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8290 jmp     cs:off_2C79930
//
// Resolved target: num_flag
// Target address:  0x3C5780
// GOT/IAT slot:    0x2C79930
// Slot symbol:     off_2C79930
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}

