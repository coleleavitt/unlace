// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_4018
//
// Resolved target: getinf
// Target address:  0x4538
// GOT/IAT slot:    0x4018
// Slot symbol:     off_4018
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

