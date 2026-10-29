// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114870
// Name:            .hexplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114870 jmp     cs:hexplace_t__toea_ptr
//
// Resolved target: hexplace_t__toea
// Target address:  0x8D54D8
// GOT/IAT slot:    0x8A10D8
// Slot symbol:     hexplace_t__toea_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__toea(/* see target signature */)
{
    // Tail-call to hexplace_t__toea via GOT/IAT indirection
    return hexplace_t__toea(/* forwarded args */);
}

