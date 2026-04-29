// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x298B0
// Name:            .idaplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x298B0 jmp     cs:off_4B9440
//
// Resolved target: idaplace_t__copyfrom
// Target address:  0x4BBE10
// GOT/IAT slot:    0x4B9440
// Slot symbol:     off_4B9440
// Target type:     <no type info>
// ============================================================

void .idaplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to idaplace_t__copyfrom via GOT/IAT indirection
    return idaplace_t__copyfrom(/* forwarded args */);
}

