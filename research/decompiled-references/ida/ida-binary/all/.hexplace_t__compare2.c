// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E60
// Name:            .hexplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E60 jmp     cs:hexplace_t__compare2_ptr
//
// Resolved target: hexplace_t__compare2
// Target address:  0x8D80B8
// GOT/IAT slot:    0x8A33D0
// Slot symbol:     hexplace_t__compare2_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__compare2(/* see target signature */)
{
    // Tail-call to hexplace_t__compare2 via GOT/IAT indirection
    return hexplace_t__compare2(/* forwarded args */);
}

