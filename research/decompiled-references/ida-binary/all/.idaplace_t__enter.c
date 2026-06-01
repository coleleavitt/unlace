// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A120
// Name:            .idaplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A120 jmp     cs:idaplace_t__enter_ptr
//
// Resolved target: idaplace_t__enter
// Target address:  0x8D8CD8
// GOT/IAT slot:    0x8A3D30
// Slot symbol:     idaplace_t__enter_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__enter(/* see target signature */)
{
    // Tail-call to idaplace_t__enter via GOT/IAT indirection
    return idaplace_t__enter(/* forwarded args */);
}

