// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B100
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B100 jmp     cs:off_4BF868
//
// Resolved target: unpack_dd
// Target address:  0x4C2D60
// GOT/IAT slot:    0x4BF868
// Slot symbol:     off_4BF868
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

