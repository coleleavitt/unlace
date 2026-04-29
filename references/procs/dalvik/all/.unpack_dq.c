// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54E0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54E0 jmp     cs:off_1A258
//
// Resolved target: unpack_dq
// Target address:  0x1A5F8
// GOT/IAT slot:    0x1A258
// Slot symbol:     off_1A258
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

