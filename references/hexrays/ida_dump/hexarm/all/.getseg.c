// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD90
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD90 jmp     cs:off_4E96B0
//
// Resolved target: getseg
// Target address:  0x4EC0C8
// GOT/IAT slot:    0x4E96B0
// Slot symbol:     off_4E96B0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

