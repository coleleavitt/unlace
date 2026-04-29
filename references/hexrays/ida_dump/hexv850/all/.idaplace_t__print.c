// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7E0
// Name:            .idaplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7E0 jmp     cs:off_4C0BD8
//
// Resolved target: idaplace_t__print
// Target address:  0x4C3BE0
// GOT/IAT slot:    0x4C0BD8
// Slot symbol:     off_4C0BD8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__print(/* see target signature */)
{
    // Tail-call to idaplace_t__print via GOT/IAT indirection
    return idaplace_t__print(/* forwarded args */);
}

