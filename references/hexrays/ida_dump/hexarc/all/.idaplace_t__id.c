// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29FC0
// Name:            .idaplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29FC0 jmp     cs:off_4B97C8
//
// Resolved target: idaplace_t__id
// Target address:  0x4BC1C0
// GOT/IAT slot:    0x4B97C8
// Slot symbol:     off_4B97C8
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .idaplace_t__id(/* see target signature */)
{
    // Tail-call to idaplace_t__id via GOT/IAT indirection
    return idaplace_t__id(/* forwarded args */);
}

