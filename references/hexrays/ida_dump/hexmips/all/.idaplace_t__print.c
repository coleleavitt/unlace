// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7E0
// Name:            .idaplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7E0 jmp     cs:off_4CDBD8
//
// Resolved target: idaplace_t__print
// Target address:  0x4D0608
// GOT/IAT slot:    0x4CDBD8
// Slot symbol:     off_4CDBD8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__print(/* see target signature */)
{
    // Tail-call to idaplace_t__print via GOT/IAT indirection
    return idaplace_t__print(/* forwarded args */);
}

