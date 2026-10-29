// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9DD0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9DD0 jmp     cs:off_2C7A6D0
//
// Resolved target: pack_dd
// Target address:  0x83B8E0
// GOT/IAT slot:    0x2C7A6D0
// Slot symbol:     off_2C7A6D0
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

