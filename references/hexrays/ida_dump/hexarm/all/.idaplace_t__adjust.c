// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E540
// Name:            .idaplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E540 jmp     cs:off_4E9A88
//
// Resolved target: idaplace_t__adjust
// Target address:  0x4EC4A8
// GOT/IAT slot:    0x4E9A88
// Slot symbol:     off_4E9A88
// Target type:     <no type info>
// ============================================================

void .idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to idaplace_t__adjust via GOT/IAT indirection
    return idaplace_t__adjust(/* forwarded args */);
}

