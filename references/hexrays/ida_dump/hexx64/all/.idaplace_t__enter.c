// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA40
// Name:            .idaplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA40 jmp     cs:off_4EDD08
//
// Resolved target: idaplace_t__enter
// Target address:  0x4F2040
// GOT/IAT slot:    0x4EDD08
// Slot symbol:     off_4EDD08
// Target type:     <no type info>
// ============================================================

void .idaplace_t__enter(/* see target signature */)
{
    // Tail-call to idaplace_t__enter via GOT/IAT indirection
    return idaplace_t__enter(/* forwarded args */);
}

