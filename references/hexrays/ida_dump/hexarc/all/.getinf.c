// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29590
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29590 jmp     cs:off_4B92B0
//
// Resolved target: getinf
// Target address:  0x4BBC80
// GOT/IAT slot:    0x4B92B0
// Slot symbol:     off_4B92B0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

