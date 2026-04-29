// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E310
// Name:            .idaplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E310 jmp     cs:off_4E9970
//
// Resolved target: idaplace_t__leave
// Target address:  0x4EC390
// GOT/IAT slot:    0x4E9970
// Slot symbol:     off_4E9970
// Target type:     <no type info>
// ============================================================

void .idaplace_t__leave(/* see target signature */)
{
    // Tail-call to idaplace_t__leave via GOT/IAT indirection
    return idaplace_t__leave(/* forwarded args */);
}

