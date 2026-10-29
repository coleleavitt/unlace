// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B80
// Name:            .idaplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B80 jmp     cs:idaplace_t__id_ptr
//
// Resolved target: idaplace_t__id
// Target address:  0x8D5718
// GOT/IAT slot:    0x8A1260
// Slot symbol:     idaplace_t__id_ptr
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .idaplace_t__id(/* see target signature */)
{
    // Tail-call to idaplace_t__id via GOT/IAT indirection
    return idaplace_t__id(/* forwarded args */);
}

