// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_4038
//
// Resolved target: getseg
// Target address:  0x4558
// GOT/IAT slot:    0x4038
// Slot symbol:     off_4038
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

