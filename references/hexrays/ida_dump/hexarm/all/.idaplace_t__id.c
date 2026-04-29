// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DFF0
// Name:            .idaplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DFF0 jmp     cs:off_4E97E0
//
// Resolved target: idaplace_t__id
// Target address:  0x4EC1F8
// GOT/IAT slot:    0x4E97E0
// Slot symbol:     off_4E97E0
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .idaplace_t__id(/* see target signature */)
{
    // Tail-call to idaplace_t__id via GOT/IAT indirection
    return idaplace_t__id(/* forwarded args */);
}

