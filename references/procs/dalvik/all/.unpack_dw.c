// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5080
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5080 jmp     cs:off_1A028
//
// Resolved target: unpack_dw
// Target address:  0x1A3A8
// GOT/IAT slot:    0x1A028
// Slot symbol:     off_1A028
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

