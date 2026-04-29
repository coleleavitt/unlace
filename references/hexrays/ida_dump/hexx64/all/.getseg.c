// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDC0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDC0 jmp     cs:off_4ED6C8
//
// Resolved target: getseg
// Target address:  0x4F19D8
// GOT/IAT slot:    0x4ED6C8
// Slot symbol:     off_4ED6C8
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

