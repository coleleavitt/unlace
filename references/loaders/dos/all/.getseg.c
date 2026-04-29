// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_B128
//
// Resolved target: getseg
// Target address:  0xB5C0
// GOT/IAT slot:    0xB128
// Slot symbol:     off_B128
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

