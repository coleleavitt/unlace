// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B10
// Name:            .idaplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B10 jmp     cs:off_2C7A570
//
// Resolved target: idaplace_t__leave
// Target address:  0x42ADB0
// GOT/IAT slot:    0x2C7A570
// Slot symbol:     off_2C7A570
// Target type:     <no type info>
// ============================================================

void .idaplace_t__leave(/* see target signature */)
{
    // Tail-call to idaplace_t__leave via GOT/IAT indirection
    return idaplace_t__leave(/* forwarded args */);
}

