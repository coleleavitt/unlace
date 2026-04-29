// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA090
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA090 jmp     cs:off_35030
//
// Resolved target: unpack_dw
// Target address:  0x35680
// GOT/IAT slot:    0x35030
// Slot symbol:     off_35030
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

