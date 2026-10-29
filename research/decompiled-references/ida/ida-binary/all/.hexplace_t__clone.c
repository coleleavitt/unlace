// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B80
// Name:            .hexplace_t__clone
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B80 jmp     cs:hexplace_t__clone_ptr
//
// Resolved target: hexplace_t__clone
// Target address:  0x8D37F0
// GOT/IAT slot:    0x89FA60
// Slot symbol:     hexplace_t__clone_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__clone(/* see target signature */)
{
    // Tail-call to hexplace_t__clone via GOT/IAT indirection
    return hexplace_t__clone(/* forwarded args */);
}

