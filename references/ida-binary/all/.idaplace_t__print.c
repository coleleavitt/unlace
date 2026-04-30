// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118320
// Name:            .idaplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118320 jmp     cs:idaplace_t__print_ptr
//
// Resolved target: idaplace_t__print
// Target address:  0x8D7A00
// GOT/IAT slot:    0x8A2E30
// Slot symbol:     idaplace_t__print_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__print(/* see target signature */)
{
    // Tail-call to idaplace_t__print via GOT/IAT indirection
    return idaplace_t__print(/* forwarded args */);
}

