// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A0
// Name:            .unpack_xleb128
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32A0 jmp     cs:off_28138
//
// Resolved target: unpack_xleb128
// Target address:  0x285E8
// GOT/IAT slot:    0x28138
// Slot symbol:     off_28138
// Target type:     <no type info>
// ============================================================

void .unpack_xleb128(/* see target signature */)
{
    // Tail-call to unpack_xleb128 via GOT/IAT indirection
    return unpack_xleb128(/* forwarded args */);
}

