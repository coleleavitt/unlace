// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8BA0
// Name:            .idaplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8BA0 jmp     cs:off_2C79DB8
//
// Resolved target: idaplace_t__deserialize
// Target address:  0x42AA20
// GOT/IAT slot:    0x2C79DB8
// Slot symbol:     off_2C79DB8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to idaplace_t__deserialize via GOT/IAT indirection
    return idaplace_t__deserialize(/* forwarded args */);
}

