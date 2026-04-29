// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C040
// Name:            .idaplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C040 jmp     cs:off_4ED808
//
// Resolved target: idaplace_t__id
// Target address:  0x4F1B18
// GOT/IAT slot:    0x4ED808
// Slot symbol:     off_4ED808
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ .idaplace_t__id(/* see target signature */)
{
    // Tail-call to idaplace_t__id via GOT/IAT indirection
    return idaplace_t__id(/* forwarded args */);
}

