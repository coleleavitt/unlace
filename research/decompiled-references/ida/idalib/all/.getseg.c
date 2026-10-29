// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7140
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7140 jmp     cs:off_2C79088
//
// Resolved target: getseg
// Target address:  0x50E210
// GOT/IAT slot:    0x2C79088
// Slot symbol:     off_2C79088
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

