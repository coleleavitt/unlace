// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8470
// Name:            .idaplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8470 jmp     cs:off_2C79A20
//
// Resolved target: idaplace_t__clone
// Target address:  0x42A7D0
// GOT/IAT slot:    0x2C79A20
// Slot symbol:     off_2C79A20
// Target type:     <no type info>
// ============================================================

void .idaplace_t__clone(/* see target signature */)
{
    // Tail-call to idaplace_t__clone via GOT/IAT indirection
    return idaplace_t__clone(/* forwarded args */);
}

