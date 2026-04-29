// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F60
// Name:            .idaplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F60 jmp     cs:off_4B9798
//
// Resolved target: idaplace_t__compare
// Target address:  0x4BC190
// GOT/IAT slot:    0x4B9798
// Slot symbol:     off_4B9798
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare(/* see target signature */)
{
    // Tail-call to idaplace_t__compare via GOT/IAT indirection
    return idaplace_t__compare(/* forwarded args */);
}

