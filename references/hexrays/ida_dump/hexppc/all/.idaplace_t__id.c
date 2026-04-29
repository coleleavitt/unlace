// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AFD0
// Name:            .idaplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AFD0 jmp     cs:off_4DA7D0
//
// Resolved target: idaplace_t__id
// Target address:  0x4DD1C8
// GOT/IAT slot:    0x4DA7D0
// Slot symbol:     off_4DA7D0
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .idaplace_t__id(/* see target signature */)
{
    // Tail-call to idaplace_t__id via GOT/IAT indirection
    return idaplace_t__id(/* forwarded args */);
}

