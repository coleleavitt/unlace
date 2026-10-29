// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A97D0
// Name:            .idaplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A97D0 jmp     cs:off_2C7A3D0
//
// Resolved target: idaplace_t__adjust
// Target address:  0x42A450
// GOT/IAT slot:    0x2C7A3D0
// Slot symbol:     off_2C7A3D0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to idaplace_t__adjust via GOT/IAT indirection
    return idaplace_t__adjust(/* forwarded args */);
}

