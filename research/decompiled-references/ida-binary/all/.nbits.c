// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116CC0
// Name:            .nbits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116CC0 jmp     cs:nbits_ptr
//
// Resolved target: nbits
// Target address:  0x8D6BE8
// GOT/IAT slot:    0x8A2300
// Slot symbol:     nbits_ptr
// Target type:     <no type info>
// ============================================================

void .nbits(/* see target signature */)
{
    // Tail-call to nbits via GOT/IAT indirection
    return nbits(/* forwarded args */);
}

