// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9DF0
// Name:            .idaplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9DF0 jmp     cs:off_2C7A6E0
//
// Resolved target: idaplace_t__copyfrom
// Target address:  0x42A800
// GOT/IAT slot:    0x2C7A6E0
// Slot symbol:     off_2C7A6E0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to idaplace_t__copyfrom via GOT/IAT indirection
    return idaplace_t__copyfrom(/* forwarded args */);
}

