// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52C0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52C0 jmp     cs:off_1A148
//
// Resolved target: unpack_dd
// Target address:  0x1A4D0
// GOT/IAT slot:    0x1A148
// Slot symbol:     off_1A148
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

