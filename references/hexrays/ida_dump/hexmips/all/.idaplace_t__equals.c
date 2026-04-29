// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4C0
// Name:            .idaplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4C0 jmp     cs:off_4CD248
//
// Resolved target: idaplace_t__equals
// Target address:  0x4CFC38
// GOT/IAT slot:    0x4CD248
// Slot symbol:     off_4CD248
// Target type:     <no type info>
// ============================================================

void .idaplace_t__equals(/* see target signature */)
{
    // Tail-call to idaplace_t__equals via GOT/IAT indirection
    return idaplace_t__equals(/* forwarded args */);
}

