// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A80
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A80 jmp     cs:idaplace_t__compare2_ptr
//
// Resolved target: idaplace_t__compare2
// Target address:  0x8D6A68
// GOT/IAT slot:    0x8A21E0
// Slot symbol:     idaplace_t__compare2_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

