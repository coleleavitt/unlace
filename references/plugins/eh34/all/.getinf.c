// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6160
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6160 jmp     cs:off_8D098
//
// Resolved target: getinf
// Target address:  0x8D618
// GOT/IAT slot:    0x8D098
// Slot symbol:     off_8D098
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

