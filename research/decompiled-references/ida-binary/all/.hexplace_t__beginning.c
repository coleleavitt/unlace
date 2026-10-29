// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116920
// Name:            .hexplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116920 jmp     cs:hexplace_t__beginning_ptr
//
// Resolved target: hexplace_t__beginning
// Target address:  0x8D69B8
// GOT/IAT slot:    0x8A2130
// Slot symbol:     hexplace_t__beginning_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__beginning(/* see target signature */)
{
    // Tail-call to hexplace_t__beginning via GOT/IAT indirection
    return hexplace_t__beginning(/* forwarded args */);
}

