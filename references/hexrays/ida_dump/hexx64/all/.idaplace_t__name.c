// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CCB0
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CCB0 jmp     cs:off_4EDE40
//
// Resolved target: idaplace_t__name
// Target address:  0x4F2180
// GOT/IAT slot:    0x4EDE40
// Slot symbol:     off_4EDE40
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

