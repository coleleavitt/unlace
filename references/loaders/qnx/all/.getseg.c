// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_5048
//
// Resolved target: getseg
// Target address:  0x5160
// GOT/IAT slot:    0x5048
// Slot symbol:     off_5048
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

