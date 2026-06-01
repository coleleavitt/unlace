// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD730
// Name:            .idaplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD730 jmp     cs:off_2C7C380
//
// Resolved target: idaplace_t__touval
// Target address:  0x42A7C0
// GOT/IAT slot:    0x2C7C380
// Slot symbol:     off_2C7C380
// Target type:     <no type info>
// ============================================================

void .idaplace_t__touval(/* see target signature */)
{
    // Tail-call to idaplace_t__touval via GOT/IAT indirection
    return idaplace_t__touval(/* forwarded args */);
}

