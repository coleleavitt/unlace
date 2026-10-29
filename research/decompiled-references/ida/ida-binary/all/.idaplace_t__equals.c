// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B7B0
// Name:            .idaplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B7B0 jmp     cs:idaplace_t__equals_ptr
//
// Resolved target: idaplace_t__equals
// Target address:  0x8D9B10
// GOT/IAT slot:    0x8A4878
// Slot symbol:     idaplace_t__equals_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__equals(/* see target signature */)
{
    // Tail-call to idaplace_t__equals via GOT/IAT indirection
    return idaplace_t__equals(/* forwarded args */);
}

