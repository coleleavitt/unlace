// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3170
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3170 jmp     cs:off_1A0A0
//
// Resolved target: getseg
// Target address:  0x1A358
// GOT/IAT slot:    0x1A0A0
// Slot symbol:     off_1A0A0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

