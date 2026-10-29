// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A4C0
// Name:            .hexplace_t__ea2str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A4C0 jmp     cs:hexplace_t__ea2str_ptr
//
// Resolved target: hexplace_t__ea2str
// Target address:  0x8D8F18
// GOT/IAT slot:    0x8A3F00
// Slot symbol:     hexplace_t__ea2str_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__ea2str(/* see target signature */)
{
    // Tail-call to hexplace_t__ea2str via GOT/IAT indirection
    return hexplace_t__ea2str(/* forwarded args */);
}

