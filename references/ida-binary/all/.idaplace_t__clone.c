// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F50
// Name:            .idaplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F50 jmp     cs:idaplace_t__clone_ptr
//
// Resolved target: idaplace_t__clone
// Target address:  0x8D44B8
// GOT/IAT slot:    0x8A0448
// Slot symbol:     idaplace_t__clone_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__clone(/* see target signature */)
{
    // Tail-call to idaplace_t__clone via GOT/IAT indirection
    return idaplace_t__clone(/* forwarded args */);
}

