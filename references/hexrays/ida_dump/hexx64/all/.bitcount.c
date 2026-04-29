// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D190
// Name:            .bitcount
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D190 jmp     cs:off_4EE0B0
//
// Resolved target: bitcount
// Target address:  0x4F2400
// GOT/IAT slot:    0x4EE0B0
// Slot symbol:     off_4EE0B0
// Target type:     <no type info>
// ============================================================

void .bitcount(/* see target signature */)
{
    // Tail-call to bitcount via GOT/IAT indirection
    return bitcount(/* forwarded args */);
}

