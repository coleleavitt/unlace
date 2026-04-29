// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A850
// Name:            .idaplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A850 jmp     cs:off_4DA410
//
// Resolved target: idaplace_t__makeplace
// Target address:  0x4DCDE0
// GOT/IAT slot:    0x4DA410
// Slot symbol:     off_4DA410
// Target type:     <no type info>
// ============================================================

void .idaplace_t__makeplace(/* see target signature */)
{
    // Tail-call to idaplace_t__makeplace via GOT/IAT indirection
    return idaplace_t__makeplace(/* forwarded args */);
}

