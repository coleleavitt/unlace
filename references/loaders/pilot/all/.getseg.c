// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_8080
//
// Resolved target: getseg
// Target address:  0x8260
// GOT/IAT slot:    0x8080
// Slot symbol:     off_8080
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

