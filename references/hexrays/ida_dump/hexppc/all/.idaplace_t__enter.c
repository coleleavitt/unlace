// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B950
// Name:            .idaplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B950 jmp     cs:off_4DAC90
//
// Resolved target: idaplace_t__enter
// Target address:  0x4DD6A8
// GOT/IAT slot:    0x4DAC90
// Slot symbol:     off_4DAC90
// Target type:     <no type info>
// ============================================================

void .idaplace_t__enter(/* see target signature */)
{
    // Tail-call to idaplace_t__enter via GOT/IAT indirection
    return idaplace_t__enter(/* forwarded args */);
}

