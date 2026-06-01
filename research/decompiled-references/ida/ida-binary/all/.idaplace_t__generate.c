// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115A60
// Name:            .idaplace_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115A60 jmp     cs:idaplace_t__generate_ptr
//
// Resolved target: idaplace_t__generate
// Target address:  0x8D6038
// GOT/IAT slot:    0x8A19D0
// Slot symbol:     idaplace_t__generate_ptr
// Target type:     <no type info>
// ============================================================

void .idaplace_t__generate(/* see target signature */)
{
    // Tail-call to idaplace_t__generate via GOT/IAT indirection
    return idaplace_t__generate(/* forwarded args */);
}

