// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8090
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8090 jmp     cs:off_2A030
//
// Resolved target: unpack_dw
// Target address:  0x2A5A0
// GOT/IAT slot:    0x2A030
// Slot symbol:     off_2A030
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

