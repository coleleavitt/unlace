// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8A0
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8A0 jmp     cs:off_4BFC38
//
// Resolved target: idaplace_t__compare2
// Target address:  0x4C3148
// GOT/IAT slot:    0x4BFC38
// Slot symbol:     off_4BFC38
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

