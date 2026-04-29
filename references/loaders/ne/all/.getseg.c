// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_B0C8
//
// Resolved target: getseg
// Target address:  0xB360
// GOT/IAT slot:    0xB0C8
// Slot symbol:     off_B0C8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

