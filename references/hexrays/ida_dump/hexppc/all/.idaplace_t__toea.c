// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F0
// Name:            .idaplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F0 jmp     cs:off_4DA3E0
//
// Resolved target: idaplace_t__toea
// Target address:  0x4DCDB0
// GOT/IAT slot:    0x4DA3E0
// Slot symbol:     off_4DA3E0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__toea(/* see target signature */)
{
    // Tail-call to idaplace_t__toea via GOT/IAT indirection
    return idaplace_t__toea(/* forwarded args */);
}

