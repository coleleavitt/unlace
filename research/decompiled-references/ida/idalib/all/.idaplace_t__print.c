// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB810
// Name:            .idaplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB810 jmp     cs:off_2C7B3F0
//
// Resolved target: idaplace_t__print
// Target address:  0x42AF60
// GOT/IAT slot:    0x2C7B3F0
// Slot symbol:     off_2C7B3F0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__print(/* see target signature */)
{
    // Tail-call to idaplace_t__print via GOT/IAT indirection
    return idaplace_t__print(/* forwarded args */);
}

