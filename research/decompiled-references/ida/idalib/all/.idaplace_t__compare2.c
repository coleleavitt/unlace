// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA920
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA920 jmp     cs:off_2C7AC78
//
// Resolved target: idaplace_t__compare2
// Target address:  0x42AE60
// GOT/IAT slot:    0x2C7AC78
// Slot symbol:     off_2C7AC78
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

