// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8FB0
// Name:            .idaplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8FB0 jmp     cs:off_2C79FC0
//
// Resolved target: idaplace_t__compare
// Target address:  0x42AE40
// GOT/IAT slot:    0x2C79FC0
// Slot symbol:     off_2C79FC0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare(/* see target signature */)
{
    // Tail-call to idaplace_t__compare via GOT/IAT indirection
    return idaplace_t__compare(/* forwarded args */);
}

