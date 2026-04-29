// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_13100
//
// Resolved target: getseg
// Target address:  0x137F0
// GOT/IAT slot:    0x13100
// Slot symbol:     off_13100
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

