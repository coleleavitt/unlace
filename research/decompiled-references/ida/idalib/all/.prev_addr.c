// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB590
// Name:            .prev_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB590 jmp     cs:off_2C7B2B0
//
// Resolved target: prev_addr
// Target address:  0x3BD4D0
// GOT/IAT slot:    0x2C7B2B0
// Slot symbol:     off_2C7B2B0
// Target type:     <no type info>
// ============================================================

void .prev_addr(/* see target signature */)
{
    // Tail-call to prev_addr via GOT/IAT indirection
    return prev_addr(/* forwarded args */);
}

