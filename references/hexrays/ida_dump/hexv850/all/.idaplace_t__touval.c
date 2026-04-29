// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A140
// Name:            .idaplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A140 jmp     cs:off_4C0088
//
// Resolved target: idaplace_t__touval
// Target address:  0x4C3050
// GOT/IAT slot:    0x4C0088
// Slot symbol:     off_4C0088
// Target type:     <no type info>
// ============================================================

void .idaplace_t__touval(/* see target signature */)
{
    // Tail-call to idaplace_t__touval via GOT/IAT indirection
    return idaplace_t__touval(/* forwarded args */);
}

