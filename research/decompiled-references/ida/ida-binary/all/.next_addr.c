// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114910
// Name:            .next_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114910 jmp     cs:next_addr_ptr
//
// Resolved target: next_addr
// Target address:  0x8D5560
// GOT/IAT slot:    0x8A1128
// Slot symbol:     next_addr_ptr
// Target type:     <no type info>
// ============================================================

void .next_addr(/* see target signature */)
{
    // Tail-call to next_addr via GOT/IAT indirection
    return next_addr(/* forwarded args */);
}

