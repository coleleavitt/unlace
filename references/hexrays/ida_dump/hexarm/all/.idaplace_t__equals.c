// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D4D0
// Name:            .idaplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D4D0 jmp     cs:off_4E9250
//
// Resolved target: idaplace_t__equals
// Target address:  0x4EBC40
// GOT/IAT slot:    0x4E9250
// Slot symbol:     off_4E9250
// Target type:     <no type info>
// ============================================================

void .idaplace_t__equals(/* see target signature */)
{
    // Tail-call to idaplace_t__equals via GOT/IAT indirection
    return idaplace_t__equals(/* forwarded args */);
}

