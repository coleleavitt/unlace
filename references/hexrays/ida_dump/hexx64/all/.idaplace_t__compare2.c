// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C990
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C990 jmp     cs:off_4EDCB0
//
// Resolved target: idaplace_t__compare2
// Target address:  0x4F1FE8
// GOT/IAT slot:    0x4EDCB0
// Slot symbol:     off_4EDCB0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

