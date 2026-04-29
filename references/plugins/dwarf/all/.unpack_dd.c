// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6B0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6B0 jmp     cs:off_CA340
//
// Resolved target: unpack_dd
// Target address:  0xD0C78
// GOT/IAT slot:    0xCA340
// Slot symbol:     off_CA340
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

