// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1D0
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1D0 jmp     cs:off_4DA0D0
//
// Resolved target: unpack_dw
// Target address:  0x4DCAA0
// GOT/IAT slot:    0x4DA0D0
// Slot symbol:     off_4DA0D0
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

