// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D240
// Name:            .idaplace_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D240 jmp     cs:off_4E9108
//
// Resolved target: idaplace_t__generate
// Target address:  0x4EBAF8
// GOT/IAT slot:    0x4E9108
// Slot symbol:     off_4E9108
// Target type:     <no type info>
// ============================================================

void .idaplace_t__generate(/* see target signature */)
{
    // Tail-call to idaplace_t__generate via GOT/IAT indirection
    return idaplace_t__generate(/* forwarded args */);
}

