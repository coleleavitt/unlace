// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7DA0
// Name:            .unpack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7DA0 jmp     cs:off_2C796B8
//
// Resolved target: unpack_dw
// Target address:  0x83BAE0
// GOT/IAT slot:    0x2C796B8
// Slot symbol:     off_2C796B8
// Target type:     <no type info>
// ============================================================

void .unpack_dw(/* see target signature */)
{
    // Tail-call to unpack_dw via GOT/IAT indirection
    return unpack_dw(/* forwarded args */);
}

