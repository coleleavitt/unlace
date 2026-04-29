// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF30
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF30 jmp     cs:off_4EDF80
//
// Resolved target: unpack_dq
// Target address:  0x4F22D0
// GOT/IAT slot:    0x4EDF80
// Slot symbol:     off_4EDF80
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

