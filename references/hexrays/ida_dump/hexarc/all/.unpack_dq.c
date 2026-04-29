// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADE0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADE0 jmp     cs:off_4B9ED8
//
// Resolved target: unpack_dq
// Target address:  0x4BC908
// GOT/IAT slot:    0x4B9ED8
// Slot symbol:     off_4B9ED8
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

