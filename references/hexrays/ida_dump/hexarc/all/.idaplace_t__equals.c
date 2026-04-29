// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x294C0
// Name:            .idaplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x294C0 jmp     cs:off_4B9248
//
// Resolved target: idaplace_t__equals
// Target address:  0x4BBC18
// GOT/IAT slot:    0x4B9248
// Slot symbol:     off_4B9248
// Target type:     <no type info>
// ============================================================

void .idaplace_t__equals(/* see target signature */)
{
    // Tail-call to idaplace_t__equals via GOT/IAT indirection
    return idaplace_t__equals(/* forwarded args */);
}

