// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A340
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A340 jmp     cs:off_4BF188
//
// Resolved target: pack_dd
// Target address:  0x4C2650
// GOT/IAT slot:    0x4BF188
// Slot symbol:     off_4BF188
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

