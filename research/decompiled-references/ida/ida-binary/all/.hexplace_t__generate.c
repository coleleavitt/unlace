// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ACD0
// Name:            .hexplace_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ACD0 jmp     cs:hexplace_t__generate_ptr
//
// Resolved target: hexplace_t__generate
// Target address:  0x8D9448
// GOT/IAT slot:    0x8A4308
// Slot symbol:     hexplace_t__generate_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__generate(/* see target signature */)
{
    // Tail-call to hexplace_t__generate via GOT/IAT indirection
    return hexplace_t__generate(/* forwarded args */);
}

