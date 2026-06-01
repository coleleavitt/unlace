// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA50
// Name:            .nbits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA50 jmp     cs:off_2C7AD10
//
// Resolved target: nbits
// Target address:  0x3BDA30
// GOT/IAT slot:    0x2C7AD10
// Slot symbol:     off_2C7AD10
// Target type:     <no type info>
// ============================================================

void .nbits(/* see target signature */)
{
    // Tail-call to nbits via GOT/IAT indirection
    return nbits(/* forwarded args */);
}

