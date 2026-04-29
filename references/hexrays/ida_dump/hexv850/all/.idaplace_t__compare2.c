// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8B0
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8B0 jmp     cs:off_4C0C40
//
// Resolved target: idaplace_t__compare2
// Target address:  0x4C3C50
// GOT/IAT slot:    0x4C0C40
// Slot symbol:     off_4C0C40
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

