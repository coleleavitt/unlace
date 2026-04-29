// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D8C0
// Name:            .idaplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D8C0 jmp     cs:off_4E9448
//
// Resolved target: idaplace_t__copyfrom
// Target address:  0x4EBE38
// GOT/IAT slot:    0x4E9448
// Slot symbol:     off_4E9448
// Target type:     <no type info>
// ============================================================

void .idaplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to idaplace_t__copyfrom via GOT/IAT indirection
    return idaplace_t__copyfrom(/* forwarded args */);
}

