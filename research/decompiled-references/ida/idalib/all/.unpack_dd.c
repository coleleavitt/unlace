// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD740
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD740 jmp     cs:off_2C7C388
//
// Resolved target: unpack_dd
// Target address:  0x83BB70
// GOT/IAT slot:    0x2C7C388
// Slot symbol:     off_2C7C388
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

