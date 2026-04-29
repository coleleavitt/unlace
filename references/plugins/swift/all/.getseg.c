// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43C0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43C0 jmp     cs:off_281C8
//
// Resolved target: getseg
// Target address:  0x29B60
// GOT/IAT slot:    0x281C8
// Slot symbol:     off_281C8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

