// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B140
// Name:            .idaplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B140 jmp     cs:off_4ED088
//
// Resolved target: idaplace_t__touval
// Target address:  0x4F1380
// GOT/IAT slot:    0x4ED088
// Slot symbol:     off_4ED088
// Target type:     <no type info>
// ============================================================

void .idaplace_t__touval(/* see target signature */)
{
    // Tail-call to idaplace_t__touval via GOT/IAT indirection
    return idaplace_t__touval(/* forwarded args */);
}

