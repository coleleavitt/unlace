// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114010
// Name:            .idaplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114010 jmp     cs:idaplace_t__compare_ptr
//
// Resolved target: idaplace_t__compare
// Target address:  0x8D4F78
// GOT/IAT slot:    0x8A0CA8
// Slot symbol:     idaplace_t__compare_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare(/* see target signature */)
{
    // Tail-call to idaplace_t__compare via GOT/IAT indirection
    return idaplace_t__compare(/* forwarded args */);
}

