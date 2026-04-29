// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A590
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A590 jmp     cs:off_4BF2B0
//
// Resolved target: getinf
// Target address:  0x4C2778
// GOT/IAT slot:    0x4BF2B0
// Slot symbol:     off_4BF2B0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

