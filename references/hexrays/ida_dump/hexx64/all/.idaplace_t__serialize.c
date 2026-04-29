// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C4E0
// Name:            .idaplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C4E0 jmp     cs:off_4EDA58
//
// Resolved target: idaplace_t__serialize
// Target address:  0x4F1D78
// GOT/IAT slot:    0x4EDA58
// Slot symbol:     off_4EDA58
// Target type:     <no type info>
// ============================================================

void .idaplace_t__serialize(/* see target signature */)
{
    // Tail-call to idaplace_t__serialize via GOT/IAT indirection
    return idaplace_t__serialize(/* forwarded args */);
}

