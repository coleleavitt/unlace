// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1133E0
// Name:            .hexplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1133E0 jmp     cs:hexplace_t__adjust_ptr
//
// Resolved target: hexplace_t__adjust
// Target address:  0x8D47B8
// GOT/IAT slot:    0x8A0690
// Slot symbol:     hexplace_t__adjust_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__adjust(/* see target signature */)
{
    // Tail-call to hexplace_t__adjust via GOT/IAT indirection
    return hexplace_t__adjust(/* forwarded args */);
}

