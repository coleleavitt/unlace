// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111860
// Name:            .hexplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111860 jmp     cs:hexplace_t__leave_ptr
//
// Resolved target: hexplace_t__leave
// Target address:  0x8D3608
// GOT/IAT slot:    0x89F8D0
// Slot symbol:     hexplace_t__leave_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__leave(/* see target signature */)
{
    // Tail-call to hexplace_t__leave via GOT/IAT indirection
    return hexplace_t__leave(/* forwarded args */);
}

