// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE30
// Name:            .idaplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE30 jmp     cs:off_4CDF00
//
// Resolved target: idaplace_t__deserialize
// Target address:  0x4D0950
// GOT/IAT slot:    0x4CDF00
// Slot symbol:     off_4CDF00
// Target type:     <no type info>
// ============================================================

void .idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to idaplace_t__deserialize via GOT/IAT indirection
    return idaplace_t__deserialize(/* forwarded args */);
}

