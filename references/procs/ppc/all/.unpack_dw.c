// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x200F0
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x200F0 jmp     cs:off_95060
//
// Resolved target: unpack_dw
// Target address:  0x95A90
// GOT/IAT slot:    0x95060
// Slot symbol:     off_95060
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

