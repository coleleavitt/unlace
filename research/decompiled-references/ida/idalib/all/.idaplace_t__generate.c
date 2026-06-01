// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F40
// Name:            .idaplace_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F40 jmp     cs:off_2C7A788
//
// Resolved target: idaplace_t__generate
// Target address:  0x42A760
// GOT/IAT slot:    0x2C7A788
// Slot symbol:     off_2C7A788
// Target type:     <no type info>
// ============================================================

void .idaplace_t__generate(/* see target signature */)
{
    // Tail-call to idaplace_t__generate via GOT/IAT indirection
    return idaplace_t__generate(/* forwarded args */);
}

