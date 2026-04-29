// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_6028
//
// Resolved target: getinf
// Target address:  0x61B0
// GOT/IAT slot:    0x6028
// Slot symbol:     off_6028
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

