// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE10
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE10 jmp     cs:off_4C0EF0
//
// Resolved target: unpack_dq
// Target address:  0x4C3F18
// GOT/IAT slot:    0x4C0EF0
// Slot symbol:     off_4C0EF0
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

