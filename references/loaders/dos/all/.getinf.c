// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_B070
//
// Resolved target: getinf
// Target address:  0xB508
// GOT/IAT slot:    0xB070
// Slot symbol:     off_B070
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

