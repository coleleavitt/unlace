// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1138F0
// Name:            .hexplace_t__prev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1138F0 jmp     cs:hexplace_t__prev_ptr
//
// Resolved target: hexplace_t__prev
// Target address:  0x8D4AE0
// GOT/IAT slot:    0x8A0918
// Slot symbol:     hexplace_t__prev_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__prev(/* see target signature */)
{
    // Tail-call to hexplace_t__prev via GOT/IAT indirection
    return hexplace_t__prev(/* forwarded args */);
}

