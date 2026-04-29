// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1B0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1B0 jmp     cs:off_4ED8C0
//
// Resolved target: unpack_dd
// Target address:  0x4F1BE0
// GOT/IAT slot:    0x4ED8C0
// Slot symbol:     off_4ED8C0
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

