// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EBE0
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EBE0 jmp     cs:off_4E9DD8
//
// Resolved target: idaplace_t__name
// Target address:  0x4EC818
// GOT/IAT slot:    0x4E9DD8
// Slot symbol:     off_4E9DD8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

