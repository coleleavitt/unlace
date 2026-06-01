// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B210
// Name:            .hexplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B210 jmp     cs:hexplace_t__name_ptr
//
// Resolved target: hexplace_t__name
// Target address:  0x8D9758
// GOT/IAT slot:    0x8A45A8
// Slot symbol:     hexplace_t__name_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__name(/* see target signature */)
{
    // Tail-call to hexplace_t__name via GOT/IAT indirection
    return hexplace_t__name(/* forwarded args */);
}

