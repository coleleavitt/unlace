// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D080
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D080 jmp     cs:off_B3028
//
// Resolved target: unpack_dw
// Target address:  0xB3798
// GOT/IAT slot:    0xB3028
// Slot symbol:     off_B3028
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

