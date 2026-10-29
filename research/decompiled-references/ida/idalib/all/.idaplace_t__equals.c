// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD8C0
// Name:            .idaplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD8C0 jmp     cs:off_2C7C448
//
// Resolved target: idaplace_t__equals
// Target address:  0x42AE70
// GOT/IAT slot:    0x2C7C448
// Slot symbol:     off_2C7C448
// Target type:     <no type info>
// ============================================================

void .idaplace_t__equals(/* see target signature */)
{
    // Tail-call to idaplace_t__equals via GOT/IAT indirection
    return idaplace_t__equals(/* forwarded args */);
}

