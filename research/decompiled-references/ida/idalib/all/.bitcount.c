// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB3A0
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB3A0 jmp     cs:off_2C7B1B8
//
// Resolved target: bitcount
// Target address:  0x826950
// GOT/IAT slot:    0x2C7B1B8
// Slot symbol:     off_2C7B1B8
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

