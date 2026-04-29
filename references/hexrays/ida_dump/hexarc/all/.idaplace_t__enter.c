// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A930
// Name:            .idaplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A930 jmp     cs:off_4B9C80
//
// Resolved target: idaplace_t__enter
// Target address:  0x4BC698
// GOT/IAT slot:    0x4B9C80
// Slot symbol:     off_4B9C80
// Target type:     <no type info>
// ============================================================

void .idaplace_t__enter(/* see target signature */)
{
    // Tail-call to idaplace_t__enter via GOT/IAT indirection
    return idaplace_t__enter(/* forwarded args */);
}

