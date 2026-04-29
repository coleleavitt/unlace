// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6690
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6690 jmp     cs:off_8D330
//
// Resolved target: unpack_dq
// Target address:  0x8D8F0
// GOT/IAT slot:    0x8D330
// Slot symbol:     off_8D330
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

