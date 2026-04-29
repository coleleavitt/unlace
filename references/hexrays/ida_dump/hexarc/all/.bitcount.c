// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B020
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B020 jmp     cs:off_4B9FF8
//
// Resolved target: bitcount
// Target address:  0x4BCA28
// GOT/IAT slot:    0x4B9FF8
// Slot symbol:     off_4B9FF8
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

