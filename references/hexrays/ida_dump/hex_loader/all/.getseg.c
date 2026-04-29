// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_5088
//
// Resolved target: getseg
// Target address:  0x5258
// GOT/IAT slot:    0x5088
// Slot symbol:     off_5088
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

