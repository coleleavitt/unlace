// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3070
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3070 jmp     cs:off_28020
//
// Resolved target: unpack_dw
// Target address:  0x284D0
// GOT/IAT slot:    0x28020
// Slot symbol:     off_28020
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

