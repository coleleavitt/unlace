// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A91D0
// Name:            .idaplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A91D0 jmp     cs:off_2C7A0D0
//
// Resolved target: idaplace_t__serialize
// Target address:  0x42A840
// GOT/IAT slot:    0x2C7A0D0
// Slot symbol:     off_2C7A0D0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__serialize(/* see target signature */)
{
    // Tail-call to idaplace_t__serialize via GOT/IAT indirection
    return idaplace_t__serialize(/* forwarded args */);
}

