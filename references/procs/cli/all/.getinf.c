// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3090
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3090 jmp     cs:off_1A030
//
// Resolved target: getinf
// Target address:  0x1A2E8
// GOT/IAT slot:    0x1A030
// Slot symbol:     off_1A030
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

