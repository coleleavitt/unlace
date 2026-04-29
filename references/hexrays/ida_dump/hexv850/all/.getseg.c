// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD70
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD70 jmp     cs:off_4C06A0
//
// Resolved target: getseg
// Target address:  0x4C3690
// GOT/IAT slot:    0x4C06A0
// Slot symbol:     off_4C06A0
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

