// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_4040
//
// Resolved target: getseg
// Target address:  0x4118
// GOT/IAT slot:    0x4040
// Slot symbol:     off_4040
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

