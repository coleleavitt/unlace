// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAAE0
// Name:            .idaplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAAE0 jmp     cs:off_2C7AD58
//
// Resolved target: idaplace_t__next
// Target address:  0x42A490
// GOT/IAT slot:    0x2C7AD58
// Slot symbol:     off_2C7AD58
// Target type:     <no type info>
// ============================================================

void .idaplace_t__next(/* see target signature */)
{
    // Tail-call to idaplace_t__next via GOT/IAT indirection
    return idaplace_t__next(/* forwarded args */);
}

