// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113420
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113420 jmp     cs:idaplace_t__name_ptr
//
// Resolved target: idaplace_t__name
// Target address:  0x8D47D8
// GOT/IAT slot:    0x8A06B0
// Slot symbol:     idaplace_t__name_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

