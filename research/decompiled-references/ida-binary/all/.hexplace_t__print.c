// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B4C0
// Name:            .hexplace_t__print
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B4C0 jmp     cs:hexplace_t__print_ptr
//
// Resolved target: hexplace_t__print
// Target address:  0x8D9948
// GOT/IAT slot:    0x8A4700
// Slot symbol:     hexplace_t__print_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__print(/* see target signature */)
{
    // Tail-call to hexplace_t__print via GOT/IAT indirection
    return hexplace_t__print(/* forwarded args */);
}

