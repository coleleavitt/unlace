// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16590
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16590 jmp     cs:off_4F2B0
//
// Resolved target: getinf
// Target address:  0x50290
// GOT/IAT slot:    0x4F2B0
// Slot symbol:     off_4F2B0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

