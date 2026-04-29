// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE00
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE00 jmp     cs:off_4BFEE8
//
// Resolved target: unpack_dq
// Target address:  0x4C3410
// GOT/IAT slot:    0x4BFEE8
// Slot symbol:     off_4BFEE8
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

