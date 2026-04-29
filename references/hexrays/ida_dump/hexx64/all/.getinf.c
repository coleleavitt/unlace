// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5A0 jmp     cs:off_4ED2B8
//
// Resolved target: getinf
// Target address:  0x4F15B0
// GOT/IAT slot:    0x4ED2B8
// Slot symbol:     off_4ED2B8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

