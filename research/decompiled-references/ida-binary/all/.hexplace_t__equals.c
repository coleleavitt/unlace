// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AEB0
// Name:            .hexplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AEB0 jmp     cs:hexplace_t__equals_ptr
//
// Resolved target: hexplace_t__equals
// Target address:  0x8D9568
// GOT/IAT slot:    0x8A43F8
// Slot symbol:     hexplace_t__equals_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__equals(/* see target signature */)
{
    // Tail-call to hexplace_t__equals via GOT/IAT indirection
    return hexplace_t__equals(/* forwarded args */);
}

