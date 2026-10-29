// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A99D0
// Name:            .find_unknown
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A99D0 jmp     cs:off_2C7A4D0
//
// Resolved target: find_unknown
// Target address:  0x676340
// GOT/IAT slot:    0x2C7A4D0
// Slot symbol:     off_2C7A4D0
// Target type:     <no type info>
// ============================================================

void .find_unknown(/* see target signature */)
{
    // Tail-call to find_unknown via GOT/IAT indirection
    return find_unknown(/* forwarded args */);
}

