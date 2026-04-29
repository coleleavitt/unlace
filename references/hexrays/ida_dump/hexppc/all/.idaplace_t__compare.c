// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF70
// Name:            .idaplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF70 jmp     cs:off_4DA7A0
//
// Resolved target: idaplace_t__compare
// Target address:  0x4DD198
// GOT/IAT slot:    0x4DA7A0
// Slot symbol:     off_4DA7A0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare(/* see target signature */)
{
    // Tail-call to idaplace_t__compare via GOT/IAT indirection
    return idaplace_t__compare(/* forwarded args */);
}

