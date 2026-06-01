// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A87A0
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A87A0 jmp     cs:off_2C79BB8
//
// Resolved target: idaplace_t__name
// Target address:  0x42AB50
// GOT/IAT slot:    0x2C79BB8
// Slot symbol:     off_2C79BB8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

