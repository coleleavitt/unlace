// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_14078
//
// Resolved target: getinf
// Target address:  0x14660
// GOT/IAT slot:    0x14078
// Slot symbol:     off_14078
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

