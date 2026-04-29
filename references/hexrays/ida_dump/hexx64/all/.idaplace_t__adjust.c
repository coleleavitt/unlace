// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C5C0
// Name:            .idaplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C5C0 jmp     cs:off_4EDAC8
//
// Resolved target: idaplace_t__adjust
// Target address:  0x4F1DF0
// GOT/IAT slot:    0x4EDAC8
// Slot symbol:     off_4EDAC8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to idaplace_t__adjust via GOT/IAT indirection
    return idaplace_t__adjust(/* forwarded args */);
}

