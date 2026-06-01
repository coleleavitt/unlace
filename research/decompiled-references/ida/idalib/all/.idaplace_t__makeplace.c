// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD870
// Name:            .idaplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD870 jmp     cs:off_2C7C420
//
// Resolved target: idaplace_t__makeplace
// Target address:  0x42A810
// GOT/IAT slot:    0x2C7C420
// Slot symbol:     off_2C7C420
// Target type:     <no type info>
// ============================================================

void .idaplace_t__makeplace(/* see target signature */)
{
    // Tail-call to idaplace_t__makeplace via GOT/IAT indirection
    return idaplace_t__makeplace(/* forwarded args */);
}

