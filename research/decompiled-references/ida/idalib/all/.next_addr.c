// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9650
// Name:            .next_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9650 jmp     cs:off_2C7A310
//
// Resolved target: next_addr
// Target address:  0x3BD350
// GOT/IAT slot:    0x2C7A310
// Slot symbol:     off_2C7A310
// Target type:     <no type info>
// ============================================================

void .next_addr(/* see target signature */)
{
    // Tail-call to next_addr via GOT/IAT indirection
    return next_addr(/* forwarded args */);
}

