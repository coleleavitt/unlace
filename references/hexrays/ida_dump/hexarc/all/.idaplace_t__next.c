// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29430
// Name:            .idaplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29430 jmp     cs:off_4B9200
//
// Resolved target: idaplace_t__next
// Target address:  0x4BBBD0
// GOT/IAT slot:    0x4B9200
// Slot symbol:     off_4B9200
// Target type:     <no type info>
// ============================================================

void .idaplace_t__next(/* see target signature */)
{
    // Tail-call to idaplace_t__next via GOT/IAT indirection
    return idaplace_t__next(/* forwarded args */);
}

