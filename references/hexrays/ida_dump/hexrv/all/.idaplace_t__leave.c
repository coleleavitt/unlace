// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2D0
// Name:            .idaplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2D0 jmp     cs:off_4BF950
//
// Resolved target: idaplace_t__leave
// Target address:  0x4C2E48
// GOT/IAT slot:    0x4BF950
// Slot symbol:     off_4BF950
// Target type:     <no type info>
// ============================================================

void .idaplace_t__leave(/* see target signature */)
{
    // Tail-call to idaplace_t__leave via GOT/IAT indirection
    return idaplace_t__leave(/* forwarded args */);
}

