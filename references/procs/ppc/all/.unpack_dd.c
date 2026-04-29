// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20830
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20830 jmp     cs:off_95400
//
// Resolved target: unpack_dd
// Target address:  0x95E38
// GOT/IAT slot:    0x95400
// Slot symbol:     off_95400
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

