// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B820
// Name:            .idaplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B820 jmp     cs:off_4ED3F8
//
// Resolved target: idaplace_t__toea
// Target address:  0x4F16F0
// GOT/IAT slot:    0x4ED3F8
// Slot symbol:     off_4ED3F8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__toea(/* see target signature */)
{
    // Tail-call to idaplace_t__toea via GOT/IAT indirection
    return idaplace_t__toea(/* forwarded args */);
}

