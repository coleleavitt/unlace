// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D800
// Name:            .idaplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D800 jmp     cs:off_4E93E8
//
// Resolved target: idaplace_t__toea
// Target address:  0x4EBDD8
// GOT/IAT slot:    0x4E93E8
// Slot symbol:     off_4E93E8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__toea(/* see target signature */)
{
    // Tail-call to idaplace_t__toea via GOT/IAT indirection
    return idaplace_t__toea(/* forwarded args */);
}

