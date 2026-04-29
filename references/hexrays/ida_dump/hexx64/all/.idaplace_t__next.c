// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B440
// Name:            .idaplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B440 jmp     cs:off_4ED208
//
// Resolved target: idaplace_t__next
// Target address:  0x4F1500
// GOT/IAT slot:    0x4ED208
// Slot symbol:     off_4ED208
// Target type:     <no type info>
// ============================================================

void .idaplace_t__next(/* see target signature */)
{
    // Tail-call to idaplace_t__next via GOT/IAT indirection
    return idaplace_t__next(/* forwarded args */);
}

