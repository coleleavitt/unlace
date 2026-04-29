// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C390
// Name:            .idaplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C390 jmp     cs:off_4ED9B0
//
// Resolved target: idaplace_t__leave
// Target address:  0x4F1CD0
// GOT/IAT slot:    0x4ED9B0
// Slot symbol:     off_4ED9B0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__leave(/* see target signature */)
{
    // Tail-call to idaplace_t__leave via GOT/IAT indirection
    return idaplace_t__leave(/* forwarded args */);
}

