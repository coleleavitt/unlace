// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B950
// Name:            .hexplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B950 jmp     cs:hexplace_t__compare_ptr
//
// Resolved target: hexplace_t__compare
// Target address:  0x8D9C08
// GOT/IAT slot:    0x8A4948
// Slot symbol:     hexplace_t__compare_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__compare(/* see target signature */)
{
    // Tail-call to hexplace_t__compare via GOT/IAT indirection
    return hexplace_t__compare(/* forwarded args */);
}

