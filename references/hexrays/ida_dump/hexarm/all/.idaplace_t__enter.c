// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E990
// Name:            .idaplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E990 jmp     cs:off_4E9CB0
//
// Resolved target: idaplace_t__enter
// Target address:  0x4EC6E8
// GOT/IAT slot:    0x4E9CB0
// Slot symbol:     off_4E9CB0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__enter(/* see target signature */)
{
    // Tail-call to idaplace_t__enter via GOT/IAT indirection
    return idaplace_t__enter(/* forwarded args */);
}

