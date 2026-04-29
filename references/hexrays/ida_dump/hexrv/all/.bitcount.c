// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C040
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C040 jmp     cs:off_4C0008
//
// Resolved target: bitcount
// Target address:  0x4C3530
// GOT/IAT slot:    0x4C0008
// Slot symbol:     off_4C0008
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

