// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA930
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA930 jmp     cs:off_35480
//
// Resolved target: unpack_dq
// Target address:  0x35AE8
// GOT/IAT slot:    0x35480
// Slot symbol:     off_35480
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

