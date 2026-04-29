// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE40
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EE40 jmp     cs:off_4E9F08
//
// Resolved target: unpack_dq
// Target address:  0x4EC958
// GOT/IAT slot:    0x4E9F08
// Slot symbol:     off_4E9F08
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

