// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0F0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0F0 jmp     cs:off_4B9860
//
// Resolved target: unpack_dd
// Target address:  0x4BC260
// GOT/IAT slot:    0x4B9860
// Slot symbol:     off_4B9860
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

