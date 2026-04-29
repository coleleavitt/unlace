// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_4010
//
// Resolved target: getinf
// Target address:  0x4138
// GOT/IAT slot:    0x4010
// Slot symbol:     off_4010
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

