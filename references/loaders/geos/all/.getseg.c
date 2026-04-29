// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_80D8
//
// Resolved target: getseg
// Target address:  0x8338
// GOT/IAT slot:    0x80D8
// Slot symbol:     off_80D8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

