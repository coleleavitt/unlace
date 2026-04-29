// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B500
// Name:            .idaplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B500 jmp     cs:off_4CDA68
//
// Resolved target: idaplace_t__adjust
// Target address:  0x4D0488
// GOT/IAT slot:    0x4CDA68
// Slot symbol:     off_4CDA68
// Target type:     <no type info>
// ============================================================

void .idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to idaplace_t__adjust via GOT/IAT indirection
    return idaplace_t__adjust(/* forwarded args */);
}

