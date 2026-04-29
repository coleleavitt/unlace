// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32A0 jmp     cs:off_13138
//
// Resolved target: getseg
// Target address:  0x134B8
// GOT/IAT slot:    0x13138
// Slot symbol:     off_13138
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

