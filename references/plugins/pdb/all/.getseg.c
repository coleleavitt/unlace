// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D4B0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D4B0 jmp     cs:off_B3240
//
// Resolved target: getseg
// Target address:  0xB39E0
// GOT/IAT slot:    0xB3240
// Slot symbol:     off_B3240
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

