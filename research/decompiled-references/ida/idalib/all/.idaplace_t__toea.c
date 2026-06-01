// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC3B0
// Name:            .idaplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC3B0 jmp     cs:off_2C7B9C0
//
// Resolved target: idaplace_t__toea
// Target address:  0x42AB60
// GOT/IAT slot:    0x2C7B9C0
// Slot symbol:     off_2C7B9C0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__toea(/* see target signature */)
{
    // Tail-call to idaplace_t__toea via GOT/IAT indirection
    return idaplace_t__toea(/* forwarded args */);
}

