// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6150
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6150 jmp     cs:off_1D090
//
// Resolved target: getinf
// Target address:  0x1D580
// GOT/IAT slot:    0x1D090
// Slot symbol:     off_1D090
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

