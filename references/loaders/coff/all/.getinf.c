// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4140
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4140 jmp     cs:off_23088
//
// Resolved target: getinf
// Target address:  0x234A8
// GOT/IAT slot:    0x23088
// Slot symbol:     off_23088
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

