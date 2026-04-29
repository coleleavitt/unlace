// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBB0
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBB0 jmp     cs:off_4C0DC0
//
// Resolved target: idaplace_t__name
// Target address:  0x4C3DD8
// GOT/IAT slot:    0x4C0DC0
// Slot symbol:     off_4C0DC0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

