// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A180
// Name:            .idaplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A180 jmp     cs:off_4DA0A8
//
// Resolved target: idaplace_t__clone
// Target address:  0x4DCA78
// GOT/IAT slot:    0x4DA0A8
// Slot symbol:     off_4DA0A8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__clone(/* see target signature */)
{
    // Tail-call to idaplace_t__clone via GOT/IAT indirection
    return idaplace_t__clone(/* forwarded args */);
}

