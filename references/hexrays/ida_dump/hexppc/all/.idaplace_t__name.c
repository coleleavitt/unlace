// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBA0
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBA0 jmp     cs:off_4DADB8
//
// Resolved target: idaplace_t__name
// Target address:  0x4DD7D8
// GOT/IAT slot:    0x4DADB8
// Slot symbol:     off_4DADB8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

